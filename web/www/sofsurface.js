/*
 * sofsurface.js - the map's sky.
 *
 * The engine does not draw the sky as a box around the camera: the map
 * carries its own sky faces (the surfaces with the SURF_SKY flag, the
 * material "subway/sky2" in nycdm1) and the renderer
 *
 *   - diverts every surface with SURF_SKY out of the normal surface pass
 *     (ref_gl.dll, R_AddBrushPolys: "test al, 4" -> the sky path), so those
 *     faces are never drawn as textured geometry,
 *   - draws them as sky polygons whose vertices are moved with the view
 *     origin (the sky does not move with the player), clipped against the
 *     near plane ("ClipSkyPolygon: MAX_CLIP_VERTS"),
 *   - picks the texture by the dominant axis of the polygon's normal and
 *     maps it with the position (the face table at ref_gl.dll 0x3002ff60:
 *     the face 0 = +X, 1 = -X, 2 = +Y, 3 = -Y, 4 = +Z, 5 = -Z, and the .txt
 *     file "pics/sky/<sky>.txt" gives one texture per face in that order).
 *
 * This module does the same: it reads web/www/map_sky.json (the .txt file
 * and the .m32 textures of the sky) and web/www/map_bsp.json (the sky
 * faces of the map) and draws the sky faces with the view origin as the
 * offset.
 */
