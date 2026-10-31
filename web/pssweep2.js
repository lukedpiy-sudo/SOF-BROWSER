/*
 * pssweep2.js - a compact sweep: which byte of the command moves the player?
 * One line per byte: the byte, the horizontal displacement and the z drift.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null, t0 = Date.now();
const OFFSETS = [];
for (let o = 0x04; o <= 0x17; o++) OFFSETS.push(o);

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	cmdPatchRing: (cmd) => {
		cmd.fill(0, 1, 24);
		cmd[0] = 16;
		const o = OFFSETS[phase];
		if (o === undefined) return;
		cmd[o] = 0xff;
		if (o % 2 === 0 && o >= 0x0a) cmd[o + 1] = 0x7f;
	},
	onEvent: (n, d) => {
		if (n !== "frame") return;
		const st = decodePlayerState(d.frame.playerState, 0);
		if (!st.origin) return;
		const o = st.origin;
		if (phaseStart === 0) { phaseStart = Date.now(); phaseOrigin = o.slice(); }
		if (Date.now() - phaseStart > 2500) {
			const dx = o[0] - phaseOrigin[0], dy = o[1] - phaseOrigin[1], dz = o[2] - phaseOrigin[2];
			console.log("byte 0x" + OFFSETS[phase].toString(16) + "  dx=" + dx.toFixed(1) +
				" dy=" + dy.toFixed(1) + " dz=" + dz.toFixed(1) +
				"   pos " + o.map((v) => v.toFixed(1)).join(","));
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			if (phase >= OFFSETS.length) { console.log("--- sweep done"); process.exit(0); }
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 120000);
