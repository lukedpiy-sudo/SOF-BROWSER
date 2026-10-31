/* pssolve5.js - find the stat mask by consistency across many captures.
 *
 * The stats are the last thing before the trailing reads.  For every
 * candidate (offset, endianness) the stats are decoded from all the
 * collected blocks and the hypothesis is scored on:
 *   - the health (the value 100 on spawn) appears at the SAME index in every
 *     block,
 *   - the other stats are stable and plausible,
 *   - the number of trailing bytes is the same in every block.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const blocks = [];
let self = null;

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
		if (!self) {
			for (const e of data.entities.values()) {
				if (!e.state) continue;
				const x = e.state.readFloatLE(0x04);
				if (Math.abs(x * 8 - Math.round(x * 8)) > 1e-6) continue;
				self = e;
				break;
			}
			if (!self) return;
		}
		if (blocks.length < 30) blocks.push(Buffer.from(f.playerState));
		if (blocks.length < 30) return;

		/* the origin offset, from the first block */
		const o = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08), self.state.readFloatLE(0x0c)];
		const q = o.map(v => Math.round(v * 8));
		let originOff = -1;
		for (let off = 0; off + 6 <= blocks[0].length; off++) {
			if (blocks[0].readInt16LE(off) === q[0] && blocks[0].readInt16LE(off + 2) === q[1] &&
				blocks[0].readInt16LE(off + 4) === q[2]) { originOff = off; break; }
		}
		console.log("the origin is at +" + originOff + " (LE s16) in " + blocks[0].length + " byte blocks");

		/* the hypotheses */
		const results = [];
		for (let off = 4; off + 4 <= blocks[0].length; off++) {
			for (const be of [true, false]) {
				const masks = blocks.map(b => be ? b.readUInt32BE(off) : b.readUInt32LE(off));
				const counts = masks.map(popcount);
				if (!counts.every(c => c > 0 && c <= 12)) continue;
				if (!counts.every(c => c === counts[0])) continue;
				const cnt = counts[0];
				/* the stats must fit */
				if (off + 4 + cnt * 2 > blocks[0].length) continue;
				/* decode the stats of every block */
				const perBlock = blocks.map((b, bi) => {
					const idx = [];
					const m = masks[bi];
					for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
					const vals = idx.map((_, k) => be ? b.readInt16BE(off + 4 + k * 2) : b.readInt16LE(off + 4 + k * 2));
					return { idx, vals };
				});
				/* the trailing bytes must be the same in every block */
				const trails = blocks.map(b => b.length - (off + 4 + cnt * 2));
				if (!trails.every(t => t === trails[0])) continue;
				/* the health (100) must be at the same index in every block */
				let healthAt = -1;
				for (let k = 0; k < cnt; k++) {
					if (perBlock.every(p => p.vals[k] === 100)) { healthAt = k; break; }
				}
				if (healthAt < 0) continue;
				/* the other stats must be stable and plausible */
				let ok = true;
				for (let k = 0; k < cnt; k++) {
					if (k === healthAt) continue;
					const v0 = perBlock[0].vals[k];
					if (v0 < 0 || v0 > 100000) { ok = false; break; }
				}
				if (!ok) continue;
				results.push({ off, be, cnt, healthAt, idx: perBlock[0].idx, vals: perBlock[0].vals, trail: trails[0] });
			}
		}
		console.log("\n" + results.length + " candidates:");
		results.forEach(r => {
			console.log("  the stat mask at +" + r.off + " " + (r.be ? "BE" : "LE") + ", " + r.cnt +
				" stats, the trailing " + r.trail + " bytes, the health at index " + r.healthAt);
			console.log("      " + r.idx.map((x, k) => x + "=" + r.vals[k]).join(" "));
		});
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
