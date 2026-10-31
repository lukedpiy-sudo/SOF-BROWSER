/*
 * psmove3.js - which command field actually moves the player?
 *
 * The player barely moves horizontally, so one phase per candidate:
 * nothing, forward, forward+run, side, up, and a big forward value.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let t0 = Date.now(), last = null, phase = 0, phaseStart = 0, phaseOrigin = null;
const PHASES = [
	{ name: "idle", fwd: 0, side: 0, up: 0, run: 0 },
	{ name: "forward 200", fwd: 200, side: 0, up: 0, run: 0 },
	{ name: "forward 200 + run", fwd: 200, side: 0, up: 0, run: 0x20 },
	{ name: "side 200", fwd: 0, side: 200, up: 0, run: 0 },
	{ name: "up 200", fwd: 0, side: 0, up: 200, run: 0 },
	{ name: "forward 200 (msec 50)", fwd: 200, side: 0, up: 0, run: 0, msec: 50 }
];

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	cmdPatchRing: (cmd) => {
		const p = PHASES[phase];
		if (!p) return;
		cmd[0] = p.msec || 16;
		cmd[1] = p.run;
		cmd[10] = p.fwd; cmd[11] = p.fwd >> 8;
		cmd[12] = p.side; cmd[13] = p.side >> 8;
		cmd[14] = p.up; cmd[15] = p.up >> 8;
	},
	onEvent: (n, d) => {
		if (n !== "frame") return;
		const st = decodePlayerState(d.frame.playerState, 0);
		if (!st.origin) return;
		const o = st.origin;
		if (phaseStart === 0) { phaseStart = Date.now(); phaseOrigin = o.slice(); }
		const key = o.join(",");
		if (key !== last) {
			last = key;
			console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] " +
				PHASES[phase].name + "  pos " + o.map((v) => v.toFixed(1)).join(",") +
				"  delta " + o.map((v, i) => (v - phaseOrigin[i]).toFixed(1)).join(","));
		}
		if (Date.now() - phaseStart > 6000) {
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= PHASES.length) { console.log("--- done"); process.exit(0); }
			console.log("=== phase " + phase + ": " + PHASES[phase].name);
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
