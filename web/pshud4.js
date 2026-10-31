/* pshud4.js - find the stat mask by using the engine's own stat mapping.
 *
 * SoF.exe reads the health from 0x201E7F42 and the armour from 0x201E7F3A;
 * the stat array base is 0x201E7F38, so the health is stats[5] and the armour
 * is stats[1].  The stats are read in ascending index order into
 * area+0xA4+2*i, so the value of stats[i] is the (number of set bits below
 * i)-th value of the stat run.
 *
 * The block: [u32 mask][the fields in code order][u32 stat mask][the stats]
 * [the trailing reads].  The mask and the stat mask are read with the same
 * primitive, so they share the endianness - the whole block is little endian
 * (the origin is three LE s16, proven against the entity state).
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let done = false;

function popcount(v) {
	let c = 0;
	for (let i = 0; i < 32; i++) if (v & (1 << i)) c++;
	return c;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame" || done) return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 24) return;
		const b = f.playerState;

		/* the local player: the entity whose origin shorts appear in the block */
		let self = null, originOff = -1;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const q = [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)]
				.map(v => Math.round(v * 8));
			for (let off = 0; off + 6 <= b.length; off++) {
				if (b.readInt16LE(off) === q[0] && b.readInt16LE(off + 2) === q[1] &&
					b.readInt16LE(off + 4) === q[2]) { self = e; originOff = off; }
			}
			if (self) break;
		}
		if (!self) return;
		done = true;
		console.log("entity #" + self.number + ", the origin at +" + originOff +
			" (LE s16), the block is " + b.length + " bytes");
		console.log("  " + Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));

		/* the stat mask: a u32 whose set bits, in ascending order, select the
		 * stat values; the value of stats[5] must be 100 (the spawn health)
		 * and the value of stats[1] must be a plausible armour (0..100) */
		const out = [];
		for (let M = 4; M + 4 <= b.length; M++) {
			const m = b.readUInt32LE(M);
			const cnt = popcount(m);
			if (cnt === 0 || cnt > 14) continue;
			const idx = [];
			for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
			if (idx.indexOf(5) < 0) continue;              /* the health is not sent */
			const start = M + 4;
			if (start + 2 * cnt > b.length) continue;
			const vals = idx.map((_, k) => b.readInt16LE(start + 2 * k));
			const health = vals[idx.indexOf(5)];
			if (health !== 100) continue;
			const armor = idx.indexOf(1) >= 0 ? vals[idx.indexOf(1)] : null;
			if (armor !== null && (armor < 0 || armor > 100)) continue;
			const trail = b.length - (start + 2 * cnt);
			if (trail < 0 || trail > 8) continue;
			out.push({ M, m, cnt, idx, vals, trail, armor });
		}
		console.log("\n" + out.length + " candidates (the health = stats[5] = 100, LE):");
		out.forEach(r => {
			console.log("  the stat mask at +" + r.M + " = 0x" + (r.m >>> 0).toString(16) +
				", " + r.cnt + " stats, the trailing " + r.trail + " bytes");
			console.log("      " + r.idx.map((x, k) => x + "=" + r.vals[k]).join(" "));
		});
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
