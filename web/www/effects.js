/*
 * effects.js - the particle and decal system of the browser client.
 *
 * The server sends the effects as temp entities (svc 0x01): a u8 with the
 * index of the client's effect function (the table at SoF.exe 0x201343E0, the
 * map in web/effectmap.js) followed by the values the function of the index
 * reads out of the message (the origin and the parameters of the effect).
 *
 * The effect itself is a .eft file (web/eft.js decodes it): a list of
 * emitters with the name of the texture and the numbers of the particle
 * system (the life, the speed, the size, the gravity and the colour ramp).
 * One of the FX emitter classes is the **Decal** (class 3): its record and
 * runtime are decoded in analysis/render_extras.md §4 and
 * analysis/eft_semantics.md §2.4.  Its texture is an .m32 image, whose
 * container is decoded in analysis/render_extras.md §2 (version 4, mip 0 at
 * 0x3C8, 4 bytes per pixel RGBA).  parseM32() below is that container.
 *
 * Phase 2 of the browser port adds:
 *   - parseDecal()  - recognise the class-3 record inside a decoded .eft and
 *                     return its growth/size/direction fields,
 *   - persistent decals (blood pools, scorch marks) that grow the way the
 *     engine's Decal emitter grows and are drawn as world-space quads,
 *   - the .m32 detail-texture overlay (gl_detailtexturing, the detail name
 *     and the 4-float detail matrix of the m32 header, render_extras.md §3),
 *   - fog and a shared camera: setFog() mirrors soflight's world fog, and the
 *     MVP cached by sofsurface.draw() is used when the caller does not pass
 *     one, so no change to app.js is needed.
 *
 * Everything degrades gracefully: no .eft, no pak, no WebGL, no matrix or a
 * broken shader just leaves the system quiet - it never throws at the caller.
 *
 * The module runs in Node (CommonJS) and in the browser.
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.sofeffects = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	/* the defaults of a particle system: they are used when the .eft does
	 * not carry the value (the engine has the same defaults) */
	var DEFAULTS = {
		life: 0.5,          /* the life of a particle in seconds */
		speed: 4,           /* the speed of the particles in units/second */
		size: 0.25,         /* the size of a particle in units */
		gravity: 0,         /* the gravity in units/second^2 */
		count: 8,           /* the number of particles of an emitter */
		spread: 1,          /* the cone of the emitter */
		lifeSpread: 0.3,    /* the random part of the life */
		speedSpread: 0.4    /* the random part of the speed */
	};

	var MAX_PARTICLES = 4096;
	var MAX_DECALS = 256;           /* a ring: the oldest pools are recycled */
	var DECAL_LIFE = 120;           /* seconds; the engine keeps them per level */

	/* The effect table of the client (SoF.exe 0x201343E0): the index of the
	 * effect function and the values its function reads out of the message.
	 * It is a copy of web/effectmap.js, so that the browser needs only
	 * eft.js and effects.js. */
	var EFFECTS = [
	{ index: 0, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 1, fn: 0x20028eb0, read: "vec3", names: [] },
	{ index: 2, fn: 0x20028ed0, read: "vec3 u8 u8 u8 u8", names: [] },
	{ index: 3, fn: 0x200291e0, read: "", names: [] },
	{ index: 4, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 5, fn: 0x2008a990, read: "", names: [] },
	{ index: 6, fn: 0x20040eb0, read: "vec3 u8 u8 u8", names: [] },
	{ index: 7, fn: 0x20040eb0, read: "vec3 u8 u8 u8", names: [] },
	{ index: 8, fn: 0x20029520, read: "vec3 u8 str", names: [] },
	{ index: 9, fn: 0x200439e0, read: "u8 vec3 vec3 u8 u8", names: [] },
	{ index: 10, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 11, fn: 0x200295b0, read: "vec3 u16 u8", names: [] },
	{ index: 12, fn: 0x200296e0, read: "vec3", names: [] },
	{ index: 13, fn: 0x200299c0, read: "", names: [] },
	{ index: 14, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 15, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 16, fn: 0x20029b10, read: "", names: [] },
	{ index: 17, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 18, fn: 0x20029e70, read: "vec3 str u8 u8 u8 u8 u8 u8 u8", names: [] },
	{ index: 19, fn: 0x20044010, read: "", names: [] },
	{ index: 20, fn: 0x20044770, read: "vec3", names: [] },
	{ index: 21, fn: 0x20044ac0, read: "vec3", names: [] },
	{ index: 22, fn: 0x2008a990, read: "", names: [] },
	{ index: 23, fn: 0x20041220, read: "vec3 u8", names: [] },
	{ index: 24, fn: 0x20044bc0, read: "vec3 vec3 u8 u16 u8", names: [] },
	{ index: 25, fn: 0x20044f40, read: "vec3 vec3", names: [] },
	{ index: 26, fn: 0x2002a6e0, read: "vec3 u8", names: [] },
	{ index: 27, fn: 0x2002a800, read: "vec3 vec3", names: [] },
	{ index: 28, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 29, fn: 0x20029440, read: "", names: [] },
	{ index: 30, fn: 0x20029440, read: "", names: [] },
	{ index: 31, fn: 0x20028cc0, read: "vec3 str", names: [] },
	{ index: 32, fn: 0x20045550, read: "vec3 str u8", names: [] },
	{ index: 33, fn: 0x200450f0, read: "vec3 u8", names: [] },
	{ index: 34, fn: 0x20044d70, read: "vec3 vec3", names: [] },
	{ index: 35, fn: 0x20045910, read: "u16 u16 u16 u8", names: [] },
	{ index: 36, fn: 0x20045d00, read: "u16 u16 u16 u16 u16", names: [] },
	{ index: 37, fn: 0x20045f80, read: "u16 u16", names: [] },
	{ index: 38, fn: 0x20046740, read: "vec3", names: [] },
	{ index: 39, fn: 0x20047130, read: "u16", names: [] },
	{ index: 40, fn: 0x2002ae80, read: "vec3 u8", names: [] },
	{ index: 41, fn: 0x20045910, read: "u16 u16 u16 u8", names: [] },
	{ index: 42, fn: 0x20045b00, read: "u16 u16 u16", names: [] },
	{ index: 43, fn: 0x20045b80, read: "vec3 vec3", names: [] },
	{ index: 44, fn: 0x2002b8b0, read: "vec3 u8", names: [] },
	{ index: 45, fn: 0x2002c340, read: "vec3 u8 u8 u8 u8", names: [] },
	{ index: 46, fn: 0x2002b410, read: "vec3 u8 u8", names: [] },
	{ index: 47, fn: 0x2002c4a0, read: "vec3 u16", names: [] },
	{ index: 48, fn: 0x2002c5a0, read: "vec3 u16", names: [] },
	{ index: 49, fn: 0x2002c5d0, read: "vec3 str", names: [] },
	{ index: 50, fn: 0x2002c610, read: "vec3 vec3 u16 u16", names: [] },
	{ index: 51, fn: 0x20028eb0, read: "vec3", names: [] },
	{ index: 52, fn: 0x2002c670, read: "vec3 u16", names: [] },
	{ index: 53, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 54, fn: 0x20043af0, read: "vec3", names: [] },
	{ index: 55, fn: 0x2002b460, read: "vec3 u8 u8", names: [] },
	{ index: 56, fn: 0x2002b680, read: "vec3 u8 u8", names: [] },
	{ index: 57, fn: 0x2002c7a0, read: "vec3 vec3", names: [] },
	{ index: 58, fn: 0x2002c850, read: "vec3", names: [] },
	{ index: 59, fn: 0x2002c890, read: "vec3", names: [] },
	{ index: 60, fn: 0x2002ca20, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 61, fn: 0x2002cbd0, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 62, fn: 0x2002ce70, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 63, fn: 0x2002d110, read: "u8 u8 vec3 vec3", names: [] },
	{ index: 64, fn: 0x2002d2f0, read: "vec3 vec3 u8 u8 u8", names: [] },
	{ index: 67, fn: 0x2008a990, read: "", names: [] },
	{ index: 68, fn: 0x2008a990, read: "", names: [] },
	{ index: 69, fn: 0x20041530, read: "", names: [] },
	{ index: 70, fn: 0x20041530, read: "", names: [] },
	{ index: 71, fn: 0x20041530, read: "", names: [] },
	{ index: 72, fn: 0x20041530, read: "", names: [] },
	{ index: 73, fn: 0x20041530, read: "", names: [] },
	{ index: 74, fn: 0x20041530, read: "", names: [] },
	{ index: 75, fn: 0x20041530, read: "", names: [] },
	{ index: 76, fn: 0x20041530, read: "", names: [] },
	{ index: 77, fn: 0x20041530, read: "", names: [] },
	{ index: 78, fn: 0x20041530, read: "", names: [] },
	{ index: 79, fn: 0x20041530, read: "", names: [] },
	{ index: 80, fn: 0x20041530, read: "", names: [] },
	{ index: 81, fn: 0x2008a990, read: "", names: [] },
	{ index: 82, fn: 0x20027fe0, read: "", names: [] },
	{ index: 83, fn: 0x20027fe0, read: "", names: [] },
	{ index: 84, fn: 0x20027fe0, read: "", names: [] },
	{ index: 85, fn: 0x20027fe0, read: "", names: [] },
	{ index: 86, fn: 0x20027fe0, read: "", names: [] },
	{ index: 87, fn: 0x20027f90, read: "", names: [] },
	{ index: 88, fn: 0x20028050, read: "", names: [] },
	{ index: 90, fn: 0x2002f520, read: "", names: [] },
	{ index: 100, fn: 0x2002f220, read: "", names: [] },
	{ index: 101, fn: 0x2002f310, read: "", names: [] },
	{ index: 105, fn: 0x2002f420, read: "", names: [] },
	{ index: 189, fn: 0x2002d2b0, read: "", names: [] },
	];

	function effectOf(index) {
		for (var i = 0; i < EFFECTS.length; i++) {
			if (EFFECTS[i].index === index) return EFFECTS[i];
		}
		return null;
	}

	/* -------------------------------------------------------------------
	 * The .m32 container (analysis/render_extras.md §2).  A version-4 file
	 * has 15 i32 mip widths at 0x204, heights at 0x244 and offsets at 0x284;
	 * mip 0 is at 0x3C8 and holds w*h*4 RGBA bytes.  The header also carries
	 * the detail texture name (0x2DC) and the detail matrix (0x35C).
	 * ------------------------------------------------------------------- */
	function asBytes(bytes) {
		if (!bytes) return null;
		if (bytes.buffer && typeof bytes.length !== "number") {
			try { return new Uint8Array(bytes); } catch (e) { return null; }
		}
		if (typeof bytes.length === "number" && typeof bytes[0] === "number") return bytes;
		return null;
	}
	function u32(b, p) {
		return (b[p] | (b[p + 1] << 8) | (b[p + 2] << 16) | (b[p + 3] << 24)) >>> 0;
	}
	function f32(b, p) {
		var v = u32(b, p);
		var s = (v & 0x80000000) ? -1 : 1;
		var e = (v >>> 23) & 0xff;
		var m = v & 0x7fffff;
		if (e === 0) return s * Math.pow(2, -126) * (m / 8388608);
		if (e === 255) return m ? NaN : s * Infinity;
		return s * Math.pow(2, e - 127) * (1 + m / 8388608);
	}
	function cstr(b, p, n) {
		var s = "";
		for (var i = 0; p + i < b.length && i < n; i++) {
			var c = b[p + i];
			if (!c) break;
			s += String.fromCharCode(c);
		}
		return s;
	}
	function parseM32(bytes) {
		var b = asBytes(bytes);
		if (!b || b.length < 0x3C8) return null;
		if (u32(b, 0) !== 4) return null;                 /* the shipped version */
		var w = u32(b, 0x204) | 0, h = u32(b, 0x244) | 0;
		var off = u32(b, 0x284);
		if (w <= 0 || h <= 0 || w * h > 8 * 1024 * 1024) return null;
		if (off < 0x3C8 || off + w * h * 4 > b.length) return null;
		var detailName = cstr(b, 0x2DC, 0x80);
		var detail = null;
		if (detailName && /^textures\//i.test(detailName)) {
			detail = {
				name: detailName.replace(/\.m32$/i, ""),
				matrix: [f32(b, 0x35C), f32(b, 0x360), f32(b, 0x364), f32(b, 0x368)]
			};
		}
		return {
			width: w, height: h,
			data: b.subarray(off, off + w * h * 4),
			detail: detail,
			flags: b[0x378] | 0, cls: b[0x2CC] | 0,
			name: cstr(b, 0x04, 0x80)
		};
	}

	/* -------------------------------------------------------------------
	 * The Decal record (render_extras.md §4.1).  eft.js does not know the FX
	 * emitter classes, but a class-3 .eft has an unmistakable shape once it
	 * is decoded: one emitter block carries the texture name (a
	 * "textures/..." .m32) and a following block carries exactly the four
	 * growth floats and the direction dword.  bloodpool.eft is the proof:
	 * growth_accel 3.0, growth_duration 22.0, start_size -0.2, end_size 8.0,
	 * direction 1 (Downward).
	 * ------------------------------------------------------------------- */
	function parseDecal(def) {
		if (!def || !def.emitters || !def.emitters.length) return null;
		var texture = null, params = null;
		var i, j, em, names, f, it;
		/* first pass: the texture name */
		for (i = 0; i < def.emitters.length && !texture; i++) {
			em = def.emitters[i];
			names = (em && em.names) || [];
			for (j = 0; j < names.length; j++) {
				if (/^textures\//i.test(names[j])) {
					texture = names[j].replace(/\.m32$/i, "");
					break;
				}
			}
		}
		if (!texture) return null;
		/* second pass: the growth group, preferring a block without a name */
		for (i = 0; i < def.emitters.length; i++) {
			em = def.emitters[i];
			names = (em && em.names) || [];
			var named = false;
			for (j = 0; j < names.length; j++) if (/^textures\//i.test(names[j])) named = true;
			f = (em && em.floats) || [];
			it = (em && em.ints) || [];
			if (!named && f.length >= 4 && it.length >= 1) { params = { f: f, it: it }; break; }
		}
		if (!params) {
			/* some writers keep the name and the numbers in one block: use the
			 * last four plausible floats before the direction dword */
			for (i = 0; i < def.emitters.length && !params; i++) {
				em = def.emitters[i];
				f = (em && em.floats) || []; it = (em && em.ints) || [];
				if (f.length >= 4 && it.length >= 1) params = { f: f.slice(-4), it: it };
			}
		}
		if (!params) return null;
		var direction = params.it[0] | 0;
		if (direction < 0 || direction > 2) return null;   /* 0 fwd, 1 down, 2 back */
		return {
			texture: texture,
			growthAccel: params.f[0],
			growthDuration: params.f[1],
			startSize: params.f[2],
			endSize: params.f[3],
			direction: direction
		};
	}

	/* an MVP as a Float32Array; NULL when nothing usable was handed to us */
	function matrixOf(v) {
		if (!v || v.length < 16) return null;
		try {
			var m = new Float32Array(16);
			for (var i = 0; i < 16; i++) m[i] = v[i];
			return m;
		} catch (e) { return null; }
	}
	/* the eye of an MVP (the same extraction soflight.js uses) */
	function eyeFromMVP(m) {
		var r0 = [m[0], m[4], m[8], m[12]];
		var r1 = [m[1], m[5], m[9], m[13]];
		var r3 = [m[3], m[7], m[11], m[15]];
		var len = function (v) { return Math.sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]); };
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
	/* the camera: the caller's matrix, then the one sofsurface cached from
	 * the map draw, then the current program's uMVP. */
	function cameraOf(gl, viewProj, eye) {
		var m = matrixOf(viewProj);
		if (m) return { m: m, e: eye || eyeFromMVP(m) };
		var surf = (typeof window !== "undefined") ? window.sofsurface : null;
		if (surf && surf.mvp) {
			m = matrixOf(surf.mvp());
			if (m) return { m: m, e: (surf.eye && surf.eye()) || eyeFromMVP(m) };
		}
		if (gl && gl.getParameter) {
			try {
				var p = gl.getParameter(gl.CURRENT_PROGRAM);
				if (p && gl.getUniformLocation) {
					var l = gl.getUniformLocation(p, "uMVP");
					if (l) {
						m = matrixOf(gl.getUniform(p, l));
						if (m) return { m: m, e: eyeFromMVP(m) };
					}
				}
			} catch (e) { /* the current program is not ours */ }
		}
		return null;
	}

	/* the modules keep one shared fog state so a single sofFog.set() reaches
	 * every Effects instance that was already created by sofmusic.js. */
	var sharedFog = { start: 1e9, end: 1e9, color: [0, 0, 0] };
	var instances = [];
	function setAllFog(start, end, r, g, b) {
		sharedFog.start = start > 0 ? start : 1e9;
		sharedFog.end = end > 0 ? end : 1e9;
		sharedFog.color = [r || 0, g || 0, b || 0];
		for (var i = 0; i < instances.length; i++) instances[i]._setFogShared();
		return { start: sharedFog.start, end: sharedFog.end, color: sharedFog.color.slice() };
	}

	function Effects(opts) {
		const o = opts || {};
		this.particles = [];
		this.effects = [];          /* the live effects */
		this.decals = [];           /* the persistent class-3 decals */
		this.textures = {};         /* the loaded particle textures by name */
		this.decalTextures = {};    /* the uploaded .m32 textures by name */
		this.gl = o.gl || null;
		this.eft = o.eft || null;  /* the decoder (web/eft.js) */
		this.map = o.map || null;  /* the effect map (web/effectmap.js) */
		this.fetchPak = o.fetchPak || null;
		this.shaders = o.shaders || null;
		this.next = 1;
		this.fog = { start: sharedFog.start, end: sharedFog.end, color: sharedFog.color.slice() };
		/* gl_detailtexturing / gl_detailtexturingdistance (render_extras.md §3):
		 * 0 = off, 1 = on, 2 = the distance-limited mode. */
		this.detail = { mode: 1, distance: 250 };
		this.render = null;         /* the lazy WebGL program */
		instances.push(this);
	}
	Effects.prototype._setFogShared = function () {
		this.fog = { start: sharedFog.start, end: sharedFog.end, color: sharedFog.color.slice() };
	};
	Effects.prototype.setFog = function (start, end, r, g, b) {
		return setAllFog(start, end, r, g, b);
	};
	Effects.prototype.fogState = function () {
		return { start: this.fog.start, end: this.fog.end, color: this.fog.color.slice() };
	};
	Effects.prototype.setDetail = function (mode, distance) {
		if (typeof mode === "number") this.detail.mode = mode;
		if (typeof distance === "number") this.detail.distance = distance;
		return { mode: this.detail.mode, distance: this.detail.distance };
	};

	/* the number of the fields of an emitter: the .eft keeps them in a fixed
	 * order - the first block of the emitter is the header of the effect,
	 * the numbers that follow are the life, the speed, the size, the
	 * gravity ... */
	function emitterParams(e) {
		const f = (e && e.floats) || [];
		const p = {};
		p.life = f.length > 0 ? Math.abs(f[0]) : DEFAULTS.life;
		p.speed = f.length > 1 ? Math.abs(f[1]) : DEFAULTS.speed;
		p.size = f.length > 2 ? Math.abs(f[2]) : DEFAULTS.size;
		p.gravity = f.length > 3 ? f[3] : DEFAULTS.gravity;
		p.count = f.length > 4 ? Math.max(1, Math.round(Math.abs(f[4]))) : DEFAULTS.count;
		return p;
	}

	/* the texture of an emitter: the first name that looks like a texture */
	function emitterTexture(e) {
		const names = (e && e.names) || [];
		for (let i = 0; i < names.length; i++) {
			if (/^textures\//i.test(names[i])) return names[i];
		}
		return names.length ? names[0] : null;
	}

	/* a particle's .m32 texture, fetched through the same pak relay.  The
	 * result is kept in the Image-like form uploadImage() expects. */
	function loadParticleTexture(self, name) {
		if (!name || self.textures[name] || !self.fetchPak) return;
		self.textures[name] = { complete: false, width: 0, data: null };
		var m32name = /\.m32$/i.test(name) ? name : name + ".m32";
		self.fetchPak(m32name).then(function (buf) {
			var img = parseM32(buf);
			if (!img) { delete self.textures[name]; return; }
			self.textures[name] = { complete: true, width: img.width, height: img.height, data: img.data };
		}).catch(function () { delete self.textures[name]; });
	}

	/* the .m32 of a decal, fetched through the same pak relay the .eft uses.
	 * A missing/failed fetch leaves the decal with a flat colour. */
	function loadDecalTexture(self, d, name) {
		if (!self.fetchPak || !name) return;
		var m32name = /\.m32$/i.test(name) ? name : name + ".m32";
		self.fetchPak(m32name).then(function (buf) {
			var img = parseM32(buf);
			if (!img) return;
			d.m32 = img;
			/* the detail overlay (render_extras.md §3.2): the detail name is
			 * "textures/<name>" with no .m32 in the header - try both. */
			if (img.detail && self.fetchPak) {
				var dn = /\.m32$/i.test(img.detail.name) ? img.detail.name : img.detail.name + ".m32";
				self.fetchPak(dn).then(function (db) {
					var di = parseM32(db);
					if (di) d.detailM32 = di;
				}).catch(function () { /* the detail is optional */ });
			}
		}).catch(function () { /* the decal stays a flat quad */ });
	}

	/*
	 * Spawn an effect: the index of the effect function and the origin.
	 * The .eft file is loaded (and cached) and its emitters become the
	 * particles - unless the record is a class-3 Decal, in which case it
	 * becomes a persistent, growing decal instead of a handful of dots.
	 */
	Effects.prototype.spawn = function (index, origin, opts) {
		const o = opts || {};
		const self = this;
		const e = {
			id: this.next++,
			index: index,
			origin: origin || { x: 0, y: 0, z: 0 },
			born: Date.now(),
			particles: [],
			sound: o.sound || null
		};
		this.effects.push(e);
		const info = this.map && this.map.effect ? this.map.effect(index) : effectOf(index);
		const names = (info && info.names && info.names.length) ? info.names : null;
		const eftName = names && names.length ? names[0] : null;
		if (!eftName || !this.fetchPak || !this.eft) {
			/* no .eft: the effect is only a marker */
			return Promise.resolve(e);
		}
		return this.fetchPak(eftName).then(function (b) {
			const def = self.eft.parseEft(new Uint8Array(b));
			if (!def) return e;
			e.eft = def;
			/* --- the Decal emitter (FX class 3) ------------------------- */
			var decal = parseDecal(def);
			if (decal) {
				var dur = Math.max(decal.growthDuration, 0.001);
				var d = {
					id: self.next++,
					origin: { x: e.origin.x, y: e.origin.y, z: e.origin.z },
					born: Date.now(),
					def: decal,
					duration: dur,
					start: decal.startSize,
					end: decal.endSize === decal.startSize ? decal.startSize + 8 : decal.endSize,
					accel: decal.growthAccel || 2,
					direction: decal.direction,
					size: decal.startSize,
					m32: null, detailM32: null,
					textureName: decal.texture
				};
				self.decals.push(d);
				if (self.decals.length > MAX_DECALS) self.decals.shift();
				loadDecalTexture(self, d, decal.texture);
				e.decal = d;
				return e;
			}
			/* --- the ordinary particle emitters ------------------------- */
			def.emitters.forEach(function (em) {
				const p = emitterParams(em);
				const tex = emitterTexture(em);
				/* the header block has no particle parameters of its own */
				if (!tex && p.life === 0 && p.speed === 0 && p.count <= 3) return;
				if (tex && !self.textures[tex]) loadParticleTexture(self, tex);
				for (let i = 0; i < p.count; i++) {
					if (self.particles.length >= MAX_PARTICLES) break;
					const a = Math.random() * Math.PI * 2;
					const sp = p.speed * (1 - DEFAULTS.speedSpread + Math.random() * DEFAULTS.speedSpread * 2);
					const life = p.life * (1 - DEFAULTS.lifeSpread + Math.random() * DEFAULTS.lifeSpread * 2);
					self.particles.push({
						x: e.origin.x, y: e.origin.y, z: e.origin.z,
						vx: Math.cos(a) * sp, vy: Math.sin(a) * sp, vz: (Math.random() - 0.5) * sp,
						life: life, born: Date.now(), size: p.size, gravity: p.gravity,
						texture: tex
					});
				}
			});
			return e;
		}).catch(function () { return e; });
	};

	/* move the particles and grow the decals, drop the dead ones */
	Effects.prototype.update = function (dt) {
		const now = Date.now();
		const ps = this.particles;
		for (let i = ps.length - 1; i >= 0; i--) {
			const p = ps[i];
			p.vy -= p.gravity * dt;
			p.x += p.vx * dt; p.y += p.vy * dt; p.z += p.vz * dt;
			if (now - p.born > p.life * 1000) ps.splice(i, 1);
		}
		/* the engine's Decal grows from start_size to end_size over
		 * growth_duration, accelerated by growth_accel (the default 2.0 is
		 * the linear case). */
		for (let i = this.decals.length - 1; i >= 0; i--) {
			const d = this.decals[i];
			const age = (now - d.born) / 1000;
			if (age > DECAL_LIFE) { this.decals.splice(i, 1); continue; }
			var p2 = Math.min(age / d.duration, 1);
			var g = Math.max(0.25, (d.accel || 2) / 2);
			var ease = Math.pow(p2, g);
			d.size = d.start + (d.end - d.start) * ease;
		}
		this.effects = this.effects.filter(function (e) { return now - e.born < 10000; });
		return ps;
	};

	/* the alpha of a particle: it fades out over its life */
	Effects.prototype.alphaOf = function (p) {
		const age = (Date.now() - p.born) / (p.life * 1000);
		if (age < 0) return 0;
		if (age > 1) return 0;
		return 1 - age;
	};

	/* -------------------------------------------------------------------
	 * The WebGL draw.  It owns a small program of its own (attributes bound
	 * to the top of the attribute range, disabled again afterwards), reads
	 * the camera shared by sofsurface, and never touches the caller's
	 * program, blend state or buffers without putting them back.
	 * ------------------------------------------------------------------- */
	var VS = [
		"attribute vec3 dPos;",
		"attribute vec2 dUV;",
		"attribute vec4 dCol;",
		"uniform mat4 uMVP;",
		"uniform vec3 uEye;",
		"varying vec2 vUV;",
		"varying vec4 vCol;",
		"varying vec2 vDUV;",
		"varying float vDist;",
		"uniform vec4 uDetailMat;",
		"void main(){",
		"  vec3 p = vec3(dPos.x, dPos.z, dPos.y);",   /* the map is Z up, the renderer Y up */
		"  vUV = dUV; vCol = dCol;",
		"  vDUV = dPos.xy * uDetailMat.xy + uDetailMat.zw;",
		"  vDist = length(p - uEye);",
		"  gl_Position = uMVP * vec4(p, 1.0);",
		"}"
	].join("\n");
	var FS = [
		"#ifdef GL_FRAGMENT_PRECISION_HIGH",
		"precision highp float;",
		"#else",
		"precision mediump float;",
		"#endif",
		"varying vec2 vUV;",
		"varying vec4 vCol;",
		"varying vec2 vDUV;",
		"varying float vDist;",
		"uniform sampler2D uTex;",
		"uniform sampler2D uDetail;",
		"uniform float uUseDetail;",
		"uniform vec3 uFogColor;",
		"uniform vec2 uFogRange;",
		"void main(){",
		"  vec4 c = texture2D(uTex, vUV) * vCol;",
		"  if (c.a < 0.02) discard;",
		"  if (uUseDetail > 0.5) {",
		"    vec3 det = texture2D(uDetail, vDUV).rgb;",
		"    c.rgb *= clamp(det * 1.6, 0.0, 2.0);",
		"  }",
		"  float f = clamp((vDist - uFogRange.x) / max(uFogRange.y - uFogRange.x, 1.0), 0.0, 1.0);",
		"  c.rgb = mix(c.rgb, uFogColor, f);",
		"  gl_FragColor = c;",
		"}"
	].join("\n");

	function shader(ctx, type, src) {
		var s = ctx.createShader(type);
		ctx.shaderSource(s, src);
		ctx.compileShader(s);
		if (!ctx.getShaderParameter(s, ctx.COMPILE_STATUS))
			throw new Error("the fx shader: " + ctx.getShaderInfoLog(s));
		return s;
	}

	Effects.prototype.ensureRender = function (gl) {
		if (this.render) return this.render;
		var maxA = 8;
		try { maxA = gl.getParameter(gl.MAX_VERTEX_ATTRIBS) || 8; } catch (e) {}
		if (maxA < 7) return null;
		var base = maxA - 3;               /* dPos, dUV, dCol at the top */
		var prog = gl.createProgram();
		gl.attachShader(prog, shader(gl, gl.VERTEX_SHADER, VS));
		gl.attachShader(prog, shader(gl, gl.FRAGMENT_SHADER, FS));
		gl.bindAttribLocation(prog, base + 0, "dPos");
		gl.bindAttribLocation(prog, base + 1, "dUV");
		gl.bindAttribLocation(prog, base + 2, "dCol");
		gl.linkProgram(prog);
		if (!gl.getProgramParameter(prog, gl.LINK_STATUS))
			throw new Error("the fx program: " + gl.getProgramInfoLog(prog));
		this.render = {
			prog: prog, base: base,
			vbo: gl.createBuffer(),
			loc: {
				mvp: gl.getUniformLocation(prog, "uMVP"),
				eye: gl.getUniformLocation(prog, "uEye"),
				tex: gl.getUniformLocation(prog, "uTex"),
				detail: gl.getUniformLocation(prog, "uDetail"),
				useDetail: gl.getUniformLocation(prog, "uUseDetail"),
				detailMat: gl.getUniformLocation(prog, "uDetailMat"),
				fogc: gl.getUniformLocation(prog, "uFogColor"),
				fogr: gl.getUniformLocation(prog, "uFogRange")
			},
			white: null, flatDetail: null
		};
		return this.render;
	};

	/* a 1x1 white texture: the fallback for a decal whose .m32 did not load */
	function whiteTexture(gl) {
		var t = gl.createTexture();
		gl.bindTexture(gl.TEXTURE_2D, t);
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, 1, 1, 0, gl.RGBA, gl.UNSIGNED_BYTE,
			new Uint8Array([255, 255, 255, 255]));
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
		return t;
	}
	function uploadImage(gl, img) {
		var t = gl.createTexture();
		gl.bindTexture(gl.TEXTURE_2D, t);
		gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, img.width, img.height, 0,
			gl.RGBA, gl.UNSIGNED_BYTE, img.data);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
		gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
		return t;
	}
	function textureFor(self, gl, name, cache) {
		if (cache[name]) return cache[name];
		var img = self.textures[name];
		if (!img || !img.complete || !img.width || !img.data) return null;
		var t = uploadImage(gl, { width: img.width, height: img.height, data: img.data });
		cache[name] = t;
		return t;
	}
	function m32Texture(self, gl, img, key) {
		if (self.decalTextures[key]) return self.decalTextures[key];
		if (!img) return null;
		var t = uploadImage(gl, img);
		self.decalTextures[key] = t;
		return t;
	}

	/* emit one quad (6 vertices, each pos3/uv2/col4) into an array */
	function quad(out, c, u, v, h, col) {
		var corners = [
			[-1, -1, 0, 0], [1, -1, 1, 0], [1, 1, 1, 1],
			[-1, -1, 0, 0], [1, 1, 1, 1], [-1, 1, 0, 1]
		];
		for (var i = 0; i < corners.length; i++) {
			var q = corners[i];
			out.push(
				c[0] + u[0] * q[0] * h + v[0] * q[1] * h,
				c[1] + u[1] * q[0] * h + v[1] * q[1] * h,
				c[2] + u[2] * q[0] * h + v[2] * q[1] * h,
				q[2], q[3],
				col[0], col[1], col[2], col[3]
			);
		}
	}
	function norm(v) {
		var l = Math.sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]) || 1;
		return [v[0] / l, v[1] / l, v[2] / l];
	}
	function cross(a, b) {
		return [a[1] * b[2] - a[2] * b[1], a[2] * b[0] - a[0] * b[2], a[0] * b[1] - a[1] * b[0]];
	}

	/*
	 * Draw the decals and the particles.  The caller owns the WebGL state;
	 * this only draws point-sized particle billboards and the growing decal
	 * quads, with the distance fog applied.
	 */
	Effects.prototype.draw = function (gl, viewProj) {
		const ps = this.particles;
		const ds = this.decals;
		if (!gl || (!ps.length && !ds.length)) return 0;

		var cam = cameraOf(gl, viewProj);
		if (!cam) return 0;                     /* no camera: stay quiet */

		var self = this;
		var r;
		try { r = this.ensureRender(gl); } catch (e) { return 0; }
		if (!r) return 0;

		/* the caller's state */
		var oldProg = gl.getParameter ? gl.getParameter(gl.CURRENT_PROGRAM) : null;
		var oldVBO = gl.getParameter ? gl.getParameter(gl.ARRAY_BUFFER_BINDING) : null;
		var oldTex0 = null, oldTex1 = null;
		try {
			gl.activeTexture(gl.TEXTURE0); oldTex0 = gl.getParameter(gl.TEXTURE_BINDING_2D);
			gl.activeTexture(gl.TEXTURE1); oldTex1 = gl.getParameter(gl.TEXTURE_BINDING_2D);
		} catch (e) {}
		var oldBlend = gl.getParameter ? gl.getParameter(gl.BLEND) : false;
		var oldDepthMask = gl.getParameter ? gl.getParameter(gl.DEPTH_WRITEMASK) : true;

		var drawn = 0;
		try {
			gl.useProgram(r.prog);
			gl.uniformMatrix4fv(r.loc.mvp, false, cam.m);
			/* the eye is in Y-up space (the map's space); the decal positions
			 * are Z-up and the vertex shader converts them */
			gl.uniform3f(r.loc.eye, cam.e[0], cam.e[1], cam.e[2]);
			gl.uniform3f(r.loc.fogc, this.fog.color[0], this.fog.color[1], this.fog.color[2]);
			gl.uniform2f(r.loc.fogr, this.fog.start, this.fog.end);
			gl.uniform1i(r.loc.tex, 0);
			gl.uniform1i(r.loc.detail, 1);

			gl.enable(gl.BLEND);
			gl.blendFunc(gl.SRC_ALPHA, gl.ONE_MINUS_SRC_ALPHA);
			gl.depthMask(false);
			gl.bindBuffer(gl.ARRAY_BUFFER, r.vbo);
			gl.enableVertexAttribArray(r.base + 0);
			gl.enableVertexAttribArray(r.base + 1);
			gl.enableVertexAttribArray(r.base + 2);
			gl.vertexAttribPointer(r.base + 0, 3, gl.FLOAT, false, 36, 0);
			gl.vertexAttribPointer(r.base + 1, 2, gl.FLOAT, false, 36, 12);
			gl.vertexAttribPointer(r.base + 2, 4, gl.FLOAT, false, 36, 20);

			if (!r.white) r.white = whiteTexture(gl);

			/* --- the decals: one draw per texture ----------------------- */
			for (var i = 0; i < ds.length; i++) {
				var d = ds[i];
				var h = Math.max(Math.abs(d.size), 0.1) * 0.5;
				var c = [d.origin.x, d.origin.y, d.origin.z];
				var u = [1, 0, 0], v = (d.direction === 1) ? [0, 1, 0] : [0, 0, 1];
				var out = [];
				quad(out, c, u, v, h, [1, 1, 1, 1]);
				gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(out), gl.DYNAMIC_DRAW);
				var tex = d.m32 ? m32Texture(self, gl, d.m32, d.textureName) : r.white;
				gl.activeTexture(gl.TEXTURE0);
				gl.bindTexture(gl.TEXTURE_2D, tex || r.white);
				/* gl_detailtexturing: the distance-limited mode 2 skips a
				 * surface closer than gl_detailtexturingdistance. */
				var useDetail = 0, dtex = null, dmat = [4, 4, 0, 0];
				if (d.detailM32 && this.detail.mode !== 0) {
					var dist = Math.sqrt(
						Math.pow(c[0] - cam.e[0], 2) +
						Math.pow(c[2] - cam.e[1], 2) + Math.pow(c[1] - cam.e[2], 2));
					if (this.detail.mode !== 2 || dist >= this.detail.distance) {
						dtex = m32Texture(self, gl, d.detailM32, d.detailM32.name);
						dmat = d.detailM32.detail ? d.detailM32.detail.matrix : dmat;
						useDetail = dtex ? 1 : 0;
					}
				}
				gl.uniform1f(r.loc.useDetail, useDetail);
				if (useDetail) gl.uniform4f(r.loc.detailMat, dmat[0], dmat[1], dmat[2], dmat[3]);
				gl.activeTexture(gl.TEXTURE1);
				gl.bindTexture(gl.TEXTURE_2D, dtex || r.white);
				gl.activeTexture(gl.TEXTURE0);
				gl.drawArrays(gl.TRIANGLES, 0, 6);
				drawn += 6;
			}

			/* --- the particles: camera-facing billboards --------------- */
			if (ps.length) {
				var eyeZ = [cam.e[0], cam.e[2], cam.e[1]];   /* back to Z up */
				var groups = {};
				for (var j = 0; j < ps.length; j++) {
					var p = ps[j];
					var a0 = self.alphaOf(p);
					if (a0 <= 0) continue;
					var pc = [p.x, p.y, p.z];
					var dir = norm([eyeZ[0] - pc[0], eyeZ[1] - pc[1], eyeZ[2] - pc[2]]);
					var right = norm(cross([0, 0, 1], dir));
					var upv = cross(dir, right);
					var key = p.texture || "";
					var g = groups[key] || (groups[key] = { verts: [], tex: p.texture });
					quad(g.verts, pc, right, upv, Math.max(p.size, 0.05), [1, 1, 1, a0]);
				}
				for (var k in groups) {
					if (!groups.hasOwnProperty(k)) continue;
					var gg = groups[k];
					if (!gg.verts.length) continue;
					gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(gg.verts), gl.DYNAMIC_DRAW);
					var ptex = gg.tex ? textureFor(self, gl, gg.tex, self.decalTextures) : r.white;
					gl.activeTexture(gl.TEXTURE0);
					gl.bindTexture(gl.TEXTURE_2D, ptex || r.white);
					gl.activeTexture(gl.TEXTURE1);
					gl.bindTexture(gl.TEXTURE_2D, r.white);
					gl.uniform1f(r.loc.useDetail, 0);
					gl.activeTexture(gl.TEXTURE0);
					gl.drawArrays(gl.TRIANGLES, 0, gg.verts.length / 9);
					drawn += gg.verts.length / 9;
				}
			}
		} catch (e3) {
			/* a GL error is not fatal: the game keeps running without fx */
			drawn = 0;
		}

		/* put the caller's state back */
		try {
			gl.disableVertexAttribArray(r.base + 0);
			gl.disableVertexAttribArray(r.base + 1);
			gl.disableVertexAttribArray(r.base + 2);
			gl.activeTexture(gl.TEXTURE1);
			gl.bindTexture(gl.TEXTURE_2D, oldTex1);
			gl.activeTexture(gl.TEXTURE0);
			gl.bindTexture(gl.TEXTURE_2D, oldTex0);
			gl.bindBuffer(gl.ARRAY_BUFFER, oldVBO);
			gl.depthMask(oldDepthMask);
			if (!oldBlend) gl.disable(gl.BLEND);
			if (oldProg) gl.useProgram(oldProg);
		} catch (e4) { /* nothing else we can do */ }
		return drawn;
	};

	Effects.DEFAULTS = DEFAULTS;
	Effects.MAX_PARTICLES = MAX_PARTICLES;
	Effects.MAX_DECALS = MAX_DECALS;
	return {
		Effects: Effects, DEFAULTS: DEFAULTS,
		MAX_PARTICLES: MAX_PARTICLES, MAX_DECALS: MAX_DECALS,
		parseM32: parseM32, parseDecal: parseDecal,
		setFog: setAllFog
	};
});
