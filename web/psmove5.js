/*
 * psmove5.js - the spawn faces a wall, so turn around and walk away.
 *
 * nycdm1's spawn point (-2304, -1920, 16) has the angle 180 and the player
 * spawns with the view yaw -90 (the engine's world direction is yaw - 90, so
 * that is exactly the spawn angle).  Walking forward therefore walks into
 * the wall.  This test turns the view 180 degrees and walks, and also walks
 * backwards and sideways, and reports the displacement of each phase.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null;
const PHASES = [
	{ name: "idle", keys: [], yaw: null },
	{ name: "W (into the wall)", keys: ["KeyW"], yaw: null },
	{ name: "W after a 180 turn", keys: ["KeyW"], yaw: 90 },
	{ name: "S (backwards)", keys: ["KeyS"], yaw: null },
	{ name: "turn 90 + W", keys: ["KeyW"], yaw: 0 }
];

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	onEvent: (n, d) => {
		if (n !== "frame") return;
		if (!d.frame || !d.frame.playerState) return;
		const st = decodePlayerState(d.frame.playerState, 0);
		if (!st.origin) return;
		const o = st.origin;
		if (phaseStart === 0) { phaseStart = Date.now(); phaseOrigin = o.slice(); }
		if (Date.now() - phaseStart > 5000) {
			console.log(PHASES[phase].name.padEnd(20) + " dx=" + (o[0] - phaseOrigin[0]).toFixed(1) +
				" dy=" + (o[1] - phaseOrigin[1]).toFixed(1) + " dz=" + (o[2] - phaseOrigin[2]).toFixed(1) +
				"   pos " + o.map((v) => v.toFixed(1)).join(","));
			for (const k of PHASES[phase].keys) client.setKey(k, false);
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= PHASES.length) { console.log("--- done"); process.exit(0); }
			const p = PHASES[phase];
			if (p.yaw !== null) client.view.yaw = p.yaw;
			for (const k of p.keys) client.setKey(k, true);
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); setTimeout(() => { for (const k of PHASES[0].keys) client.setKey(k, true); }, 4000); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
