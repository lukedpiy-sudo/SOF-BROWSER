/*
 * psmsec.js - what does the msec field do?
 *
 * The game module's ClientThink (0x500F53A0) does, on the usercmd's msec
 * byte:
 *
 *   if (msec < 0x22) ... else { n = msec / 10; cmd->msec = (msec % 10) + 10; }
 *
 * so the msec byte is the number of MILLISECONDS elapsed since the previous
 * command, and the module runs n = msec/10 movement simulations per command.
 *
 * The browser client currently sends a CUMULATIVE counter (50, 100, 150 ...)
 * which makes the server simulate many frames per command.  This measures
 * the speed for several msec schemes.
 *
 * The player walks in short bursts so that it never reaches a wall.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* [name, msec scheme] - the scheme is a function of the packet counter */
const SCHEMES = [
	{ name: "cumulative 50,100,150..", fn: (n) => (50 * n) & 0xff },
	{ name: "delta 50 (constant)", fn: () => 50 },
	{ name: "delta 16 (60 fps)", fn: () => 16 },
	{ name: "delta 10 (100 fps)", fn: () => 10 },
	{ name: "delta 0", fn: () => 0 },
	{ name: "delta 33 (max <0x22)", fn: () => 33 }
];

let phase = 0, t0 = 0, lastPos = null, deltas = [], counter = 0, heading = 0;
let scheme = SCHEMES[0];

function median(a) {
	if (!a.length) return 0;
	const s = a.slice().sort((x, y) => x - y);
	return s[s.length >> 1];
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: function (cmd) {
		counter++;
		cmd[0] = scheme.fn(counter) & 0xff;
	},
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
			counter = 0;
			scheme = SCHEMES[0];
			client.setKey("KeyW", true);
			client.setMoveSpeed(200);
			console.log("phase 0: ready");
			return;
		}
		if (phase > SCHEMES.length) return;
		if (lastPos) deltas.push(Math.hypot(st.origin[0] - lastPos[0], st.origin[1] - lastPos[1]));
		lastPos = st.origin.slice();
		client.view.yaw = heading;
		client.view.pitch = 0;
		const elapsed = (now - t0) / 1000;
		if (elapsed >= 2.0) {
			const moved = deltas.filter(d => d > 0.5);
			console.log(scheme.name + ": median " + median(moved).toFixed(1) +
				" units/packet (" + moved.length + "/" + deltas.length + " moved)");
			client.setKey("KeyW", false);
			lastPos = st.origin.slice();
			deltas = [];
			t0 = now;
			counter = 0;
			heading = (heading + 137) % 360;
			if (phase < SCHEMES.length) {
				phase++;
				scheme = SCHEMES[phase - 1];
				client.setKey("KeyW", true);
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
