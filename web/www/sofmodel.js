/*
 * sofmodel.js - the original Ghoul models in the browser.
 *
 * The models are the game's own .ghb files, served straight out of pak0.pak
 * at /pak/<path in the pak>.  The reader is the shared one, web/ghb.js,
 * which the browser bundle exposes as window.sofghb; the format is
 * documented in analysis/ghb_format.md.
 *
 * The mesh is the Comp blob in block 2 of the .ghb:
 *
 *   the Comp header lives inside the model stream and is not 4 byte
 *   aligned, so it is found by a marker scan; it carries ten blob cursors
 *   that delimit ten sections:
 *
 *     MatBlocks  N x u32 (matIndex, faceGroupStart, faceGroupCount)
 *     cPos       N x vec3 float   the shared (static) positions
 *     cTex       N x vec2 float   the shared texture coordinates
 *     cNorm      N x vec3 float   the shared normals
 *     Mesh       N x {u16 A, u16 elemStart, u16 elemCount}
 *     Elem       N x u16          the topology primitive stream
 *     Corn       N x {i16 posIndex, i16 normIndex, i16 texIndex}
 *     aPos, aTex, aNorm            the animated per object data
 *
 *   The Elem stream is a sequence of primitives: a header > 0 is a
 *   triangle strip with that many vertices, a header of 0 is a triangle
 *   list whose count is the next u16, and a header < 0 is a triangle fan
 *   with -header vertices.
 *
 *   A negative index in a corner means the shared array (shared[-v - 1]);
 *   a positive one means the animated array.  The character and weapon
 *   models are animated: their positions come from the animation bit stream
 *   in the Comp subdata, which web/ghb.js decodes (decodeAnimation).
 *
 * PHASE 2 (this file): the triangle path above replaced the old 43-byte
 * "vertex record" point cloud.  What this module adds on top of it is the
 * *time* side of the decoded Ghoul model, from analysis/ghb_clip_blend.md:
 *
 *   - the clip is found by a CASE-INSENSITIVE name match
 *     (SoF.exe 0x200884A0 / 0x20075350, analysis/ghb_format.md §8.6.2);
 *   - the clip's f32 is the FRAME PERIOD in ms, so the clip plays at
 *     1000/f32 fps and lasts f32 * frameCount ms (0x2007D200, §8.3);
 *   - the frame inside the clip is (int)(frameCount * normalisedTime)
 *     and the sub-frame blend is taken from the same clock
 *     (0x2007CFA0 / 0x2007D090, §3 of ghb_clip_blend.md);
 *   - two clips are cross-faded by a 4x4 ROOT MATRIX lerp
 *     out = (A - B) * w + B (0x200A1020 / 0x20090B20, §4), and the
 *     renderer blends the two tracks' decoded vertex arrays the same way
 *     (SoF.exe 0x200B09E0, the two FUN_200B8210 calls and the component
 *     lerp at 0x200B0xxx).  There is NO per-vertex skinning (§1).
 *
 * Every one of those is implemented below; the public API is unchanged and
 * the new entry points (sampleClip, blendMatrices, createClipPlayer, ...) are
 * additive.
 */
