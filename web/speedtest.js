/* speedtest.js - measure how far the player travels for a given movement
 * value.  The engine scales the movement, so the useful value is measured,
 * not assumed.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let self = null, lastPos = null, tStart = 0, tEnd = 0;
let results = [];
let phase = 0, tPhase = 0;
const VALUES = [100, 200, 400, 800, 1600, 3200];

function findSelf(data, ps) {
	for (const e of data.entities.values()) {
		if (!e.state) continue;
		const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
		for (let i = 0; i + 6 <= ps.length; i++) {
			if (ps.readInt16LE(i) !== Math.round(ex * 8)) continue;
			if (ps.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
			if (ps.readInt16LE(i + 4) !== Math.round(ez * 8)) continue;
			return e;
		}
	}
	return null;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		const e = findSelf(data, ps);
		if (!e) return;
		self = e;
		const pos = [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08)];
		const now = Date.now();
		if (phase === 0) {
			phase = 1; tPhase = now; lastPos = pos;
			client.setMoveSpeed(VALUES[0]);
			client.setKey("KeyW", true);
			return;
		}
		if (phase === 1 && now - tPhase > 4000) {
			/* measure this value */
			const d = Math.hypot(pos[0] - lastPos[0], pos[1] - lastPos[1]);
			results.push({ v: VALUES[results.length], dist: d, secs: (now - tPhase) / 1000 });
			console.log("value " + VALUES[results.length - 1] + ": moved " + d.toFixed(1) +
				" units in " + ((now - tPhase) / 1000).toFixed(1) + "s = " +
				(d / ((now - tPhase) / 1000)).toFixed(1) + " units/s");
			if (results.length >= VALUES.length) {
				console.log("--- done");
				process.exit(0);
			}
			phase = 2; tPhase = now; lastPos = pos;
			client.setMoveSpeed(VALUES[results.length]);
		} else if (phase === 2 && now - tPhase > 700) {
			phase = 1; tPhase = now; lastPos = pos;
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 45000);
