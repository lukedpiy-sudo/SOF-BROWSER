/*
 * bspvis3.js - the rest of the visibility lump and the leaf -> cluster map.
 *
 *   node bspvis3.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const vis = b.subarray(L(3).off, L(3).off + L(3).len);
const u16 = (o) => vis.readUInt16LE(o);
const n = u16(0);
const tableOff = 4;
const offs = [];
for (let i = 0; i < n; i++) offs.push(u16(tableOff + i * 8));

function unpack(start, end) {
	const out = [];
	let i = start;
	while (i < end) {
		const c = vis[i];
		if (c !== 0) { out.push(c); i++; }
		else {
			const len = vis[i + 1];
			for (let k = 0; k < len; k++) out.push(0);
			i += 2;
		}
	}
	return out;
}

/* the tail of the lump */
const last = offs[n - 1];
console.log("the last table offset:", last, " the lump is", vis.length, "bytes");
console.log("the bytes at the last offset:", Array.from(vis.subarray(last, last + 32))
	.map(x => x.toString(16).padStart(2, "0")).join(" "));
console.log("the u16s at the last offset:", Array.from({ length: 16 }, (_, i) => u16(last + i * 2)).join(" "));

/* the PVS of the first entries and the self bit */
const pvs = [];
for (let i = 0; i < n; i++) {
	const end = (i + 1 < n) ? offs[i + 1] : last + 1;
	pvs.push(unpack(offs[i], end));
}
const msb = (p, i) => (p[i >> 3] >> (7 - (i & 7))) & 1;
const lsb = (p, i) => (p[i >> 3] >> (i & 7)) & 1;
console.log("\nthe self bit of the first 20 entries (msb first / lsb first):");
let selfMsb = 0, selfLsb = 0;
for (let i = 0; i < 20; i++) {
	const a = msb(pvs[i], i), b = lsb(pvs[i], i);
	if (a) selfMsb++;
	if (b) selfLsb++;
	console.log("  entry " + i + ": " + a + " / " + b);
}
console.log("  the self bit is set " + selfMsb + " times (msb) and " + selfLsb + " times (lsb) of 20");

/* the symmetry with both bit orders */
for (const [name, bit] of [["msb", msb], ["lsb", lsb]]) {
	let sym = 0, tot = 0;
	for (let i = 0; i < 60; i++) {
		for (let j = 0; j < 60; j++) {
			tot++;
			if (bit(pvs[i], j) === bit(pvs[j], i)) sym++;
		}
	}
	console.log("  the symmetry with the " + name + " bit order: " + sym + "/" + tot +
		" (" + (100 * sym / tot).toFixed(1) + "%)");
}

/* which leaf field holds the cluster?  the PVS has 1329 entries, so the
 * cluster field must be in 0..1328 (or 0xFFFF) */
const leafCount = L(8).len / 32;
console.log("\nthe leaf record: which field is the cluster?");
for (const off of [0, 2, 4, 6, 8, 10, 12, 24, 26, 28, 30]) {
	let inRange = 0, ff = 0, distinct = new Set();
	for (let i = 0; i < leafCount; i++) {
		const v = b.readUInt16LE(L(8).off + i * 32 + off);
		distinct.add(v);
		if (v === 0xffff) ff++;
		else if (v < n) inRange++;
	}
	console.log("  +" + String(off).padStart(2) + ": in 0.." + (n - 1) + ": " + String(inRange).padStart(5) +
		"  0xffff: " + String(ff).padStart(5) + "  distinct: " + distinct.size);
}
/* the same for the i32 view */
for (const off of [0, 4, 8, 28]) {
	let inRange = 0, ff = 0;
	for (let i = 0; i < leafCount; i++) {
		const v = b.readInt32LE(L(8).off + i * 32 + off);
		if (v === -1) ff++;
		else if (v >= 0 && v < n) inRange++;
	}
	console.log("  i32 +" + off + ": in 0.." + (n - 1) + ": " + inRange + "  -1: " + ff);
}
