/* ghbtail12.js - the index table and the vertex records.
 *
 * The table: u32 values that are multiples of 256, non-decreasing, each
 * value repeated a few times.  The records: 43 bytes each.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;

/* the table */
let p = t + 0x20;
const tbl = [];
let last = -1, run = 0;
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v % 256 !== 0 || v < last || run > 16) break;
	if (v === last) run++; else { run = 1; last = v; }
	tbl.push(v);
	p += 4;
}
const runs = [];
for (const v of tbl) {
	if (runs.length && runs[runs.length - 1][0] === v) runs[runs.length - 1][1]++;
	else runs.push([v, 1]);
}
console.log("the table: " + tbl.length + " entries, " + runs.length + " runs, the values " +
	runs[0][0] + ".." + runs[runs.length - 1][0] + ", it ends at the tail +0x" + (p - t).toString(16));
console.log("  the run lengths: " + runs.slice(0, 12).map(r => r[1]).join(",") + " ...");
console.log("  the first 24 entries: " + tbl.slice(0, 24).join(" "));

/* the records */
const lo = g.bbox.min, hi = g.bbox.max;
const inb = (x, y, z) => x >= lo[0] && x <= hi[0] && y >= lo[1] && y <= hi[1] && z >= lo[2] && z <= hi[2];
const ok = (o) => {
	const u0 = buf.readFloatLE(o), u1 = buf.readFloatLE(o + 4), u2 = buf.readFloatLE(o + 8);
	if (!(u0 > 0.0001 && u0 < 1 && u1 > 0.0001 && u1 < 1 && u2 > 0.0001 && u2 < 1)) return false;
	return inb(buf.readFloatLE(o + 12), buf.readFloatLE(o + 16), buf.readFloatLE(o + 20));
};
let best = null;
for (let o = p; o + 43 * 6 <= end; o++) {
	let n = 0, q = o;
	while (q + 43 <= end && ok(q)) { n++; q += 43; }
	if (n >= 6 && (!best || n > best[1])) best = [o, n];
}
if (best) {
	console.log("the records: " + best[1] + " from the tail +0x" + (best[0] - t).toString(16) +
		" (the gap after the table " + (best[0] - p) + " bytes)");
	const o = best[0];
	for (let i = 0; i < 6; i++) {
		const q = o + i * 43;
		console.log("  #" + i + " uv " + [0, 4, 8].map(k => buf.readFloatLE(q + k).toFixed(4)).join(" ") +
			" pos " + [12, 16, 20].map(k => buf.readFloatLE(q + k).toFixed(2)).join(" ") +
			"  rest " + buf.subarray(q + 24, q + 43).toString("hex"));
	}
	const n = best[1];
	console.log("  the records end at the tail +0x" + (o + n * 43 - t).toString(16) +
		" (the tail is 0x" + (end - t).toString(16) + ")");
	console.log("  the table entries " + tbl.length + " vs the records " + n + " -> " +
		(tbl.length / n).toFixed(3) + " entries per record");
}
