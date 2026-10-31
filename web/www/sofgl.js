/*
 * sofgl.js - the level's real lights in the WebGL client.
 *
 * The map's light entities (web/bsp2light.js -> www/map_lights.json) are
 * real point and spot lights: the origin, the colour, the intensity, the
 * radius and the flicker style.  This file feeds them to the map shader.
 *
 * The renderer (www/app.js) draws the map with a fixed directional light, so
 * the WebGL calls are wrapped: when the map program draws, the draw is
 * repeated with a lit program.  The lit program uses the same attribute
 * indices as the renderer's program (they are bound explicitly before the
 * link), so the vertex data does not have to be touched at all.
 *
 * The coordinates: the map is Z up and the renderer is Y up, so every light
 * is converted with (x, y, z) -> (x, z, y) when it is uploaded.
 */
(function () {
	"use strict";

	var MAXL = 16;           /* how many lights the shader gets */
	var SCALE = 0.016;       /* the light scale */
	var SUN_SCALE = 0.0055;  /* the sun's scale */
	var BASE = 0.30;         /* the base ambient, so the map is never black */
	var enabled = true;

	var data = null, status = "loading", err = "";
	var lights = [];         /* the lights, in the renderer's Y up space */
	var sun = null;
	var gl = null;
	var myMap = null, myEnt = null;
	var myPrograms = new Set();
	var progInfo = new Map();
	var curProgram = null;
	var lastMVP = null;
	var lastUpload = 0;
	var dataDirty = true;
	var sel = [];
	var cam = { x: 0, y: 0, z: 0 };
	var selected = 0, frames = 0, arrayDraws = 0, entSwaps = 0;

	var GLCTX = window.WebGLRenderingContext;
	if (!GLCTX) return;
	var proto = GLCTX.prototype;

	/* ------------------------------------------------------------- the data */
	function convert(v) { return [v[0], v[2], v[1]]; }   /* Z up -> Y up */

	/* the radius a light gets when the map does not give one: the intensity
	 * of the light is a brightness, so a brighter light reaches further */
	function radiusFor(i) {
		return Math.max(200, Math.min(1000, i * 1.6));
	}

	function load() {
		if (typeof fetch !== "function") { status = "no fetch"; return; }
		fetch("map_lights.json").then(function (r) {
			if (!r.ok) throw new Error("http " + r.status);
			return r.json();
		}).then(function (j) {
			data = j;
			lights = (j.lights || []).map(function (l) {
				return {
					p: convert(l.o),
					c: l.c,
					i: l.i,
					r: l.r > 0 ? l.r : radiusFor(l.i),
					s: l.s || 0,
					w: l.w || 0,
					d: l.d ? convert(l.d) : null,
					k: l.k || 0,
					n: l.n
				};
			});
			if (j.sun) {
				var c = j.bounds ? [
					(j.bounds.min[0] + j.bounds.max[0]) / 2,
					(j.bounds.min[1] + j.bounds.max[1]) / 2,
					(j.bounds.min[2] + j.bounds.max[2]) / 2
				] : [0, 0, 0];
				var dir = null;
				if (j.sun.origin) {
					/* the direction from the map to the sun */
					var d = [j.sun.origin[0] - c[0], j.sun.origin[1] - c[1], j.sun.origin[2] - c[2]];
					var l = Math.hypot(d[0], d[1], d[2]) || 1;
					dir = convert([d[0] / l, d[1] / l, d[2] / l]);
				}
				sun = {
					color: j.sun.color || [1, 1, 1],
					light: j.sun.light || 0,
					ambient: j.sun.ambient || [0, 0, 0],
					dir: dir
				};
			}
			status = lights.length + " lights";
			dataDirty = true;
		}).catch(function (e) {
			status = "error: " + (e.message || e);
		});
	}

	/* ------------------------------------------------------------ the shader */
	function shader(type, src) {
		var s = gl.createShader(type);
		gl.shaderSource(s, src);
		gl.compileShader(s);
		if (!gl.getShaderParameter(s, gl.COMPILE_STATUS))
			throw new Error("shader: " + gl.getShaderInfoLog(s));
		return s;
	}

	function makeProgram(vsSrc, fsSrc, binds) {
		var p = gl.createProgram();
		gl.attachShader(p, shader(gl.VERTEX_SHADER, vsSrc));
		gl.attachShader(p, shader(gl.FRAGMENT_SHADER, fsSrc));
		for (var i = 0; i < binds.length; i++) gl.bindAttribLocation(p, binds[i][0], binds[i][1]);
		gl.linkProgram(p);
		if (!gl.getProgramParameter(p, gl.LINK_STATUS))
			throw new Error("link: " + gl.getProgramInfoLog(p));
		myPrograms.add(p);
		return p;
	}

	function lightChunk() {
		return [
			"uniform int uLightCount;",
			"uniform vec4 uLightA[" + MAXL + "];",   /* xyz = the position, w = the radius */
			"uniform vec4 uLightB[" + MAXL + "];",   /* rgb = the colour, w = the spot's cosine */
			"uniform vec4 uLightC[" + MAXL + "];",   /* xyz = the spot's direction, w = the spot flag */
			"uniform vec3 uSunCol;",
			"uniform vec3 uSunDir;",
			"uniform vec3 uBase;",
			"void sofLight(vec3 n, vec3 wp, out vec3 lit){",
			"  vec3 sum = uSunCol * max(dot(n, uSunDir), 0.0);",
			"  for (int i = 0; i < " + MAXL + "; i++){",
			"    if (i >= uLightCount) break;",
			"    vec4 A = uLightA[i];",
			"    vec4 B = uLightB[i];",
			"    vec4 C = uLightC[i];",
			"    vec3 d = A.xyz - wp;",
			"    float dist = length(d);",
			"    if (dist > A.w) continue;",
			"    vec3 l = d / max(dist, 1.0);",
			"    float ndl = max(dot(n, l), 0.0);",
			"    if (C.w > 0.5){",
			"      float sp = dot(-l, C.xyz);",
			"      if (sp < B.w) continue;",
			"      ndl *= (sp - B.w) / max(0.02, 1.0 - B.w);",
			"    }",
			"    float att = 1.0 - dist / A.w;",
			"    att = att * att;",
			"    sum += B.rgb * (ndl * att);",
			"  }",
			/* the light sum is compressed, so a lamp does not blow out the
			 * surface right under it */
			"  lit = uBase + (vec3(1.0) - exp(-sum));",
			"}"
		].join("\n");
	}

	var MAP_VS = [
		"attribute vec3 aPos;",
		"attribute vec3 aNrm;",
		"attribute vec2 aUV;",
		"uniform mat4 uMVP;",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"varying vec3 vWP;",
		"void main(){",
		"  vN = aNrm; vUV = aUV;",
		"  vWP = aPos;",              /* the map's vertexes are in world space */
		"  gl_Position = uMVP * vec4(aPos,1.0);",
		"}"
	].join("\n");

	var MAP_FS = [
		"#ifdef GL_FRAGMENT_PRECISION_HIGH",
		"precision highp float;",
		"#else",
		"precision mediump float;",
		"#endif",
		"varying vec3 vN;",
		"varying vec2 vUV;",
		"varying vec3 vWP;",
		"uniform sampler2D uTex;",
		"uniform float uTexOn;",
		lightChunk(),
		"void main(){",
		"  vec3 n = normalize(vN);",
		"  vec3 c = vec3(0.62,0.60,0.56);",
		"  if (uTexOn > 0.5) c = texture2D(uTex, vUV).rgb;",
		"  vec3 lit;",
		"  sofLight(n, vWP, lit);",
		"  gl_FragColor = vec4(c * lit, 1.0);",
		"}"
	].join("\n");

	/* The entity geometry is the renderer's unit cube (the vertices are at
	 * -1 and +1), so the face normal is the dominant axis of the vertex.
	 * The renderer's own shader uses the radial direction instead, which is
	 * not a face normal. */
	var ENT_VS = [
		"attribute vec3 aPos;",
		"uniform mat4 uMVP;",
		"uniform mat4 uModel;",
		"varying vec3 vN;",
		"varying vec3 vWP;",
		"void main(){",
		"  vec3 p = aPos;",
		"  vec3 n;",
		"  if (abs(p.x) >= abs(p.y) && abs(p.x) >= abs(p.z)) n = vec3(p.x < 0.0 ? -1.0 : 1.0, 0.0, 0.0);",
		"  else if (abs(p.y) >= abs(p.z)) n = vec3(0.0, p.y < 0.0 ? -1.0 : 1.0, 0.0);",
		"  else n = vec3(0.0, 0.0, p.z < 0.0 ? -1.0 : 1.0);",
		"  vN = normalize((uModel * vec4(n,0.0)).xyz);",
		"  vWP = (uModel * vec4(aPos,1.0)).xyz;",
		"  gl_Position = uMVP * uModel * vec4(aPos,1.0);",
		"}"
	].join("\n");

	var ENT_FS = [
		"#ifdef GL_FRAGMENT_PRECISION_HIGH",
		"precision highp float;",
		"#else",
		"precision mediump float;",
		"#endif",
		"varying vec3 vN;",
		"varying vec3 vWP;",
		"uniform vec3 uColor;",
		lightChunk(),
		"void main(){",
		"  vec3 n = normalize(vN);",
		"  vec3 lit;",
		"  sofLight(n, vWP, lit);",
		"  gl_FragColor = vec4(uColor * lit, 1.0);",
		"}"
	].join("\n");

	/* ------------------------------------------------------- the light set */
	var bufA = new Float32Array(MAXL * 4);
	var bufB = new Float32Array(MAXL * 4);
	var bufC = new Float32Array(MAXL * 4);

	/* the flicker: 0 = constant, 1..31 = a linear flicker, 32..255 = a
	 * random flicker (the classic Quake II light styles) */
	function styleFactor(l, t) {
		if (l.s <= 0) return 1;
		if (l.s < 32) {
			var period = l.w > 0 ? l.w : 0.6;
			return 0.25 + 0.75 * (0.5 + 0.5 * Math.sin(t * Math.PI * 2 * l.s / period));
		}
		return 0.15 + 0.85 * Math.random();
	}

	/* the camera position out of the MVP matrix (the projection is a
	 * perspective matrix, so the view's rows are the scaled rows of the MVP) */
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

	function sameMatrix(a, b) {
		if (!a || !b) return false;
		for (var i = 0; i < 16; i++) if (a[i] !== b[i]) return false;
		return true;
	}

	/* the light set: the nearest lights to the camera.  The selection only
	 * changes when the camera moves, but the flicker has to be updated every
	 * frame, so the colours are uploaded every frame. */
	function prepareLights(mvp, ctx) {
		if (!enabled) return;
		var now = (typeof performance !== "undefined" ? performance.now() : Date.now());
		if (!sameMatrix(mvp, lastMVP) || dataDirty) {
			lastMVP = mvp ? new Float32Array(mvp) : null;
			dataDirty = false;
			selectLights(mvp);
		}
		if (now - lastUpload < 8) return;
		lastUpload = now;
		uploadLights(now / 1000, ctx);
	}

	function selectLights(mvp) {
		sel = [];
		if (!mvp) { selected = 0; return; }
		var e = eyeFromMVP(mvp);
		cam.x = e[0]; cam.y = e[1]; cam.z = e[2];
		var list = [];
		for (var i = 0; i < lights.length; i++) {
			var L = lights[i];
			var dx = L.p[0] - cam.x, dy = L.p[1] - cam.y, dz = L.p[2] - cam.z;
			var d = Math.sqrt(dx * dx + dy * dy + dz * dz);
			if (d > L.r) continue;
			list.push([d, i]);
		}
		list.sort(function (a, b) { return a[0] - b[0]; });
		if (list.length > MAXL) list.length = MAXL;
		sel = list.map(function (x) { return x[1]; });
		selected = sel.length;
	}

	function uploadLights(t, ctx) {
		for (var k = 0; k < MAXL; k++) {
			var o = k * 4;
			if (k >= sel.length) {
				bufA[o] = bufA[o + 1] = bufA[o + 2] = 0; bufA[o + 3] = 1;
				bufB[o] = bufB[o + 1] = bufB[o + 2] = 0; bufB[o + 3] = -1;
				bufC[o] = bufC[o + 1] = bufC[o + 2] = 0; bufC[o + 3] = 0;
				continue;
			}
			var L2 = lights[sel[k]];
			var gain = Math.pow(L2.i, 0.75) * SCALE * styleFactor(L2, t);
			bufA[o] = L2.p[0]; bufA[o + 1] = L2.p[1]; bufA[o + 2] = L2.p[2]; bufA[o + 3] = L2.r;
			bufB[o] = L2.c[0] * gain; bufB[o + 1] = L2.c[1] * gain; bufB[o + 2] = L2.c[2] * gain;
			bufB[o + 3] = L2.d ? Math.cos(L2.k * Math.PI / 180) : -1;
			if (L2.d) {
				bufC[o] = L2.d[0]; bufC[o + 1] = L2.d[1]; bufC[o + 2] = L2.d[2]; bufC[o + 3] = 1;
			} else {
				bufC[o] = bufC[o + 1] = bufC[o + 2] = 0; bufC[o + 3] = 0;
			}
		}
		var sc = sun ? sun.color : [1, 1, 1];
		var sl = sun ? sun.light : 0;
		var sd = sun && sun.dir ? sun.dir : [0, 1, 0];
		var am = sun ? sun.ambient : [0, 0, 0];
		var sunCol = [sc[0] * sl * SUN_SCALE, sc[1] * sl * SUN_SCALE, sc[2] * sl * SUN_SCALE];
		var base = [BASE + am[0] / 255, BASE + am[1] / 255, BASE + am[2] / 255];
		var progs = [];
		if (myMap) progs.push(myMap);
		if (myEnt) progs.push(myEnt);
		for (var p = 0; p < progs.length; p++) {
			var P = progs[p];
			ctx.useProgram(P.prog);
			ctx.uniform4fv(P.locA, bufA);
			ctx.uniform4fv(P.locB, bufB);
			ctx.uniform4fv(P.locC, bufC);
			ctx.uniform1i(P.locCount, sel.length);
			ctx.uniform3f(P.locSun, sunCol[0], sunCol[1], sunCol[2]);
			ctx.uniform3f(P.locSunDir, sd[0], sd[1], sd[2]);
			ctx.uniform3f(P.locBase, base[0], base[1], base[2]);
		}
	}

	/* ------------------------------------------------------------ the patch */
	function info(ctx, p) {
		if (progInfo.has(p)) return progInfo.get(p);
		var o = {
			kind: null,
			mvp: ctx.getUniformLocation(p, "uMVP"),
			model: ctx.getUniformLocation(p, "uModel"),
			color: ctx.getUniformLocation(p, "uColor"),
			tex: ctx.getUniformLocation(p, "uTex"),
			on: ctx.getUniformLocation(p, "uTexOn"),
			pos: ctx.getAttribLocation(p, "aPos"),
			nrm: ctx.getAttribLocation(p, "aNrm"),
			uv: ctx.getAttribLocation(p, "aUV")
		};
		if (!myPrograms.has(p)) {
			/* the map program has the vertex normals and the UVs, the entity
			 * program only the position - that is more stable than the names
			 * of the uniforms */
			if (o.nrm >= 0 && o.uv >= 0) o.kind = "map";
			else if (o.pos >= 0) o.kind = "entity";
		}
		progInfo.set(p, o);
		return o;
	}

	function buildMapProgram(ctx, mapProg) {
		gl = ctx;
		var i = info(ctx, mapProg);
		var mp = makeProgram(MAP_VS, MAP_FS, [
			[i.pos, "aPos"], [i.nrm, "aNrm"], [i.uv, "aUV"]
		]);
		myMap = {
			prog: mp,
			mvp: gl.getUniformLocation(mp, "uMVP"),
			tex: gl.getUniformLocation(mp, "uTex"),
			on: gl.getUniformLocation(mp, "uTexOn"),
			locA: gl.getUniformLocation(mp, "uLightA"),
			locB: gl.getUniformLocation(mp, "uLightB"),
			locC: gl.getUniformLocation(mp, "uLightC"),
			locCount: gl.getUniformLocation(mp, "uLightCount"),
			locSun: gl.getUniformLocation(mp, "uSunCol"),
			locSunDir: gl.getUniformLocation(mp, "uSunDir"),
			locBase: gl.getUniformLocation(mp, "uBase")
		};
	}

	function buildEntProgram(ctx, entProg) {
		gl = ctx;
		var i = info(ctx, entProg);
		var ep = makeProgram(ENT_VS, ENT_FS, [[i.pos, "aPos"]]);
		myEnt = {
			prog: ep,
			pos: i.pos,
			mvp: gl.getUniformLocation(ep, "uMVP"),
			model: gl.getUniformLocation(ep, "uModel"),
			color: gl.getUniformLocation(ep, "uColor"),
			locA: gl.getUniformLocation(ep, "uLightA"),
			locB: gl.getUniformLocation(ep, "uLightB"),
			locC: gl.getUniformLocation(ep, "uLightC"),
			locCount: gl.getUniformLocation(ep, "uLightCount"),
			locSun: gl.getUniformLocation(ep, "uSunCol"),
			locSunDir: gl.getUniformLocation(ep, "uSunDir"),
			locBase: gl.getUniformLocation(ep, "uBase")
		};
	}

	var origUseProgram = proto.useProgram;
	proto.useProgram = function (p) {
		curProgram = p;
		return origUseProgram.call(this, p);
	};

	var origDrawElements = proto.drawElements;
	proto.drawElements = function (mode, count, type, offset) {
		var ctx = this;
		var p = curProgram;
		try {
			if (!gl && ctx.getParameter) gl = ctx;
			if (p && !myPrograms.has(p) && enabled) {
				var i = info(ctx, p);
				if (i.kind === "map") {
					if (!myMap) buildMapProgram(ctx, p);
					/* the renderer's own uniforms are read back with getUniform:
					 * the WebGL location objects are not comparable */
					var mvp = ctx.getUniform(p, i.mvp);
					if (!mvp) return origDrawElements.call(ctx, mode, count, type, offset);
					var on = ctx.getUniform(p, i.on);
					prepareLights(mvp, ctx);
					ctx.useProgram(myMap.prog);
					ctx.uniformMatrix4fv(myMap.mvp, false, mvp);
					ctx.uniform1i(myMap.tex, 0);
					ctx.uniform1f(myMap.on, on === null || on === undefined ? 1 : on);
					origDrawElements.call(ctx, mode, count, type, offset);
					ctx.useProgram(p);
					frames++;
					return;
				}
			}
		} catch (e) {
			err = String(e.message || e);
			try { gl.useProgram(p); } catch (e1) { }
			return origDrawElements.call(ctx, mode, count, type, offset);
		}
		return origDrawElements.call(ctx, mode, count, type, offset);
	};

	var origDrawArrays = proto.drawArrays;
	proto.drawArrays = function (mode, first, count) {
		var ctx = this;
		var p = curProgram;
		try {
			if (!gl && ctx.getParameter) gl = ctx;
			arrayDraws++;
			if (p && !myPrograms.has(p) && enabled) {
				var i = info(ctx, p);
				if (i.kind === "entity") {
					entSwaps++;
					if (!myEnt) buildEntProgram(ctx, p);
					var mvp = ctx.getUniform(p, i.mvp);
					var model = ctx.getUniform(p, i.model);
					var color = ctx.getUniform(p, i.color);
					/* without the renderer's own uniforms the lit program
					 * would draw the entities at the origin, so the original
					 * draw is used instead */
					if (!mvp || !model || !color)
						return origDrawArrays.call(ctx, mode, first, count);
					prepareLights(mvp, ctx);
					ctx.useProgram(myEnt.prog);
					ctx.uniformMatrix4fv(myEnt.mvp, false, mvp);
					ctx.uniformMatrix4fv(myEnt.model, false, model);
					ctx.uniform3f(myEnt.color, color[0], color[1], color[2]);
					origDrawArrays.call(ctx, mode, first, count);
					ctx.useProgram(p);
					return;
				}
			}
		} catch (e) {
			err = String(e.message || e);
			try { gl.useProgram(p); } catch (e1) { }
			return origDrawArrays.call(ctx, mode, first, count);
		}
		return origDrawArrays.call(ctx, mode, first, count);
	};

	/* ------------------------------------------------------------- the state */
	window.soflights = {
		status: function () { return status; },
		info: function () {
			return {
				status: status, err: err, lights: lights.length, selected: selected,
				frames: frames, arrayDraws: arrayDraws, entSwaps: entSwaps, max: MAXL, scale: SCALE, enabled: enabled,
				base: BASE, sunScale: SUN_SCALE,
				cam: [Math.round(cam.x), Math.round(cam.y), Math.round(cam.z)],
				sun: sun ? { color: sun.color, light: sun.light, dir: sun.dir } : null
			};
		},
		setScale: function (v) { SCALE = v; lastMVP = null; lastUpload = 0; },
		setSunScale: function (v) { SUN_SCALE = v; lastMVP = null; lastUpload = 0; },
		setBase: function (v) { BASE = v; lastMVP = null; lastUpload = 0; },
		setEnabled: function (v) { enabled = !!v; lastMVP = null; lastUpload = 0; },
		/* the flicker factor of a light style, for the tests */
		styleFactor: function (style, wait, t) {
			return styleFactor({ s: style || 0, w: wait || 0 },
				t === undefined ? (typeof performance !== "undefined" ? performance.now() / 1000 : 0) : t);
		},
		/* the colours that are uploaded: the flicker is visible here */
		colors: function () { return Array.from(bufB); },
		debug: function () {
			var o = { hasEnt: !!myEnt, hasMap: !!myMap, selected: selected, enabled: enabled };
			if (myEnt) {
				o.entBase = gl.getUniform(myEnt.prog, myEnt.locBase);
				o.entCount = gl.getUniform(myEnt.prog, myEnt.locCount);
				o.entPos = myEnt.pos;
				o.entColor = gl.getUniform(myEnt.prog, myEnt.color);
				o.entA = gl.getUniform(myEnt.prog, myEnt.locA);
			}
			if (myMap) {
				o.mapBase = gl.getUniform(myMap.prog, myMap.locBase);
				o.mapCount = gl.getUniform(myMap.prog, myMap.locCount);
				o.entMVP = gl.getUniform(myEnt.prog, myEnt.mvp);
				o.entModel = gl.getUniform(myEnt.prog, myEnt.model);
				o.glError = gl.getError();
			}
			return o;
		},
		data: function () { return data; }
	};

	load();
})();
