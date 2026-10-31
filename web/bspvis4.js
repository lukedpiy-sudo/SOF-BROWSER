/*
 * bspvis4.js - what is after the PVS data in the visibility lump?
 *   node bspvis4.js <map.bsp>
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

/* unpack with a destination limit (the engine stops when the destination is
 * full) */
function unpackLimited(start, limit) {
	const out = [];
	let i = start;
	while (i < vis.length && out.length < limit) {
		const c = vis[i];
		if (c !== 0) { out.push(c); i++; }
		else {
			const len = vis[i + 1];
			for (let k = 0; k < len && out.length < limit; k++) out.push(0);
			i += 2;
		}
	}
	return { data: out, end: i };
}
/* the PVS size: 167 bytes for 1330 clusters */
const PVS = 167;
let lastEnd = 0;
for (let i = 0; i < n; i++) {
	const r = unpackLimited(offs[i], PVS);
	lastEnd = r.end;
	if (i < 3 || i > n - 4) console.log("  entry " + i + ": " + offs[i] + ".." + r.end +
		" (" + (r.end - offs[i]) + " bytes -> " + r.data.length + ")");
}
console.log("the PVS data ends at", lastEnd, "the lump is", vis.length,
	"so " + (vis.length - lastEnd) + " bytes are left");

/* the tail */
const tail = vis.subarray(lastEnd);
console.log("\nthe tail starts with:", Array.from(tail.subarray(0, 48))
	.map(x => x.toString(16).padStart(2, "0")).join(" "));
console.log("the u16s of the tail:", Array.from({ length: 24 }, (_, i) => u16(lastEnd + i * 2)).join(" "));
/* is it a table of 8 byte records like the first one? */
for (const stride of [4, 8]) {
	let mono = 0, cnt = 0;
	for (let i = 1; i < 200; i++) {
		const a = u16(lastEnd + i * stride), p = u16(lastEnd + (i - 1) * stride);
		if (a > p) mono++;
		cnt++;
	}
	console.log("  the tail as u16 records of " + stride + " bytes: " + mono + "/" + cnt + " increasing");
}
/* the count of 8 byte records that fit */
console.log("  the tail length / 8 =", (tail.length / 8).toFixed(1), " / 4 =", (tail.length / 4).toFixed(1),
	" / 44 =", (tail.length / 44).toFixed(1), " / 32 =", (tail.length / 32).toFixed(1));

/* maybe the tail is another RLE block set: a table of 8 byte records whose
 * first u16 is an offset */
console.log("\n  the tail's first u16s as offsets into the lump:");
const o = [];
for (let i = 0; i < 12; i++) o.push(u16(lastEnd + i * 8));
console.log("   " + o.join(" "));
const o2 = [];
for (let i = 0; i < 12; i++) o2.push(u16(lastEnd + i * 4));
console.log("  (stride 4) " + o2.join(" "));
