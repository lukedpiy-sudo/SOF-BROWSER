/* pssolve6.js - find the stat mask, with the corrected endianness.
 *
 * The engine reads little endian (the earlier "big endian" reading was
 * inverted).  The health is 100 on spawn; the stat that holds it is
 * somewhere in the stat array, and the stats are the last values before the
 * trailing reads.  For every candidate mask position the decoded stats are
 * printed so the health index can be read off.
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
		if (blocks.length < 25) blocks.push(Buffer.from(f.playerState));
		if (blocks.length < 25) return;

		/* where is the value 100 (the health)? */
		const b0 = blocks[0];
		const hundreds = [];
		for (let off = 0; off + 2 <= b0.length; off++) {
			if (b0.readInt16LE(off) === 100) hundreds.push(off);
		}
		console.log("the block is " + b0.length + " bytes; the value 100 is at " +
			hundreds.map(x => "+" + x).join(","));
		console.log("  " + Array.from(b0).map(x => x.toString(16).padStart(2, "0")).join(" "));

		/* the candidate stat masks: a u32 at some offset whose popcount fits
		 * the remaining bytes */
		for (let off = 4; off + 4 <= b0.length; off++) {
			for (const be of [true, false]) {
				const m = be ? b0.readUInt32BE(off) : b0.readUInt32LE(off);
				const cnt = popcount(m);
				if (cnt === 0 || cnt > 12) continue;
				const idx = [];
				for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
				if (idx.length !== cnt) continue;
				const end = off + 4 + cnt * 2;
				if (end > b0.length) continue;
				const trail = b0.length - end;
				if (trail < 0 || trail > 8) continue;
				/* the stats, LE */
				const vals = idx.map((_, k) => b0.readInt16LE(off + 4 + k * 2));
				if (!vals.includes(100)) continue;
				/* the same hypothesis must hold in every block */
				let consistent = true;
				for (const b of blocks) {
					const mm = be ? b.readUInt32BE(off) : b.readUInt32LE(off);
					if (popcount(mm) !== cnt) { consistent = false; break; }
					const v2 = [];
					for (let i = 0; i < 16; i++) if (mm & (1 << i)) v2.push(i);
					const vals2 = v2.map((_, k) => b.readInt16LE(off + 4 + k * 2));
					if (v2.join() !== idx.join()) { consistent = false; break; }
					if (b.length - (off + 4 + cnt * 2) !== trail) { consistent = false; break; }
				}
				if (!consistent) continue;
				console.log("  the stat mask at +" + off + " " + (be ? "BE" : "LE") + " = 0x" +
					(m >>> 0).toString(16) + ", " + cnt + " stats, the trailing " + trail + " bytes");
				console.log("      " + idx.map((x, k) => x + "=" + vals[k]).join(" "));
			}
		}
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
