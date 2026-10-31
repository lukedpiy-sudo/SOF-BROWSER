/*
 * soflight.js - the map's real baked lighting in the browser.
 *
 * The SoF BSP carries a baked lightmap for every surface (the LIGHTING lump
 * of the BSP: plain RGB, 3 bytes per luxel, one w x h block per face, in
 * face order).  The browser client used to draw the map with a static sun
 * and the map's light entities only, so the map looked flat.
 *
 * This module
 *   - loads web/www/map_bsp.json (the geometry, the texinfos and the
 *     per face lightmap parameters) and web/www/map_lightmaps.json (the
 *     lightmap atlas, a PNG),
 *   - builds its own vertex and index buffers with exactly the layout the
 *     renderer uses (pos, normal, uv) plus the lightmap atlas coordinate,
 *   - takes over the map draw: the base texture comes from the renderer's
 *     texture unit 0, the lightmap from the atlas on texture unit 1, and
 *     the map's light entities are added on top of the baked light, the way
 *     the engine does it (the lightmap carries the sun and the ambient, the
 *     light entities are dynamic).
 *
 * The coordinates: the map is Z up and the renderer is Y up, so every
 * position is converted with (x, y, z) -> (x, z, y).
 *
 * The module is self contained: it works with or without www/sofgl.js (it
 * reuses sofgl's light list when it is there).
 */
