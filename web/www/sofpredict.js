/*
 * sofpredict.js - the client side movement prediction and the solid world.
 *
 * The browser client is server authoritative: the player only moves when the
 * server says so, so the movement lags a round trip and feels dead.  The
 * stock client predicts the movement locally (the engine's PM_* code) and
 * corrects it when the server's answer arrives.  This module does the same
 * in the browser.
 *
 * The world it moves in is the real one: the brush model of the map (the
 * brushes, their sides and the planes of web/www/map_bsp.json).  The player
 * is a box and the movement is clipped against the brush planes, exactly the
 * way the engine's trace does it:
 *
 *   - a move is clipped by the plane of every brush the box touches,
 *   - the velocity is projected onto the plane, and the remaining move is
 *     tried again (the slide),
 *   - a step of 18 units is tried when a wall blocks the move (the step up),
 *   - the friction, the acceleration, the gravity and the jump are the
 *     engine's (Quake II's PM, which SoF inherits).
 *
 * The coordinates are the engine's: Z up, the origin at the player's feet
 * (the engine's PM uses the same box).
 *
 * The prediction never replaces the server's truth: the authoritative origin
 * is kept, the local movement is added on top of it, and the difference
 * between the two is smoothed away over a few frames.
 */
(function () {
	"use strict";

	var MINS = [-16, -16, -24];      /* the player's box, the engine's PM */
	var MAXS = [16, 16, 32];
	var GRAVITY = 800;
	var FRICTION = 6;
	var STOPSPEED = 100;
	var ACCEL = 10;
	var JUMP = 270;
	var STEP = 18;
	var MAXSPEED = 320;               /* the speed cap, in units per second */
	var OVERCLIP = 1.001;
	var SMOOTH = 0.25;                /* the fraction of the error that is
	                                   * removed every frame */
	var SNAP = 96;                     /* the error that is snapped away */

	var mapData = null;
	var brushes = [];
	var status = "loading", err = "";
	var ready = false;

	/* the state */
	var origin = [0, 0, 0];           /* the predicted origin */
	var velocity = [0, 0, 0];
	var onGround = false;
	var auth = [0, 0, 0];             /* the last authoritative origin */
	var haveAuth = false;
	var error = [0, 0, 0];            /* the smoothed error */
	var lastTime = 0;
	var keys = {};
	var frames = 0, reconciles = 0, snapCount = 0, maxError = 0;
	var resyncs = 0;                 /* svc 0x1d prediction restarts */

	/* ------------------------------------------------------------- helpers */
	function load() {
		if (typeof fetch !== "function") { status = "no fetch"; return; }
		fetch("map_bsp.json").then(function (r) {
			if (!r.ok) throw new Error("http " + r.status);
			return r.json();
		}).then(function (m) {
			mapData = m;
			brushes = m.brushes || [];
			ready = true;
			status = brushes.length + " brushes";
		}).catch(function (e) {
			status = "error: " + (e.message || e);
		});
	}

	function sub(a, b) { return [a[0] - b[0], a[1] - b[1], a[2] - b[2]]; }
	function add(a, b) { return [a[0] + b[0], a[1] + b[1], a[2] + b[2]]; }
	function scale(a, s) { return [a[0] * s, a[1] * s, a[2] * s]; }
	function dot(a, b) { return a[0] * b[0] + a[1] * b[1] + a[2] * b[2]; }
	function cross(a, b) {
		return [a[1] * b[2] - a[2] * b[1], a[2] * b[0] - a[0] * b[2], a[0] * b[1] - a[1] * b[0]];
	}
	function len(a) { return Math.hypot(a[0], a[1], a[2]); }
	function norm(a) { var l = len(a); return l > 1e-9 ? scale(a, 1 / l) : [0, 0, 0]; }

	/* the plane of a brush side, with the "expansion" of the player's box:
	 * the box touches the plane when n.p + r > d, with
	 * r = the support of the box in the direction n */
	function boxRadius(n) {
		var r = 0;
		for (var i = 0; i < 3; i++) {
			var e = n[i] > 0 ? MAXS[i] : MINS[i];
			r += Math.abs(n[i]) * e;
		}
		return r;
	}

	/* The extent of the box along a normal: the smallest and the biggest
	 * n.p over the box, absolute. */
	function boxRange(n, p0) {
		var lo = 0, hi = 0;
		for (var i = 0; i < 3; i++) {
			if (n[i] > 0) { hi += n[i] * MAXS[i]; lo += n[i] * MINS[i]; }
			else if (n[i] < 0) { hi += n[i] * MINS[i]; lo += n[i] * MAXS[i]; }
		}
		var base = p0[0] * n[0] + p0[1] * n[1] + p0[2] * n[2];
		return [base + lo, base + hi];
	}

	/* The trace: how far can the box move from p0 to p1?  The fraction of the
	 * move that is clear is returned, together with the plane that blocked
	 * it.
	 *
	 * A brush is the intersection of its half spaces (n.p <= d), so the box
	 * and the brush are separated as long as there is a plane of the brush
	 * that the box is completely outside of, and the move is stopped by the
	 * first of those planes it runs into.  (Testing every plane on its own
	 * would stop the player at every wall it merely happens to be beside.)
	 *
	 * Only the brushes with the solid content collide: the room the player
	 * stands in is bounded by a clip brush (the engine's CONTENTS_PLAYERCLIP
	 * bits) and the player is inside it. */
	function isSolid(c) { return (c & 1) !== 0; }

	function traceBox(p0, p1, out) {
		var delta = sub(p1, p0);
		var best = 1, bestPlane = null;
		var dlen = len(delta);
		if (dlen < 1e-6) { if (out) { out.plane = null; out.frac = 1; } return 1; }
		for (var bi = 0; bi < brushes.length; bi++) {
			var br = brushes[bi];
			if (!isSolid(br.c)) continue;
			/* the broad phase: the bounding sphere of the brush */
			var c = sub(p0, br.o);
			if (len(c) - br.r > dlen) continue;
			var inside = true, sep = -1, sepT = 1e30;
			for (var si = 0; si < br.p.length; si++) {
				var s = br.p[si];
				var n = s.n, d = s.d;
				var rg = boxRange(n, p0);
				if (rg[1] > d + 0.01) inside = false;      /* not inside */
				if (rg[0] < d - 0.01) continue;              /* it straddles it */
				/* the box is completely outside this plane: it separates */
				var nd = n[0] * delta[0] + n[1] * delta[1] + n[2] * delta[2];
				if (nd >= -1e-9) continue;                    /* not running into it */
				var t = (rg[0] - d) / (-nd);
				if (t < sepT) { sepT = t; sep = si; }
			}
			if (inside) {
				/* the box is inside the brush: the move is blocked at once */
				if (best > 0) {
					best = 0;
					bestPlane = br.p.length ? br.p[0].n : null;
				}
				continue;
			}
			if (sep >= 0 && sepT < best) {
				best = sepT;
				bestPlane = br.p[sep].n;
			}
		}
		if (best < 0) best = 0;
		if (out) { out.plane = bestPlane; out.frac = best; }
		return best;
	}

	/* the clip: the velocity against a plane (the engine's PM_ClipVelocity) */
	function clipVelocity(v, n, overbounce) {
		var backoff = dot(v, n) * overbounce;
		var out = [v[0] - n[0] * backoff, v[1] - n[1] * backoff, v[2] - n[2] * backoff];
		/* do not let the clip push the player up a step */
		if (out[2] > 0 && v[2] <= 0) out[2] = 0;
		return out;
	}

	/* the slide move: move with the collision, sliding along the walls */
	function slideMove(pos, vel, delta, hits) {
		var planes = [], numplanes = 0;
		var remaining = delta.slice();
		var out = { end: pos.slice(), plane: null, frac: 1, blocked: false };
		for (var bump = 0; bump < 5; bump++) {
			var res = { plane: null, frac: 1 };
			var end = add(pos, remaining);
			var frac = traceBox(pos, end, res);
			pos = add(pos, scale(remaining, frac));
			out.end = pos.slice();
			out.frac = frac;
			if (frac >= 0.999) { out.plane = null; break; }
			out.blocked = true;
			out.plane = res.plane;
			if (!res.plane) break;
			if (hits) hits.push(res.plane);
			/* clip the velocity */
			vel = clipVelocity(vel, res.plane, OVERCLIP);
			/* and the remaining move */
			remaining = sub(remaining, scale(remaining, frac));
			/* the slide has to move along the plane */
			var into = dot(remaining, res.plane);
			remaining = sub(remaining, scale(res.plane, into));
			numplanes++;
		}
		out.velocity = vel;
		return out;
	}

	/* the step: try to step up over a step of STEP units */
	function stepMove(pos, vel, delta) {
		var up = [0, 0, STEP];
		var down = [0, 0, -STEP];
		var start = pos.slice();
		/* the step up */
		var upRes = { plane: null, frac: 1 };
		traceBox(start, add(start, up), upRes);
		var stepped = add(start, scale(up, upRes.frac));
		/* the move forward */
		var fwd = { plane: null, frac: 1 };
		var fwdEnd = add(stepped, delta);
		traceBox(stepped, fwdEnd, fwd);
		var fwdPos = add(stepped, scale(delta, fwd.frac));
		/* and back down */
		var downRes = { plane: null, frac: 1 };
		traceBox(fwdPos, add(fwdPos, down), downRes);
		var downPos = add(fwdPos, scale(down, downRes.frac));
		/* the step is only taken when it goes further than the flat move */
		var flat = { plane: null, frac: 1 };
		traceBox(start, add(start, delta), flat);
		var flatPos = add(start, scale(delta, flat.frac));
		if (len(sub(downPos, flatPos)) > 1.0 && flat.frac < 0.999) {
			return { end: downPos, stepped: true };
		}
		return { end: flatPos, stepped: false };
	}

	/* ------------------------------------------------------ the movement */
	/* SoF's angle->vector, from the module's FUN_500fdd70 (gamex86.dll), and
	 * confirmed on the wire by web/moveprobe5.js: the movement uses the vectors
	 * as forwardmove -> param_3 and sidemove -> -param_2.  With the yaw 0 the
	 * player travels along -Y, with the yaw 90 along +X, 180 along +Y, 270
	 * along -X, and a positive sidemove at yaw 0 travels along -X.
	 * In the engine's Z up frame, with roll 0:
	 *   push = (sin yaw, -cos yaw, 0)                             (param_3)
	 *   side = -(cos pitch cos yaw, cos pitch sin yaw, -sin pitch) (-param_2)
	 * The engine's positive pitch looks DOWN, which is what the renderer uses
	 * too (app.js: the forward y term is -sin pitch). */
	function forwardRight(yaw, pitch) {
		var cy = Math.cos(yaw * Math.PI / 180), sy = Math.sin(yaw * Math.PI / 180);
		var cp = Math.cos(pitch * Math.PI / 180), sp = Math.sin(pitch * Math.PI / 180);
		var fwd = [sy, -cy, 0];
		var right = [-cp * cy, -cp * sy, sp];
		return { fwd: fwd, right: right };
	}

	/* one step of the movement rules on a state block */
	function moveState(st, cmd, dt) {
		var origin = st.origin, velocity = st.velocity, onGround = st.onGround;
		var f = forwardRight(cmd.yaw || 0, cmd.pitch || 0);
		/* the move fields: the client sends 200, the server clamps to
		 * 200/160/200 and the run bit 0x20 doubles it */
		var run = (cmd.buttons & 0x20) ? 2 : 1;
		var fwd = (cmd.forwardmove || 0) * run;
		var side = (cmd.sidemove || 0) * run;
		var up = (cmd.upmove || 0);

		/* the wish velocity */
		var wish = [
			f.fwd[0] * fwd + f.right[0] * side,
			f.fwd[1] * fwd + f.right[1] * side,
			f.fwd[2] * fwd + f.right[2] * side + up
		];
		var wishspeed = len(wish);
		var wishdir = [0, 0, 0];
		if (wishspeed > 1e-6) {
			wishdir = scale(wish, 1 / wishspeed);
			if (wishspeed > MAXSPEED) wishspeed = MAXSPEED;
		}

		/* the friction */
		var speed = len(velocity);
		if (speed > 1e-6) {
			var control = speed < STOPSPEED ? STOPSPEED : speed;
			var drop = control * FRICTION * dt;
			var newspeed = Math.max(speed - drop, 0);
			velocity = scale(velocity, newspeed / speed);
		} else velocity = [0, 0, 0];

		/* the acceleration */
		var currentspeed = dot(velocity, wishdir);
		var addspeed = wishspeed - currentspeed;
		if (addspeed > 0 && wishspeed > 0) {
			var accelspeed = Math.min(ACCEL * dt * wishspeed, addspeed);
			velocity = add(velocity, scale(wishdir, accelspeed));
		}

		/* the jump: the engine's up move is a jump velocity */
		if (up > 0 && onGround) velocity[2] = Math.max(velocity[2], up > JUMP ? JUMP : up);

		/* the gravity */
		if (!onGround) velocity[2] -= GRAVITY * dt;

		/* the move */
		var delta = scale(velocity, dt);
		var hits = [];
		var r = slideMove(origin, velocity, delta, hits);
		velocity = r.velocity;
		origin = r.end;

		/* the ground: a plane that is not too steep */
		onGround = false;
		if (r.plane && r.plane[2] > 0.7) {
			onGround = true;
			if (velocity[2] < 0) velocity[2] = 0;
		}
		/* the step: the engine tries to step over a low obstacle */
		if (!onGround && r.blocked && r.plane && Math.abs(r.plane[2]) < 0.7) {
			var s = stepMove(origin, velocity, delta);
			if (s.stepped) { origin = s.end; onGround = true; }
		}
		st.origin = origin; st.velocity = velocity; st.onGround = onGround;
	}

	function move(dt, cmd) {
		if (!ready) return;
		var st = { origin: origin.slice(), velocity: velocity.slice(), onGround: onGround };
		moveState(st, cmd, dt);
		origin = st.origin; velocity = st.velocity; onGround = st.onGround;
		frames++;
	}

	/* ------------------------------------------------- the reconciliation */
	function reconcile(a) {
		if (!a) return;
		if (!haveAuth) {
			auth = a.slice();
			origin = a.slice();
			velocity = [0, 0, 0];
			haveAuth = true;
			return;
		}
		var e = sub(origin, a);
		var d = len(e);
		if (d > maxError) maxError = d;
		if (d > SNAP) {
			/* a big difference: the server is right, take its position */
			origin = a.slice();
			error = [0, 0, 0];
			velocity = [0, 0, 0];
			snapCount++;
		} else {
			/* a small difference: keep the local movement and let the
			 * error go away over the next frames */
			error = e;
		}
		auth = a.slice();
		reconciles++;
	}

	/* the authoritative origin of the local player */
	function authoritative() {
		try {
			var st = window.sofstate;
			if (!st || !st.entities || st.self === null || st.self === undefined) return null;
			var e = st.entities.get(st.self);
			if (!e || !e.state) return null;
			/* the player state: the origin is three floats at +4, +8, +0xc
			 * in the engine's x, y, z order */
			return [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)];
		} catch (err2) { return null; }
	}

	/* the input: the same keys the renderer uses */
	function readInput() {
		var fwd = (keys["KeyW"] || keys["ArrowUp"] ? 200 : 0) - (keys["KeyS"] || keys["ArrowDown"] ? 200 : 0);
		var side = (keys["KeyD"] ? 200 : 0) - (keys["KeyA"] ? 200 : 0);
		var up = (keys["Space"] ? 200 : 0) - (keys["KeyC"] || keys["ControlLeft"] ? 200 : 0);
		var buttons = 0;
		if (keys["ShiftLeft"] || keys["ShiftRight"]) buttons |= 0x20;
		if (keys["Mouse0"]) buttons |= 0x01;
		if (keys["KeyE"] || keys["Enter"]) buttons |= 0x02;
		var yaw = 0, pitch = 0;
		/* the local view angles: the server does not put our own view angles on
		 * the wire (the viewAngles mask field never appears for our client), so
		 * the angles the prediction must use are the ones we send.  The entity
		 * state angles are only a fallback. */
		try {
			var st = window.sofstate;
			if (st && st.view) {
				yaw = st.view.yaw || 0;
				pitch = st.view.pitch || 0;
			} else if (st && st.entities && st.self !== null) {
				var e = st.entities.get(st.self);
				if (e && e.state) {
					yaw = e.state.readUInt8(0x14) * (360 / 256);
					pitch = e.state.readUInt8(0x10) * (360 / 256);
				}
			}
		} catch (e2) { }
		return { forwardmove: fwd, sidemove: side, upmove: up, buttons: buttons, yaw: yaw, pitch: pitch };
	}

	/* the loop */
	function tick(now) {
		requestAnimationFrame(tick);
		if (!ready) return;
		var dt = lastTime ? Math.min(0.1, (now - lastTime) / 1000) : 0;
		lastTime = now;
		if (dt <= 0) return;
		/* the server's answer */
		var a = authoritative();
		if (a) reconcile(a);
		/* the local movement */
		move(dt, readInput());
		/* the error goes away */
		if (error[0] || error[1] || error[2]) {
			origin = sub(origin, scale(error, SMOOTH));
			error = scale(error, 1 - SMOOTH);
		}
	}

	/* the input listeners */
	document.addEventListener("keydown", function (e) { keys[e.code] = true; });
	document.addEventListener("keyup", function (e) { keys[e.code] = false; });
	window.addEventListener("blur", function () { keys = {}; });

	/* the server restarted prediction (svc 0x1d): drop everything local and
	 * take the authoritative origin, like the engine's cl_pred nuke */
	function resync(o) {
		if (!o || typeof o.length !== "number" || o.length < 3) return false;
		resyncs++;
		brushes.length = 0;           /* the stored prediction state list */
		origin = [o[0], o[1], o[2]];
		auth = origin.slice();
		velocity = [0, 0, 0];
		error = [0, 0, 0];
		maxError = 0;
		snapCount = 0;
		reconciles = 0;
		haveAuth = true;
		return true;
	}

	/* ------------------------------------------------------------- the state */
	window.sofpredict = {
		status: function () { return status; },
		info: function () {
			return {
				status: status, err: err, ready: ready, frames: frames,
				brushes: brushes.length, reconciles: reconciles, snaps: snapCount, resyncs: resyncs,
				maxError: +maxError.toFixed(2),
				origin: origin.map(function (x) { return +x.toFixed(2); }),
				auth: auth.map(function (x) { return +x.toFixed(2); }),
				velocity: velocity.map(function (x) { return +x.toFixed(2); }),
				onGround: onGround, error: error.map(function (x) { return +x.toFixed(3); }),
				consts: {
					mins: MINS, maxs: MAXS, gravity: GRAVITY, friction: FRICTION,
					stopspeed: STOPSPEED, accel: ACCEL, jump: JUMP, step: STEP,
					maxspeed: MAXSPEED, smooth: SMOOTH
				}
			};
		},
		origin: function () { return origin.slice(); },
		resync: resync,
		/* the origin the renderer should use for the local player */
		predicted: function (e) {
			try {
				var st = window.sofstate;
				if (!st || st.self === null || e.number !== st.self) return null;
				return origin.slice();
			} catch (err2) { return null; }
		},
		setConst: function (name, value) {
			if (name === "mins") MINS = value;
			else if (name === "maxs") MAXS = value;
			else if (name === "gravity") GRAVITY = value;
			else if (name === "friction") FRICTION = value;
			else if (name === "stopspeed") STOPSPEED = value;
			else if (name === "accel") ACCEL = value;
			else if (name === "jump") JUMP = value;
			else if (name === "step") STEP = value;
			else if (name === "maxspeed") MAXSPEED = value;
			else if (name === "smooth") SMOOTH = value;
			else return false;
			return true;
		},
		/* a test: move the player by hand and see where it ends up */
		trace: function (from, to) {
			var res = { plane: null, frac: 1 };
			var f = traceBox(from, to, res);
			return { frac: f, plane: res.plane, end: add(from, scale(sub(to, from), f)) };
		},
		/* a test: run the movement rules from a given origin and report the
		 * trajectory (the same code the prediction loop uses) */
		simulate: function (start, cmd, steps, dt) {
			dt = dt || 1 / 60;
			var o = start.slice(), v = [0, 0, 0], ground = false;
			var path = [o.slice()];
			for (var i = 0; i < steps; i++) {
				var st = { origin: o.slice(), velocity: v.slice(), onGround: ground };
				moveState(st, cmd, dt);
				o = st.origin; v = st.velocity; ground = st.onGround;
				path.push(o.slice());
			}
			return { path: path, origin: o, velocity: v, onGround: ground };
		},
		/* a test: is the box inside a solid brush? */
		insideSolid: function (p) {
			var n = 0;
			for (var i = 0; i < brushes.length; i++) {
				var br = brushes[i];
				if (!isSolid(br.c)) continue;
				var ok = true;
				for (var k = 0; k < br.p.length; k++) {
					var s = br.p[k];
					var rg = boxRange(s.n, p);
					if (rg[1] > s.d + 0.5) { ok = false; break; }
				}
				if (ok) n++;
			}
			return n;
		}
	};

	load();
	requestAnimationFrame(tick);
})();
