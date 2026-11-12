/*
 * app.js - the browser client for Soldier of Fortune.
 *
 * It speaks the real SoF protocol over a WebSocket relay (a browser cannot
 * send UDP) and renders the world with raw WebGL - no libraries.
 *
 * The protocol itself lives in web/sofproto.js (shared with the Node client)
 * and is bundled into bundle.js by web/mkbundle.js.
 */
(function () {
	"use strict";

	// ------------------------------------------------------------- setup
	const params = new URLSearchParams(location.search);
	const relayHost = params.get("relay") || location.host;
	const serverHost = params.get("server") || "127.0.0.1";
	const serverPort = parseInt(params.get("port") || "29000", 10);
	const name = params.get("name") || "webclient";

	const canvas = document.getElementById("gl");
	const hud = document.getElementById("hud");
	const hctx = hud.getContext("2d");
	let gl = null, glError = "";
	try {
		gl = canvas.getContext("webgl", { antialias: true }) ||
			canvas.getContext("experimental-webgl");
		if (!gl) throw new Error("no WebGL");
	} catch (e) { glError = String(e.message || e); }

	const say = function (m) { console.log(m); };
	const state = {
		ws: null, connected: false, spawned: false, frames: 0,
		entities: new Map(), frameNumber: 0, serverTime: 0,
		status: "connecting", log: [], console: [], cs: {}, self: 1, servers: [], fov: 90, drawDistance: 40000, thirdPerson: false, showDebug: false,
		hud: null, ps: null
	};
	window.sofstate = state;
	window.sofconsole = state.console;
	const note = function (m) { state.console.push(String(m)); if (state.console.length > 40) state.console.shift(); say(m); };

	/* ---------------------------------------------------------------------
	 * The player figure.
	 *
	 * The original Ghoul models (.ghb) are a compressed, proprietary format
	 * that is not decoded yet, so the player is drawn as a procedural
	 * humanoid: a box per body part, animated with a walk cycle.  The
	 * proportions follow the engine's units (the eye height is 56, so the
	 * figure is about 72 units tall).
	 * ------------------------------------------------------------------- */
	const FIGURE = {
		height: 72,
		parts: [
			/* name, size x/y/z, the centre offset, the colour, the pivot */
			{ n: "head", s: [12, 13, 13], c: [0, 60, 0], col: [0.78, 0.64, 0.52], piv: [0, 56, 0] },
			{ n: "torso", s: [20, 26, 12], c: [0, 42, 0], col: [0.24, 0.34, 0.28], piv: [0, 42, 0] },
			{ n: "armL", s: [6, 26, 7], c: [-13, 44, 0], col: [0.30, 0.40, 0.32], piv: [-13, 55, 0] },
			{ n: "armR", s: [6, 26, 7], c: [13, 44, 0], col: [0.30, 0.40, 0.32], piv: [13, 55, 0] },
			{ n: "legL", s: [8, 30, 9], c: [-5, 15, 0], col: [0.20, 0.22, 0.26], piv: [-5, 30, 0] },
			{ n: "legR", s: [8, 30, 9], c: [5, 15, 0], col: [0.20, 0.22, 0.26], piv: [5, 30, 0] },
			{ n: "gun", s: [6, 7, 26], c: [10, 45, 14], col: [0.12, 0.12, 0.14], piv: [0, 0, 0] }
		]
	};
	/* the walk cycle phase */
	let walkPhase = 0;
	let lastSelfPos = null;

	function drawFigure(x, y, z, yaw, moving, sz) {
		/* the figure is drawn in the renderer's Y up space */
		const s = sz || 1;
		walkPhase += moving ? 0.22 : 0.0;
		const swing = moving ? Math.sin(walkPhase) * 0.5 : Math.sin(walkPhase) * 0.04;
		/* the figure faces the view direction */
		const base = translate(mat4(), x, y, z);
		const facing = rotY(mat4(), (yaw - 90) * Math.PI / 180);
		const root = multiply(mat4(), base, facing);
		FIGURE.parts.forEach(function (p) {
			/* the limbs rotate around their pivot in the figure's frame */
			let m = root;
			if (p.n === "legL" || p.n === "legR" || p.n === "armL" || p.n === "armR") {
				const a = (p.n === "legL" || p.n === "armR") ? swing : -swing;
				const piv = translate(mat4(), p.piv[0] * s, p.piv[1] * s, p.piv[2] * s);
				const back = translate(mat4(), -p.piv[0] * s, -p.piv[1] * s, -p.piv[2] * s);
				const pm = multiply(mat4(), piv, rotX(mat4(), a));
				multiply(pm, pm, back);
				m = multiply(mat4(), m, pm);
			}
			/* the part centre, then the size (the unit cube spans -1..1) */
			const c = translate(mat4(), p.c[0] * s, p.c[1] * s, p.c[2] * s);
			m = multiply(mat4(), m, c);
			const sm = scale(mat4(), p.s[0] * s / 2, p.s[1] * s / 2, p.s[2] * s / 2);
			m = multiply(mat4(), m, sm);
			gl.uniformMatrix4fv(uModel, false, m);
			gl.uniform3f(uColor, p.col[0], p.col[1], p.col[2]);
			gl.drawArrays(gl.TRIANGLES, 0, 36);
		});
	}

	// ------------------------------------------------------ the renderer
	let prog = null, uMVP = null, uModel = null, uColor = null;
	let entityVBO = null, entityLoc = -1;
	const SHADER_VS = [
		"attribute vec3 aPos;",
		"uniform mat4 uMVP;",
		"uniform mat4 uModel;",
		"varying vec3 vN;",
		"void main(){",
		"  vN = normalize((uModel * vec4(aPos,0.0)).xyz);",
		"  gl_Position = uMVP * uModel * vec4(aPos,1.0);",
		"}"
	].join("\n");
	const SHADER_FS = [
		"precision mediump float;",
		"varying vec3 vN;",
		"uniform vec3 uColor;",
		"void main(){",
		"  float l = max(dot(normalize(vN), normalize(vec3(0.4,0.8,0.35))), 0.28);",
		"  gl_FragColor = vec4(uColor * l, 1.0);",
		"}"
	].join("\n");

	function compile(type, src) {
		const s = gl.createShader(type);
		gl.shaderSource(s, src);
		gl.compileShader(s);
		if (!gl.getShaderParameter(s, gl.COMPILE_STATUS))
			throw new Error("shader: " + gl.getShaderInfoLog(s));
		return s;
	}
	if (gl) {
		try {
			prog = gl.createProgram();
			gl.attachShader(prog, compile(gl.VERTEX_SHADER, SHADER_VS));
			gl.attachShader(prog, compile(gl.FRAGMENT_SHADER, SHADER_FS));
			gl.linkProgram(prog);
			gl.useProgram(prog);
			const p = [
				-1, -1, -1, 1, -1, -1, 1, 1, -1, -1, 1, -1,
				-1, -1, 1, 1, -1, 1, 1, 1, 1, -1, 1, 1,
				-1, -1, -1, 1, -1, -1, 1, -1, 1, -1, -1, 1,
				-1, 1, -1, 1, 1, -1, 1, 1, 1, -1, 1, 1,
				-1, -1, -1, -1, 1, -1, -1, 1, 1, -1, -1, 1,
				1, -1, -1, 1, 1, -1, 1, 1, 1, 1, -1, 1
			];
			const buf = gl.createBuffer();
			gl.bindBuffer(gl.ARRAY_BUFFER, buf);
			gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(p), gl.STATIC_DRAW);
			entityVBO = buf;
			const loc = gl.getAttribLocation(prog, "aPos");
			entityLoc = loc;
			gl.enableVertexAttribArray(loc);
			gl.vertexAttribPointer(loc, 3, gl.FLOAT, false, 0, 0);
			uMVP = gl.getUniformLocation(prog, "uMVP");
			uModel = gl.getUniformLocation(prog, "uModel");
			uColor = gl.getUniformLocation(prog, "uColor");
		} catch (e) { glError = String(e.message || e); gl = null; }
	}

	/* bind the entity draw state: the program, the matrix and the unit
	 * cube.  The Ghoul model draw uses its own program and buffers, so
	 * this has to be restored after every model. */
	function bindEntityState(mvp) {
		if (!gl) return;
		gl.useProgram(prog);
		if (mvp) gl.uniformMatrix4fv(uMVP, false, mvp);
		gl.bindBuffer(gl.ARRAY_BUFFER, entityVBO);
		gl.enableVertexAttribArray(entityLoc);
		gl.vertexAttribPointer(entityLoc, 3, gl.FLOAT, false, 0, 0);
	}

	// ------------------------------------------------------- the map mesh
	// The geometry comes from web/map_<name>.json, which bsp2json.js builds
	// from the .bsp: the faces, their plane normals and the vertexes.
	let mapProg = null, mapMVP = null, mapVBO = null, mapIBO = null;
	let mapTexLoc = null, mapTexOnLoc = null, mapGroups = [];
	let mapIndexCount = 0, mapStatus = "loading", mapDrawn = 0;
	const MAP_VS = [
		"attribute vec3 aPos;",
		"attribute vec3 aNrm;",
		"attribute vec2 aUV;",
		"uniform mat4 uMVP;",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"void main(){",
		"  vN = aNrm; vUV = aUV;",
		"  gl_Position = uMVP * vec4(aPos,1.0);",
		"}"
	].join("\n");
	const MAP_FS = [
		"precision mediump float;",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"uniform sampler2D uTex;",
		"uniform float uTexOn;",
		"void main(){",
		"  vec3 n = normalize(vN);",
		"  float l = max(dot(n, normalize(vec3(0.35,0.80,0.45))), 0.0);",
		"  float amb = 0.45 + 0.18 * abs(n.y);",
		"  vec3 c = vec3(0.62,0.60,0.56);",
		"  if (uTexOn > 0.5) c = texture2D(uTex, vUV).rgb;",
		"  gl_FragColor = vec4(c * (amb + l * 0.55), 1.0);",
		"}"
	].join("\n");

	/* a 1x1 texture for the faces whose material has no image: the game's sky
	 * faces have no material at all, so they read as the sky colour */
	let mapWhite = null;
	function initWhiteTexture() {
		if (!gl) return;
		mapWhite = gl.createTexture();
		gl.bindTexture(gl.TEXTURE_2D, mapWhite);
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, 1, 1, 0, gl.RGBA, gl.UNSIGNED_BYTE,
			new Uint8Array([70, 82, 98, 255]));
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
	}

	function buildMap(m) {
		if (!gl) return;
		/* SoF's world is Z up, the renderer is Y up: (x, y, z) -> (x, z, y) */
		const sop = function (v) { return [v[0], v[2], v[1]]; };
		const pos = [], nrm = [], uvs = [], idx = [];
		/* the faces are grouped by material so that each group is one draw
		 * call with its own texture */
		const groups = [];
		const byMat = new Map();
		for (const f of m.faces) {
			if (!f.v || f.v.length < 3) continue;
			const key = f.mat || "";
			if (!byMat.has(key)) { byMat.set(key, { name: key, start: idx.length, count: 0, tex: null }); groups.push(byMat.get(key)); }
			const g = byMat.get(key);
			const n = sop(f.n);
			const base = pos.length / 3;
			for (let i = 0; i < f.v.length; i++) {
				const v = sop(m.vertices[f.v[i]]);
				pos.push(v[0], v[1], v[2]);
				nrm.push(n[0], n[1], n[2]);
				const uv = (f.uv && f.uv[i]) ? f.uv[i] : [0, 0];
				uvs.push(uv[0] / 64, uv[1] / 64);
			}
			for (let i = 1; i + 1 < f.v.length; i++) {
				idx.push(base, base + i, base + i + 1);
				g.count += 3;
			}
		}
		const verts = new Float32Array(pos.length / 3 * 8);
		for (let i = 0, k = 0; i < pos.length / 3; i++) {
			verts[k++] = pos[i * 3]; verts[k++] = pos[i * 3 + 1]; verts[k++] = pos[i * 3 + 2];
			verts[k++] = nrm[i * 3]; verts[k++] = nrm[i * 3 + 1]; verts[k++] = nrm[i * 3 + 2];
			verts[k++] = uvs[i * 2]; verts[k++] = uvs[i * 2 + 1];
		}
		mapProg = gl.createProgram();
		gl.attachShader(mapProg, compile(gl.VERTEX_SHADER, MAP_VS));
		gl.attachShader(mapProg, compile(gl.FRAGMENT_SHADER, MAP_FS));
		gl.linkProgram(mapProg);
		if (!gl.getProgramParameter(mapProg, gl.LINK_STATUS)) {
			mapStatus = "map link: " + gl.getProgramInfoLog(mapProg);
			return;
		}
		mapVBO = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, mapVBO);
		gl.bufferData(gl.ARRAY_BUFFER, verts, gl.STATIC_DRAW);
		mapIBO = gl.createBuffer();
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, mapIBO);
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, new Uint16Array(idx), gl.STATIC_DRAW);
		mapIndexCount = idx.length;
		mapMVP = gl.getUniformLocation(mapProg, "uMVP");
		mapTexLoc = gl.getUniformLocation(mapProg, "uTex");
		mapTexOnLoc = gl.getUniformLocation(mapProg, "uTexOn");
		/* the textures: the base level of each .m32 material */
		let texCount = 0;
		const tex = (m.textures || {});
		for (const g of groups) {
			const t = tex[g.name];
			if (!t) continue;
			const bin = atob(t.data);
			/* the .m32 pixels are already RGBA (r, g, b, 0xff) */
			const rgba = new Uint8Array(bin.length);
			for (let i = 0; i < bin.length; i++) rgba[i] = bin.charCodeAt(i);
			const o = gl.createTexture();
			gl.bindTexture(gl.TEXTURE_2D, o);
			gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, t.w, t.h, 0, gl.RGBA, gl.UNSIGNED_BYTE, rgba);
			/* the mip levels keep the distant surfaces from aliasing */
			gl.generateMipmap(gl.TEXTURE_2D);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR_MIPMAP_LINEAR);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.REPEAT);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.REPEAT);
			g.tex = o;
			texCount++;
		}
		mapGroups = groups;
		mapStatus = m.faces.length + " faces, " + m.vertices.length + " vertices, " + texCount + " textures";
		/* where is the map?  place the camera above it and look down */
		let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
		for (const v of m.vertices) {
			for (let i = 0; i < 3; i++) { if (v[i] < mn[i]) mn[i] = v[i]; if (v[i] > mx[i]) mx[i] = v[i]; }
		}
		state.mapBounds = { min: mn, max: mx };
		/* the renderer is Y up, the map is Z up: (x, y, z) -> (x, z, y) */
		const cx = (mn[0] + mx[0]) / 2, cz = (mn[1] + mx[1]) / 2, cy = (mn[2] + mx[2]) / 2;
		const span = Math.max(mx[0] - mn[0], mx[1] - mn[1]);
		cam.x = cx; cam.y = cy + span * 0.30; cam.z = cz;
		cam.yaw = 0; cam.pitch = 42;
		state.camInit = true;
	}

	function loadMap(url) {
		if (typeof fetch !== "function") { mapStatus = "no fetch"; return; }
		fetch(url).then(function (r) {
			if (!r.ok) throw new Error("http " + r.status);
			return r.json();
		}).then(function (m) {
			buildMap(m);
		}).catch(function (e) {
			mapStatus = "map error: " + (e.message || e);
		});
	}

	// --- tiny matrix helpers (column major) ---
	function mat4() { return new Float32Array(16); }
	function identity(o) { o.fill(0); o[0] = o[5] = o[10] = o[15] = 1; return o; }
	function perspective(o, fovy, aspect, near, far) {
		const f = 1 / Math.tan(fovy / 2), nf = 1 / (near - far);
		o[0] = f / aspect; o[5] = f; o[10] = (far + near) * nf; o[11] = -1; o[14] = 2 * far * near * nf;
		return o;
	}
	function multiply(o, a, b) {
		const t = new Float32Array(16);
		for (let c = 0; c < 4; c++) for (let r = 0; r < 4; r++) {
			let s = 0;
			for (let k = 0; k < 4; k++) s += a[k * 4 + r] * b[c * 4 + k];
			t[c * 4 + r] = s;
		}
		o.set(t); return o;
	}
