/* ghbidx.js - locate the index table and the per submesh vertex blocks.
 *
 * The block 1 tail holds the first part of the index table and then the
 * submesh headers with the vertex records.  The rest of the index table is
 * in block 2; it is found by looking for the continuation of the rising
 * index sequence.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const end = g.block2Offset;

/* the index table in block 1: the rising u32s before the first submesh header */
let tblStart = 0x1957;
let p = tblStart, n = 0, last = 0;
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v > 100000) break;
	if (n > 0 && v < last) break;
	last = v; n++; p += 4;
}
console.log("the index table in block 1: " + n + " entries, the last " + last +
	", it ends at 0x" + p.toString(16));
console.log("  the first: " + Array.from({ length: 8 }, (_, i) => buf.readUInt32LE(tblStart + i * 4)).join(","));

/* look for the continuation in block 2: a u32 == last + 1 (or last) */
const b2 = g.block2Offset;
let found = -1;
for (let i = b2; i < buf.length - 16; i += 4) {
	const v = buf.readUInt32LE(i);
	if (v === last || v === last + 1) {
		/* check that the next values keep rising slowly */
		let ok = true, prev = v;
		for (let k = 1; k < 12; k++) {
			const w = buf.readUInt32LE(i + k * 4);
			if (w > 100000 || w < prev) { ok = false; break; }
			prev = w;
		}
		if (ok) { found = i; break; }
	}
}
console.log("the continuation at " + (found < 0 ? "not found" : "0x" + found.toString(16) +
	" (block2+" + (found - b2) + ")"));
if (found >= 0) {
	console.log("  the values: " + Array.from({ length: 12 }, (_, i) => buf.readUInt32LE(found + i * 4)).join(","));
}

/* the submesh headers and the vertex blocks */
console.log("\nthe submesh blocks:");
let q = p;
while (q + 12 <= end) {
	const a = buf.readUInt32LE(q), b = buf.readUInt32LE(q + 4), c = buf.readUInt32LE(q + 8);
	if (a > 100000 || b > 100000 || c > 64) break;
	/* the vertex data: how many records? use the next header to find out */
	let r = q + 12;
	let verts = 0;
	while (r + 44 <= end) {
		const x = buf.readFloatLE(r + 12), y = buf.readFloatLE(r + 16), z = buf.readFloatLE(r + 20);
		if (!isFinite(x) || !isFinite(y) || !isFinite(z)) break;
		verts++;
		r += 44;
	}
	console.log("  @0x" + q.toString(16) + ": " + a + ", " + b + ", " + c +
		"  the vertex run: " + verts + " records (" + (verts * 44) + " bytes)");
	q = r;
}