(function () {
	"use strict";

	var MAXL = 32;            /* the lights the shader gets */
	var SCALE = 0.016;        /* the light scale (the same as sofgl.js) */
	var MAXSTYLE = 256;       /* the engine's light style table */

	/* The engine draws the surfaces with the SURF_SKY flag (the material
	 * "subway/sky2" in nycdm1) as sky, not as geometry: the renderer
	 * diverts them out of the surface pass (ref_gl.dll, R_AddBrushPolys:
	 * "test al, 4" -> the sky path) and draws them as sky polygons that
	 * move with the view origin.  "subway/no_draw" is not drawn at all.
	 * www/sofsurface.js draws the sky. */
	var SKY_MAT = "subway/sky2";
	var NODRAW_MAT = "subway/no_draw";

	var GLCTX = window.WebGLRenderingContext;
	if (!GLCTX) return;
	var proto = GLCTX.prototype;

	var mapData = null, atlasData = null, lightData = null;
	var status = "loading", err = "";
	var gl = null;

	/* the geometry */
	var vbo = null, ibo = null, lmvbo = null;
	var indexCount = 0, vertexCount = 0;
	var atlasTex = null;
	var prog = null, loc = {};

	/* the lights (in the renderer's Y up space) */
	var lights = [], sel = [], selected = 0;
	var bufA = new Float32Array(MAXL * 4);
	var bufB = new Float32Array(MAXL * 4);
	var bufC = new Float32Array(MAXL * 4);

	/* the light styles: the engine keeps a 256 entry table of RGB that the
	 * server sends with svc_lightstyle.  A face uses the styles that its two
	 * style bytes name. */
	var styles = [];
	var styleDirty = false;

	var myPrograms = new Set();
	var mapProg = null;        /* the renderer's map program */
	var attrBase = 8;         /* the attribute indices this module uses */
	var frames = 0, draws = 0, lastStatus = "";
	var ambient = 0;          /* the map's ambient light (0..1) */
	var lmOnly = 0;           /* 1: draw the baked light on its own */
	var lightOnly = 0;        /* 1: draw the dynamic lights on their own (the proof) */
	var skies = 0;            /* the sky indices drawn */
	/* the fog: the engine's gl_fogstart/gl_fogend/gl_fogcolor are read only
	 * cvars whose default is unset ("-1"), so the engine has no fog unless
	 * it is set.  The range below is off (the start and the end are the
	 * same) until setFog() is called. */
	var fogStart = 1e9, fogEnd = 1e9;
	var fogColor = [0, 0, 0];

	/* ------------------------------------------------------------- helpers */
	function convert(v) { return [v[0], v[2], v[1]]; }   /* Z up -> Y up */

	function fetchJSON(url) {
		return fetch(url).then(function (r) {
			if (!r.ok) throw new Error(url + ": http " + r.status);
			return r.json();
		});
	}

	function loadImage(src) {
		return new Promise(function (res, rej) {
			var im = new Image();
			im.onload = function () { res(im); };
			im.onerror = function () { rej(new Error("the lightmap atlas did not load")); };
			im.src = src;
		});
	}

	/* ---------------------------------------------------------------- the data */
	function load() {
		Promise.all([fetchJSON("map_bsp.json"), fetchJSON("map_lightmaps.json")])
			.then(function (r) {
				mapData = r[0]; atlasData = r[1];
				styles = [];
				for (var i = 0; i < MAXSTYLE; i++) styles.push([0, 0, 0]);
				/* the lights: sofgl.js has them, otherwise read them here */
				if (window.soflights && window.soflights.data) {
					lightData = window.soflights.data();
				} else {
					return fetchJSON("map_lights.json").then(function (j) { lightData = j; });
				}
			})
			.then(function () {
				var j = lightData || {};
				lights = (j.lights || []).map(function (l) {
					return {
						p: convert(l.o), c: l.c, i: l.i,
						r: l.r > 0 ? l.r : Math.max(200, Math.min(1000, l.i * 1.6)),
						d: l.d ? convert(l.d) : null, k: l.k || 0, s: l.s || 0
					};
				});
				status = mapData.faces.length + " faces, " + lights.length + " lights";
			})
			.catch(function (e) {
				status = "error: " + (e.message || e);
			});
	}

	/* --------------------------------------------------------------- the shader */
	function shader(type, src) {
		var s = gl.createShader(type);
		gl.shaderSource(s, src);
		gl.compileShader(s);
		if (!gl.getShaderParameter(s, gl.COMPILE_STATUS))
			throw new Error("shader: " + gl.getShaderInfoLog(s));
		return s;
	}

	/* The attribute names are deliberately NOT aPos/aNrm/aUV: www/sofgl.js
	 * looks for exactly those names to recognise the renderer's own map and
	 * entity programs, and it would replace this module's program with its
	 * own (which has no lightmap). */
	var VS = [
		"attribute vec3 mPos;",
		"attribute vec3 mNrm;",
		"attribute vec2 mUV;",
		"attribute vec2 mLM;",
		"attribute vec3 mSty;",
		"uniform mat4 uMVP;",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"varying vec2 vLM;",
		"varying vec3 vSty;",
		"varying vec3 vWP;",
		"void main(){",
		"  vN = mNrm; vUV = mUV; vLM = mLM; vSty = mSty;",
		"  vWP = mPos;",
		"  gl_Position = uMVP * vec4(mPos, 1.0);",
		"}"
	].join("\n");

	var FS = [
		"#ifdef GL_FRAGMENT_PRECISION_HIGH",
		"precision highp float;",
		"#else",
		"precision mediump float;",
		"#endif",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"varying vec2 vLM;",
		"varying vec3 vSty;",
		"varying vec3 vWP;",
		"uniform sampler2D uTex;",
		"uniform sampler2D uLightmap;",
		"uniform float uTexOn;",
		"uniform float uAmb;",
		"uniform float uLMOnly;",
		"uniform float uLightOnly;",
		"uniform vec3 uEye;",
		"uniform vec3 uFogColor;",
		"uniform vec2 uFogRange;",
		"uniform int uLightCount;",
		"uniform vec4 uLightA[" + MAXL + "];",
		"uniform vec4 uLightB[" + MAXL + "];",
		"uniform vec4 uLightC[" + MAXL + "];",
		"void main(){",
		"  vec3 n = normalize(vN);",
		"  vec3 c = vec3(0.62,0.60,0.56);",
		"  if (uTexOn > 0.5) c = texture2D(uTex, vUV).rgb;",
		/* the baked light: the sun and the ambient of the map */
		"  vec3 lm = texture2D(uLightmap, vLM).rgb;",
		/* the map's light entities, added on top of the baked light */
		"  vec3 d = vec3(0.0);",
		"  for (int i = 0; i < " + MAXL + "; i++){",
		"    if (i >= uLightCount) break;",
		"    vec4 A = uLightA[i];",
		"    vec4 B = uLightB[i];",
		"    vec4 C = uLightC[i];",
		"    vec3 v = A.xyz - vWP;",
		"    float dist = length(v);",
		"    if (dist > A.w) continue;",
		"    vec3 l = v / max(dist, 1.0);",
		"    float ndl = max(dot(n, l), 0.0);",
		"    if (C.w > 0.5){",
		"      float sp = dot(-l, C.xyz);",
		"      if (sp < B.w) continue;",
		"      ndl *= (sp - B.w) / max(0.02, 1.0 - B.w);",
		"    }",
		"    float att = 1.0 - dist / A.w;",
		"    att = att * att;",
		"    d += B.rgb * (ndl * att);",
		"  }",
		/* The engine's formula: the lightmap scales the texture and the
		 * dynamic lights are added on top.  The map's ambient light (the
		 * worldspawn's _sun_ambient) is added to the baked light, because the
		 * lightmap only carries the sun.
		 *
		 * The dynamic lights are COMPRESSED the way the engine compresses its
		 * light sum (1 - exp(-sum), the same formula sofgl.js uses): added
		 * raw they are unbounded, and because they multiply the texture they
		 * blew the walls out to pure white. */
		"  vec3 dyn = vec3(1.0) - exp(-d);",
		"  if (uLightOnly > 0.5) { gl_FragColor = vec4(dyn, 1.0); return; }",
		"  vec3 lit = lm + dyn + vSty + vec3(uAmb);",
		"  if (uLMOnly > 0.5) { gl_FragColor = vec4(lm, 1.0); return; }",
		/* the fog: the engine's gl_fogstart/gl_fogend/gl_fogcolor are cvars
		 * that are unset ("-1") and read only, so the engine has no fog by
		 * default; the range below is off until it is set. */
		"  float fd = length(vWP - uEye);",
		"  float ff = clamp((fd - uFogRange.x) / max(uFogRange.y - uFogRange.x, 1.0), 0.0, 1.0);",
		"  gl_FragColor = vec4(mix(c * lit, uFogColor, ff), 1.0);",
		"}"
	].join("\n");

	/* ------------------------------------------------------------- the geometry */
	function build(ctx) {
		gl = ctx;
		var m = mapData;
		var pos = [], nrm = [], uvs = [], lm = [], sty = [], idx = [];
		var faces = m.faces;
		for (var i = 0; i < faces.length; i++) {
			var f = faces[i];
			if (!f.v || f.v.length < 3) continue;
			/* the sky and the no_draw surfaces are not drawn as geometry */
			if (f.mat === SKY_MAT || f.mat === NODRAW_MAT) continue;
			var base = pos.length / 3;
			for (var k = 0; k < f.v.length; k++) {
				var p = m.vertices[f.v[k]];
				pos.push(p[0], p[2], p[1]);            /* Z up -> Y up */
				/* the normal has to be converted as well, or the dot
				 * product with the light direction is wrong and every
				 * dynamic light contributes nothing */
				nrm.push(f.n[0], f.n[2], f.n[1]);
				var u = f.uv[k] || [0, 0];
				uvs.push(u[0], u[1]);
				var a = f.auv && f.auv[k] ? f.auv[k] : [0, 0];
				lm.push(a[0], a[1]);
				sty.push(0, 0, 0);
			}
			for (var t = 1; t + 1 < f.v.length; t++) idx.push(base, base + t, base + t + 1);
		}
		vertexCount = pos.length / 3;
		indexCount = idx.length;
		if (vertexCount > 65535) {
			/* the renderer uses 16 bit indices too, so this map cannot be
			 * drawn with them */
			status = "too many vertices (" + vertexCount + ")";
			return false;
		}
		/* the interleaved vertex buffer: the same layout as the renderer */
		var verts = new Float32Array(vertexCount * 8);
		for (var v = 0, o = 0; v < vertexCount; v++) {
			verts[o++] = pos[v * 3]; verts[o++] = pos[v * 3 + 1]; verts[o++] = pos[v * 3 + 2];
			verts[o++] = nrm[v * 3]; verts[o++] = nrm[v * 3 + 1]; verts[o++] = nrm[v * 3 + 2];
			verts[o++] = uvs[v * 2]; verts[o++] = uvs[v * 2 + 1];
		}
		vbo = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
		gl.bufferData(gl.ARRAY_BUFFER, verts, gl.STATIC_DRAW);
		lmvbo = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, lmvbo);
		gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(lm), gl.STATIC_DRAW);
		styVbo = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER, styVbo);
		gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(sty), gl.STATIC_DRAW);
		ibo = gl.createBuffer();
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER, ibo);
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER, new Uint16Array(idx), gl.STATIC_DRAW);

		/* the lightmap atlas */
		var img = new Image();
		img.onload = function () {
			atlasTex = gl.createTexture();
			gl.bindTexture(gl.TEXTURE_2D, atlasTex);
			gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, gl.RGBA, gl.UNSIGNED_BYTE, img);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
			/* the lightmaps are packed next to each other, so the atlas must
			 * not repeat and must not mipmap */
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
			gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
		};
		img.src = "data:image/png;base64," + atlasData.atlas.png;

		/* the program */
		/* the attribute indices have to be free, so that the renderer's own
		 * attribute pointers are not disturbed */
		if (mapProg) {
			var used = 0;
			["aPos", "aNrm", "aUV", "aLM"].forEach(function (n) {
				var i = gl.getAttribLocation(mapProg, n);
				if (i >= 0 && i > used) used = i;
			});
			attrBase = used + 1;
			if (attrBase + 4 > 15) attrBase = 15;
		}
		/* the sky needs two attribute indices of its own */
		if (window.sofsurface && window.sofsurface.setAttrBase)
			window.sofsurface.setAttrBase(attrBase + 5 > 14 ? 12 : attrBase + 5);
		prog = gl.createProgram();
		gl.attachShader(prog, shader(gl.VERTEX_SHADER, VS));
		gl.attachShader(prog, shader(gl.FRAGMENT_SHADER, FS));
		gl.bindAttribLocation(prog, attrBase + 0, "mPos");
		gl.bindAttribLocation(prog, attrBase + 1, "mNrm");
		gl.bindAttribLocation(prog, attrBase + 2, "mUV");
		gl.bindAttribLocation(prog, attrBase + 3, "mLM");
		gl.bindAttribLocation(prog, attrBase + 4, "mSty");
		gl.linkProgram(prog);
		if (!gl.getProgramParameter(prog, gl.LINK_STATUS))
			throw new Error("link: " + gl.getProgramInfoLog(prog));
		myPrograms.add(prog);
		loc = {
			mvp: gl.getUniformLocation(prog, "uMVP"),
			tex: gl.getUniformLocation(prog, "uTex"),
			lm: gl.getUniformLocation(prog, "uLightmap"),
			on: gl.getUniformLocation(prog, "uTexOn"),
			amb: gl.getUniformLocation(prog, "uAmb"),
			only: gl.getUniformLocation(prog, "uLMOnly"),
			lightonly: gl.getUniformLocation(prog, "uLightOnly"),
			eye: gl.getUniformLocation(prog, "uEye"),
			fogc: gl.getUniformLocation(prog, "uFogColor"),
			fogr: gl.getUniformLocation(prog, "uFogRange"),
			count: gl.getUniformLocation(prog, "uLightCount"),
			a: gl.getUniformLocation(prog, "uLightA"),
			b: gl.getUniformLocation(prog, "uLightB"),
			c: gl.getUniformLocation(prog, "uLightC")
		};
		/* the map's ambient light */
		var w = null;
		for (var i = 0; i < (m.entities || []).length; i++) {
			if (m.entities[i].classname === "worldspawn") { w = m.entities[i]; break; }
		}
		ambient = 0;
		if (w && w._sun_ambient) {
			var a = w._sun_ambient.trim().split(/\s+/).map(parseFloat);
			if (a.length === 3 && a.every(function (x) { return !isNaN(x); }))
				ambient = (a[0] + a[1] + a[2]) / 3 / 255;
		}
		lastStatus = status;
		return true;
	}
	var styVbo = null;

	/* -------------------------------------------------------- the light styles */
	/* the style colour of a face is the sum of the styles it names */
	function applyStyles() {
		if (!styVbo || !mapData) return;
		var faces = mapData.faces;
		var sty = [];
		for (var i = 0; i < faces.length; i++) {
			var f = faces[i];
			if (!f.v || f.v.length < 3) continue;
			/* the same faces the geometry skips (the sky and no_draw) */
			if (f.mat === SKY_MAT || f.mat === NODRAW_MAT) continue;
			var c = [0, 0, 0];
			if (f.sty) for (var s = 0; s < f.sty.length; s++) {
				var idx = f.sty[s];
				if (idx > 0 && idx < MAXSTYLE) {
					c[0] += styles[idx][0]; c[1] += styles[idx][1]; c[2] += styles[idx][2];
				}
			}
			for (var k = 0; k < f.v.length; k++) sty.push(c[0], c[1], c[2]);
		}
		gl.bindBuffer(gl.ARRAY_BUFFER, styVbo);
		gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(sty), gl.DYNAMIC_DRAW);
		styleDirty = false;
	}

	/* ------------------------------------------------------------- the lights */
	function eyeFromMVP(m) {
		var r0 = [m[0], m[4], m[8], m[12]];
		var r1 = [m[1], m[5], m[9], m[13]];
		var r3 = [m[3], m[7], m[11], m[15]];
		var len = function (v) { return Math.hypot(v[0], v[1], v[2]); };
		var a = len(r0) || 1, b = len(r1) || 1;
		var v0 = [r0[0] / a, r0[1] / a, r0[2] / a, r0[3] / a];
		var v1 = [r1[0] / b, r1[1] / b, r1[2] / b, r1[3] / b];
		var v2 = [-r3[0], -r3[1], -r3[2], -r3[3]];
		var t = [v0[3], v1[3], v2[3]];
		return [
			-(v0[0] * t[0] + v1[0] * t[1] + v2[0] * t[2]),
			-(v0[1] * t[0] + v1[1] * t[1] + v2[1] * t[2]),
			-(v0[2] * t[0] + v1[2] * t[1] + v2[2] * t[2])
		];
	}

	function selectLights(mvp) {
		sel = [];
		if (!mvp) { selected = 0; return; }
		var e = eyeFromMVP(mvp);
		var list = [];
		for (var i = 0; i < lights.length; i++) {
			var L = lights[i];
			var d = Math.hypot(L.p[0] - e[0], L.p[1] - e[1], L.p[2] - e[2]);
			if (d > L.r) continue;
			list.push([d, i]);
		}
		list.sort(function (a, b) { return a[0] - b[0]; });
		if (list.length > MAXL) list.length = MAXL;
		sel = list.map(function (x) { return x[1]; });
		selected = sel.length;
	}

	function uploadLights() {
		for (var k = 0; k < MAXL; k++) {
			var o = k * 4;
			if (k >= sel.length) {
				bufA[o] = bufA[o + 1] = bufA[o + 2] = 0; bufA[o + 3] = 1;
				bufB[o] = bufB[o + 1] = bufB[o + 2] = 0; bufB[o + 3] = -1;
				bufC[o] = bufC[o + 1] = bufC[o + 2] = 0; bufC[o + 3] = 0;
				continue;
			}
			var L = lights[sel[k]];
			var gain = Math.pow(L.i, 0.75) * SCALE;
			bufA[o] = L.p[0]; bufA[o + 1] = L.p[1]; bufA[o + 2] = L.p[2]; bufA[o + 3] = L.r;
			bufB[o] = L.c[0] * gain; bufB[o + 1] = L.c[1] * gain; bufB[o + 2] = L.c[2] * gain;
			bufB[o + 3] = L.d ? Math.cos(L.k * Math.PI / 180) : -1;
			if (L.d) {
				bufC[o] = L.d[0]; bufC[o + 1] = L.d[1]; bufC[o + 2] = L.d[2]; bufC[o + 3] = 1;
			} else {
				bufC[o] = bufC[o + 1] = bufC[o + 2] = 0; bufC[o + 3] = 0;
			}
		}
	}

	/* ---------------------------------------------------------------- the hook */
	var origDrawElements = proto.drawElements;

	function isMapProgram(p) {
		if (!p || myPrograms.has(p)) return false;
		try {
			return gl.getAttribLocation(p, "aNrm") >= 0 && gl.getAttribLocation(p, "aUV") >= 0;
		} catch (e) { return false; }
	}

	proto.drawElements = function (mode, count, type, offset) {
		var ctx = this;
		var p = ctx.getParameter ? ctx.getParameter(ctx.CURRENT_PROGRAM) : null;
		if (!gl && ctx.getParameter) gl = ctx;
		try {
			if (p && isMapProgram(p)) {
				mapProg = p;
				if (!mapData || !atlasData) return origDrawElements.call(ctx, mode, count, type, offset);
				if (!prog) { if (!build(ctx)) return origDrawElements.call(ctx, mode, count, type, offset); }
				if (!atlasTex) return origDrawElements.call(ctx, mode, count, type, offset);
				if (styleDirty) applyStyles();
				/* the renderer's uniforms */
				var mvpLoc = ctx.getUniformLocation(p, "uMVP");
				var onLoc = ctx.getUniformLocation(p, "uTexOn");
				var mvp = ctx.getUniform(p, mvpLoc);
				var on = ctx.getUniform(p, onLoc);
				/* the buffers the renderer had bound */
				var oldVBO = ctx.getParameter(ctx.ARRAY_BUFFER_BINDING);
				var oldIBO = ctx.getParameter(ctx.ELEMENT_ARRAY_BUFFER_BINDING);
				/* the light selection */
				selectLights(mvp);
				uploadLights();
				/* the eye: the camera in the renderer's Y up space */
				var e = mvp ? eyeFromMVP(mvp) : [0, 0, 0];
				/* the PVS: the leaf the camera is in */
				if (mvp) {
					/* the engine's Z up: the camera is at (x, y, z) with z up */
					updatePVS([e[0], e[2], e[1]]);
				}
				/* the sky: the engine's sky faces, moved with the view */
				if (window.sofsurface && window.sofsurface.draw) {
					skies += window.sofsurface.draw(ctx, mvp, e) || 0;
				}
				/* the draw */
				ctx.useProgram(prog);
				ctx.uniformMatrix4fv(loc.mvp, false, mvp);
				ctx.uniform1i(loc.tex, 0);
				ctx.uniform1i(loc.lm, 1);
				ctx.uniform1f(loc.on, (on === null || on === undefined) ? 1 : on);
				ctx.uniform1f(loc.amb, ambient);
				ctx.uniform1f(loc.only, lmOnly ? 1 : 0);
				ctx.uniform1f(loc.lightonly, lightOnly ? 1 : 0);
				ctx.uniform3f(loc.eye, e[0], e[1], e[2]);
				ctx.uniform3f(loc.fogc, fogColor[0], fogColor[1], fogColor[2]);
				ctx.uniform2f(loc.fogr, fogStart, fogEnd);
				ctx.uniform1i(loc.count, sel.length);
				ctx.uniform4fv(loc.a, bufA);
				ctx.uniform4fv(loc.b, bufB);
				ctx.uniform4fv(loc.c, bufC);
				ctx.activeTexture(ctx.TEXTURE1);
				ctx.bindTexture(ctx.TEXTURE_2D, atlasTex);
				ctx.activeTexture(ctx.TEXTURE0);
				ctx.bindBuffer(ctx.ARRAY_BUFFER, vbo);
				ctx.enableVertexAttribArray(attrBase + 0);
				ctx.vertexAttribPointer(attrBase + 0, 3, ctx.FLOAT, false, 32, 0);
				ctx.enableVertexAttribArray(attrBase + 1);
				ctx.vertexAttribPointer(attrBase + 1, 3, ctx.FLOAT, false, 32, 12);
				ctx.enableVertexAttribArray(attrBase + 2);
				ctx.vertexAttribPointer(attrBase + 2, 2, ctx.FLOAT, false, 32, 24);
				ctx.bindBuffer(ctx.ARRAY_BUFFER, lmvbo);
				ctx.enableVertexAttribArray(attrBase + 3);
				ctx.vertexAttribPointer(attrBase + 3, 2, ctx.FLOAT, false, 8, 0);
				ctx.bindBuffer(ctx.ARRAY_BUFFER, styVbo);
				ctx.enableVertexAttribArray(attrBase + 4);
				ctx.vertexAttribPointer(attrBase + 4, 3, ctx.FLOAT, false, 12, 0);
				ctx.bindBuffer(ctx.ELEMENT_ARRAY_BUFFER, ibo);
				origDrawElements.call(ctx, mode, count, type, offset);
				/* put the renderer's buffers back */
				ctx.bindBuffer(ctx.ARRAY_BUFFER, oldVBO);
				ctx.bindBuffer(ctx.ELEMENT_ARRAY_BUFFER, oldIBO);
				ctx.useProgram(p);
				ctx.activeTexture(ctx.TEXTURE0);
				frames++; draws++;
				return;
			}
		} catch (e) {
			err = String((e && e.message) || e);
			try { ctx.useProgram(p); } catch (e1) { }
			return origDrawElements.call(ctx, mode, count, type, offset);
		}
		return origDrawElements.call(ctx, mode, count, type, offset);
	};

	/* ------------------------------------------------------------- the PVS */
	/* The visibility lump (the PVS) is published in map_pvs.json: the
	 * bitmask of every cluster and the leaf table.  The engine culls the
	 * surfaces with it: the leaf the camera is in gives the cluster, the
	 * cluster's bitmask gives the clusters that are visible. */
	var pvsData = null, pvsLeaf = -1, pvsClusters = null, pvsFaces = 0;

	function loadPVS() {
		if (typeof fetch !== "function") return;
		fetch("map_pvs.json").then(function (r) {
			if (!r.ok) throw new Error("http " + r.status);
			return r.json();
		}).then(function (j) {
			pvsData = j;
			pvsBytes = j.pvsBytes;
			pvsBits = new Uint8Array(j.pvs.length);
			for (var i = 0; i < pvsBits.length; i++) pvsBits[i] = j.pvs.charCodeAt(i);
			status = (atlasData ? atlasData.atlas.w + "x" + atlasData.atlas.h : "") +
				" atlas, " + j.clusters + " clusters, " + j.leaves.length + " leafs";
		}).catch(function (e) {
			pvsError = String(e.message || e);
		});
	}
	var pvsBytes = 0, pvsBits = null, pvsError = "";

	/* the leaf that contains the point (the engine's leaf boxes) */
	function leafAt(p) {
		if (!pvsData) return -1;
		var L = pvsData.leaves;
		for (var i = 0; i < L.length; i++) {
			var l = L[i];
			if (l.cluster < 0) continue;
			if (p[0] < l.mins[0] || p[0] > l.maxs[0]) continue;
			if (p[1] < l.mins[1] || p[1] > l.maxs[1]) continue;
			if (p[2] < l.mins[2] || p[2] > l.maxs[2]) continue;
			return i;
		}
		return -1;
	}
	/* the clusters that are visible from the point, and the number of faces */
	function updatePVS(p) {
		if (!pvsData || !pvsBits) return;
		var li = leafAt(p);
		if (li < 0) { pvsLeaf = -1; pvsClusters = null; return; }
		pvsLeaf = li;
		var cluster = pvsData.leaves[li].cluster;
		if (cluster < 0) { pvsClusters = null; return; }
		var off = cluster * pvsBytes;
		var mask = [];
		for (var i = 0; i < pvsBytes; i++) {
			var b = pvsBits[off + i];
			if (!b) continue;
			for (var k = 0; k < 8; k++) if (b & (1 << k)) mask.push(i * 8 + k);
		}
		pvsClusters = mask;
		/* the faces of the visible leafs */
		var lf = pvsData.leaffaces, n = 0;
		for (var j = 0; j < pvsData.leaves.length; j++) {
			var c = pvsData.leaves[j].cluster;
			if (c < 0) continue;
			if (mask.indexOf(c) < 0) continue;
			var first = pvsData.leaves[j].firstleafbrush;
			n++;
		}
		pvsFaces = n;
	}

	/* ------------------------------------------------------------- the state */
	window.soflight = {
		status: function () { return status; },
		info: function () {
			return {
				status: status, err: err, frames: frames, draws: draws,
				faces: mapData ? mapData.faces.length : 0,
				vertices: vertexCount, indices: indexCount,
				lights: lights.length, selected: selected,
				atlas: atlasData ? [atlasData.atlas.w, atlasData.atlas.h] : null,
				ambient: ambient, lmOnly: lmOnly,
				onlyLoc: loc.only ? 1 : 0, lmLoc: loc.lm ? 1 : 0,
				glErr: gl ? gl.getError() : -1,
				style0: styles[1], style1: styles[2],
				pvs: {
					clusters: pvsData ? pvsData.clusters : 0,
					leafs: pvsData ? pvsData.leaves.length : 0,
					leaf: pvsLeaf,
					visible: pvsClusters ? pvsClusters.length : 0,
					visibleLeafs: pvsFaces,
					error: pvsError
				}
			};
		},
		/* the PVS: the visible clusters and the leaf the camera is in */
		pvs: function () {
			return { leaf: pvsLeaf, clusters: pvsClusters, visibleLeafs: pvsFaces };
		},
		leafAt: leafAt,
		/* the engine's light style table: the server sends the colour of every
		 * style with svc_lightstyle */
		setStyle: function (i, r, g, b) {
			if (i < 0 || i >= MAXSTYLE) return false;
			styles[i] = [r || 0, g || 0, b || 0];
			styleDirty = true;
			return true;
		},
		styles: function () { return styles.map(function (s) { return s.slice(); }); },
		/* 1: draw the baked lightmap on its own (the proof that the lightmap
		 * is decoded and mapped correctly) */
		setLightmapOnly: function (v) { lmOnly = v ? 1 : 0; return lmOnly; },
		/* 1: draw the dynamic lights on their own (the proof that the light
		 * data reaches the GPU) */
		setLightOnly: function (v) { lightOnly = v ? 1 : 0; return lightOnly; },
		lightInfo: function () {
			var out = { locs: [loc.a, loc.b, loc.c], count: sel.length, lights: [] };
			for (var i = 0; i < sel.length && i < 4; i++) {
				var L = lights[sel[i]];
				out.lights.push({ p: L.p, c: L.c, i: L.i, r: L.r, d: L.d, k: L.k });
			}
			return out;
		},
		/* the fog: the engine's gl_fogstart / gl_fogend / gl_fogcolor.  The
		 * engine's cvars are unset and read only, so the fog is off until
		 * it is set here. */
		setFog: function (start, end, r, g, b) {
			fogStart = start > 0 ? start : 1e9;
			fogEnd = end > 0 ? end : 1e9;
			fogColor = [r || 0, g || 0, b || 0];
			return { start: fogStart, end: fogEnd, color: fogColor };
		},
		fog: function () { return { start: fogStart, end: fogEnd, color: fogColor }; },
		skies: function () { return skies; },
		ambient: function () { return ambient; },
		setScale: function (v) { SCALE = v; },
		data: function () { return mapData; }
	};

	load();
	loadPVS();

	/* the sky module: it is loaded here so that index.html does not have to
	 * change (the script tag works too) */
	if (!window.sofsurface) {
		var sc = document.createElement("script");
		sc.src = "sofsurface.js";
		sc.async = false;
		document.head.appendChild(sc);
	}
})();

