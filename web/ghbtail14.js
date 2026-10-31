/* ghbtail14.js - look for a u16 triangle index list in the tail.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;

/* the vertex count: the number of 43 byte records */
let p = t + 0x20;
let last = -1, run = 0;
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v % 256 !== 0 || v < last || run > 16 || v > 0x100000) break;
	if (v === last) run++; else { run = 1; last = v; }
	p += 4;
}
/* the record start: 21 bytes after the table */
const recStart = p + 21;
const nrec = Math.floor((end - recStart) / 43);
console.log("the table ends at the tail +0x" + (p - t).toString(16) + ", the records start at +0x" +
	(recStart - t).toString(16) + ", " + nrec + " of them");

/* a u16 index list: a long run of values below the vertex count */
const bound = nrec;
let best = null;
for (let o = t; o + 4 < end; o++) {
	let n = 0, q = o;
	while (q + 2 <= end) {
		const v = buf.readUInt16LE(q);
		if (v >= bound) break;
		n++; q += 2;
	}
	if (n >= 12 && (!best || n > best[1])) best = [o, n];
}
if (best) {
	console.log("a u16 index list: " + best[1] + " entries from the tail +0x" + (best[0] - t).toString(16));
	console.log("  the first 30: " + Array.from({ length: 30 }, (_, i) => buf.readUInt16LE(best[0] + i * 2)).join(" "));
} else {
	console.log("no u16 index list with the values < " + bound);
}
/* a u32 index list */
let best32 = null;
for (let o = t; o + 4 < end; o++) {
	let n = 0, q = o;
	while (q + 4 <= end) {
		const v = buf.readUInt32LE(q);
		if (v >= bound) break;
		n++; q += 4;
	}
	if (n >= 12 && (!best32 || n > best32[1])) best32 = [o, n];
}
if (best32) {
	console.log("a u32 index list: " + best32[1] + " entries from the tail +0x" + (best32[0] - t).toString(16));
	console.log("  the first 30: " + Array.from({ length: 30 }, (_, i) => buf.readUInt32LE(best32[0] + i * 4)).join(" "));
} else {
	console.log("no u32 index list with the values < " + bound);
}
