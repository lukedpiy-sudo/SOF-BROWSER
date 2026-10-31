/*
 * psmove6.js - does a SMALL movement value keep the player on the floor?
 *
 * With no input the player lands on the floor (z 16.1 = the spawn's z); with
 * any movement input it falls through the world.  So the movement scale is
 * probably far too large for the module: the player is moved further per
 * frame than the collision can catch, or the module's scale is much bigger
 * than ours.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null;
const SPEEDS = [5, 20, 50, 100, 200];

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
			console.log(("moveSpeed " + SPEEDS[phase]).padEnd(16) + " dx=" + (o[0] - phaseOrigin[0]).toFixed(1) +
				" dy=" + (o[1] - phaseOrigin[1]).toFixed(1) + " dz=" + (o[2] - phaseOrigin[2]).toFixed(1) +
				"   pos " + o.map((v) => v.toFixed(1)).join(","));
			client.setKey("KeyW", false);
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= SPEEDS.length) { console.log("--- done"); process.exit(0); }
			client.setMoveSpeed(SPEEDS[phase]);
			client.setKey("KeyW", true);
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => {
	client.start();
	setTimeout(() => { client.setMoveSpeed(SPEEDS[0]); client.setKey("KeyW", true); }, 4000);
});
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
