/*
 * effects.js - the particle system of the browser client.
 *
 * The server sends the effects as temp entities (svc 0x01): a u8 with the
 * index of the client's effect function (the table at SoF.exe 0x201343E0, the
 * map in web/effectmap.js) followed by the values the function of the index
 * reads out of the message (the origin and the parameters of the effect).
 *
 * The effect itself is a .eft file (web/eft.js decodes it): a list of
 * emitters with the name of the texture and the numbers of the particle
 * system (the life, the speed, the size, the gravity and the colour ramp).
 *
 * This module keeps the particles of the live effects and draws them as
 * point sprites.  It does not own the WebGL context: the caller passes the
 * context in, so the renderer of the page stays in charge of the state and
 * of the blend state.
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



	function Effects(opts) {
		const o = opts || {};
		this.particles = [];
		this.effects = [];          /* the live effects */
		this.textures = {};         /* the loaded textures by name */
		this.gl = o.gl || null;
		this.eft = o.eft || null;  /* the decoder (web/eft.js) */
		this.map = o.map || null;  /* the effect map (web/effectmap.js) */
		this.fetchPak = o.fetchPak || null;
		this.shaders = o.shaders || null;
		this.next = 1;
	}

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

	/*
	 * Spawn an effect: the index of the effect function and the origin.
	 * The .eft file is loaded (and cached) and its emitters become the
	 * particles.
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
			def.emitters.forEach(function (em) {
				const p = emitterParams(em);
				const tex = emitterTexture(em);
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

	/* move the particles and drop the dead ones */
	Effects.prototype.update = function (dt) {
		const now = Date.now();
		const ps = this.particles;
		for (let i = ps.length - 1; i >= 0; i--) {
			const p = ps[i];
			p.vy -= p.gravity * dt;
			p.x += p.vx * dt; p.y += p.vy * dt; p.z += p.vz * dt;
			if (now - p.born > p.life * 1000) ps.splice(i, 1);
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

	/*
	 * Draw the particles.  The caller owns the WebGL state: this only
	 * draws the point sprites with the additive blend and the texture of
	 * the particle (when one was uploaded).
	 */
	Effects.prototype.draw = function (gl, viewProj) {
		const ps = this.particles;
		if (!gl || !ps.length) return 0;
		gl.enable(gl.BLEND);
		gl.blendFunc(gl.SRC_ALPHA, gl.ONE);
		gl.depthMask(false);
		let drawn = 0;
		for (let i = 0; i < ps.length; i++) {
			const p = ps[i];
			const tex = this.textures[p.texture];
			if (tex) gl.bindTexture(gl.TEXTURE_2D, tex);
			const a = this.alphaOf(p);
			if (a <= 0) continue;
			if (gl.uniform4f) gl.uniform4f(1, 1, 1, a);
			if (gl.uniform3f) gl.uniform3f(1, p.x, p.y, p.z);
			if (gl.uniform1f) gl.uniform1f(2, p.size);
			if (gl.drawPoint) gl.drawPoint();
			drawn++;
		}
		gl.depthMask(true);
		gl.disable(gl.BLEND);
		return drawn;
	};

	Effects.DEFAULTS = DEFAULTS;
	Effects.MAX_PARTICLES = MAX_PARTICLES;
	return { Effects: Effects, DEFAULTS: DEFAULTS };
});