function translate(o, x, y, z) { identity(o); o[12] = x; o[13] = y; o[14] = z; return o; }
function scale(o, x, y, z) { identity(o); o[0] = x; o[5] = y; o[10] = z; return o; }
function rotX(o, a) { identity(o); const c = Math.cos(a), s = Math.sin(a); o[5] = c; o[6] = s; o[9] = -s; o[10] = c; return o; }
function rotY(o, a) { identity(o); const c = Math.cos(a), s = Math.sin(a); o[0] = c; o[2] = -s; o[8] = s; o[10] = c; return o; }
function rotZ(o, a) { identity(o); const c = Math.cos(a), s = Math.sin(a); o[0] = c; o[1] = s; o[4] = -s; o[5] = c; return o; }
	function lookAt(o, ex, ey, ez, cx, cy, cz) {
		let zx = ex - cx, zy = ey - cy, zz = ez - cz;
		let l = Math.hypot(zx, zy, zz) || 1; zx /= l; zy /= l; zz /= l;
		let xx = zz, xy = 0, xz = -zx;            // up (0,0,1) x z
		l = Math.hypot(xx, xy, xz) || 1; xx /= l; xy /= l; xz /= l;
		const yx = zy * xz - zz * xy, yy = zz * xx - zx * xz, yz = zx * xy - zy * xx;
		o[0] = xx; o[1] = yx; o[2] = zx; o[3] = 0;
		o[4] = xy; o[5] = yy; o[6] = zy; o[7] = 0;
		o[8] = xz; o[9] = yz; o[10] = zz; o[11] = 0;
		o[12] = -(xx * ex + xy * ey + xz * ez);
		o[13] = -(yx * ex + yy * ey + yz * ez);
		o[14] = -(zx * ex + zy * ey + zz * ez);
		o[15] = 1;
		return o;
	}

	// ------------------------------------------------------ the protocol
	function toBinary(b) {
		if (b instanceof ArrayBuffer) return b;
		if (b instanceof Uint8Array) return b.buffer.slice(b.byteOffset, b.byteOffset + b.length);
		if (b && b.buffer && b.byteOffset !== undefined)
			return b.buffer.slice(b.byteOffset, b.byteOffset + b.length);
		return b;
	}

	/* the client mods (set on the content page) */
	const MOD_KEY = "sof.browser.mods";
	function loadMods() {
		try {
			const raw = localStorage.getItem(MOD_KEY);
			return raw ? JSON.parse(raw) : null;
		} catch (e) { return null; }
	}
	function applyMods() {
		const m = loadMods();
		if (m) {
			if (m.moveSpeed) client.setMoveSpeed(m.moveSpeed);
			if (m.lookSpeed) client.setLookSpeed(m.lookSpeed);
			if (m.fov) state.fov = m.fov;
			if (m.drawDistance) state.drawDistance = m.drawDistance;
			if (m.masterUrl) window.MASTER_URL = m.masterUrl;
			state.mods = m;
		}
		/* the query string overrides the stored mods, so a link can carry a
		 * configuration: ?moveSpeed=200&fov=120&lookSpeed=0.4 */
		const q = new URLSearchParams(location.search);
		q.forEach(function (v, k) {
			const n = parseFloat(v);
			if (k === "moveSpeed") client.setMoveSpeed(n);
			else if (k === "lookSpeed") client.setLookSpeed(n);
			else if (k === "fov") state.fov = n;
			else if (k === "drawDistance") state.drawDistance = n;
			else if (k === "master") window.MASTER_URL = v;
		});
		if (q.toString()) state.mods = Object.assign({}, state.mods || {}, Object.fromEntries(q));
	}

	const client = window.sofproto.createClient({
		userinfo: "\\name\\" + name + "\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0",
		send: (buf) => {
			if (state.ws && state.ws.readyState === 1) {
				const bin = toBinary(buf);
				state.ws.send(bin);
			}
		},
		onEvent: (ev, data) => {
			switch (ev) {
				case "oob": state.log.push(String(data).slice(0, 70)); if (state.log.length > 8) state.log.shift(); break;
				case "connected": state.connected = true; state.status = "connected"; break;
				case "spawned": state.spawned = true; state.status = "spawned"; publishServer(); break;
				case "predresync":
					/* svc 0x1d: the server restarted prediction, drop the local state */
					if (window.sofpredict && state.lastFrame) {
						var psd = state.lastFrame.playerStateDecoded;
						var o = psd && Array.isArray(psd.origin) ? psd.origin : null;
						if (o) window.sofpredict.resync(o);
					}
					break;
				case "ask": state.log.push("ask " + data); if (state.log.length > 8) state.log.shift(); break;
				case "sound":
					if (window.sofmusic) window.sofmusic.onSound(data);
					break;
				case "soundinfo":
					if (window.sofmusic) window.sofmusic.onSoundInfo(data);
					break;
				case "temp":
					if (window.sofmusic) window.sofmusic.onTempEntity(data);
					break;
				case "ghoul":
					/* the raw ghoul string table of the server (service 0x1A) */
					break;
				case "configstrings":
					Object.keys(data).forEach(function (k) { state.cs[k] = data[k]; });
					break;
				case "frame":
					state.frames++;
					state.entities = data.entities;
					state.frameNumber = data.frame.number;
					state.serverTime = data.frame.time;
					state.lastFrame = data.frame;
					/* the authoritative player state: the health, the armor, the
					 * ammunition and the carried item, decoded from the bit
					 * packed client state block */
					if (data.frame.hud) state.hud = data.frame.hud;
					if (data.frame.playerStateDecoded) state.ps = data.frame.playerStateDecoded;
					/* the instantaneous speed, measured from the authoritative
					 * origin (the player state block's origin is bit packed, so
					 * the entity state is used here) */
		if (state.playerOrigin) {
			const dx = state.playerOrigin.x - (state.lastPos ? state.lastPos[0] : state.playerOrigin.x);
			const dy = state.playerOrigin.y - (state.lastPos ? state.lastPos[1] : state.playerOrigin.y);
			const dt = (state.lastFrameTime ? (data.frame.time - state.lastFrameTime) : 0);
			const moving = Math.hypot(dx, dy) > 0.5;
			if (dt > 0) {
				const v = Math.hypot(dx, dy) / dt;
				state.vel = +(v).toFixed(1);
				state.velHist = state.velHist || [];
				state.velHist.push(state.vel);
				if (state.velHist.length > 400) state.velHist.shift();
				state.velMax = Math.max.apply(null, state.velHist);
			}
			state.lastPos = [state.playerOrigin.x, state.playerOrigin.y];
			state.lastFrameTime = data.frame.time;
			/* the footsteps follow the real movement */
			if (moving) {
				stepTimer += dt;
				if (stepTimer > 0.42) { stepTimer = 0; playFootstep(); }
			} else {
				stepTimer = 0.42;
			}
		}
					/* the player state block is bit packed, so its fields move
					 * around; the authoritative origin is found by searching the
					 * block for the position of one of our entities - that also
					 * identifies which entity we are */
					if (data.frame.playerState) {
						const ps = data.frame.playerState;
						for (const e of data.entities.values()) {
							if (e.removed || !e.state) continue;
							const o = rawOrigin(e);
							const at = window.sofsnapshot.findPlayerOrigin(ps, o.x, o.y, o.z);
							if (at >= 0) {
								state.self = e.number;
								state.playerOrigin = { x: o.x, y: o.y, z: o.z, at: at };
								break;
							}
						}
					}
					break;
				case "frameError": note("frame error: " + (data && data.message ? data.message : data)); break;
			}
		}
	});
	/* sofpredict needs the camera's own angles: the server does not send the
	 * local player's view angles on the wire, so the prediction has to use the
	 * angles we send.  See web/www/sofpredict.js. */
	state.view = client.view;

	function connect() {
		state.status = "connecting";
		const ws = new WebSocket("ws://" + relayHost + "/relay");
		ws.binaryType = "arraybuffer";
		state.ws = ws;
		ws.onopen = function () {
			ws.send(JSON.stringify({ type: "connect", host: serverHost, port: serverPort }));
			client.start();
			state.status = "handshaking";
		};
		ws.onmessage = function (ev) {
			if (typeof ev.data === "string") return;      // the relay's JSON control
			const b = new Uint8Array(ev.data);
			client.onDatagram(Buffer.from(b));
		};
		ws.onclose = function () {
			state.status = "disconnected";
			state.connected = false;
			setTimeout(connect, 2000);
		};
		ws.onerror = function () { state.status = "relay error"; };
	}

	/* the master: the known SoF servers.  The original GameSpy master is
	 * dead, so we run our own (web/gsmaster.js) and the browser client
	 * publishes the server it is talking to. */
	const masterUrl = (window.MASTER_URL || "http://127.0.0.1:8090") + "/api/servers";
	function loadServerList() {
		if (typeof fetch !== "function") return;
		fetch(masterUrl).then(function (r) { return r.json(); }).then(function (j) {
			state.servers = (j && j.servers) || [];
		}).catch(function () { });
	}
	function publishServer() {
		if (typeof fetch !== "function") return;
		try {
			fetch(masterUrl, {
				method: "POST",
				headers: { "content-type": "application/json" },
				body: JSON.stringify({
					ip: serverHost, port: serverPort,
					hostname: "SoF browser server", mapname: state.cs[0] || ""
				})
			}).then(loadServerList).catch(function () { });
		} catch (e) { }
	}

	// --------------------------------------------------------- the input
	const keys = {};
	/* remember where every entity is, so that the one that moves when we
	 * walk can be identified as the local player */
	function probeSelf() {
		if (state.probe) return;
		const map = {};
		state.entities.forEach(function (e) {
			if (!e.removed && e.state) map[e.number] = entityOrigin(e);
		});
		state.probe = { map: map, until: performance.now() + 400 };
	}
	document.addEventListener("keydown", (e) => {
		if (consoleOpen) return;      /* the console has the keyboard */
		const wasDown = keys[e.code];
		keys[e.code] = true;
		client.setKey(e.code, true);
		probeSelf();
		/* the use key picks an item up */
		if (!wasDown && (e.code === "KeyE" || e.code === "Enter")) playUse();
		/* the jump */
		if (!wasDown && e.code === "Space") S && S.playVaried("sound/player/Jump.wav", 0.1, 0.5);
		/* V toggles the third person camera, so the player figure is visible */
		if (e.code === "KeyV") {
			state.thirdPerson = !state.thirdPerson;
			note("camera: " + (state.thirdPerson ? "third person" : "first person"));
		}
		/* F1 toggles the debug dump (it used to cover the whole picture) */
		if (e.code === "F1") {
			e.preventDefault();
			state.showDebug = !state.showDebug;
			note("debug: " + (state.showDebug ? "on" : "off"));
		}
		/* the backtick opens the console */
		if (e.code === "Backquote") {
			e.preventDefault();
			openConsole();
		}
	});
	document.addEventListener("keyup", (e) => {
		if (consoleOpen) return;
		keys[e.code] = false;
		client.setKey(e.code, false);
	});
	canvas.addEventListener("click", function () { canvas.requestPointerLock(); });
	/* the left mouse button is the attack (fire) button, the right one the
	 * "use" button - both are usercmd button bits */
	document.addEventListener("mousedown", function (e) {
		if (e.button === 0) { client.setKey("Mouse0", true); playFire(); }
		if (e.button === 2) client.setKey("Mouse2", true);
	});
	document.addEventListener("mouseup", function (e) {
		if (e.button === 0) client.setKey("Mouse0", false);
		if (e.button === 2) client.setKey("Mouse2", false);
	});
	document.addEventListener("contextmenu", function (e) { e.preventDefault(); });

	const cam = { x: 0, y: 0, z: 0, yaw: 0, pitch: 0, speed: 700 };
	/* The camera always uses the PLAYER's view angles, never its own mouse
	 * angles: the two used to have different sensitivities, so the picture
	 * slowly drifted away from the direction the server was simulating.
	 *
	 * The engine's convention: the world direction of a view yaw A is
	 * (A - 90) degrees, and the direction vector is (cos D, sin D) in the
	 * engine's (x, y) plane (z up) - which is the browser's (x, z) plane.
	 * The camera's forward is (sin camYaw, 0, cos camYaw), so
	 * camYaw = 180 - A.  The pitch has the same sign in both (positive =
	 * looking down). */
	function viewAngles() {
		if (state.hasSelf) {
			return {
				yaw: ((180 - (client.view.yaw || 0)) % 360 + 360) % 360,
				pitch: client.view.pitch || 0
			};
		}
		return { yaw: cam.yaw || 0, pitch: cam.pitch || 0 };
	}
	document.addEventListener("mousemove", function (e) {
		if (document.pointerLockElement !== canvas) return;
		cam.yaw = (cam.yaw + e.movementX * 0.2) % 360;
		cam.pitch = Math.max(-89, Math.min(89, cam.pitch + e.movementY * 0.2));
		client.look(e.movementX, e.movementY);
	});

	// -------------------------------------------------------- the drawing
	const proj = mat4(), view = mat4(), mvp = mat4(), model = mat4(), tmp = mat4();
	let last = 0;

	function resize() {
		const dpr = window.devicePixelRatio || 1;
		const w = Math.floor(canvas.clientWidth * dpr), h = Math.floor(canvas.clientHeight * dpr);
		if (canvas.width !== w || canvas.height !== h) {
			canvas.width = w; canvas.height = h;
			if (gl) gl.viewport(0, 0, w, h);
		}
		const hw = Math.floor(window.innerWidth * dpr), hh = Math.floor(window.innerHeight * dpr);
		if (hud.width !== hw || hud.height !== hh) { hud.width = hw; hud.height = hh; }
	}
	/* the map's item spawn positions, so a dropped item can be told apart from
	 * a player */
	let mapItems = [];
	let mapItemList = [];
	function isItemEntity(e, o) {
		for (let i = 0; i < mapItems.length; i++) {
			const it = mapItems[i];
			if (Math.abs(it[0] - o.x) < 40 && Math.abs(it[2] - o.y) < 40) return true;
		}
		return false;
	}

	function entityOrigin(e) {
		const s = e.state;
		/* The local player is drawn at the PREDICTED origin, so the movement is
		 * instant instead of lagging a round trip; every other entity stays at
		 * the server's position.  The prediction is in the engine's Z up order
		 * (x, y, z), the renderer's is x, y = up, z. */
		const p = (window.sofpredict && e.number === state.self)
			? window.sofpredict.origin() : null;
		return {
			x: p ? p[0] : s.readFloatLE(0x04),
			y: p ? p[2] : s.readFloatLE(0x0c),
			z: p ? p[1] : s.readFloatLE(0x08),
			/* the angles: pitch at +0x10, yaw at +0x14 (a byte scale) */
			pitch: s.readUInt8(0x10) * (360 / 256),
			yaw: s.readUInt8(0x14) * (360 / 256)
		};
	}
	/* the same origin in the raw SoF order (x, y, z) - the player state block
	 * uses that order, so the two can be compared directly */
	function rawOrigin(e) {
		const s = e.state;
		return { x: s.readFloatLE(0x04), y: s.readFloatLE(0x08), z: s.readFloatLE(0x0c) };
	}
	function updateCamera(dt) {
		autopilot();
		/* the local player: entity 1 is the first client in the Q2 entity
		 * numbering, but the dedicated server never releases a stale client,
		 * so the slot moves.  We identify ourselves by the entity that
		 * moves when we walk. */
		if (state.probe) {
			if (performance.now() > state.probe.until) { state.probe = null; return; }
			const moved = [];
			const probeMap = state.probe.map;
			state.entities.forEach(function (e) {
				if (e.removed || !e.state) return;
				const o = entityOrigin(e);
				const k = e.number;
				const p = probeMap[k];
				if (p && (p.x !== o.x || p.y !== o.y || p.z !== o.z)) moved.push(k);
				probeMap[k] = o;
			});
			if (moved.length) {
				state.self = moved[0];
				state.probe = null;
			}
		}
		/* the player state carries the authoritative origin, which identifies
		 * our own entity without the old move-and-look probe */
		if (state.playerOrigin) {
			for (const e of state.entities.values()) {
				if (e.removed || !e.state) continue;
				const o = rawOrigin(e);
				if (Math.abs(o.x - state.playerOrigin.x) < 2 &&
					Math.abs(o.y - state.playerOrigin.y) < 2 &&
					Math.abs(o.z - state.playerOrigin.z) < 2) {
					state.self = e.number;
					break;
				}
			}
		}
		const self = params.get("nofollow") ? null : state.entities.get(state.self);
		state.dbg = {
			selfNum: state.self,
			found: !!self,
			removed: self ? !!self.removed : null,
			hasState: self ? !!self.state : null,
			keys: Array.from(state.entities.keys()).slice(0, 8).join(","),
			size: state.entities.size,
			third: state.thirdPerson
		};
		if (self && !self.removed && self.state) {
			const o = entityOrigin(self);
			const k = Math.min(1, dt * 12);
			/* the third person camera sits behind the player, the first person
			 * camera is at the eye (56 units, the engine's player height) */
			const va = viewAngles();
			const yaw = va.yaw * Math.PI / 180;
			const back = state.thirdPerson ? 110 : 0;
			const tx = o.x - Math.sin(yaw) * back;
			const tz = o.z - Math.cos(yaw) * back;
			cam.x += (tx - cam.x) * k;
			cam.y += (o.y + (state.thirdPerson ? 62 : 56) - cam.y) * k;
			cam.z += (tz - cam.z) * k;
			state.hasSelf = true;
			if (!state.eyeInit) {           /* the first person view */
				state.eyeInit = true;
			}
		} else {
			state.hasSelf = false;
		}
		if (state.hasSelf) return;    /* the server drives us, no free flight */
		const fwd = (keys["KeyW"] ? 1 : 0) - (keys["KeyS"] ? 1 : 0);
		const side = (keys["KeyD"] ? 1 : 0) - (keys["KeyA"] ? 1 : 0);
		const up = (keys["Space"] ? 1 : 0) - (keys["KeyC"] ? 1 : 0);
		const yaw = cam.yaw * Math.PI / 180, pitch = cam.pitch * Math.PI / 180;
		cam.x += (Math.sin(yaw) * fwd + Math.cos(yaw) * side) * cam.speed * dt;
		cam.y += (-Math.sin(pitch) * fwd) * cam.speed * dt;
		cam.z += (Math.cos(yaw) * fwd - Math.sin(yaw) * side) * cam.speed * dt + up * cam.speed * dt;
	}
	function frameEntities() {
		/* the first time we have entities, frame the whole scene so the
		 * view starts outside the entity cloud */
		if (state.camInit || state.entities.size < 3) return;
		let minx = 1e9, maxx = -1e9, minz = 1e9, maxz = -1e9, maxy = -1e9;
		state.entities.forEach(function (e) {
			if (e.removed || !e.state) return;
			const s = e.state;
			const ox = s.readInt16LE(0x04) * 0.125, oz = s.readInt16LE(0x0c) * 0.125;
			const oy = s.readInt16LE(0x08) * 0.125;
			if (ox < minx) minx = ox; if (ox > maxx) maxx = ox;
			if (oz < minz) minz = oz; if (oz > maxz) maxz = oz;
			if (oy > maxy) maxy = oy;
		});
		const cx = (minx + maxx) / 2, cz = (minz + maxz) / 2;
		const span = Math.max(200, Math.max(maxx - minx, maxz - minz));
		cam.x = cx; cam.y = maxy + span * 0.25; cam.z = cz - span * 1.1;
		cam.yaw = 0; cam.pitch = -12;
		state.camInit = true;
	}
	function frame(now) {
		try {
			frameInner(now);
		} catch (err) {
			state.err = (state.err || "") + " " + (err && err.message ? err.message : String(err)) +
				" @ " + (err && err.stack ? err.stack.split("\n").slice(0, 3).join(" | ") : "");
			if (state.err.length > 800) state.err = state.err.slice(-800);
		}
		requestAnimationFrame(frame);
	}
	function frameInner(now) {
		const dt = last ? Math.min(0.1, (now - last) / 1000) : 0;
		last = now;
		resize();
		frameEntities();
		updateCamera(dt);
		let drawn = 0;
		mapDrawn = 0;
		if (gl) {
			gl.clearColor(0.05, 0.06, 0.08, 1);
			gl.enable(gl.DEPTH_TEST);
			gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
			const aspect = canvas.width / Math.max(1, canvas.height);
		perspective(proj, (state.fov || 90) * Math.PI / 180, aspect, 1, state.drawDistance || 40000);
		const va = viewAngles();
		const yaw = va.yaw * Math.PI / 180, pitch = va.pitch * Math.PI / 180;
			const cp = Math.cos(pitch), sp = Math.sin(pitch);
			lookAt(view, cam.x, cam.y, cam.z,
				cam.x + cp * Math.sin(yaw), cam.y - sp, cam.z + cp * Math.cos(yaw));
			multiply(mvp, proj, view);
			/* the static map geometry first */
			if (mapProg && mapIndexCount) {
				gl.useProgram(mapProg);
				gl.uniformMatrix4fv(mapMVP, false, mvp);
				gl.bindBuffer(gl.ARRAY_BUFFER, mapVBO);
				gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, mapIBO);
				const stride = 8 * 4;
				const lp = gl.getAttribLocation(mapProg, "aPos");
				const ln = gl.getAttribLocation(mapProg, "aNrm");
				const lu = gl.getAttribLocation(mapProg, "aUV");
				gl.enableVertexAttribArray(lp);
				gl.vertexAttribPointer(lp, 3, gl.FLOAT, false, stride, 0);
				gl.enableVertexAttribArray(ln);
				gl.vertexAttribPointer(ln, 3, gl.FLOAT, false, stride, 12);
				gl.enableVertexAttribArray(lu);
				gl.vertexAttribPointer(lu, 2, gl.FLOAT, false, stride, 24);
				gl.activeTexture(gl.TEXTURE0);
				for (const g of mapGroups) {
					if (!g.count) continue;
					gl.bindTexture(gl.TEXTURE_2D, g.tex || mapWhite);
					gl.uniform1i(mapTexLoc, 0);
					gl.uniform1f(mapTexOnLoc, g.tex ? 1 : 0);
					gl.drawElements(gl.TRIANGLES, g.count, gl.UNSIGNED_SHORT, g.start * 2);
					mapDrawn += g.count / 3;
				}
			}
			/* then the live entities */
			bindEntityState(mvp);
			state.entities.forEach(function (e) {
				if (e.removed || !e.state) return;
				const o = entityOrigin(e);
				if (e.number === state.self) {
					/* our own figure, in the world - but never in the first
					 * person view, or the camera sits inside our own body */
					const moving = lastSelfPos ? Math.hypot(o.x - lastSelfPos[0], o.z - lastSelfPos[1]) > 0.4 : false;
					lastSelfPos = [o.x, o.z];
					if (state.thirdPerson) {
						drawFigure(o.x, o.y, o.z, client.view.yaw, moving, 1);
						drawn++;
					}
					return;
				}
				if (isItemEntity(e, o)) {
					/* a dropped item: a small marker */
					const h = 12;
					translate(model, o.x, o.y + h, o.z);
					multiply(tmp, model, scale(mat4(), 10, h, 10));
					gl.uniformMatrix4fv(uModel, false, tmp);
					gl.uniform3f(uColor, 0.75, 0.65, 0.25);
					gl.drawArrays(gl.TRIANGLES, 0, 36);
					drawn++;
					return;
				}
				/* the original Ghoul model, when its geometry is decoded: the
				 * static meshes are, the animated ones (the characters and
				 * the weapons) are not yet */
				if (window.sofmodel && sofmodel.drawEntity && sofmodel.drawEntity(e, mvp, o)) {
					drawn++;
					/* the model draw uses its own program and buffers */
					bindEntityState(mvp);
					return;
				}
				/* another player */
				drawFigure(o.x, o.y, o.z, o.yaw || 0, false, 1);
				drawn++;
			});
		}

		// the HUD
		hctx.clearRect(0, 0, hud.width, hud.height);
		/* the crosshair, first person only */
		if (!state.thirdPerson) {
			hctx.strokeStyle = "rgba(120,255,120,0.85)";
			hctx.lineWidth = 1;
			const cx = hud.width / 2, cy = hud.height / 2;
			hctx.beginPath();
			hctx.moveTo(cx - 7, cy); hctx.lineTo(cx - 3, cy);
			hctx.moveTo(cx + 3, cy); hctx.lineTo(cx + 7, cy);
			hctx.moveTo(cx, cy - 7); hctx.lineTo(cx, cy - 3);
			hctx.moveTo(cx, cy + 3); hctx.lineTo(cx, cy + 7);
			hctx.stroke();
		}
		/* The debug dump is a development aid: it covered the whole picture.
		 * It is now behind a key (F1) and off by default, so the game looks
		 * like the game. */
		if (state.showDebug) {
		hctx.font = "13px monospace";
		hctx.fillStyle = "#9fe8a0";
		hctx.fillText("Soldier of Fortune - browser client", 12, 20);
		hctx.fillStyle = "#d8d8d8";
		hctx.fillText("relay     : " + relayHost, 12, 40);
		hctx.fillText("server    : " + serverHost + ":" + serverPort, 12, 58);
		hctx.fillText("status    : " + state.status, 12, 76);
		hctx.fillText("frame     : " + state.frameNumber + "  t=" + state.serverTime.toFixed(2), 12, 94);
		hctx.fillText("entities  : " + state.entities.size + "  (drawn " + drawn + ")", 12, 112);
		if (state.playerOrigin) {
			/* the raw SoF order is (x, y, z) with z up */
			hctx.fillText("self      : #" + state.self + "  pos " +
				state.playerOrigin.x.toFixed(1) + ", " + state.playerOrigin.y.toFixed(1) + ", " +
				state.playerOrigin.z.toFixed(1), 430, 40);
		}
		hctx.fillText("map       : " + mapStatus + (mapDrawn ? ("  " + mapDrawn + " tris") : ""), 12, 184);
		hctx.fillText("seed/seq  : " + client.seed + "  " + client.seq + "/" + client.srvSeq, 12, 130);
		hctx.fillText("frames    : " + state.frames, 12, 148);
		hctx.fillText("map       : " + (state.cs[0] || "?") + "   configstrings: " + Object.keys(state.cs).length, 12, 166);
		if (glError) { hctx.fillStyle = "#ff8080"; hctx.fillText("webgl: " + glError, 12, 184); }
		hctx.fillStyle = "#8a8a8a";
		state.log.forEach(function (l, i) { hctx.fillText(String(l).slice(0, 90), 12, 206 + i * 15); });
		/* the master server list */
		if (state.servers.length) {
			hctx.fillStyle = "#9fe8a0";
			hctx.fillText("master (" + state.servers.length + "):", 12, hud.height - 90);
			state.servers.slice(0, 5).forEach(function (s, i) {
				hctx.fillText("  " + s.ip + ":" + s.port + "  " + (s.mapname || s.hostname || ""), 12, hud.height - 74 + i * 15);
			});
		}
		hctx.fillStyle = "#d0d0d0";
		hctx.fillText("F1 debug, V camera, click for mouse look, WASD walk, Space jump", 12, hud.height - 16);
		hctx.fillStyle = "#7fb0ff";
		hctx.fillText("content & mods: content.html", 12, hud.height - 34);
		}

		/* the effects: the particles of the temp entities (the muzzle flash,
		 * the blood, the sparks) */
		const fx = window.sofmusic && sofmusic.fx && sofmusic.fx();
		if (fx) { fx.update(dt); fx.draw(gl); }
		/* the first person weapon: the Ghoul view model */
		if (window.sofviewmodel && sofviewmodel.draw) {
			const va2 = viewAngles();
			sofviewmodel.draw({
				gl: gl,
				dt: dt,
				look: { yaw: va2.yaw, pitch: va2.pitch },
				move: { origin: state.playerOrigin },
				fov: state.fov || 90
			});
		}
		drawGameHud();
	}

	/* ---------------------------------------------------------------------
	 * The SoF style HUD.
	 *
	 * The original HUD draws the health and the armor as two bars in the
	 * bottom left corner, the ammunition as a number in the bottom right and
	 * the carried item as an icon.  The numbers come from the authoritative
	 * client state block (the engine's stats array).
	 * ------------------------------------------------------------------- */
	function drawGameHud() {
		const h = state.hud;
		if (!h) return;
		const W = hud.width, H = hud.height;
		const bottom = H - 46;
		hctx.save();

		/* a dark strip along the bottom, like the original */
		hctx.fillStyle = "rgba(8,10,12,0.55)";
		hctx.fillRect(0, bottom - 14, W, H - bottom + 14);

		/* the health bar (red) and the armor bar (grey blue) */
		const barW = 190, barH = 11;
		const drawBar = function (x, y, value, fill, label) {
			const p = Math.max(0, Math.min(1, value / 100));
			hctx.fillStyle = "rgba(0,0,0,0.6)";
			hctx.fillRect(x - 1, y - 1, barW + 2, barH + 2);
			hctx.fillStyle = "rgba(40,44,48,0.9)";
			hctx.fillRect(x, y, barW, barH);
			hctx.fillStyle = fill;
			hctx.fillRect(x, y, Math.round(barW * p), barH);
			hctx.strokeStyle = "rgba(180,190,200,0.55)";
			hctx.lineWidth = 1;
			hctx.strokeRect(x + 0.5, y + 0.5, barW - 1, barH - 1);
			hctx.fillStyle = "#e6e6e6";
			hctx.font = "12px monospace";
			hctx.fillText(label + " " + value, x + barW + 8, y + barH - 1);
		};
		drawBar(18, bottom + 2, h.health, "#c03028", "HP");
		drawBar(18, bottom + 18, h.armor, "#8892a0", "AP");

		/* the ammunition, in the bottom right, as in the original */
		hctx.textAlign = "right";
		hctx.font = "bold 30px monospace";
		hctx.fillStyle = h.ammo2 <= 1 ? "#ff7040" : "#e8e8e8";
		hctx.fillText(String(h.ammo), W - 96, bottom + 30);
		hctx.font = "15px monospace";
		hctx.fillStyle = "#b8b8b8";
		hctx.fillText("/ " + h.ammo2, W - 18, bottom + 30);

		/* the carried item */
		if (h.item) {
			hctx.font = "12px monospace";
			hctx.fillStyle = "#c8c8a0";
			hctx.fillText(h.item.replace(/^item_/, ""), W - 96, bottom + 46);
		}
		hctx.textAlign = "left";

		/* the stealth meter */
		if (h.stealth) {
			hctx.fillStyle = "#7f9fd0";
			hctx.fillText("stealth " + h.stealth, 18, bottom - 4);
		}
		if (h.dead) {
			hctx.font = "bold 20px monospace";
			hctx.fillStyle = "#e04030";
			hctx.fillText("YOU ARE DEAD", W / 2 - 70, H / 2);
		}
		hctx.restore();
	}

	/* a debug autopilot: steer towards a map item and use it when close.  It
	 * is only reachable from the console (window.sofauto), never on its own. */
	window.sofauto = function (opts) {
		const o = opts || {};
		state.auto = {
			cls: o.cls || "item_weapon_",
			use: o.use !== false,
			fire: !!o.fire,
			stopped: false
		};
		return "auto: " + state.auto.cls;
	};
	window.sofautoStop = function () { state.auto = null; return "auto off"; };

	/* the player state block as hex, so a pickup or a shot can be seen in the
	 * raw bytes the server sends */
	window.sofps = function () {
		const f = state.lastFrame;
		if (!f || !f.playerState) return null;
		return Array.from(f.playerState).map(x => x.toString(16).padStart(2, "0")).join(" ");
	};

	/* a movement probe: hold a movement key for a while at a given view yaw
	 * and record how far the player travelled and in which direction. */
	window.sofprobe = function (yaw, ms, speed) {
		state.probe2 = { yaw: yaw, until: performance.now() + (ms || 2000), from: null, res: null };
		state.probeResult = null;
		client.view.yaw = yaw;
		client.view.pitch = 0;
		if (speed) client.setMoveSpeed(speed);
		client.setKey("KeyW", true);
		return "probe yaw=" + yaw + " speed=" + (speed || client.view.forwardmove);
	};
	function runProbe() {
		const p = state.probe2;
		if (!p) return;
		const self = state.entities.get(state.self);
		if (!self || !self.state) return;
		const o = rawOrigin(self);
		if (!p.from) { p.from = o; return; }
		if (performance.now() < p.until) return;
		p.res = {
			yaw: p.yaw,
			dx: +(o.x - p.from.x).toFixed(2),
			dy: +(o.y - p.from.y).toFixed(2),
			dist: +Math.hypot(o.x - p.from.x, o.y - p.from.y).toFixed(2)
		};
		state.probeResult = p.res;
		state.probe2 = null;
		client.setKey("KeyW", false);
	}

	function autopilot() {
		runProbe();
		const a = state.auto;
		if (!a || a.stopped) return;
		const self = state.entities.get(state.self);
		if (!self || !self.state) return;
		const p = rawOrigin(self);
		/* the nearest map item of the wanted class */
		let best = null, bestD = 1e9;
		for (const it of mapItemList) {
			if (a.cls && it.classname.indexOf(a.cls) < 0) continue;
			const d = Math.hypot(it.origin[0] - p.x, it.origin[1] - p.y);
			if (d < bestD) { bestD = d; best = it; }
		}
		if (!best) return;
		const dx = best.origin[0] - p.x, dy = best.origin[1] - p.y;
		state.autoInfo = { target: best.classname, dist: Math.round(bestD), at: best.origin.join(",") };

		/* the wall check: if the player did not move for a while, sidestep */
		const moved = Math.hypot(p.x - (a.lastX === undefined ? p.x : a.lastX),
			p.y - (a.lastY === undefined ? p.y : a.lastY));
		a.lastX = p.x; a.lastY = p.y;
		if (moved < 0.6) {
			a.stuck = (a.stuck || 0) + 1;
		} else {
			a.stuck = 0;
			a.slide = 0;
		}

		if (bestD < 40) {
			client.setKey("KeyW", false);
			client.setKey("KeyA", false);
			client.setKey("KeyD", false);
			/* the game module only processes use when attack is not latched, so
			 * the two are never pressed at the same time */
			if (a.use && !a.fire) client.setKey("KeyE", true);
			if (a.fire && !a.use) client.setKey("Mouse0", true);
			state.autoInfo.using = true;
			return;
		}
		client.setKey("KeyE", false);
		client.setKey("Mouse0", false);

		let yaw = Math.atan2(dy, dx) * 180 / Math.PI;
		if (a.stuck > 12) {
			/* the way is blocked: slide along it for a while */
			a.slide = (a.slide || 0) + 1;
			yaw += (a.slide % 2 ? 70 : -70);
			if (a.stuck > 60) { a.stuck = 0; a.slide = 0; }
		}
		client.view.yaw = yaw;
		client.view.pitch = 0;
		client.setKey("KeyW", true);
	}

	/* ---------------------------------------------------------------------
	 * The sounds.
	 *
	 * The game's audio is plain 16 bit mono PCM WAV in Base\pak0.pak and the
	 * relay serves it straight out of the pak at /pak/<path>, so the sounds
	 * are fetched on demand and cached.
	 * ------------------------------------------------------------------- */
	const S = window.sofsound;
	const FOOT = ["grass", "gravel", "metal", "sand", "snow", "stone", "water", "wood"];
	let stepTimer = 0;

	function playFootstep() {
		if (!S) return;
		const kind = FOOT[Math.floor(Math.random() * FOOT.length)];
		const cap = kind.charAt(0).toUpperCase() + kind.slice(1);
		const n = 1 + Math.floor(Math.random() * 4);
		S.playVaried("sound/player/foot/" + kind + "/" + cap + n + ".wav", 0.12, 0.45);
	}
	function playFire() {
		if (!S) return;
		/* the weapon is not known yet (it is in the bit packed player state),
		 * so the shotgun is used until that is decoded */
		S.playVaried("sound/weapons/shotgun/Fire.wav", 0.06, 0.85);
	}
	function playUse() {
		if (!S) return;
		S.playVaried("sound/misc/hlthstation/Health.wav", 0.1, 0.5);
	}

	/* ---------------------------------------------------------------------
	 * The console.
	 *
	 * The client can send string commands to the server on the same reliable
	 * channel the handshake uses, so the game's own commands ("sv_gravity
	 * 100", "weaponselect 1", "impulse 3" ...) work from the browser.  The
	 * backtick key opens it.
	 * ------------------------------------------------------------------- */
	const consoleEl = document.getElementById("console");
	const consoleInput = document.getElementById("consoleInput");
	const consoleLog = document.getElementById("consoleLog");
	let consoleOpen = false;

	function consolePrint(text, cls) {
		const line = document.createElement("div");
		line.textContent = text;
		if (cls) line.className = cls;
		consoleLog.appendChild(line);
		while (consoleLog.childNodes.length > 200) consoleLog.removeChild(consoleLog.firstChild);
		consoleLog.scrollTop = consoleLog.scrollHeight;
	}
	function openConsole() {
		consoleOpen = true;
		consoleEl.style.display = "block";
		consoleInput.focus();
	}
	function closeConsole() {
		consoleOpen = false;
		consoleEl.style.display = "none";
		consoleInput.blur();
	}
	consoleInput.addEventListener("keydown", function (e) {
		e.stopPropagation();
		if (e.key === "Enter") {
			const text = consoleInput.value.trim();
			consoleInput.value = "";
			if (text) {
				consolePrint("> " + text, "cmd");
				const local = text.split(/\s+/);
				if (local[0] === "thirdperson" || local[0] === "tp") {
					state.thirdPerson = !state.thirdPerson;
					consolePrint("camera: " + (state.thirdPerson ? "third person" : "first person"), "info");
				} else if (local[0] === "speed" && local[1]) {
					client.setMoveSpeed(parseFloat(local[1]));
					consolePrint("movement speed: " + local[1], "info");
				} else if (local[0] === "sensitivity" && local[1]) {
					client.setLookSpeed(parseFloat(local[1]));
					consolePrint("look sensitivity: " + local[1], "info");
				} else if (local[0] === "fov" && local[1]) {
					state.fov = parseFloat(local[1]);
					consolePrint("field of view: " + local[1], "info");
				} else if (local[0] === "help") {
					consolePrint("client: tp, speed <n>, sensitivity <n>, fov <n>", "info");
					consolePrint("everything else goes to the server", "info");
				} else if (local[0] === "weaponselect" && local[1] && window.sofviewmodel) {
					sofviewmodel.setWeapon(parseInt(local[1], 10));
					client.sendStringCmd(text);
					consolePrint("sent to the server", "info");
				} else {
					client.sendStringCmd(text);
					consolePrint("sent to the server", "info");
				}
			}
		} else if (e.key === "Escape") {
			closeConsole();
		}
	});

	// the protocol core keeps the netchan alive by itself (the server needs
	// the acknowledgement to advance), so nothing to do here
	applyMods();
	initWhiteTexture();
	loadMap("map_nycdm1.json");
	fetch("map_entities.json").then(function (r) { return r.json(); }).then(function (list) {
		mapItemList = list;
		mapItems = list.filter(function (e) { return e.origin && /item_/.test(e.classname); })
			.map(function (e) { return e.origin; });
	}).catch(function () { });
	loadServerList();
	setInterval(loadServerList, 20000);
	connect();
	requestAnimationFrame(frame);

	window.sofdebug = function () {
		try {
			return {
				status: state.status, connected: state.connected, spawned: state.spawned,
				frames: state.frames, frame: state.frameNumber, time: state.serverTime,
				entities: state.entities.size, seed: client.seed, seq: client.seq,
				srvSeq: client.srvSeq, gl: gl ? "webgl" : ("none: " + glError), log: state.log,
				map: state.cs[0] || null, configstrings: Object.keys(state.cs).length,
				mapStatus: mapStatus, mapTris: mapDrawn, mapBounds: state.mapBounds || null,
				self: state.hasSelf ? state.self : null,
				ents: Array.from(state.entities.keys()),
				playerOrigin: state.playerOrigin || null, dbg: state.dbg || null, err: state.err || null,
				psSeen: state.psSeen || 0, psOk: state.psOk || 0,
				items: mapItems.length,
			fm: client.view.forwardmove, sm: client.view.sidemove,
			btns: client.view.buttons, yaw: Math.round(client.view.yaw),
			vel: state.vel || 0, velMax: state.velMax || 0,
			auto: state.autoInfo || null,
			probe: state.probeResult || null,
				cam: { x: Math.round(cam.x), y: Math.round(cam.y), z: Math.round(cam.z) }
			};
		} catch (e) { return { error: String(e && e.message || e) }; }
	};
})();