(function () {
	"use strict";

	var GLCTX = window.WebGLRenderingContext;
	if (!GLCTX) return;

	var data = null, map = null, gl = null;
	var prog = null, loc = {}, vbo = null, ibo = null, indexCount = 0;
	/* the attribute indices: they must not disturb the renderer's own
	 * attribute pointers, so the map module hands out a free base */
	var attrBase = 12;
	var tex = {}, texReady = 0, texWanted = 0;
	var status = "loading", err = ""; var drawn = 0;
	var eye = [0, 0, 0];

	var VS = [
		"attribute vec3 sPos;",
		"attribute vec2 sUV;",
		"uniform mat4 uMVP;",
		"uniform vec3 uEye;",
		"varying vec2 vUV;",
		"void main(){",
		"  vUV = sUV;",
		/* the sky follows the camera: the vertices are moved with the view */
		"  gl_Position = uMVP * vec4(sPos - uEye, 1.0);",
		"}"
	].join("\n");
	var FS = [
		"#ifdef GL_FRAGMENT_PRECISION_HIGH",
		"precision highp float;",
		"#else",
		"precision mediump float;",
		"#endif",
		"varying vec2 vUV;",
		"uniform sampler2D uTex;",
		"void main(){ gl_FragColor = vec4(texture2D(uTex, vUV).rgb, 1.0); }"
	].join("\n");

	/* The sky is at infinity: the engine moves the sky faces with the view
	 * origin and draws them with the view matrix without the origin
	 * translation.  The renderer hands us the full MVP (the projection times
	 * the view, and the view carries the camera translation), so the sky
	 * gets the same matrix with the translation column removed: that is the
	 * projection times the rotation, and the vertices are relative to the
	 * eye. */
	var skyMvp = new Float32Array(16);
	function skyMatrix(mvp, e) {
		for (var i = 0; i < 16; i++) skyMvp[i] = mvp[i];
		skyMvp[12] = 0; skyMvp[13] = 0; skyMvp[14] = 0;
		return skyMvp;
	}

	function fetchJSON(url) {
		return fetch(url).then(function (r) {
			if (!r.ok) throw new Error(url + ": http " + r.status);
			return r.json();
		});
	}

	/* the sky faces of the map: the surfaces the engine draws as sky */
	function isSky(mat) {
		return mat === "subway/sky2";
	}
	function isNoDraw(mat) {
		return mat === "subway/no_draw";
	}

	function load() {
		Promise.all([fetchJSON("map_sky.json"), fetchJSON("map_bsp.json")]).then(function (r) {
			data = r[0]; map = r[1];
			texWanted = 0;
			for (var k in data.textures) if (data.textures.hasOwnProperty(k)) {
				texWanted++;
				makeTexture(k, data.textures[k]);
			}
			build();
		}).catch(function (e) {
			status = "error: " + (e.message || e);
			err = String(e.message || e);
		});
	}

	function makeTexture(key, t) {
		var im = new Image();
		im.onload = function () {
			texReady++;
			tex[key] = null;        /* the GL texture is made with the first draw */
		};
		im.onerror = function () { err = "the sky texture " + key + " did not load"; };
		im.src = "data:image/png;base64," + t.png;
		images[key] = im;
	}
	var images = {};

	/* the GL texture of a sky image (made with the first draw, when the
	 * WebGL context is known) */
	function textureOf(ctx, key) {
		if (tex[key]) return tex[key];
		var im = images[key];
		if (!im || !im.complete || !im.width) return null;
		var o = ctx.createTexture();
		ctx.bindTexture(ctx.TEXTURE_2D, o);
		ctx.texImage2D(ctx.TEXTURE_2D, 0, ctx.RGBA, ctx.RGBA, ctx.UNSIGNED_BYTE, im);
		ctx.texParameteri(ctx.TEXTURE_2D, ctx.TEXTURE_MIN_FILTER, ctx.LINEAR);
		ctx.texParameteri(ctx.TEXTURE_2D, ctx.TEXTURE_MAG_FILTER, ctx.LINEAR);
		ctx.texParameteri(ctx.TEXTURE_2D, ctx.TEXTURE_WRAP_S, ctx.CLAMP_TO_EDGE);
		ctx.texParameteri(ctx.TEXTURE_2D, ctx.TEXTURE_WRAP_T, ctx.CLAMP_TO_EDGE);
		tex[key] = o;
		return o;
	}

	/* the dominant axis of a normal: 1 = X, 2 = Y, 3 = Z (the map is Z up) */
	function axisOf(n) {
		var x = Math.abs(n[0]), y = Math.abs(n[1]), z = Math.abs(n[2]);
		if (x >= y && x >= z) return n[0] >= 0 ? 1 : -1;
		if (y >= z) return n[1] >= 0 ? 2 : -2;
		return n[2] >= 0 ? 3 : -3;
	}
	/* the component of a point along an axis (1 = X, 2 = Y, 3 = Z, the sign
	 * flips the axis) */
	function comp(p, a) {
		var i = a < 0 ? -a : a;
		var v = p[i - 1];
		return a < 0 ? -v : v;
	}

	function build() {
		gl = gl || (window.__sofglCtx || null);
		/* the sky faces and their texture (by the dominant axis) */
		var faces = map.faces || [];
		var groups = {};       /* the axis -> the faces */
		for (var i = 0; i < faces.length; i++) {
			var f = faces[i];
			if (!f.v || f.v.length < 3) continue;
			if (!isSky(f.mat)) continue;
			var a = axisOf(f.n);
			if (!groups[a]) groups[a] = [];
			groups[a].push(f);
		}
		/* the texture of a face: the .txt order is the face order, and the
		 * renderer's face table gives the axis of every face */
		var byAxis = {};
		for (var k = 0; k < data.faces.length; k++) {
			var d = data.faces[k];
			if (!d.file) continue;
			byAxis[d.axis] = d;
		}
		/* the range of every axis group: the engine maps the texture with
		 * the position of the sky faces, normalised over their extent */
		var range = {};
		for (var g in groups) {
			if (!groups.hasOwnProperty(g)) continue;
			var d = byAxis[parseInt(g, 10)];
			if (!d) continue;
			var mn = [Infinity, Infinity], mx = [-Infinity, -Infinity];
			for (var q = 0; q < groups[g].length; q++) {
				var f2 = groups[g][q];
				for (var w = 0; w < f2.v.length; w++) {
					var p = map.vertices[f2.v[w]];
					var cs = comp(p, d.s), ct = comp(p, d.t);
					if (cs < mn[0]) mn[0] = cs; if (cs > mx[0]) mx[0] = cs;
					if (ct < mn[1]) mn[1] = ct; if (ct > mx[1]) mx[1] = ct;
				}
			}
			range[g] = { d: d, mn: mn, mx: mx };
		}
		/* the geometry: one quad per sky face, with the texture coordinates */
		var pos = [], uvs = [], idx = [];
		counts = {}; offsets = {};
		for (var a2 in range) {
			if (!range.hasOwnProperty(a2)) continue;
			var r = range[a2], dd = r.d;
			offsets[a2] = idx.length;
			for (var q2 = 0; q2 < groups[a2].length; q2++) {
				var f3 = groups[a2][q2];
				var base = pos.length / 3;
				for (var w2 = 0; w2 < f3.v.length; w2++) {
					var p2 = map.vertices[f3.v[w2]];
					/* the map is Z up, the renderer is Y up */
					pos.push(p2[0], p2[2], p2[1]);
					var cs2 = comp(p2, dd.s), ct2 = comp(p2, dd.t);
					var u = (cs2 - r.mn[0]) / Math.max(r.mx[0] - r.mn[0], 1);
					var v = (ct2 - r.mn[1]) / Math.max(r.mx[1] - r.mn[1], 1);
					uvs.push(u, 1 - v);
				}
				for (var t = 1; t + 1 < f3.v.length; t++) idx.push(base, base + t, base + t + 1);
			}
			counts[a2] = idx.length - offsets[a2];
		}
		indexList = idx;
		indexCount = idx.length;
		if (!indexCount) { status = "no sky faces"; return; }
		/* the program and the buffers are made with the first draw */
		verts = new Float32Array(pos.length / 3 * 5);
		for (var v2 = 0, o = 0; v2 < pos.length / 3; v2++) {
			verts[o++] = pos[v2 * 3]; verts[o++] = pos[v2 * 3 + 1]; verts[o++] = pos[v2 * 3 + 2];
			verts[o++] = uvs[v2 * 2]; verts[o++] = uvs[v2 * 2 + 1];
		}
		/* the faces, grouped by their texture */
		drawList = [];
		for (var a3 in range) {
			if (!range.hasOwnProperty(a3)) continue;
			drawList.push({ tex: range[a3].d.texture, axis: parseInt(a3, 10) });
		}
		status = (data.faces.length) + " sky faces, " + Object.keys(range).length + " directions";
	}
	var verts = null, drawList = [];

	function ensure(ctx) {
		gl = ctx;
		if (!prog) {
			prog = ctx.createProgram();
			ctx.attachShader(prog, shader(ctx, ctx.VERTEX_SHADER, VS));
			ctx.attachShader(prog, shader(ctx, ctx.FRAGMENT_SHADER, FS));
			ctx.bindAttribLocation(prog, attrBase + 0, "sPos");
			ctx.bindAttribLocation(prog, attrBase + 1, "sUV");
			ctx.linkProgram(prog);
			if (!ctx.getProgramParameter(prog, ctx.LINK_STATUS))
				throw new Error("the sky program: " + ctx.getProgramInfoLog(prog));
			loc = {
				mvp: ctx.getUniformLocation(prog, "uMVP"),
				eye: ctx.getUniformLocation(prog, "uEye"),
				tex: ctx.getUniformLocation(prog, "uTex")
			};
			vbo = ctx.createBuffer();
			ctx.bindBuffer(ctx.ARRAY_BUFFER, vbo);
			ctx.bufferData(ctx.ARRAY_BUFFER, verts, ctx.STATIC_DRAW);
			ibo = ctx.createBuffer();
			ctx.bindBuffer(ctx.ELEMENT_ARRAY_BUFFER, ibo);
			ctx.bufferData(ctx.ELEMENT_ARRAY_BUFFER, new Uint16Array(indexList), ctx.STATIC_DRAW);
		}
	}
	var indexList = [];

	function shader(ctx, type, src) {
		var s = ctx.createShader(type);
		ctx.shaderSource(s, src);
		ctx.compileShader(s);
		if (!ctx.getShaderParameter(s, ctx.COMPILE_STATUS))
			throw new Error("the sky shader: " + ctx.getShaderInfoLog(s));
		return s;
	}

	/* the draw: the sky faces with the view origin as the offset */
	function draw(ctx, mvp, e) {
		if (!data || !map || !indexCount) return 0;
		if (texReady < texWanted) return 0;
		try {
			ensure(ctx);
			ctx.useProgram(prog);
			ctx.uniformMatrix4fv(loc.mvp, false, skyMatrix(mvp, e));
			ctx.uniform3f(loc.eye, e[0], e[1], e[2]);
			ctx.uniform1i(loc.tex, 0);
			ctx.bindBuffer(ctx.ARRAY_BUFFER, vbo);
			ctx.enableVertexAttribArray(attrBase + 0);
			ctx.vertexAttribPointer(attrBase + 0, 3, ctx.FLOAT, false, 20, 0);
			ctx.enableVertexAttribArray(attrBase + 1);
			ctx.vertexAttribPointer(attrBase + 1, 2, ctx.FLOAT, false, 20, 12);
			ctx.bindBuffer(ctx.ELEMENT_ARRAY_BUFFER, ibo);
			/* the renderer draws the map's texture on the unit 0: it must be
			 * put back after the sky */
			ctx.activeTexture(ctx.TEXTURE0);
			var oldTex = ctx.getParameter(ctx.TEXTURE_BINDING_2D);
			var n = 0;
			for (var i = 0; i < drawList.length; i++) {
				var t = textureOf(ctx, drawList[i].tex);
				if (!t) continue;
				ctx.activeTexture(ctx.TEXTURE0);
				ctx.bindTexture(ctx.TEXTURE_2D, t);
				var c = countOf(drawList[i].axis);
				if (!c) continue;
				ctx.drawElements(ctx.TRIANGLES, c, ctx.UNSIGNED_SHORT, offsetOf(drawList[i].axis) * 2);
				n += c;
			}
			/* the renderer's own texture back */
			ctx.bindTexture(ctx.TEXTURE_2D, oldTex);
			drawn = n;
			return n;
		} catch (e2) {
			err = String((e2 && e2.message) || e2);
			return 0;
		}
	}
	var counts = {}, offsets = {};
	function countOf(axis) { return counts[axis] || 0; }
	function offsetOf(axis) { return offsets[axis] || 0; }

	window.sofsurface = {
		status: function () { return status; },
		error: function () { return err; },
		info: function () {
			return {
				status: status, err: err, faces: data ? data.faces.length : 0,
				textures: texReady, wanted: texWanted, indices: indexCount, drawn: drawn,
				drawList: drawList.map(function (d) { return d.tex + ":" + d.axis; })
			};
		},
		draw: draw,
		/* the free attribute indices (the map module knows them) */
		setAttrBase: function (n) { if (!prog && n >= 0 && n < 14) attrBase = n; return attrBase; },
		/* the materials the engine draws as sky (the SURF_SKY flag) */
		isSky: isSky, isNoDraw: isNoDraw
	};

	load();
})();
