/*
 * pssweep.js - where does the game module read the movement from?
 *
 * The module receives our command (the msec arrives, the gravity runs) but
 * neither forward, side nor up moves the player.  So one byte of the 24 byte
 * command is swept at a time: the byte that moves the player is the one the
 * module reads the movement from.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const sock = dgram.createSocket("udp4");
let phase = 0, phaseStart = 0, phaseOrigin = null, last = null, t0 = Date.now();
const OFFSETS = [];
for (let o = 4; o <= 0x17; o++) OFFSETS.push(o);

const client = createClient({
	send: (b) => sock.send(b, 29000, "127.0.0.1"),
	cmdPatchRing: (cmd) => {
		/* clear everything, then set the swept byte */
		cmd.fill(0, 1, 24);
		cmd[0] = 16;                     /* the msec */
		cmd[4] = 0; cmd[5] = 0;          /* pitch 0 */
		cmd[6] = 0; cmd[7] = 0;          /* yaw 0 */
		const o = OFFSETS[phase];
		if (o === undefined) return;
		if (o === 0x0a || o === 0x0c || o === 0x0e || o === 0x10 || o === 0x12 || o === 0x14 || o === 0x16) {
			/* an i16 / u16 field: 0x7FFF = a big positive value */
			cmd[o] = 0xff; cmd[o + 1] = 0x7f;
		} else {
			cmd[o] = 0xff;
		}
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
			const d0 = o.map((v, i) => (v - phaseOrigin[i]).toFixed(1)).join(",");
			console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] byte 0x" +
				OFFSETS[phase].toString(16) + " -> pos " + o.map((v) => v.toFixed(1)).join(",") +
				"  delta " + d0);
		}
		if (Date.now() - phaseStart > 4000) {
			phase++;
			phaseStart = Date.now();
			phaseOrigin = o.slice();
			last = null;
			if (phase >= OFFSETS.length) { console.log("--- sweep done"); process.exit(0); }
		}
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 200000);
