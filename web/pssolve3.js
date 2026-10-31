/* pssolve3.js - locate the player state's stat mask and stats empirically.
 *
 * The stats come last: a 32 bit mask, then one 16 bit value per set bit, in
 * ascending index order.  The health is 100 on spawn, which anchors the
 * layout.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let done = false;

function popcount(v) {
	let n = 0;
	for (let i = 0; i < 32; i++) if (v & (1 << i)) n++;
	return n;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame" || done) return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 24) return;
		const b = f.playerState;

		/* the local entity */
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			if (!self) self = e;
		}
		if (!self) return;
		const o = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08), self.state.readFloatLE(0x0c)];
		const q = o.map(v => Math.round(v * 8));

		console.log("the block (" + b.length + "): " +
			Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));
		console.log("entity #" + self.number + " " + o.map(x => x.toFixed(2)).join(",") +
			"  the shorts " + q.join(","));

		/* the origin: three s16 at some offset */
		const origins = [];
		for (let off = 0; off + 6 <= b.length; off++) {
			for (const be of [true, false]) {
				const v = [0, 1, 2].map(k => be ? b.readInt16BE(off + k * 2) : b.readInt16LE(off + k * 2));
				if (v[0] === q[0] && v[1] === q[1] && v[2] === q[2]) origins.push({ off, be, v });
			}
		}
		origins.forEach(x => console.log("  the origin at +" + x.off + " " + (x.be ? "BE" : "LE")));

		/* the stat mask: a u32 whose popcount matches the trailing bytes, and
		 * whose stats contain the health 100 */
		for (let off = 0; off + 4 <= b.length; off++) {
			for (const be of [true, false]) {
				const m = be ? b.readUInt32BE(off) : b.readUInt32LE(off);
				const n = popcount(m);
				if (n === 0 || n > 10) continue;
				const end = off + 4 + n * 2;
				if (end > b.length) continue;
				/* the stats, in ascending index order */
				const idx = [];
				for (let i = 0; i < 16; i++) if (m & (1 << i)) idx.push(i);
				const vals = idx.map((_, k) => be ? b.readInt16BE(off + 4 + k * 2) : b.readInt16LE(off + 4 + k * 2));
				const hasHealth = idx.indexOf(5) >= 0 && vals[idx.indexOf(5)] === 100;
				const hasHealth2 = idx.indexOf(5) >= 0 && vals[idx.indexOf(5)] === 100;
				if (!hasHealth && !hasHealth2) continue;
				console.log("  the stat mask at +" + off + " " + (be ? "BE" : "LE") +
					" = 0x" + (m >>> 0).toString(16) + " (" + n + " stats)  the end " + end + "/" + b.length);
				console.log("      the stats " + idx.map((x, k) => x + "=" + vals[k]).join(" "));
			}
		}
		done = true;
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
