/* pskill.js - identify the health stat by a differential.
 *
 * The engine's HUD reads the health from client slot 5 (0x201E7F42) and the
 * armour from slot 1 (0x201E7F3A), with the stat array base at 0x201E7F38.
 * The wire order is proved empirically: the health is the value 100 on the
 * spawn frame, and the dead flag (slot 8) appears when the player dies.
 *
 * This sends a "kill" command to the server and reports which value changed
 * from 100, which pins the health without relying on the engine's slot
 * numbering.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let phase = 0, tPhase = 0, before = null;

function popcount(v) {
	let c = 0;
	for (let i = 0; i < 32; i++) if (v & (1 << i)) c++;
	return c;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 24) return;
		const b = f.playerState;

		if (phase === 0) {
			/* the first frame: remember the block */
			before = Buffer.from(b);
			phase = 1;
			tPhase = Date.now();
			setTimeout(() => {
				console.log("sending the kill command");
				client.sendStringCmd("kill");
			}, 1200);
			return;
		}
		if (phase === 1) {
			/* look for a change */
			if (Date.now() - tPhase < 800) return;
			let changed = [];
			for (let i = 0; i < Math.min(before.length, b.length); i++) {
				if (before[i] !== b[i]) changed.push(i);
			}
			if (!changed.length) return;
			phase = 2;
			console.log("the block changed at " + changed.join(","));
			console.log("  before: " + Array.from(before).map(x => x.toString(16).padStart(2, "0")).join(" "));
			console.log("  after : " + Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));
			/* where is the 100 in each? */
			const h100 = [], h0 = [];
			for (let i = 0; i + 2 <= before.length; i++) {
				if (before.readInt16LE(i) === 100) h100.push(i);
				if (before.readInt16LE(i) === 0) h0.push(i);
			}
			console.log("  the value 100 was at " + h100.join(","));
			console.log("  the value 0 was at " + h0.join(","));
			/* which of the 100 positions changed? */
			for (const p of h100) {
				if (changed.includes(p) || changed.includes(p + 1)) {
					console.log("  -> the 100 at +" + p + " changed to " + b.readInt16LE(p));
				}
			}
			process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done, no change seen"); process.exit(0); }, 20000);
