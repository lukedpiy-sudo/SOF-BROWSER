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

	function loadModel(path, gl) {
		if (models[path]) return models[path];
		var m = { path: path, state: "loading", vertices: null, geometry: null };
		models[path] = m;
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
		"varying vec2 vUV;",
		"varying vec3 vNrm;",
		"void main(){",
		"  vUV = aUV;",
		"  vNrm = aNrm;",
		"  gl_Position = uMVP * vec4(aPos * uScale,1.0);",
		"}"
	].join("\n");
	var FS = [
		"precision mediump float;",
		"varying vec2 vUV;",
		"varying vec3 vNrm;",
		"uniform sampler2D uTex;",
		"uniform float uTexOn;",
		"void main(){",
		"  vec3 c = vec3(0.7,0.7,0.7);",
		"  if (uTexOn > 0.5) c = texture2D(uTex, vUV).rgb;",
		"  float l = 0.55 + 0.45 * abs(normalize(vNrm).z);",
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
			const nn = nrm ? nrm[i] : (c.nrmIndex < 0 ? c.nrm : null);
			const uv = c.texIndex < 0 ? c.uv : null;
			/* the world models are Z up and the matrix turns them into the
			 * renderer's Y up; the view models are already in the engine's
			 * eye space (the forward -X, the up +Z, the right +Y), which
			 * the renderer takes as (-y, z, x) */
			let x, y, z;
			if (m.space === "view") { x = -p[1]; y = p[2]; z = p[0]; }
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

	/* Refresh the positions of an animated model for one frame. */
	function updateFrame(gl, m, frame) {
		const mesh = m.mesh, anim = m.anim;
		if (!mesh || !anim) return;
		let fr = frame | 0;
		fr %= anim.frames;
		if (fr < 0) fr += anim.frames;
		if (mesh.frame === fr) return;
		mesh.frame = fr;
		const data = mesh.data;
		const g = m.geometry;
		const corners = g.corners;
		for (let i = 0; i < corners.length; i++) {
			const c = corners[i];
			let p;
			if (c.posIndex < 0) p = c.pos;
			else {
				const o = (c.posIndex * anim.frames + fr) * 3;
				p = [anim.pos[o], anim.pos[o + 1], anim.pos[o + 2]];
			}
			let x, y, z;
			if (m.space === "view") { x = -p[1]; y = p[2]; z = p[0]; }
			else { x = p[0]; y = p[1]; z = p[2]; }
			data[i * 8 + 0] = x; data[i * 8 + 1] = y; data[i * 8 + 2] = z;
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

	/* the current animation frame of the world: the models that have no
	 * animation state of their own (the world models) use this */
	var worldFrame = 0;
	function tickFrames(dt) {
		/* the animation of the Ghoul models runs at about 15 frames a
		 * second, the walk cycle of the characters is 8 frames long */
		worldFrame = (worldFrame + dt * 15) | 0;
	}

	function drawModel(gl, m, mvp, scale, frame) {
		if (!m || m.state !== "ready") return false;
		const mesh = buildMesh(gl, m);
		if (!mesh) return false;
		if (mesh.dynamic) updateFrame(gl, m, frame === undefined ? worldFrame : frame);
		const s = scale !== undefined ? scale : 1;
		gl.useProgram(mesh.program);
		gl.uniformMatrix4fv(mesh.mvp, false, mvp);
		gl.uniform1f(mesh.scale, s);
		gl.uniform1i(mesh.tex, 0);
		gl.uniform1f(mesh.texOn, m.texture ? 1 : 0);
		gl.activeTexture(gl.TEXTURE0);
		gl.bindTexture(gl.TEXTURE_2D, m.texture || null);
		gl.bindBuffer(gl.ARRAY_BUFFER, mesh.vbo);
		gl.enableVertexAttribArray(mesh.pos);
		gl.vertexAttribPointer(mesh.pos, 3, gl.FLOAT, false, 32, 0);
		gl.enableVertexAttribArray(mesh.nrm);
		gl.vertexAttribPointer(mesh.nrm, 3, gl.FLOAT, false, 32, 12);
		gl.enableVertexAttribArray(mesh.uv);
		gl.vertexAttribPointer(mesh.uv, 2, gl.FLOAT, false, 32, 24);
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, mesh.ibo);
		gl.drawElements(gl.TRIANGLES, mesh.count, gl.UNSIGNED_SHORT, 0);
		return true;
	}

	/* ------------------------------------------------------------- the state */
	/* the model of an entity: the state at 0x28 holds a string table index
	 * (the engine's global string table, web/sofstringtable.json) */
	function entityModelName(entity) {
		try {
			if (!entity || !entity.state) return null;
			const v = entity.state[0x28];
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
			const idx = entity.state[0x28];
			const m = window.sofmodel;
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
	function drawEntity(e, mvp, o) {
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
			return drawModel(gl, m, view, 1, o2.frame);
		} catch (e) { return false; }
	}

	window.sofmodel = {
		models: models,
		state: state,
		load: loadModel,
		drawModel: drawModel,
		drawEntity: drawEntity,
		entityModelPath: entityModelPath,
		modelScale: modelScale,
		modelExtent: modelExtent,
		modelUpAxis: modelUpAxis,
		/* the animation clock of the world models: tickFrames(dt) advances
		 * it and worldFrame() gives the current frame */
		tickFrames: tickFrames,
		worldFrame: function () { return worldFrame; },
		/* the Ghoul string table of the svc 0x1A datagram: the index of the
		 * model of an entity to the name of its model */
		ghoulStrings: null,
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