(function () {
	"use strict";

	var models = {};       /* the loaded models, by path */
	var state = { loaded: 0, failed: 0, errors: [] };

	/* the shared reader: web/ghb.js, bundled into bundle.js */
	function GH() { return window.sofghb; }
	function parseGhoul(buf) { return GH().parseGhoul(buf); }
	function parseGeometry(buf, model) { return GH().parseGeometry(buf, model); }
	function decodeAnimation(buf, comp) { return GH().decodeAnimation(buf, comp); }

	/* the browser has no Buffer, so the little endian reads are done here */
	function rd16(b, o) { return b[o] | (b[o + 1] << 8); }

	/* --------------------------------------------------------- clip timing */
	/* The playback speed table at SoF.exe 0x20156FCC, read from the PE:
	 * 13 floats indexed by ent+0x98 (analysis/ghb_clip_blend.md §2).
	 * duration = framePeriod_ms * 0.001 * speed[ent+0x98] * globalSpeed * span
	 * (the global speed at 0x20157000 is 1.0 in the shipped engine). */
	var SPEED_TABLE = [0.5, 0.625, 0.75, 0.875, 1, 1.125, 1.25, 1.375,
		1.5, 1.625, 1.75, 1.875, 2];
	/* the module's "no blend" sentinel (analysis/ghb_format.md §8.6.1): a
	 * blend time of 9999.9 ms means use a full cross-fade straight away */
	var NO_BLEND_MS = 9999.9;

	function speedFactor(index) {
		return SPEED_TABLE[Math.max(0, Math.min(SPEED_TABLE.length - 1, index | 0))] || 1;
	}
	function clamp01(v) { return v < 0 ? 0 : v > 1 ? 1 : v; }

	/* The duration of one clip in seconds.  mode: 0 loop, 1 once,
	 * 2 ping-pong - the span multiplication is SoF.exe 0x2007D200
	 * (ghb_clip_blend.md §2):
	 *   mode 0 -> frameCount, mode 1 -> frameCount-1,
	 *   mode 2 -> 2*frameCount-1. */
	function clipDuration(clip, mode, speedIndex) {
		if (!clip || !clip.frameCount) return 0;
		var n = clip.frameCount;
		var span = mode === 2 ? (2 * n - 1) : mode === 1 ? (n - 1) : n;
		span = Math.max(1, span);
		return clip.frameMs * 0.001 * speedFactor(speedIndex) * span;
	}

	/* The per-entity normalised time - SoF.exe 0x2007D090
	 * (ghb_clip_blend.md §3).  `now` is the animation clock in seconds,
	 * `start` the clip's start time, `duration` clipDuration() above.
	 * Mode 2 (ping-pong) mirrors the fraction at its half-way point and
	 * `backwards` plays it in reverse (ent+0xA9). */
	function normalisedTime(now, start, duration, mode, backwards) {
		if (!(duration > 0)) return 0;
		var t = (now - start) / duration;
		if (mode === 1) return clamp01(backwards ? 1 - t : t); /* once */
		/* loop and ping-pong wrap; C's (int) truncates toward zero */
		var whole = Math.floor(t);
		var f = t - whole;
		if (mode === 2) {                       /* ping-pong */
			if (f >= 0.5) f = 1 - (2 * (1 - f)); else f = 2 * f;
		}
		if (backwards) f = 1 - f;
		return clamp01(f);
	}

	/* The frame selector - SoF.exe 0x2007CFA0 (ghb_clip_blend.md §3).
	 *   frame = (int)(frameCount * t)
	 *   next  = frame + 1, wrapping to 0 only in the loop mode
	 *   lerp  = (frame + 1) - frameCount * t   (0..1, the next-frame weight)
	 * The two engine decompiles disagree about the *direction* of the
	 * sub-frame weight: 0x2007CFA0 writes (frame+1) - n*t while 0x2007D090
	 * returns the running fraction n*t - floor(n*t) (FUN_200FCACA).  Both
	 * are the same clock sampled from opposite ends; the renderer at
	 * 0x200B09E0 blends `B + w*(A - B)`, so using the forward fraction for
	 * `lerp` makes frame -> next frame run in playback order.  The literal
	 * engine value is returned as `engineLerp` for callers that need it. */
	function sampleClip(clip, now, start, mode, speedIndex, backwards) {
		if (!clip || !clip.frameCount) return null;
		mode = mode || 0;
		var n = clip.frameCount;
		var dur = clipDuration(clip, mode, speedIndex);
		var t = normalisedTime(now, start, dur, mode, backwards);
		/* 0x2007CFA0 scales by frameCount in the LOOP mode and by
		 * frameCount-1 in the once / ping-pong modes */
		var scaleN = mode === 0 ? n : n - 1;
		var raw = scaleN * t;
		var frame = Math.floor(raw);
		if (frame >= n) frame = n - 1;
		if (frame < 0) frame = 0;
		var next = frame + 1;
		if (mode === 0 && next >= n) next = 0;         /* loop wraps */
		else if (next >= n) next = n - 1;              /* once/ping-pong clamp */
		var lerp = clamp01(raw - frame);               /* forward sub-frame weight */
		var engineLerp = clamp01(frame + 1 - raw);     /* the literal 0x2007CFA0 value */
		return {
			clip: clip,
			frame: clip.firstFrame + frame,
			next: clip.firstFrame + next,
			localFrame: frame,
			localNext: next,
			lerp: lerp,
			engineLerp: engineLerp,
			duration: dur,
			mode: mode
		};
	}

	/* ------------------------------------------------------ clip blending */
	/* The blend lerp - SoF.exe 0x200A1020 (ghb_clip_blend.md §4.2):
	 *   out[i] = (A[i] - B[i]) * w + B[i]      for the 16 matrix floats
	 * with the 17th dword the identity flag.  The packed variant
	 * 0x20090B20 and the cross-fade weights 0x200A7710 are the same lerp
	 * on the matrix components with the weight>=0.5 role swap; that role
	 * swap is a no-op on the result (w and 1-w with A/B exchanged), so the
	 * plain lerp is all the browser needs. */
	function blendMatrices(A, B, w) {
		var a = A || IDENTITY_M4, b = B || IDENTITY_M4;
		var identity = a[16] !== 0 && b[16] !== 0;
		var o = new Array(16);
		for (var i = 0; i < 16; i++) o[i] = (a[i] - b[i]) * w + b[i];
		o[16] = identity ? 1 : 0;
		return o;
	}
	var IDENTITY_M4 = [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1];

	/* The per-clip root matrix.  The engine's per-clip 0x44-byte matrix
	 * array (manager+0xC0, ghb_clip_blend.md §4.6) has no traced producer
	 * on the module side (§7), so the browser builds it from the only
	 * per-clip transform the .ghb does carry: clip+0x10 is a vec3 `pos`
	 * (analysis/ghb_format.md §8.2, read from the PE by FUN_20068F80).
	 * All 176 shipped character clips have pos = (0,0,0), i.e. the
	 * identity matrix, so this is exact for the shipped models and the
	 * lerp below is harmless.  Column major, like the WebGL matrices. */
	function rootMatrix(clip) {
		var p = (clip && clip.pos) || [0, 0, 0];
		var m = IDENTITY_M4.slice();
		m[12] = p[0]; m[13] = p[1]; m[14] = p[2];
		m[16] = (p[0] === 0 && p[1] === 0 && p[2] === 0) ? 1 : 0;
		return m;
	}

	/* The two-track player - the engine keeps a NEW clip (track A) and an
	 * OLD clip (track B, ent+0x94) and cross-fades between them
	 * (0x2007C0F0 / 0x200A7710, ghb_clip_blend.md §4.1 / §4.4).  The
	 * renderer decodes the two tracks with two calls to FUN_200B8210 and
	 * lerps the decoded arrays component by component (0x200B09E0);
	 * the manager separately lerps the two clip root matrices with the
	 * same weight (0x200A1020).  Both are reproduced here.
	 *
	 * This is per-entity state, so it does not disturb the single global
	 * world clock used by drawEntity()/drawModel().  Existing callers can
	 * ignore it entirely; new callers pass the sampled `frame`/`blend`
	 * to drawModel() (below). */
	function createClipPlayer(model, opts) {
		opts = opts || {};
		var p = {
			model: model,
			now: opts.now || 0,
			speedIndex: opts.speedIndex === undefined ? 4 : opts.speedIndex, /* 1.0 */
			a: null,                 /* track A: the new clip */
			b: null,                 /* track B: the old clip */
			blendStart: 0,
			blendEnd: 0,
			blendMs: 0,
			weight: 1                /* 0 = old clip, 1 = new clip */
		};
		function track(clip, now, mode) {
			return clip ? { clip: clip, start: now, mode: mode || 0 } : null;
		}
		/* Find a clip by its lower-cased name.  The engine interns names
		 * with __strcmpi (0x20075350) and resolves them with a direct
		 * table index (0x200884A0); the browser just matches strings
		 * (analysis/ghb_format.md §8.6.2). */
		p.find = function (name) {
			var clips = (this.model && this.model.clips) || [];
			var want = String(name || "").toLowerCase();
			for (var i = 0; i < clips.length; i++) {
				if (clips[i].name && clips[i].name.toLowerCase() === want) return clips[i];
			}
			return null;
		};
		/* `blendMs` is the module's blend float: 9999.9 is the "no blend"
		 * sentinel, anything else is a cross-fade time in milliseconds
		 * (analysis/ghb_format.md §8.6.1, ghb_clip_blend.md §4.5). */
		p.play = function (name, blendMs, mode, now) {
			var clip = this.find(name);
			if (!clip) return null;
			if (now !== undefined) this.now = now;
			var ms = (blendMs === undefined || blendMs === null) ? 50 : blendMs;
			if (this.a && ms > 0 && ms < NO_BLEND_MS) {
				this.b = this.a;                       /* the old clip becomes track B */
				this.blendStart = this.now;
				this.blendEnd = this.now + ms * 0.001;
				this.blendMs = ms;
				this.weight = 0;
			} else {
				this.b = null;                         /* sentinel / zero: hard switch */
				this.weight = 1;
			}
			this.a = track(clip, this.now, mode);
			return clip;
		};
		p.tick = function (dt) {
			this.now += dt;
			if (this.b && this.blendEnd > this.blendStart) {
				this.weight = clamp01((this.now - this.blendStart) /
					(this.blendEnd - this.blendStart));
				if (this.weight >= 1) this.b = null;   /* the cross-fade finished */
			} else if (this.b) {
				this.weight = 1;
				this.b = null;
			}
			return this.now;
		};
		/* The sampled frame pair and the blended root matrix for this tick. */
		p.sample = function () {
			var a = this.a ? sampleClip(this.a.clip, this.now, this.a.start,
					this.a.mode, this.speedIndex, false) : null;
			var b = this.b ? sampleClip(this.b.clip, this.now, this.b.start,
					this.b.mode, this.speedIndex, false) : null;
			if (!a && !b) return null;
			var w = this.weight;
			var fa = a ? (a.localFrame + a.lerp + a.clip.firstFrame) : 0;
			var fb = b ? (b.localFrame + b.lerp + b.clip.firstFrame) : 0;
			return {
				a: a, b: b, weight: w,
				/* derive the blended root matrix frame by frame: identity
				 * for every shipped character (all clip.pos are zero) */
				matrix: blendMatrices(rootMatrix(b && b.clip), rootMatrix(a && a.clip), w),
				/* the numbers updateFrame() consumes: A is `frame` and B
				 * is `bFrame`, with the same 0..1 cross-fade weight */
				frame: fa, bFrame: fb,
				/* a single fractional frame for the simple draw path */
				single: a ? fa : fb
			};
		};
		return p;
	}

	/* ------------------------------------------------------------ the skin */
	/* a TGA: an 18 byte header and then the pixels, 24 or 32 bits, plain or
	 * run length encoded */
	function decodeTGA(buf) {
		if (buf.length < 18) return null;
		const idLen = buf[0];
		const type = buf[2];
		const w = rd16(buf, 12), h = rd16(buf, 14);
		const bpp = buf[16];
		const desc = buf[17];
		let p = 18 + idLen;
		const bytes = bpp / 8;
		const data = new Uint8Array(w * h * 4);
		const put = (x, y, r, g, b, a) => {
			const top = (desc & 0x20) === 0;
			const yy = top ? (h - 1 - y) : y;
			const o = (yy * w + x) * 4;
			data[o] = r; data[o + 1] = g; data[o + 2] = b; data[o + 3] = a;
		};
		if (type === 2 || type === 10) {
			let x = 0, y = 0;
			if (type === 2) {
				for (let i = 0; i < w * h; i++) {
					const b = buf[p + i * bytes];
					const g = buf[p + i * bytes + 1];
					const r = buf[p + i * bytes + 2];
					const a = bytes === 4 ? buf[p + i * bytes + 3] : 255;
					put(x, y, r, g, b, a);
					x++; if (x >= w) { x = 0; y++; }
				}
			} else {
				while (x < w && y < h && p + 1 < buf.length) {
					const head = buf[p++];
					if (head === undefined) break;
					const n = (head & 0x7f) + 1;
					if (head & 0x80) {
						if (p + bytes > buf.length) break;
						const b = buf[p], g = buf[p + 1], r = buf[p + 2];
						const a = bytes === 4 ? buf[p + 3] : 255;
						p += bytes;
						for (let i = 0; i < n; i++) { put(x, y, r, g, b, a); x++; if (x >= w) { x = 0; y++; } }
					} else {
						for (let i = 0; i < n; i++) {
							if (p + bytes > buf.length) break;
							const b = buf[p], g = buf[p + 1], r = buf[p + 2];
							const a = bytes === 4 ? buf[p + 3] : 255;
							p += bytes;
							put(x, y, r, g, b, a);
							x++; if (x >= w) { x = 0; y++; }
						}
					}
				}
			}
		} else {
			return null;
		}
		return { width: w, height: h, data: data };
	}

	/* ------------------------------------------------------------ the loader */
	function pakPath(path) {
		return "/pak/" + path.replace(/\\/g, "/").replace(/^\/+/, "");
	}

	/* The skin of a model: the .tga that sits next to it in the pak.  The
	 * names do not always match exactly (ACC_BOX_HIP.GHB is skinned with
	 * ACC_BOX_HIP_BLK.TGA), so the string table of the engine is used to
	 * find the skin of a model path. */
	var skinMap = null;
	function buildSkinMap() {
		if (skinMap) return skinMap;
		skinMap = {};
		var t = window.sofmodel && window.sofmodel.stringTable;
		if (!t) return skinMap;
		var byDir = {};
		for (var i = 0; i < t.length; i++) {
			var n = t[i];
			if (typeof n !== "string" || !/\.tga$/i.test(n)) continue;
			var p = n.replace(/\\/g, "/");
			var d = p.replace(/[^/]+$/, "");
			var b = p.slice(p.lastIndexOf("/") + 1).replace(/\.tga$/i, "");
			(byDir[d] = byDir[d] || []).push(b.toUpperCase());
		}
		for (var i = 0; i < t.length; i++) {
			var n = t[i];
			if (typeof n !== "string" || !/\.ghb$/i.test(n)) continue;
			var p = n.replace(/\\/g, "/");
			var d = p.replace(/[^/]+$/, "");
			var b = p.slice(p.lastIndexOf("/") + 1).replace(/\.ghb$/i, "").toUpperCase();
			var list = byDir[d] || [];
			var pick = null;
			for (var k = 0; k < list.length; k++) {
				if (list[k] === b) { pick = list[k]; break; }
			}
			if (!pick) {
				/* the longest name that starts with the model's name */
				var best = null;
				for (var k = 0; k < list.length; k++) {
					if (list[k].indexOf(b) === 0 && (!best || list[k].length < best.length)) best = list[k];
				}
				pick = best;
			}
			if (pick) skinMap[p.toLowerCase()] = d + pick + ".TGA";
		}
		return skinMap;
	}
	function skinPathFor(modelPath) {
		var map = buildSkinMap();
		var p = modelPath.replace(/\\/g, "/").toLowerCase();
		return map[p] || null;
	}

	let glSeq = 1;
	function loadModel(path, gl) {
		/* GL objects are context-specific: a mesh built on the map canvas
		 * cannot be drawn on the viewmodel canvas. */
		if (!gl.__sofId) gl.__sofId = glSeq++;
		const key = path + "@" + gl.__sofId;
		if (models[key]) return models[key];
		var m = { path: path, gl: gl, state: "loading", vertices: null, geometry: null };
		models[key] = m;
		fetch(pakPath(path)).then(function (r) {
			if (!r.ok) throw new Error("http " + r.status);
			return r.arrayBuffer();
		}).then(function (ab) {
			const buf = new Uint8Array(ab);
			const model = parseGhoul(buf);
			const geom = parseGeometry(buf, model);
			m.model = model;
			m.geometry = geom;
			m.vertices = geom ? geom.vertices : [];
			m.triCount = geom ? geom.triCount : 0;
			m.animated = geom ? !geom.staticPositions : true;
			m.frameCount = model.frameCount;
			m.meshes = model.meshes;
			/* The header's named clips (FIRE1_A, RELOAD_A, IDLE_A, ...) are
			 * needed to pick a stable view-model pose. */
			m.clips = model.clips || [];
			/* the animation: the bit packed vertex positions */
			m.anim = geom ? decodeAnimation(buf, geom.comp) : null;
			m.animFrames = m.anim ? m.anim.frames : 0;
			/* the skin: the .tga next to the model */
			const skin = skinPathFor(path) || path.replace(/\.ghb$/i, ".tga");
			return fetch(pakPath(skin)).then(function (r) {
				return r.ok ? r.arrayBuffer() : null;
			}).catch(function () { return null; });
		}).then(function (ab) {
			if (ab) {
				const tga = decodeTGA(new Uint8Array(ab));
				if (tga) {
					m.skin = tga;
					m.texture = makeTexture(gl, tga);
				}
			}
			m.state = "ready";
			state.loaded++;
			if (m.onReady) m.onReady(m);
		}).catch(function (e) {
			m.state = "error";
			m.error = String(e.message || e);
			state.failed++;
			state.errors.push(path + ": " + m.error);
		});
		return m;
	}

	function makeTexture(gl, tga) {
		const t = gl.createTexture();
		gl.bindTexture(gl.TEXTURE_2D, t);
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, tga.width, tga.height, 0, gl.RGBA, gl.UNSIGNED_BYTE, tga.data);
		gl.generateMipmap(gl.TEXTURE_2D);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.REPEAT);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.REPEAT);
		return t;
	}

	/* ------------------------------------------------------------ the draw */
	/* The model is drawn as real triangles: the vertex buffer holds one
	 * vertex per corner (the position, the normal and the UV) and the
	 * index buffer holds the expanded triangle list of the Elem stream. */
	var VS = [
		"attribute vec3 aPos;",
		"attribute vec3 aNrm;",
		"attribute vec2 aUV;",
		"uniform mat4 uMVP;",
		"uniform float uScale;",
		"uniform float uPointSize;",
		"varying vec2 vUV;",
		"varying vec3 vNrm;",
		"void main(){",
		"  vUV = aUV;",
		"  vNrm = aNrm;",
		"  gl_Position = uMVP * vec4(aPos * uScale,1.0);",
		"  gl_PointSize = uPointSize;",
		"}"
	].join("\n");
	var FS = [
		"precision mediump float;",
		"varying vec2 vUV;",
		"varying vec3 vNrm;",
		"uniform sampler2D uTex;",
		"uniform float uTexOn;",
		"void main(){",
		"  vec3 c = vec3(0.45,0.47,0.5);",
		"  if (uTexOn > 0.5) { vec3 t = texture2D(uTex, vUV).rgb; c = max(t, vec3(0.14,0.15,0.17)); }",
		"  float l = 0.78 + 0.22 * abs(normalize(vNrm).z);",
		"  gl_FragColor = vec4(c * l, 1.0);",
		"}"
	].join("\n");

	function compile(gl, type, src) {
		const s = gl.createShader(type);
		gl.shaderSource(s, src);
		gl.compileShader(s);
		if (!gl.getShaderParameter(s, gl.COMPILE_STATUS)) throw new Error("shader: " + gl.getShaderInfoLog(s));
		return s;
	}

	/* Build the draw buffers.  A model whose corners have animated
	 * positions (the characters and the weapons) gets its positions from
	 * the animation buffer; the buffer is then refreshed every frame. */
	function buildMesh(gl, m) {
		if (m.mesh) return m.mesh;
		const g = m.geometry;
		if (!g || !g.corners.length || !g.tris.length) return null;
		/* every corner needs a position; the animated ones come from the
		 * animation, the static ones from the shared array */
		let missing = 0;
		for (const c of g.corners) {
			/* posIndex is the raw corner index: a negative one selects the
			 * shared array (already resolved into c.pos), a positive one
			 * the animated array (so the model needs an animation) */
			if (c.posIndex < 0 ? !c.pos : !m.anim) missing++;
		}
		if (missing) { m.noGeometry = "animated positions"; return null; }

		const n = g.corners.length;
		const data = new Float32Array(n * 8);
		/* the normals of the static models are the shared ones; the
		 * animated models have their normals in the animation, but those
		 * are palette indices, so the normals are rebuilt from the
		 * geometry (the face normals, accumulated per normal index) */
		const nrm = modelNormals(g, m);
		for (let i = 0; i < n; i++) {
			const c = g.corners[i];
			/* posIndex is the raw corner index: negative selects the
			 * shared array (resolved into c.pos), otherwise the position
			 * comes from the animation buffer and is refreshed every
			 * frame by updateFrame() */
			const p = c.posIndex < 0 ? c.pos : [0, 0, 0];
			let nn = nrm ? nrm[i] : (c.nrmIndex < 0 ? c.nrm : null);
			/* normals must follow the same eye-space axis swap as the
			 * vertices, or a flipped view model renders almost black */
			if (m.space === "view" && nn) nn = [nn[1], nn[0], -nn[2]];
			const uv = c.texIndex < 0 ? c.uv : null;
			/* The world models are Z up and the matrix turns them into the
			 * renderer's Y up.  View models are already in the engine's eye
			 * space.  Their barrel runs along +X (the mesh bounds prove it:
			 * X -14..25, Y -13..-0.75, Z -25..12), so the barrel has to map to
			 * the renderer's -Z (into the screen).  Keeping X = -Y puts the
			 * gun on the right of the view; only Z was reversed before, which
			 * made the gun point backwards at the camera. */
			/* View models use engine eye space.  The muzzle cluster is at
			 * +X and BELOW the slide in engine coordinates (X≈25, Z≈-18),
			 * so engine -Z is up in the renderer: +X -> -Z, +Z -> -Y.
			 * Keeping X = -Y puts the gun in the right hand. */
			let x, y, z;
			/* Ghoul view models: model Z is the barrel (the principal axis),
			 * model X is gun-up.  Rotate barrel -> view -Z and up -> view +Y. */
			if (m.space === "view") { x = p[1]; y = p[0]; z = -p[2]; }
			else { x = p[0]; y = p[1]; z = p[2]; }
			data[i * 8 + 0] = x; data[i * 8 + 1] = y; data[i * 8 + 2] = z;
			data[i * 8 + 3] = nn ? nn[0] : 0;
			data[i * 8 + 4] = nn ? nn[1] : 0;
			data[i * 8 + 5] = nn ? nn[2] : 1;
			data[i * 8 + 6] = uv ? uv[0] : 0;
			data[i * 8 + 7] = uv ? uv[1] : 0;
		}
		/* the index buffer: the expanded triangles */
		const idx = new Uint16Array(g.tris.length * 3);
		for (let i = 0; i < g.tris.length; i++) {
			idx[i * 3 + 0] = g.tris[i].i[0];
			idx[i * 3 + 1] = g.tris[i].i[1];
			idx[i * 3 + 2] = g.tris[i].i[2];
		}
		const p = gl.createProgram();
		gl.attachShader(p, compile(gl, gl.VERTEX_SHADER, VS));
		gl.attachShader(p, compile(gl, gl.FRAGMENT_SHADER, FS));
		gl.linkProgram(p);
		const vbo = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
		gl.bufferData(gl.ARRAY_BUFFER, data, m.anim ? gl.DYNAMIC_DRAW : gl.STATIC_DRAW);
		const ibo = gl.createBuffer();
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, ibo);
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, idx, gl.STATIC_DRAW);
		m.mesh = {
			program: p,
			vbo: vbo,
			ibo: ibo,
			count: idx.length,
			vertices: n,
			data: data,
			frame: -1,
			dynamic: !!m.anim,
			mvp: gl.getUniformLocation(p, "uMVP"),
			scale: gl.getUniformLocation(p, "uScale"),
			pointSize: gl.getUniformLocation(p, "uPointSize"),
			tex: gl.getUniformLocation(p, "uTex"),
			texOn: gl.getUniformLocation(p, "uTexOn"),
			pos: gl.getAttribLocation(p, "aPos"),
			nrm: gl.getAttribLocation(p, "aNrm"),
			uv: gl.getAttribLocation(p, "aUV")
		};
		return m.mesh;
	}

	/* The normals of an animated model.  The engine keeps the normals in a
	 * 256 entry palette of directions and stores a palette index per normal
	 * group, so the palette is what gives the exact normals.  Without it the
	 * normals are rebuilt from the geometry: the face normals of the
	 * triangles, accumulated per normal index and normalised.  That keeps
	 * the hard edges (a normal index is shared by the corners of one smooth
	 * group) and is what the palette holds anyway. */
	function modelNormals(g, m) {
		if (!m.anim) return null;
		const anim = m.anim;
		const nrmCount = anim.norms;
		const acc = new Float32Array(nrmCount * 3);
		const pos = anim.pos, frames = anim.frames;
		const corners = g.corners;
		for (const t of g.tris) {
			const c0 = corners[t.i[0]], c1 = corners[t.i[1]], c2 = corners[t.i[2]];
			const p = [c0, c1, c2].map((c) => (c.posIndex < 0 ? c.pos : cornerPos(c, anim, 0)));
			const ux = p[1][0] - p[0][0], uy = p[1][1] - p[0][1], uz = p[1][2] - p[0][2];
			const vx = p[2][0] - p[0][0], vy = p[2][1] - p[0][1], vz = p[2][2] - p[0][2];
			const nx = uy * vz - uz * vy, ny = uz * vx - ux * vz, nz = ux * vy - uy * vx;
			for (const c of [c0, c1, c2]) {
				if (c.nrmIndex < 0 || c.nrmIndex >= nrmCount) continue;
				acc[c.nrmIndex * 3] += nx; acc[c.nrmIndex * 3 + 1] += ny; acc[c.nrmIndex * 3 + 2] += nz;
			}
		}
		const out = new Array(corners.length);
		for (let i = 0; i < corners.length; i++) {
			const c = corners[i];
			if (c.nrmIndex < 0 || c.nrmIndex >= nrmCount) { out[i] = [0, 0, 1]; continue; }
			let x = acc[c.nrmIndex * 3], y = acc[c.nrmIndex * 3 + 1], z = acc[c.nrmIndex * 3 + 2];
			const l = Math.hypot(x, y, z);
			if (l > 1e-6) { x /= l; y /= l; z /= l; } else { x = 0; y = 0; z = 1; }
			out[i] = [x, y, z];
		}
		void frames;
		return out;
	}

	/* the position of a corner at an animation frame */
	function cornerPos(c, anim, frame) {
		if (c.posIndex < 0) return c.pos;
		const o = (c.posIndex * anim.frames + frame) * 3;
		return [anim.pos[o], anim.pos[o + 1], anim.pos[o + 2]];
	}

	/* Read one animated vertex at a FRACTIONAL frame, interpolating the
	 * two adjacent decoded frames.  This is the browser half of the
	 * engine's two-track blend: 0x200B09E0 decodes the track's frame and
	 * then lerps the two decoded arrays with `B + w*(A-B)` (the same
	 * component lerp as 0x200A1020 for the matrices). */
	function sampleVertex(anim, vi, fr, out) {
		fr = ((fr % anim.frames) + anim.frames) % anim.frames;
		const f0 = Math.floor(fr), f1 = (f0 + 1) % anim.frames, t = fr - f0;
		const o0 = (vi * anim.frames + f0) * 3;
		const o1 = (vi * anim.frames + f1) * 3;
		out[0] = anim.pos[o0] + (anim.pos[o1] - anim.pos[o0]) * t;
		out[1] = anim.pos[o0 + 1] + (anim.pos[o1 + 1] - anim.pos[o0 + 1]) * t;
		out[2] = anim.pos[o0 + 2] + (anim.pos[o1 + 2] - anim.pos[o0 + 2]) * t;
		return out;
	}

	/* The animated normal of a corner at a fractional frame.  The engine
	 * blends the 256-entry palette DIRECTIONS (FUN_200B8210 /
	 * analysis/ghb.js animatedNormal, palette at 0x20404C90), not the
	 * palette indices; sofmodel.js used to rebuild a static face normal
	 * once at load time.  Now the normals animate with the vertices. */
	/* scratch vectors: updateFrame() calls sampleNormal() once per corner
	 * per frame, so avoid two fresh arrays per call on a 1000-corner mesh */
	var NORMAL_A = [0, 0, 0], NORMAL_B = [0, 0, 0];
	function sampleNormal(anim, ni, fr, out) {
		const GH = window.sofghb;
		if (!GH || !GH.animatedNormal || ni < 0 || ni >= anim.norms) {
			out[0] = 0; out[1] = 0; out[2] = 1; return out;
		}
		fr = ((fr % anim.frames) + anim.frames) % anim.frames;
		const f0 = Math.floor(fr), f1 = (f0 + 1) % anim.frames, t = fr - f0;
		const a = GH.animatedNormal(anim, GH.NORMAL_PALETTE, ni, f0, NORMAL_A);
		const b = GH.animatedNormal(anim, GH.NORMAL_PALETTE, ni, f1, NORMAL_B);
		out[0] = a[0] + (b[0] - a[0]) * t;
		out[1] = a[1] + (b[1] - a[1]) * t;
		out[2] = a[2] + (b[2] - a[2]) * t;
		const len = Math.hypot(out[0], out[1], out[2]) || 1;
		out[0] /= len; out[1] /= len; out[2] /= len;
		return out;
	}

	/* Refresh the vertex buffer for one sample.  `frame` is a fractional
	 * frame of track A (or the only track).  `blend` is optional:
	 *   { bFrame: <fractional frame of track B>, weight: <0..1>, matrix: <16> }
	 * i.e. the two sampled tracks and the blended root matrix returned by
	 * createClipPlayer().sample().  With a single track this degenerates
	 * to the old whole-frame update, but with a fractional frame. */
	function updateFrame(gl, m, frame, blend) {
		const mesh = m.mesh, anim = m.anim;
		if (!mesh || !anim) return;
		if (typeof frame !== "number" || !isFinite(frame)) frame = 0;
		const key = blend && blend.bFrame !== undefined ?
			frame + "|" + blend.bFrame + "|" + blend.weight : "" + frame;
		if (mesh.frame === key) return;
		mesh.frame = key;
		const data = mesh.data;
		const g = m.geometry;
		const corners = g.corners;
		const nrmCount = anim.norms;
		const w = blend && blend.weight !== undefined ? clamp01(blend.weight) : 1;
		/* `frame` (the first argument) is track A; `blend.bFrame` is track B.
		 * `blend.frame` is accepted as an alias for older callers. */
		const bFrame = blend ? (blend.bFrame !== undefined ? blend.bFrame : blend.frame) : 0;
		const mat = blend && blend.matrix ? blend.matrix : null;
		/* only overwrite the load-time geometry normals when the palette
		 * decoder from web/ghb.js is actually present */
		const paletted = !!(window.sofghb && window.sofghb.animatedNormal);
		const pa = [0, 0, 0], pb = [0, 0, 0], na = [0, 0, 0], nb = [0, 0, 0];
		const two = !!(blend && blend.bFrame !== undefined && w < 1);
		for (let i = 0; i < corners.length; i++) {
			const c = corners[i];
			let px = 0, py = 0, pz = 0;
			if (c.posIndex < 0) { px = c.pos[0]; py = c.pos[1]; pz = c.pos[2]; }
			else {
				sampleVertex(anim, c.posIndex, frame, pa);
				if (two) {
					sampleVertex(anim, c.posIndex, bFrame, pb);
					px = pb[0] + (pa[0] - pb[0]) * w;
					py = pb[1] + (pa[1] - pb[1]) * w;
					pz = pb[2] + (pa[2] - pb[2]) * w;
				} else { px = pa[0]; py = pa[1]; pz = pa[2]; }
			}
			/* the blended clip root matrix (identity for shipped models) */
			if (mat) {
				const x = px, y = py, z = pz;
				px = mat[0] * x + mat[4] * y + mat[8] * z + mat[12];
				py = mat[1] * x + mat[5] * y + mat[9] * z + mat[13];
				pz = mat[2] * x + mat[6] * y + mat[10] * z + mat[14];
			}
			let x, y, z;
			if (m.space === "view") { x = py; y = px; z = -pz; }
			else { x = px; y = py; z = pz; }
			data[i * 8 + 0] = x; data[i * 8 + 1] = y; data[i * 8 + 2] = z;
			/* normals from the palette, animated per frame (static corners
			 * keep the shared normal resolved by parseGeometry) */
			if (paletted && c.nrmIndex >= 0 && c.nrmIndex < nrmCount) {
				sampleNormal(anim, c.nrmIndex, frame, na);
				let nx, ny, nz;
				if (two) {
					sampleNormal(anim, c.nrmIndex, bFrame, nb);
					nx = nb[0] + (na[0] - nb[0]) * w;
					ny = nb[1] + (na[1] - nb[1]) * w;
					nz = nb[2] + (na[2] - nb[2]) * w;
				} else {
					nx = na[0]; ny = na[1]; nz = na[2];
				}
				if (m.space === "view") { const t = nx; nx = ny; ny = t; nz = -nz; }
				data[i * 8 + 3] = nx; data[i * 8 + 4] = ny; data[i * 8 + 5] = nz;
			}
		}
		gl.bindBuffer(gl.ARRAY_BUFFER, mesh.vbo);
		gl.bufferSubData(gl.ARRAY_BUFFER, 0, data);
	}

	/* the model's extent: the Comp header carries the bounding box */
	function modelExtent(m) {
		if (!m.geometry || !m.geometry.comp) return null;
		const c = m.geometry.comp;
		const mn = c.bboxMin, mx = c.bboxMax;
		return { mn: mn, mx: mx, size: [mx[0] - mn[0], mx[1] - mn[1], mx[2] - mn[2]] };
	}
	function modelScale(m) {
		const e = modelExtent(m);
		if (!e) return 1;
		const h = Math.max(e.size[0], e.size[1], e.size[2], 1);
		return 56 / h;
	}
	/* the up axis of the model: 2 for the Z up Ghoul models */
	function modelUpAxis(m) {
		const e = modelExtent(m);
		if (!e) return 2;
		let up = 0;
		for (let i = 1; i < 3; i++) if (e.size[i] > e.size[up]) up = i;
		return up;
	}

	/* The current animation frame of the world: the models that have no
	 * animation state of their own (the world models) use this.
	 *
	 * The Ghoul clips carry their own frame rate: the clip's f32 is the
	 * FRAME PERIOD in milliseconds (SoF.exe 0x2007D200), so the clip plays
	 * at 1000/f32 frames a second - 20 fps for the 50 ms clips, 10 fps for
	 * the 100 ms ones.  playClip() selects a clip and the clock then runs
	 * at that clip's rate and wraps at its frame count. */
	var worldFrame = 0;
	var worldFps = 15;			/* the fallback when no clip is selected */
	var worldClip = null;
	function tickFrames(dt) {
		/* Keep the clock FRACTIONAL: updateFrame() now interpolates between
		 * the two adjacent decoded frames (the 0x2007CFA0 sub-frame
		 * weight), so a whole-frame clock would make the animation step
		 * at 5-20 fps.  sampleVertex() does the modulo per model. */
		if (worldClip) {
			const n = Math.max(1, worldClip.frameCount);
			worldFrame = worldClip.firstFrame +
				((worldFrame - worldClip.firstFrame) + dt * worldClip.fps) % n;
			return;
		}
		worldFrame += dt * worldFps;
	}
	/* select the clip of a model by name (the case does not matter: the
	 * .ghb clips are upper case and the .gsq entries are lower case) and
	 * make the world clock run at the clip's rate */
	function playClip(model, name) {
		if (!model || !model.clips) { worldClip = null; return null; }
		const want = String(name || "").toLowerCase();
		let clip = null;
		for (const c of model.clips) {
			if (c.name.toLowerCase() === want) { clip = c; break; }
		}
		worldClip = clip;
		if (clip) {
			worldFps = clip.fps;
			worldFrame = clip.firstFrame;
		}
		return clip;
	}

	/* Draw one model.  `frame` may be a fractional frame; the optional
	 * `blend` is a two-track sample:
	 *   { bFrame: <track B frame>, weight: <0..1>, matrix: <16 floats> }
	 * The object returned by createClipPlayer().sample() already has that
	 * shape, so `drawModel(gl, m, mvp, s, sample.frame, sample)` draws a
	 * fully blended, sub-frame-interpolated character.  All older 5-argument
	 * callers are unaffected. */
	function drawModel(gl, m, mvp, scale, frame, blend) {
		if (!m || m.state !== "ready") return false;
		const mesh = buildMesh(gl, m);
		if (!mesh) return false;
		if (mesh.dynamic) updateFrame(gl, m, frame === undefined ? worldFrame : frame, blend);
		const s = scale !== undefined ? scale : 1;
		gl.useProgram(mesh.program);
		gl.uniformMatrix4fv(mesh.mvp, false, mvp);
		gl.uniform1f(mesh.scale, s);
		if (mesh.pointSize) gl.uniform1f(mesh.pointSize, 1);
		gl.uniform1i(mesh.tex, 0);
		gl.uniform1f(mesh.texOn, m.texture ? 1 : 0);
		gl.activeTexture(gl.TEXTURE0);
		gl.bindTexture(gl.TEXTURE_2D, m.texture || null);
		/* The map/lightmap renderer leaves attribute arrays 3 and 4 enabled.
		 * WebGL rejects a draw when any enabled array is too short, so turn
		 * off everything except the three this program actually uses. */
		try {
			const maxAttr = gl.getParameter(gl.MAX_VERTEX_ATTRIBS) || 8;
			for (let a = 0; a < maxAttr; a++) {
				if (a !== mesh.pos && a !== mesh.nrm && a !== mesh.uv) gl.disableVertexAttribArray(a);
			}
		} catch (e) { }
		gl.bindBuffer(gl.ARRAY_BUFFER, mesh.vbo);
		gl.enableVertexAttribArray(mesh.pos);
		gl.vertexAttribPointer(mesh.pos, 3, gl.FLOAT, false, 32, 0);
		gl.enableVertexAttribArray(mesh.nrm);
		gl.vertexAttribPointer(mesh.nrm, 3, gl.FLOAT, false, 32, 12);
		gl.enableVertexAttribArray(mesh.uv);
		gl.vertexAttribPointer(mesh.uv, 2, gl.FLOAT, false, 32, 24);
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, mesh.ibo);
		/* Cull interior faces: without this the gun's back faces show through
		 * the front and the model looks like a pile of shards. */
		gl.enable(gl.CULL_FACE);
		gl.cullFace(gl.BACK);
		gl.drawElements(gl.TRIANGLES, mesh.count, gl.UNSIGNED_SHORT, 0);
		return true;
	}

	/* Draw the decoded corner positions as points.  The shipped INVIEW GHB's
	 * triangle topology is unreliable (it renders as black shards); the raw
	 * vertex cloud still has the weapon's silhouette. */
	function drawPoints(gl, m, mvp, scale, frame, blend, pointSize) {
		if (!m || m.state !== "ready") return false;
		const mesh = buildMesh(gl, m);
		if (!mesh) return false;
		if (mesh.dynamic) updateFrame(gl, m, frame === undefined ? worldFrame : frame, blend);
		const s = scale === undefined ? 1 : scale;
		gl.useProgram(mesh.program);
		gl.uniformMatrix4fv(mesh.mvp, false, mvp);
		gl.uniform1f(mesh.scale, s);
		if (mesh.pointSize) gl.uniform1f(mesh.pointSize, pointSize || 3);
		gl.uniform1i(mesh.tex, 0);
		gl.uniform1f(mesh.texOn, 0);
		gl.activeTexture(gl.TEXTURE0);
		gl.bindBuffer(gl.ARRAY_BUFFER, mesh.vbo);
		gl.enableVertexAttribArray(mesh.pos);
		gl.vertexAttribPointer(mesh.pos, 3, gl.FLOAT, false, 32, 0);
		gl.enableVertexAttribArray(mesh.nrm);
		gl.vertexAttribPointer(mesh.nrm, 3, gl.FLOAT, false, 32, 12);
		gl.enableVertexAttribArray(mesh.uv);
		gl.vertexAttribPointer(mesh.uv, 2, gl.FLOAT, false, 32, 24);
		gl.drawArrays(gl.POINTS, 0, mesh.vertices);
		return true;
	}

	/* ------------------------------------------------------------- the state */
	/* the model of an entity: the state at 0x28 holds a string table index
	 * (the engine's global string table, web/sofstringtable.json) */
	function entityModelName(entity) {
		try {
			if (!entity || !entity.state) return null;
			const v = entity.state.readUInt32LE ? entity.state.readUInt32LE(0x28) : entity.state[0x28];
			const t = window.sofmodel.stringTable;
			return (t && t[v]) ? t[v] : null;
		} catch (e) { return null; }
	}

	/* ------------------------------------------------------------ matrices */
	/* the column major 4x4 matrices of WebGL */
	function m4identity() { return [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1]; }
	function m4mul(a, b) {
		const o = new Array(16);
		for (let c = 0; c < 4; c++) for (let r = 0; r < 4; r++) {
			let s = 0;
			for (let k = 0; k < 4; k++) s += a[k * 4 + r] * b[c * 4 + k];
			o[c * 4 + r] = s;
		}
		return o;
	}
	function m4translate(x, y, z) { const m = m4identity(); m[12] = x; m[13] = y; m[14] = z; return m; }
	function m4scale(s) { const m = m4identity(); m[0] = m[5] = m[10] = s; return m; }
	function m4rotY(a) {
		const m = m4identity(), c = Math.cos(a), s = Math.sin(a);
		m[0] = c; m[2] = -s; m[8] = s; m[10] = c;
		return m;
	}
	/* the Z up to Y up rotation: (x, y, z) becomes (x, z, -y) */
	function m4rotX(a) {
		const m = m4identity(), c = Math.cos(a), s = Math.sin(a);
		m[5] = c; m[6] = s; m[9] = -s; m[10] = c;
		return m;
	}

	/* ------------------------------------------------------------ the draw */
	/* the model of an entity: the state at 0x28 is the model index.  The
	 * Ghoul character models live in the string table of the svc 0x1A
	 * datagram (the Ghoul table of the engine); the ordinary models live in
	 * the config strings (CS_MODELS + the index). */
	function entityModelPath(entity) {
		try {
			if (!entity || !entity.state) return null;
			/* the entity state is a Buffer: +0x28 is a 32-bit model index,
			 * not a byte.  Reading state[0x28] used to make every model
			 * lookup fail, which is why no character ever rendered. */
			const idx = entity.state.readUInt32LE ? entity.state.readUInt32LE(0x28) : entity.state[0x28];
			const m = window.sofmodel;
			/* The real Ghoul model path is carried by the svc 0x1A (svc_ghoulreliable)
			 * spawn records: group 1 of the record names the model's main .GHL
			 * script and the .ghb mesh is named after it.  web/ghbhuff.js decodes
			 * the payload into an entity -> .ghb map (app.js publishes it here).
			 * Try the entity number first, then the state's model index. */
			if (m.ghoulModels) {
				const byNum = m.ghoulModels[entity.number];
				if (byNum && byNum.path && /\.ghb$/i.test(byNum.path)) return byNum.path;
				const byIdx = m.ghoulModels[idx];
				if (byIdx && byIdx.path && /\.ghb$/i.test(byIdx.path)) return byIdx.path;
			}
			/* the Ghoul table: the index names the model directly */
			if (m.ghoulStrings) {
				const n = m.ghoulStrings[idx];
				if (n && /\.ghb$/i.test(n)) return n.replace(/\\/g, "/");
			}
			/* the config strings: CS_MODELS is 32 */
			const st = window.sofstate;
			if (st && st.cs) {
				const cs = st.cs[32 + idx];
				if (typeof cs === "string" && /\.ghb$/i.test(cs)) return cs.replace(/\\/g, "/");
				if (typeof cs === "number" && m.stringTable && m.stringTable[cs] &&
					/\.ghb$/i.test(m.stringTable[cs])) return m.stringTable[cs].replace(/\\/g, "/");
			}
			/* the engine's global string table */
			const t = m.stringTable;
			if (t && t[idx] && /\.ghb$/i.test(t[idx])) return t[idx].replace(/\\/g, "/");
			return null;
		} catch (e) { return null; }
	}

	/* the WebGL context of the page: the canvas of the client */
	function sofmodelContext() {
		try {
			const c = document.querySelector("canvas");
			if (!c) return null;
			return c.getContext("webgl") || c.getContext("experimental-webgl") || null;
		} catch (e) { return null; }
	}

	/* draw the model of an entity: the entity is e (with e.state), the
	 * camera matrix is mvp and the origin of the entity is o (x, y, z and
	 * yaw in degrees).  It returns true when a model was drawn. */
	function drawEntity(e, mvp, o, sample) {
		try {
			if (!e) return false;
			const path = entityModelPath(e);
			if (!path) return false;
			const gl = (window.sofgl && window.sofgl.gl) || (window.sofglgl) ||
				(window.sofstate && window.sofstate.gl) || sofmodelContext();
			if (!gl) return false;
			let m = models[path];
			if (!m) {
				m = loadModel(path, gl);
				return false;
			}
			if (m.state !== "ready") return false;
			const o2 = o || {};
			const yaw = ((o2.yaw || 0) * Math.PI) / 180;
			const s = modelScale(m);
			const up = modelUpAxis(m);
			/* the model is Z up, the world is Y up */
			let local = m4translate(o2.x || 0, o2.y || 0, o2.z || 0);
			local = m4mul(local, m4rotY(yaw));
			if (up === 2) local = m4mul(local, m4rotX(-Math.PI / 2));
			local = m4mul(local, m4scale(s));
			const view = mvp ? m4mul(mvp, local) : local;
			/* an optional two-track sample from createClipPlayer() gives this
			 * entity its own animation clock and cross-fade */
			return drawModel(gl, m, view, 1,
				sample ? sample.frame : o2.frame, sample || undefined);
		} catch (e) { return false; }
	}

	window.sofmodel = {
		models: models,
		state: state,
		load: loadModel,
		drawModel: drawModel,
		drawPoints: drawPoints,
		drawEntity: drawEntity,
		/* the loaded model of an entity, so a caller can attach a per-entity
		 * clip player before drawing it */
		modelForEntity: function (e) {
			const path = entityModelPath(e);
			return path ? models[path] : null;
		},
		entityModelPath: entityModelPath,
		modelScale: modelScale,
		modelExtent: modelExtent,
		modelUpAxis: modelUpAxis,
		/* the animation clock of the world models: tickFrames(dt) advances
		 * it and worldFrame() gives the current frame */
		tickFrames: tickFrames,
		worldFrame: function () { return worldFrame; },
		/* the clip driven clock: playClip(model, name) picks the clip (the
		 * frame rate comes from the clip's own frame period) */
		playClip: playClip,
		worldClip: function () { return worldClip; },
		setWorldFps: function (f) { worldFps = f; worldClip = null; },
		/* -------------------------------------------------- PHASE 2 (new) */
		/* the decoded clip timing / blending, from analysis/ghb_clip_blend.md.
		 * `sampleClip(clip, now, start, mode, speedIndex, backwards)` gives
		 * the frame / next / sub-frame lerp (0x2007CFA0 + 0x2007D090);
		 * `blendMatrices(A, B, w)` is the 0x200A1020 component lerp;
		 * `createClipPlayer(model, opts)` is a per-entity two-track player
		 * whose sample() is accepted directly by drawModel():
		 *
		 *   var player = sofmodel.createClipPlayer(m);
		 *   player.play("STD_ISTAND_N_A_N", 50);   // 50 ms cross-fade
		 *   player.tick(dt);
		 *   var s = player.sample();
		 *   sofmodel.drawModel(gl, m, mvp, scale, s.frame, s);
		 *
		 * All the old entry points above are unchanged. */
		clipDuration: clipDuration,
		normalisedTime: normalisedTime,
		sampleClip: sampleClip,
		blendMatrices: blendMatrices,
		rootMatrix: rootMatrix,
		createClipPlayer: createClipPlayer,
		/* drive a player from the decoded Ghoul VM state table: the module
		 * sends a (state code, blend ms, clip name) triple
		 * (analysis/ghb_format.md §8.6.1, web/www/ghoulstates.json). */
		playStateClip: function (player, stateCode, now) {
			if (!player) return null;
			const e = this.ghoulClipFor(stateCode);
			if (!e || !e.clip) return null;
			const ms = (e.blend === null || e.blend === undefined) ? 50 : e.blend;
			return player.play(e.clip, ms, 0, now);
		},
		sampleVertex: sampleVertex,
		sampleNormal: sampleNormal,
		SPEED_TABLE: SPEED_TABLE,
		NO_BLEND_MS: NO_BLEND_MS,
		/* the Ghoul string table of the svc 0x1A datagram: the index of the
		 * model of an entity to the name of its model.
		 *
		 * The datagram never carries raw strings: it carries indices into
		 * the GLOBAL table at SoF.exe 0x2013ADF8 (3713 entries, dumped to
		 * ghoulstrings.json by analysis/ghb_global_strings.py).  That table
		 * is READ-ONLY at run time - a string that is not in it is written
		 * INLINE, Huffman-compressed, instead (the code table is extracted
		 * by analysis/ghoul_huffman.py).  So the strings it does not know
		 * do NOT get appended to the global table. */
		ghoulStrings: null,
		/* the entity -> .ghb path map decoded from svc 0x1A by web/ghbhuff.js
		 * and published by app.js; see entityModelPath() */
		ghoulModels: null,
		loadGhoulStrings: function () {
			if (this.ghoulStrings) return Promise.resolve(this.ghoulStrings);
			return fetch("ghoulstrings.json").then(function (r) { return r.json(); }).then(function (j) {
				window.sofmodel.ghoulStrings = j.names || j;
				return window.sofmodel.ghoulStrings;
			}).catch(function () { return null; });
		},
		/* The animation state table of the Ghoul script: the opcode ->
		 * (the state code, the blend in ms, the clip name).
		 *
		 * It is the switch of the game's bytecode interpreter
		 * (gamex86.dll 0x5007EC40), extracted by
		 * analysis/ghoul_vm_opcodes.py into web/www/ghoulstates.json.
		 * The clip names are upper case, like the .ghb clips. */
		ghoulStates: null,
		loadGhoulStates: function () {
			if (this.ghoulStates) return Promise.resolve(this.ghoulStates);
			return fetch("ghoulstates.json").then(function (r) { return r.json(); }).then(function (j) {
				window.sofmodel.ghoulStates = j;
				return window.sofmodel.ghoulStates;
			}).catch(function () { return null; });
		},
		/* the clip of an animation state code (or null): the table is
		 * keyed by the opcode, and the state code is the first field */
		ghoulClipFor: function (stateCode) {
			const t = this.ghoulStates;
			if (!t) return null;
			for (const k in t) {
				if (t[k].state === stateCode && t[k].clip) return t[k];
			}
			return null;
		},
		parseGhoul: parseGhoul,
		parseGeometry: parseGeometry,
		decodeTGA: decodeTGA,
		makeTexture: makeTexture,
		/* the engine's string table: a config string value is the index of
		 * the model's name in it */
		stringTable: null,
		loadStringTable: function () {
			if (this.stringTable) return Promise.resolve(this.stringTable);
			return fetch("sofstringtable.json").then(function (r) { return r.json(); }).then(function (j) {
				window.sofmodel.stringTable = j.names || j;
				return window.sofmodel.stringTable;
			}).catch(function () { return null; });
		},
		/* the pak path of the model a config string value names */
		modelPath: function (cs) {
			const t = this.stringTable;
			if (!t) return null;
			const name = t[cs];
			if (!name || !/\.ghb$/i.test(name)) return null;
			return name.replace(/\\/g, "/");
		},
		/* the config string that names a model matching the pattern */
		findModel: function (pattern) {
			const st = window.sofstate;
			const t = this.stringTable;
			if (!st || !t) return null;
			const re = pattern instanceof RegExp ? pattern : new RegExp(pattern, "i");
			for (const k in st.cs) {
				const v = st.cs[k];
				const name = (typeof v === "string") ? v : t[v];
				if (name && re.test(name) && /\.ghb$/i.test(name)) return name.replace(/\\/g, "/");
			}
			return null;
		},
		/* the model of an entity: the name at the state's 0x28, or the
		 * config string that names it */
		entityModel: function (entity) {
			const name = entityModelName(entity);
			if (name && /\.ghb$/i.test(name)) return name.replace(/\\/g, "/");
			return null;
		},
		/* the skin files of the pak that match the pattern */
		skinPath: function (pattern) {
			const t = this.stringTable;
			if (!t) return null;
			const re = pattern instanceof RegExp ? pattern : new RegExp(pattern, "i");
			for (let i = 0; i < t.length; i++) {
				if (t[i] && /\.tga$/i.test(t[i]) && re.test(t[i])) return t[i].replace(/\\/g, "/");
			}
			return null;
		}
	};
})();
