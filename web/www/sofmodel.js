/*
 * sofmodel.js - the original Ghoul models in the browser.
 *
 * The models are the game's own .ghb files, served straight out of pak0.pak
 * at /pak/<path in the pak>.  This file reads a model, extracts its vertex
 * data and draws it.
 *
 * The layout of the geometry (proved on the shipped models, see
 * web/ghb.js and analysis/PROTOCOL.md):
 *
 *   the container:  u32 magic, u32 the file offset of block 2, u32 its size
 *   the model stream starts at 0x0C and holds the clips, the meshes, the
 *   objects (the bolts and the bones) and the skeleton
 *   the block 1 tail (between the end of the model stream and block 2):
 *     +0x00  u32  the size of the vertex buffer
 *     +0x04  u32  the size of the animation data (the frames x 256)
 *     +0x20  the index table: the vertex indices shifted left by 8 bits,
 *            each one repeated once per face that uses it
 *     ...    21 bytes of sub mesh data
 *     ...    the vertex records, 43 bytes each:
 *              +0x00  3 floats  the UV coordinates
 *              +0x0C  3 floats  the position
 *              +0x18  19 bytes  the packed attributes (the bone indices,
 *                             the valence and the offsets)
 *
 * The triangle topology is not decoded yet, so the model is drawn as its
 * vertices (one point per vertex, coloured with the skin).  When the
 * topology is known the same buffers draw the real triangles.
 */
