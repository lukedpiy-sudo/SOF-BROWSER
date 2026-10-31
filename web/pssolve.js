/* pssolve.js - solve the player state's field order.
 *
 * The mask has two bits the engine's parser never tests (0x00200000 and
 * 0x80000000) but the writer may still use them, so the JS port reads six
 * bytes too few.  This searches for the extra field's position and size by
 * checking that the block is consumed exactly and the origin decodes to the
 * local entity's position.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* the field order, as the engine reads it: [maskbit, type, count] */
const FIELDS = [
	[0x00010000, "s16", 1], [0x00010000, "u8", 1], [0x00010000, "u32", 1],
	[0x00020000, "s16", 1], [0x00040000, "s16", 1],
	[0x40000000, "u8", 1], [0x20000000, "u8", 1], [0x10000000, "u8", 1],
	[0x00100000, "s16", 1], [0x00100000, "u32", 1],
	[0x00000001, "u8", 1],
	[0x00000002, "s16x3", 3], [0x00000004, "s16x3", 3],
	[0x00000008, "u8", 1], [0x00000010, "u8", 1], [0x00000020, "s16", 1],
	[0x00000040, "s16x3", 3], [0x08000000, "u8", 1],
	[0x00000080, "s8x3", 3], [0x00000100, "s16x3", 3], [0x00008000, "s16x3", 3],
	[0x00001000, "u16x3", 3], [0x00002000, "u8", 2],
	[0x00000200, "s8x3", 3], [0x00080000, "s8", 1], [0x00000400, "u8x4", 4],
	[0x00000800, "u8", 1], [0x00004000, "u8", 1]
];
const TAIL = [
	[0x00400000, "u8", 1], [0x00800000, "u8", 1], [0x01000000, "s16", 1],
	[0x02000000, "u8", 2], [0x04000000, "u8", 1]
];
const SIZE = { s16: 2, u8: 1, u32: 4, s16x3: 6, s8x3: 3, u16x3: 6, u8x4: 4, s8: 1 };

let target = null, block = null, mask = 0, statMask = 0, statCount = 0;

function sizeOf(t) { return SIZE[t]; }

/* try every insertion point and shape for the missing bytes */
function solve() {
	const base = 4 + FIELDS.reduce((a, f) => a + (mask & f[0] ? sizeOf(f[1]) : 0), 0);
	const statBytes = 4 + statCount * 2;
	const tail = TAIL.reduce((a, f) => a + (mask & f[0] ? sizeOf(f[1]) : 0), 0);
	const need = block.length - base - statBytes - tail;
	console.log("the block is " + block.length + " bytes, the known fields take " +
		base + ", the stats " + statBytes + ", the tail " + tail + " -> " + need + " bytes unaccounted for");
	console.log("the mask is 0x" + (mask >>> 0).toString(16) + ", the stat mask 0x" + (statMask >>> 0).toString(16));

	if (need === 0) { console.log("it adds up exactly"); return; }
	/* the two reserved bits: 0x00200000 (bit 21) and 0x80000000 (bit 31) */
	const reserved = [0x00200000, 0x80000000].filter(b => mask & b);
	console.log("the reserved bits that are set: " + reserved.map(b => "0x" + b.toString(16)).join(", "));

	/* try: each reserved bit carries N bytes, inserted at each position */
	const results = [];
	for (const r of reserved) {
		for (const nbytes of [1, 2, 3, 4, 6, 8, 12]) {
			for (let pos = 0; pos <= FIELDS.length; pos++) {
				/* build the order and see if the origin lands right */
				const order = FIELDS.slice();
				order.splice(pos, 0, [r, "raw", nbytes]);
				let p = 4, origin = null, angles = null;
				for (const f of order) {
					if (!(mask & f[0])) continue;
					if (f[1] === "raw") { p += f[2]; continue; }
					if (f[0] === 0x00000002) {
						const x = block.readInt16BE(p), y = block.readInt16BE(p + 2), z = block.readInt16BE(p + 4);
						origin = [x / 8, y / 8, z / 8];
						p += 6;
						continue;
					}
					if (f[0] === 0x00000100) {
						angles = [block.readInt16BE(p) * (360 / 65536), block.readInt16BE(p + 2) * (360 / 65536), block.readInt16BE(p + 4) * (360 / 65536)];
						p += 6;
						continue;
					}
					p += sizeOf(f[1]);
				}
				if (p + statBytes + tail !== block.length) continue;
				if (!origin || !target) continue;
				const d = Math.abs(origin[0] - target[0]) + Math.abs(origin[1] - target[1]) + Math.abs(origin[2] - target[2]);
				results.push({ r, nbytes, pos, d, origin, angles });
			}
		}
	}
	results.sort((a, b) => a.d - b.d);
	console.log("\nthe best candidates (the origin error):");
	results.slice(0, 8).forEach(r => {
		console.log("  bit 0x" + r.r.toString(16) + " carries " + r.nbytes + " bytes at position " + r.pos +
			"   the origin " + JSON.stringify(r.origin.map(x => +x.toFixed(1))) + "  error " + r.d.toFixed(1) +
			"  the target " + JSON.stringify(target.map(x => +x.toFixed(1))));
	});
	if (!results.length) console.log("  none - the order must be wrong in another way");
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		if (block) return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 20) return;
		block = f.playerState;
		mask = block.readUInt32BE(0);
		/* the stat mask is at the end; count the stats from the tail */
		/* find the local entity first */
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
			for (let i = 0; i + 6 <= block.length; i++) {
				if (block.readInt16LE(i) !== Math.round(ex * 8)) continue;
				if (block.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
				if (block.readInt16LE(i + 4) !== Math.round(ez * 8)) continue;
				target = [ex, ey, ez];
			}
			if (target) break;
		}
		/* brute force the stat mask position: it is a u32 whose low 16 bits
		 * select the stats; the stats are the last 2*count bytes before the
		 * trailing fields, so try every position */
		for (let p = block.length - 4; p >= 4; p -= 2) {
			const sm = block.readUInt32BE(p);
			let c = 0;
			for (let i = 0; i < 16; i++) if (sm & (1 << i)) c++;
			/* the stats would then end at p + 2*c; the trailing fields are
			 * at most 6 bytes, so p + 2*c <= block.length and the gap is
			 * small */
			if (c > 0 && c <= 8 && p + 2 * c <= block.length) {
				statMask = sm; statCount = c;
				/* the candidate is only interesting if the stats end exactly
				 * at the end of the block minus the trailing fields */
				break;
			}
		}
		console.log("the stat mask 0x" + (statMask >>> 0).toString(16) + " with " + statCount + " stats");
		solve();
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
