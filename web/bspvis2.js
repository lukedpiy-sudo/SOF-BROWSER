/*
 * bspvis2.js - decode the SoF v46 VISIBILITY lump.
 *
 *   node bspvis2.js <map.bsp>
 *
 * The layout (from the engine's own reader):
 *
 *   +0   u16   the number of PVS entries
 *   +2   u16   0
 *   +4   n x 8 bytes:  u16 the byte offset of the entry's data, u16 0
 *        (the offsets are relative to the start of the lump; the first one is
 *         4 + n*8, the end of the table)
 *   ...  the data, one run-length encoded block per entry
 *
 * The data blocks are decoded by the engine's unpacker (SoF.exe 0x2001bc70):
 * a byte that is not zero is a literal, a zero byte is followed by a length
 * byte and means "that many zero bytes".
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const vis = b.subarray(L(3).off, L(3).off + L(3).len);
const u16 = (o) => vis.readUInt16LE(o);

const n = u16(0);
console.log("the visibility lump:", vis.length, "bytes, the table says", n, "entries");
const tableOff = 4;
const dataStart = tableOff + n * 8;
console.log("the table ends at", dataStart, "and the first entry's offset is", u16(tableOff),
	(dataStart === u16(tableOff) ? "(EXACT)" : "(MISMATCH)"));

/* the offsets */
const offs = [];
for (let i = 0; i < n; i++) offs.push(u16(tableOff + i * 8));
let mono = 0;
for (let i = 1; i < n; i++) if (offs[i] > offs[i - 1]) mono++;
console.log("the offsets are strictly increasing:", mono, "of", n - 1);
const sizes = [];
for (let i = 1; i < n; i++) sizes.push(offs[i] - offs[i - 1]);
sizes.push(vis.length - offs[n - 1]);
console.log("the block sizes: min", Math.min.apply(null, sizes), "max", Math.max.apply(null, sizes),
	"mean", (sizes.reduce((a, c) => a + c, 0) / sizes.length).toFixed(1));

/* the unpacker: a literal byte, or a zero byte + a length = that many zeros */
function unpack(src, start, end) {
	const out = [];
	let i = start;
	while (i < end) {
		const c = vis[i];
		if (c !== 0) { out.push(c); i++; }
		else {
			if (i + 1 >= end) { out.push(0); i++; break; }
			const len = vis[i + 1];
			for (let k = 0; k < len; k++) out.push(0);
			i += 2;
		}
	}
	return out;
}

const pvs = [];
for (let i = 0; i < n; i++) {
	const start = offs[i];
	const end = (i + 1 < n) ? offs[i + 1] : vis.length;
	pvs.push(unpack(vis, start, end));
}
const lens = pvs.map(p => p.length);
const hist = new Map();
for (const l of lens) hist.set(l, (hist.get(l) || 0) + 1);
console.log("\nthe decompressed sizes:", [...hist.entries()].sort((a, c) => c[1] - a[1]).slice(0, 6)
	.map(e => e[0] + "x" + e[1]).join(" "));

/* the bits */
const bytes = lens[0] || 0;
console.log("the first entry, decompressed (" + bytes + " bytes):");
console.log("  " + pvs[0].slice(0, 64).map(x => x.toString(16).padStart(2, "0")).join(" "));
const bits = (p, i) => (p[i >> 3] >> (7 - (i & 7))) & 1;
let set0 = [];
for (let i = 0; i < 8 * bytes; i++) if (bits(pvs[0], i)) set0.push(i);
console.log("  the clusters visible from cluster 0:", set0.length, "->", set0.slice(0, 40).join(","));

/* the symmetry: is the PVS symmetric? */
let sym = 0, tot = 0;
for (let i = 0; i < 40; i++) {
	const a = pvs[i]; if (!a) continue;
	for (let j = 0; j < 40; j++) {
		const b = pvs[j]; if (!b) continue;
		tot++;
		if (bits(a, j) === bits(b, i)) sym++;
	}
}
console.log("\n  the PVS symmetry over the first 40 clusters:", sym, "of", tot,
	"(" + (100 * sym / tot).toFixed(1) + "%)");
/* the density */
let all = 0, set = 0;
for (const p of pvs) for (let i = 0; i < 8 * p.length; i++) { all++; if (bits(p, i)) set++; }
console.log("  the bit density:", (100 * set / all).toFixed(2) + "%");