(function () {
	"use strict";

	var models = {};       /* the loaded models, by path */
	var state = { loaded: 0, failed: 0, errors: [] };

	/* ------------------------------------------------------------- the reader */
	/* the browser has no Buffer, so the little endian reads are done here */
	function rd32(b, o) {
		return (b[o] | (b[o + 1] << 8) | (b[o + 2] << 16) | (b[o + 3] << 24)) >>> 0;
	}
	function rdf(b, o) {
		return new Float32Array(new Uint32Array([rd32(b, o)]).buffer)[0];
	}
	function rd16(b, o) { return b[o] | (b[o + 1] << 8); }

	function Reader(buf, off) { this.b = buf; this.p = off || 0; }
	Reader.prototype.u8 = function () { return this.b[this.p++]; };
	Reader.prototype.u32 = function () { const v = rd32(this.b, this.p); this.p += 4; return v; };
	Reader.prototype.i32 = function () { const v = rd32(this.b, this.p) | 0; this.p += 4; return v; };
	Reader.prototype.f32 = function () { const v = rdf(this.b, this.p); this.p += 4; return v; };
	Reader.prototype.vec3 = function () { return [this.f32(), this.f32(), this.f32()]; };
	Reader.prototype.str = function () {
		/* a TypedArray's toString takes no arguments, so the bytes are
		 * decoded by hand */
		const n = this.u32();
		let s = "";
		for (let i = 0; i < n; i++) s += String.fromCharCode(this.b[this.p + i]);
		this.p += n;
		return s;
	};
	Reader.prototype.bool = function () { return this.u8() === 1; };

	function readBBox(r) {
		return { a: r.bool(), b: r.bool(), min: r.vec3(), max: r.vec3() };
	}
	function readTexBitmap(r) {
		if (!r.bool()) {
			const n = r.u32();
			r.p += ((n + 31) >> 5) * 4;
			return { kind: "inline", count: n };
		}
		r.bool();
		return { kind: "external" };
	}
	function readObjectE8(r) {
		const o = {};
		o.name = r.str();
		o.name2 = r.str();
		o.tex = readTexBitmap(r);
		o.flags = [r.bool(), r.bool(), r.bool()];
		o.bbox = readBBox(r);
		o.mode = r.i32();
		if (o.mode !== 0) {
			o.v1 = r.vec3(); o.v2 = r.vec3(); o.v3 = r.vec3();
			o.block2Offset = r.u32();
		} else {
			const flag = r.bool();
			if (!flag) { const n = r.i32(); r.p += n * 0x44; } else { r.p += 0x44; }
		}
		return o;
	}
	function readObject108(r) {
		const o = readObjectE8(r);
		o.extra = readBBox(r);
		return o;
	}
	function readArray(r, elemSize) {
		if (r.bool()) { r.p += elemSize; return { kind: "external" }; }
		const n = r.i32();
		r.p += n * elemSize;
		return { kind: "inline", count: n };
	}
	function readMesh(r) {
		const m = {};
		m.name = r.str();
		m.flags = [r.bool(), r.bool()];
		m.i32 = [r.i32(), r.i32()];
		m.submeshes = [];
		for (let i = 0; i < 2; i++) {
			const s = {};
			s.name = r.str();
			s.name2 = r.str();
			s.flags = [r.bool(), r.bool(), r.bool(), r.bool()];
			s.verts = readArray(r, 1);
			s.faces = readArray(r, 0x44);
			s.flag = r.bool();
			m.submeshes.push(s);
		}
		m.vec3a = readArray(r, 0x0C);
		m.vec3b = readArray(r, 0x0C);
		m.u32 = [readArray(r, 4), readArray(r, 4), readArray(r, 4), readArray(r, 4)];
		return m;
	}

	/* the model stream */
	function parseGhoul(buf) {
		if (buf.length < 12) throw new Error("too short");
		const magic = rd32(buf, 0);
		if (magic !== 0x198237FE) throw new Error("bad container magic");
		const out = {
			block2Offset: rd32(buf, 4),
			block2Size: rd32(buf, 8),
			fileSize: buf.length
		};
		const r = new Reader(buf, 0x0C);
		out.magic = r.u32();
		out.version = r.u32();
		out.thunk = r.u32();
		out.path = r.str();
		out.frameCount = r.i32();
		const nclip = r.i32();
		out.clips = [];
		for (let i = 0; i < nclip; i++) {
			const c = {};
			c.pos = r.vec3();
			c.scale = r.f32();
			c.name = r.str();
			const n = r.i32();
			c.events = [];
			for (let k = 0; k < n; k++) c.events.push({ value: r.i32(), index: r.i32(), name: r.str(), param: r.str() });
			c.tail = [r.i32(), r.i32()];
			out.clips.push(c);
		}
		const nmesh = r.i32();
		out.meshes = [];
		for (let i = 0; i < nmesh; i++) out.meshes.push(readMesh(r));
		out.bbox = readBBox(r);
		r.u32();
		let n = r.i32();
		if (n < 0 || n > 100000) n = 0;
		out.objA = [];
		for (let i = 0; i < n; i++) out.objA.push(readObjectE8(r));
		r.u32();
		n = r.i32();
		if (n < 0 || n > 100000) n = 0;
		out.objB = [];
		for (let i = 0; i < n; i++) out.objB.push(readObjectE8(r));
		r.u32();
		n = r.i32();
		if (n < 0 || n > 100000) n = 0;
		out.objC = [];
		for (let i = 0; i < n; i++) out.objC.push(readObject108(r));
		const v4 = r.i32();
		if (v4 === -1) { r.i32(); r.i32(); } else { /* the id */ }
		for (let i = 0; i < 21; i++) r.i32();
		readBBox(r);
		r.vec3(); r.vec3(); r.vec3(); r.vec3();
		out.end = r.p;
		return out;
	}

	/* the geometry: the block 1 tail */
	function parseGeometry(buf, model) {
		const t = model.end, end = model.block2Offset;
		if (end <= t) return null;
		const g = {
			vertexBufferSize: rd32(buf, t),
			animationSize: rd32(buf, t + 4),
			indexTable: [], vertices: []
		};
		let p = t + 0x20, last = -1, run = 0;
		const maxIndex = Math.floor((end - t) / 43) + 1;
		while (p + 4 <= end) {
			const v = rd32(buf, p);
			if (v % 256 !== 0 || v < last || run > 16 || v >= maxIndex * 256) break;
			if (v === last) run++; else { run = 1; last = v; }
			g.indexTable.push(v >>> 8);
			p += 4;
		}
		const start = p + 21;
		let n = 0;
		for (const v of g.indexTable) if (v + 1 > n) n = v + 1;
		g.vertexCount = n;
		for (let i = 0; i < n && start + i * 43 + 43 <= end; i++) {
			const o = start + i * 43;
			const a = buf.subarray(o, o + 43);
			g.vertices.push({
				uv: [rdf(a, 0), rdf(a, 4), rdf(a, 8)],
				position: [rdf(a, 12), rdf(a, 16), rdf(a, 20)],
				bones: [a[24], a[25], a[26]],
				valence: a[39],
				/* the two 16 bit offsets into block 2 and the corner index */
				offsetA: a[27] | (a[28] << 8),
				offsetB: a[31] | (a[32] << 8),
				mesh: a[29],
				corner: a[35]
			});
		}
		g.cornerCount = g.indexTable.length;
		return g;
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
			m.frameCount = model.frameCount;
			m.meshes = model.meshes;
			/* the skin: the .tga next to the model */
			const skin = path.replace(/\.ghb$/i, ".tga");
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
	/* the model is drawn as its vertices: the triangle topology of the Ghoul
	 * format is not decoded yet, so the draw buffers hold the positions and
	 * the UVs and the skin colours the points. */
	var VS = [
		"attribute vec3 aPos;",
		"attribute vec2 aUV;",
		"uniform mat4 uMVP;",
		"uniform float uSize;",
		"uniform float uScale;",
		"varying vec2 vUV;",
		"void main(){",
		"  vUV = aUV;",
		"  gl_Position = uMVP * vec4(aPos * uScale,1.0);",
		"  gl_PointSize = uSize;",
		"}"
	].join("\n");
	var FS = [
		"precision mediump float;",
		"varying vec2 vUV;",
		"uniform sampler2D uTex;",
		"uniform float uTexOn;",
		"void main(){",
		"  vec3 c = vec3(0.7,0.7,0.7);",
		"  if (uTexOn > 0.5) c = texture2D(uTex, vUV).rgb;",
		"  gl_FragColor = vec4(c, 1.0);",
		"}"
	].join("\n");

	function compile(gl, type, src) {
		const s = gl.createShader(type);
		gl.shaderSource(s, src);
		gl.compileShader(s);
		if (!gl.getShaderParameter(s, gl.COMPILE_STATUS)) throw new Error("shader: " + gl.getShaderInfoLog(s));
		return s;
	}

	function buildMesh(gl, m) {
		if (m.mesh) return m.mesh;
		const n = (m.vertices || []).length;
		const data = new Float32Array(n * 5);
		for (let i = 0; i < n; i++) {
			const v = m.vertices[i];
			/* the world models are Z up, the renderer is Y up; the view
			 * models are in the engine's eye space (the forward -X, the up
			 * +Z, the right +Y), which the renderer takes as
			 * (-y, z, x) */
			if (m.space === "view") {
				/* the view model: the x is the width, the y is the barrel
				 * (it points away from the eye) and the z is the height */
				data[i * 5 + 0] = -v.position[0];
				data[i * 5 + 1] = v.position[2];
				data[i * 5 + 2] = v.position[1];
			} else {
				data[i * 5 + 0] = v.position[0];
				data[i * 5 + 1] = v.position[2];
				data[i * 5 + 2] = v.position[1];
			}
			data[i * 5 + 3] = v.uv[0];
			data[i * 5 + 4] = v.uv[1];
		}
		const p = gl.createProgram();
		gl.attachShader(p, compile(gl, gl.VERTEX_SHADER, VS));
		gl.attachShader(p, compile(gl, gl.FRAGMENT_SHADER, FS));
		gl.linkProgram(p);
		const vbo = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
		gl.bufferData(gl.ARRAY_BUFFER, data, gl.STATIC_DRAW);
		m.mesh = {
			program: p,
			vbo: vbo,
			count: n,
			mvp: gl.getUniformLocation(p, "uMVP"),
			size: gl.getUniformLocation(p, "uSize"),
			scale: gl.getUniformLocation(p, "uScale"),
			tex: gl.getUniformLocation(p, "uTex"),
			texOn: gl.getUniformLocation(p, "uTexOn"),
			pos: gl.getAttribLocation(p, "aPos"),
			uv: gl.getAttribLocation(p, "aUV")
		};
		return m.mesh;
	}

	/* the model's scale: the Ghoul models are in their own units.  The
	 * engine's player is 56 units tall (the Quake player height), so the
	 * scale is 56 / the model's height.  The models are Z up: the tallest
	 * axis of the bounding box is the up axis. */
	function modelExtent(m) {
		if (!m.geometry || !m.vertices || !m.vertices.length) return null;
		let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
		for (const v of m.vertices) for (let i = 0; i < 3; i++) {
			if (v.position[i] < mn[i]) mn[i] = v.position[i];
			if (v.position[i] > mx[i]) mx[i] = v.position[i];
		}
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

	function drawModel(gl, m, mvp, scale, pointSize) {
		if (!m || m.state !== "ready" || !m.vertices || !m.vertices.length) return false;
		const mesh = buildMesh(gl, m);
		const s = scale !== undefined ? scale : modelScale(m);
		gl.useProgram(mesh.program);
		gl.uniformMatrix4fv(mesh.mvp, false, mvp);
		gl.uniform1f(mesh.size, pointSize !== undefined ? pointSize : 3);
		gl.uniform1f(mesh.scale, s);
		gl.uniform1i(mesh.tex, 0);
		gl.uniform1f(mesh.texOn, m.texture ? 1 : 0);
		gl.activeTexture(gl.TEXTURE0);
		gl.bindTexture(gl.TEXTURE_2D, m.texture || null);
		gl.bindBuffer(gl.ARRAY_BUFFER, mesh.vbo);
		gl.enableVertexAttribArray(mesh.pos);
		gl.vertexAttribPointer(mesh.pos, 3, gl.FLOAT, false, 20, 0);
		gl.enableVertexAttribArray(mesh.uv);
		gl.vertexAttribPointer(mesh.uv, 2, gl.FLOAT, false, 20, 12);
		gl.drawArrays(gl.POINTS, 0, mesh.count);
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
			return drawModel(gl, m, view, 1);
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
