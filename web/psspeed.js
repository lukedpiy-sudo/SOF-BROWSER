/*
 * psspeed.js - measure the movement scale and the button bits precisely.
 *
 * The player walks in a straight line and the per-packet origin deltas are
 * collected.  A wall would stop the player, so each phase first searches for
 * a heading that actually moves (the median of the non-zero deltas is the
 * speed), and only then measures the configuration.
 *
 * The configurations are:
 *   - the movement value (the engine's own scale)
 *   - the run bit (0x20), which the game module doubles the movement with
 *   - the other button bits, which must not change the movement
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const CONFIGS = [
	{ name: "move=100", move: 100, keys: [] },
	{ name: "move=200", move: 200, keys: [] },
	{ name: "move=200 + run(0x20)", move: 200, keys: ["ShiftLeft"] },
	{ name: "move=100 + run(0x20)", move: 100, keys: ["ShiftLeft"] },
	{ name: "move=200 + use(0x02)", move: 200, keys: ["KeyE"] },
	{ name: "move=200 + attack(0x01)", move: 200, keys: ["Mouse0"] },
	{ name: "move=200, no buttons", move: 200, keys: [] }
];

let phase = 0, t0 = 0, lastPos = null, deltas = [], yaw = 0, heading = 0;

function median(a) {
	if (!a.length) return 0;
	const s = a.slice().sort((x, y) => x - y);
	return s[s.length >> 1];
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (!st.origin) return;
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 1500) return;
			phase = 1;
			t0 = now;
			lastPos = st.origin.slice();
			deltas = [];
			client.setKey("KeyW", true);
			client.setMoveSpeed(CONFIGS[0].move);
			console.log("phase 0: ready");
			return;
		}
		if (phase > CONFIGS.length) return;
		if (lastPos) {
			const d = Math.hypot(st.origin[0] - lastPos[0], st.origin[1] - lastPos[1]);
			deltas.push(d);
		}
		lastPos = st.origin.slice();
		client.view.yaw = heading;
		client.view.pitch = 0;
		const elapsed = (now - t0) / 1000;
		if (elapsed >= 1.6) {
			const c = CONFIGS[phase - 1];
			const moved = deltas.filter(d => d > 0.5);
			const speed = median(moved) * 20;      /* 20 packets per second */
			console.log(c.name + ": median " + median(moved).toFixed(1) + " units/packet = " +
				speed.toFixed(0) + " units/s  (" + moved.length + "/" + deltas.length + " moved)");
			for (const k of ["KeyW", "ShiftLeft", "KeyE", "Mouse0"]) client.setKey(k, false);
			client.setMoveSpeed(CONFIGS[phase] ? CONFIGS[phase].move : 200);
			lastPos = st.origin.slice();
			deltas = [];
			t0 = now;
			heading = (heading + 137) % 360;      /* a new heading for the next phase */
			if (phase < CONFIGS.length) {
				phase++;
				for (const k of CONFIGS[phase - 1].keys) client.setKey(k, true);
			} else {
				console.log("--- done");
				process.exit(0);
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 30000);
