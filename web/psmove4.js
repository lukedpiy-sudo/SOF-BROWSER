/*
 * psmove4.js - does the player move in ANY direction?
 *
 * The spawn point of nycdm1 is (-2304, -1920, 16) with the angle 180, and the
 * player appears 10 units above it and lands on the floor (z 16.1) - so the
 * collision works.  The spawn faces a wall, so this test walks in all four
 * directions and reports the displacement of each.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null;
const PHASES = [
	{ name: "idle", keys: [] },
	{ name: "W (forward)", keys: ["KeyW"] },
	{ name: "S (back)", keys: ["KeyS"] },
	{ name: "A (left)", keys: ["KeyA"] },
	{ name: "D (right)", keys: ["KeyD"] },
	{ name: "W + run", keys: ["KeyW", "ShiftLeft"] }
];

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	onEvent: (n, d) => {
		if (n !== "frame") return;
		const st = decodePlayerState(d.frame.playerState, 0);
		if (!st.origin) return;
		const o = st.origin;
		if (phaseStart === 0) { phaseStart = Date.now(); phaseOrigin = o.slice(); }
		if (Date.now() - phaseStart > 5000) {
			console.log(PHASES[phase].name.padEnd(12) + "  dx=" + (o[0] - phaseOrigin[0]).toFixed(1) +
				" dy=" + (o[1] - phaseOrigin[1]).toFixed(1) + " dz=" + (o[2] - phaseOrigin[2]).toFixed(1) +
				"   pos " + o.map((v) => v.toFixed(1)).join(","));
			for (const k of PHASES[phase].keys) client.setKey(k, false);
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= PHASES.length) { console.log("--- done"); process.exit(0); }
			for (const k of PHASES[phase].keys) client.setKey(k, true);
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); setTimeout(() => { for (const k of PHASES[0].keys) client.setKey(k, true); }, 3000); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
