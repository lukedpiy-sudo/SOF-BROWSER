/*
 * psmove7.js - WHICH command field is the module's forward move?
 *
 * The falling is proportional to the value we write into cmd+0x0A (the
 * engine's forward move), so the module reads that field as something
 * vertical - the three movement fields must be in a different order in the
 * module's own usercmd_t.  This writes 200 into each candidate in turn.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null;
/* the value and where it goes */
const PHASES = [
	{ name: "0x0A (engine forward)", off: 0x0a },
	{ name: "0x0C (engine side)", off: 0x0c },
	{ name: "0x0E (engine up)", off: 0x0e },
	{ name: "the extras as floats", extra: true }
];

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	cmdPatchRing: (cmd) => {
		const p = PHASES[phase];
		if (!p) return;
		if (p.extra) {
			/* the two float extras: 200 as a float */
			cmd.writeFloatLE(200, 0x10);
			cmd.writeFloatLE(0, 0x14);
		} else {
			cmd.writeInt16LE(200, p.off);
		}
	},
	onEvent: (n, d) => {
		if (n !== "frame") return;
		if (!d.frame || !d.frame.playerState) return;
		const st = decodePlayerState(d.frame.playerState, 0);
		if (!st.origin) return;
		const o = st.origin;
		if (phaseStart === 0) { phaseStart = Date.now(); phaseOrigin = o.slice(); }
		if (Date.now() - phaseStart > 5000) {
			console.log(PHASES[phase].name.padEnd(24) + " dx=" + (o[0] - phaseOrigin[0]).toFixed(1) +
				" dy=" + (o[1] - phaseOrigin[1]).toFixed(1) + " dz=" + (o[2] - phaseOrigin[2]).toFixed(1) +
				"   pos " + o.map((v) => v.toFixed(1)).join(","));
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= PHASES.length) { console.log("--- done"); process.exit(0); }
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); setTimeout(() => {}, 4000); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
