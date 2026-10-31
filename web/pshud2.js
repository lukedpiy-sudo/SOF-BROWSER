/* pshud2.js - find the stat mask on the FIRST frame after the spawn.
 *
 * On the first frame the server sends every stat, so the health (100) and the
 * armour (0) are both present.  That pins the stat mask down: the decoded
 * array must contain a 100 (the health) and a 0 (the armour).
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let spawned = false, tried = false;

function popcount(v) {
	let c = 0;
	for (let i = 0; i < 32; i++) if (v & (1 << i)) c++;
	return c;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "spawned") { spawned = true; return; }
		if (name !== "frame" || tried) return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 24) return;
		tried = true;
		const b = f.playerState;
		console.log("the first frame's block (" + b.length + " bytes):");
		console.log("  " + Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));

		/* every candidate: a u32 mask, then the stats */
		const out = [];
		for (let off = 4; off + 4 <= b.length; off++) {
			for (const be of [true, false]) {
				const m = be ? b.readUInt32BE(off) : b.readUInt32LE(off);
				const cnt = popcount(m);
				if (cnt === 0 || cnt > 12) continue;
				const idx = [];
				for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
				const end = off + 4 + cnt * 2;
				if (end > b.length) continue;
				for (const sbe of [true, false]) {
					const vals = idx.map((_, k) => sbe ? b.readInt16BE(off + 4 + k * 2) : b.readInt16LE(off + 4 + k * 2));
					/* the health is 100 and the armour is 0 */
					const has100 = vals.indexOf(100);
					const has0 = vals.indexOf(0);
					if (has100 < 0 || has0 < 0) continue;
					out.push({ off, be, sbe, m, idx, vals, trail: b.length - end });
				}
			}
		}
		console.log("\n" + out.length + " candidates with a 100 and a 0:");
		out.forEach(r => {
			console.log("  the mask at +" + r.off + " mask-" + (r.be ? "BE" : "LE") +
				" stats-" + (r.sbe ? "BE" : "LE") + " = 0x" + (r.m >>> 0).toString(16) +
				" (" + r.idx.length + " stats, the trailing " + r.trail + ")");
			console.log("      " + r.idx.map((x, k) => x + "=" + r.vals[k]).join(" "));
		});
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
