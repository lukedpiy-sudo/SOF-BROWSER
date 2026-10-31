/*
 * viewmodel.js - the first person weapon (the Ghoul INVIEW view model).
 *
 * The engine keeps the view models in its global string table (the indices
 * 1177..1216 of web/www/sofstringtable.json are the
 * GHOUL/WEAPON/INVIEW/<NAME>/<NAME>.GHB paths with their .TGA skin and the
 * _SPEC.TGA specular map next to them).  The module's weapon table
 * (web/www/weapons.json) names the weapon models; the view model of a weapon
 * is the INVIEW model with the matching name.
 *
 * The view model is drawn in the eye space: its own coordinates are already
 * the view space placement of the engine (the gun sits in front of the eye,
 * below it and to the left in the engine's axes).
 */
(function () {
	"use strict";
	/* the model reader: the page may load sofmodel.js after this file */
	function SM() { return window.sofmodel; }

	/* the module's weapon index -> the INVIEW model */
	var WEAPON_VIEW = {
		1: "KNIFE",         /* the knife */
		2: "PISTOL2",       /* the .44 pistol */
		3: "PISTOL1",       /* the 9mm pistol */
		4: "MPISTOL",       /* the machine pistol */
		5: "MACHINEGUN",
		6: "ASSAULTRIFLE",
		7: "SNIPERRIFLE",
		9: "AUTOSHOTGUN",
		10: "SHOTGUN",      /* the grenade launcher */
		11: "SHOTGUN",
		12: "MACHINEGUN",
		13: "FLAMEGUN",     /* the phos (the flame thrower) */
		14: "ROCKET",
		17: "MPG",
		19: "FLAMEGUN",
		29: "THROWHAND"
	};
	var VIEW_ROOT = "GHOUL/WEAPON/INVIEW/";

	var st = {
		weapon: 0,       /* the module's weapon index */
		path: null,      /* the .GHB path */
		model: null,     /* the loaded model */
		spec: null,      /* the specular map */
		specTex: null,
		ready: false,
		error: null,
		/* the animation state: the sway follows the look, the bob follows
		 * the movement, the recoil follows the shots */
		sway: [0, 0],
		bob: 0,
		bobPhase: 0,
		recoil: 0,
		flash: 0,
		moving: false
	};

	function pathFor(weapon) {
		var n = WEAPON_VIEW[weapon];
		return n ? VIEW_ROOT + n + "/" + n + ".GHB" : null;
	}
	function specPath(path) {
		return path.replace(/\.ghb$/i, "_spec.tga");
	}

	/* the view model of the current weapon: load it if needed */
	function ensure(gl, weapon) {
		if (weapon === st.weapon && st.model) return st.model;
		st.weapon = weapon;
		st.path = pathFor(weapon);
		st.ready = false;
		st.error = null;
		if (!st.path || !gl) return null;
		var m = SM().load(st.path, gl);
		st.model = m;
		/* the view model is in the engine's eye space */
		if (m) m.space = "view";
		/* the specular map next to the model */
		var sp = specPath(st.path);
		if (!st.spec) {
			fetch("/pak/" + sp).then(function (r) {
				return r.ok ? r.arrayBuffer() : null;
			}).then(function (ab) {
				if (!ab) return;
				var tga = SM().decodeTGA(new Uint8Array(ab));
				if (!tga) return;
				st.spec = tga;
				st.specTex = SM().makeTexture ? SM().makeTexture(gl, tga) : null;
			}).catch(function () { });
		}
		return m;
	}

	/* the sway: the gun follows the look direction with a lag, the bob
	 * follows the movement, the recoil follows the shots */
	function animate(dt, look, move) {
		/* the weapon: the player state does not carry the weapon index, so
		 * the client watches the console for the weaponselect command */
		watchConsole();
		/* the movement speed: the origin of the player */
		if (move && move.origin) {
			if (st.lastOrigin) {
				var d = Math.hypot(move.origin.x - st.lastOrigin.x, move.origin.y - st.lastOrigin.y,
					move.origin.z - st.lastOrigin.z);
				st.speed = d / Math.max(dt, 0.001);
			}
			st.lastOrigin = { x: move.origin.x, y: move.origin.y, z: move.origin.z };
		} else st.speed = 0;
		/* the sway: the difference between the look and the last look */
		if (look) {
			var dx = (look.yaw || 0) - (st.lastYaw || 0);
			var dy = (look.pitch || 0) - (st.lastPitch || 0);
			/* wrap the yaw */
			while (dx > 180) dx -= 360;
			while (dx < -180) dx += 360;
			st.sway[0] += (-dx * 0.02 - st.sway[0]) * Math.min(1, dt * 8);
			st.sway[1] += (-dy * 0.02 - st.sway[1]) * Math.min(1, dt * 8);
			st.lastYaw = look.yaw || 0;
			st.lastPitch = look.pitch || 0;
		}
		/* the bob: the walk cycle */
		var spd = (move && move.speed !== undefined) ? move.speed : (st.speed || 0);
		if (spd > 1) {
			st.bobPhase += dt * spd * 0.9;
			st.moving = true;
		} else {
			st.moving = false;
			st.bobPhase += dt * 0.6;
		}
		st.bob = Math.sin(st.bobPhase) * (spd > 1 ? Math.min(1, spd / 200) : 0.05) * 2.2;
		/* the recoil decays */
		st.recoil *= Math.pow(0.02, dt);
		if (st.flash > 0) st.flash = Math.max(0, st.flash - dt * 12);
	}

	/* the muzzle flash: the engine lights the scene with it */
	function fire() {
		st.recoil = 1;
		st.flash = 1;
	}

	/* draw the view model: the view model lives in the eye space (the eye at
	 * the origin, the forward -Z, the up +Y), so the camera matrix is only
	 * the projection.  The options are
	 *   {dt, look:{yaw,pitch}, move:{speed}, fov, aspect, scale, x, y, z} */
	function draw(opts) {
		try {
			var o = opts || {};
			var gl = o.gl || sofContext();
			if (!gl) return false;
			animate(o.dt || 0.016, o.look, o.move);
			var m = st.model;
			if (!m || m.state !== "ready" || !m.vertices || !m.vertices.length) return false;
			var s = o.scale === undefined ? 1 : o.scale;
			/* the sway, the bob and the recoil */
			var sx = (o.x || 0) + st.sway[0] * 6 - st.recoil * 1.2;
			var sy = (o.y || 0) + st.sway[1] * 6 + st.bob;
			var sz = (o.z || 0) + st.recoil * 4;
			var aspect = o.aspect || (window.innerWidth / Math.max(1, window.innerHeight));
			var proj = perspective((o.fov || 90) * Math.PI / 180, aspect, 1, 2000);
			var mvp = mul(proj, compose(sx, sy, sz, st.recoil));
			/* the view model is drawn over the world: the depth test is off
			 * and the points are bigger than the world's */
			var depth = gl.isEnabled ? gl.isEnabled(gl.DEPTH_TEST) : false;
			if (gl.disable) gl.disable(gl.DEPTH_TEST);
			SM().drawModel(gl, m, mvp, s, o.pointSize || 6);
			if (depth && gl.enable) gl.enable(gl.DEPTH_TEST);
			st.drawn = (st.drawn || 0) + 1;
			return true;
		} catch (e) {
			st.error = String(e && e.message || e);
			return false;
		}
	}

	/* the projection matrix (the same as the renderer's) */
	function perspective(fovy, aspect, near, far) {
		var f = 1 / Math.tan(fovy / 2), nf = 1 / (near - far);
		var m = identity();
		m[0] = f / aspect; m[5] = f; m[10] = (far + near) * nf; m[11] = -1; m[14] = 2 * far * near * nf;
		return m;
	}

	function sofContext() {
		try {
			var c = document.querySelector("canvas");
			return c ? (c.getContext("webgl") || c.getContext("experimental-webgl")) : null;
		} catch (e) { return null; }
	}

	/* the small matrices of the view space */
	function identity() { return [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1]; }
	function mul(a, b) {
		var o = new Array(16);
		for (var c = 0; c < 4; c++) for (var r = 0; r < 4; r++) {
			var sum = 0;
			for (var k = 0; k < 4; k++) sum += a[k * 4 + r] * b[c * 4 + k];
			o[c * 4 + r] = sum;
		}
		return o;
	}
	/* the translation and the recoil rotation (around the right axis) */
	function compose(x, y, z, recoil) {
		var m = identity();
		m[12] = x; m[13] = y; m[14] = z;
		var a = -recoil * 0.12, c = Math.cos(a), s = Math.sin(a);
		/* rotate around the x axis */
		m[5] = c; m[6] = s; m[9] = -s; m[10] = c;
		return m;
	}

	/* the console watcher: the client prints the commands it sends, so the
	 * weaponselect command of the player can be followed */
	function watchConsole() {
		var c = window.sofstate && window.sofstate.console;
		if (!c || !c.length) return;
		var last = c[c.length - 1];
		if (last === st.lastConsole) return;
		st.lastConsole = last;
		for (var i = 0; i < c.length; i++) {
			var m = /weaponselect\s+(\d+)/i.exec(c[i]);
			if (m) {
				var w = parseInt(m[1], 10);
				if (w !== st.weapon) { st.weapon = w; st.path = pathFor(w); st.model = null; }
			}
		}
	}

	window.sofviewmodel = {
		state: st,
		WEAPON_VIEW: WEAPON_VIEW,
		pathFor: pathFor,
		ensure: ensure,
		draw: draw,
		fire: fire,
		animate: animate,
		/* the weapon of the local player: the player state does not carry
		 * the weapon index (the module sends only the ammunition), so the
		 * client keeps it itself - the weaponselect command and the
		 * console set it */
		setWeapon: function (w) {
			st.weapon = w;
			st.path = pathFor(w);
			st.model = null;
			st.ready = false;
			return st.path;
		},
		/* the current weapon: from the URL (?weapon=7) or the default */
		weaponFromUrl: function () {
			try {
				var m = /[?&]weapon=(\d+)/.exec(window.location.search);
				return m ? parseInt(m[1], 10) : 0;
			} catch (e) { return 0; }
		}
	};
})();
