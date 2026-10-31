/* psfind.js - decode the player state and find the local player's entity.
 *
 * The player state block (35 bytes after the 0x14 marker) carries the origin
 * as three shorts with the 1/8 scale at offset 12, which identifies the local
 * player entity in the entity list.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let phase = 0, tPhase = 0, selfNum = null;
const TRIALS = [[0, 0], [90, 0], [0, 45], [180, 0]];

function psOrigin(ps) {
	return {
		x: ps.readInt16LE(12) / 8,
		y: ps.readInt16LE(14) / 8,
		z: ps.readInt16LE(16) / 8
	};
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		const o = psOrigin(ps);
		/* find the entity with that origin */
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
			if (Math.abs(ex - o.x) < 2 && Math.abs(ey - o.y) < 2 && Math.abs(ez - o.z) < 2) { self = e; break; }
		}
		if (self) selfNum = self.number;
		if (Date.now() - tPhase > 1500 && phase < TRIALS.length) {
			const want = TRIALS[phase];
			const a = self ? { pitch: self.state.readFloatLE(0x10), yaw: self.state.readFloatLE(0x14),
				roll: self.state.readFloatLE(0x1c) } : null;
			console.log("sent yaw=" + want[0] + " pitch=" + want[1] +
				"   ps origin=(" + o.x.toFixed(1) + "," + o.y.toFixed(1) + "," + o.z.toFixed(1) + ")" +
				"   entity #" + selfNum + (a ? " angles=(" + a.pitch.toFixed(2) + "," + a.yaw.toFixed(2) + "," + a.roll.toFixed(2) + ")" : " (no entity)"));
			phase++;
			tPhase = Date.now();
			if (phase < TRIALS.length) { client.view.yaw = TRIALS[phase][0]; client.view.pitch = TRIALS[phase][1]; }
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done, local entity #" + selfNum); process.exit(0); }, 14000);
