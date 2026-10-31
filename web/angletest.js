/* angletest.js - send known view angles and read back the server's echo.
 *
 * The local player entity carries the server's authoritative view angles in
 * the entity state, so this verifies the angle encoding and the axis
 * convention in one go.  The local entity is found by its angle echo (the
 * server's slot number changes as stale clients pile up).
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const TRIALS = [[0, 0], [90, 0], [180, 0], [0, 45], [90, -30]];
let phase = 0;
let tPhase = 0;
let selfNum = null;
let results = [];
const lastAngles = new Map();

function angleOf(e) {
	return { pitch: e.state.readFloatLE(0x10), yaw: e.state.readFloatLE(0x14) };
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "frame") {
			const want = TRIALS[phase];
			if (!want) return;
			/* find the entity whose angles move with our view */
			let best = null, bestErr = 1e9;
			for (const e of data.entities.values()) {
				if (!e.state) continue;
				const a = angleOf(e);
				const prev = lastAngles.get(e.number);
				lastAngles.set(e.number, a);
				if (!prev) continue;
				/* the entity that follows the view changed the most */
				const changed = Math.abs(a.yaw - prev.yaw) + Math.abs(a.pitch - prev.pitch);
				const d = Math.min(Math.abs(a.yaw - want[0]), 360 - Math.abs(a.yaw - want[0]));
				const p = Math.min(Math.abs(a.pitch - want[1]), 360 - Math.abs(a.pitch - want[1]));
				const err = d + p - changed * 10;
				if (err < bestErr) { bestErr = err; best = { num: e.number, a }; }
			}
			if (!best) return;
			if (Date.now() - tPhase > 1500) {
				console.log("trial " + phase + ": sent yaw=" + want[0] + " pitch=" + want[1] +
					"  entity #" + best.num + " echo: pitch=" + best.a.pitch.toFixed(2) +
					" yaw=" + best.a.yaw.toFixed(2));
				results.push({ want: want, got: best.a, num: best.num });
				selfNum = best.num;
				phase++;
				tPhase = Date.now();
				if (phase < TRIALS.length) {
					client.view.yaw = TRIALS[phase][0];
					client.view.pitch = TRIALS[phase][1];
				}
			}
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setTimeout(() => {
	console.log("--- summary (sent -> server echo), local entity #" + selfNum);
	results.forEach(r => console.log("   yaw " + r.want[0] + " pitch " + r.want[1] +
		"  ->  yaw " + r.got.yaw.toFixed(2) + " pitch " + r.got.pitch.toFixed(2)));
	process.exit(0);
}, 16000);
