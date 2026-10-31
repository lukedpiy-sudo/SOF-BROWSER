/* pssolve4.js - pin down the player state's stat mask and the field order.
 *
 * Anchors:
 *  - the origin is three s16 LITTLE endian at a fixed offset in the block
 *    (measured: +11 in the 46 byte block, +12 in the 58 byte block)
 *  - the stats are the last thing before the trailing reads; the stat mask is
 *    a u32 immediately before them
 *  - the health is 100 on spawn (stats[5] drives the health bar)
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const blocks = [];
let n = 0;

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
		if (blocks.length < 4) blocks.push(Buffer.from(f.playerState));
		if (++n % 20) return;

		/* the local entity: the one whose origin is a multiple of 1/8 and
		 * which is the lowest numbered player-like entity */
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const x = e.state.readFloatLE(0x04);
			if (Math.abs(x * 8 - Math.round(x * 8)) > 1e-6) continue;
			if (!self) self = e;
		}
		if (!self) return;
		const o = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08), self.state.readFloatLE(0x0c)];
		const q = o.map(v => Math.round(v * 8));

		const b = f.playerState;
		console.log("\n=== a " + b.length + " byte block, entity #" + self.number +
			" at " + o.map(x => x.toFixed(1)).join(","));
		console.log("    " + Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));

		/* the origin */
		for (let off = 0; off + 6 <= b.length; off++) {
			if (b.readInt16LE(off) === q[0] && b.readInt16LE(off + 2) === q[1] &&
				b.readInt16LE(off + 4) === q[2]) {
				console.log("  the origin at +" + off + " (LE s16)");
			}
		}
		/* the stat mask: the stats must decode with a health of 100 and the
		 * block must end exactly after them (plus the trailing bytes) */
		for (let off = 4; off + 4 <= b.length; off++) {
			for (const be of [true, false]) {
				const m = be ? b.readUInt32BE(off) : b.readUInt32LE(off);
				const cnt = popcount(m);
				if (cnt === 0 || cnt > 10) continue;
				const idx = [];
				for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
				const vals = idx.map((_, k) => be ? b.readInt16BE(off + 4 + k * 2) : b.readInt16LE(off + 4 + k * 2));
				const hi = idx.indexOf(5);
				if (hi < 0 || vals[hi] !== 100) continue;
				const end = off + 4 + cnt * 2;
				const trail = b.length - end;
				console.log("  the stat mask at +" + off + " " + (be ? "BE" : "LE") +
					" = 0x" + (m >>> 0).toString(16) + " (" + cnt + " stats), the trailing " + trail + " bytes");
				console.log("      " + idx.map((x, k) => x + "=" + vals[k]).join(" "));
			}
		}
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 16000);
