/* ghbtail13.js - the bytes between the index table and the vertex records.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;

/* the table: the values are multiples of 256 and not too large */
let p = t + 0x20;
let last = -1, run = 0;
const tbl = [];
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v % 256 !== 0 || v < last || run > 16 || v > 0x100000) break;
	if (v === last) run++; else { run = 1; last = v; }
	tbl.push(v);
	p += 4;
}
console.log("the table: " + tbl.length + " entries, it ends at the tail +0x" + (p - t).toString(16));
const runs = [];
for (const v of tbl) {
	if (runs.length && runs[runs.length - 1][0] === v) runs[runs.length - 1][1]++;
	else runs.push([v, 1]);
}
console.log("  the runs: " + runs.slice(0, 20).map(r => r[0] + "x" + r[1]).join(" ") +
	" ... the last: " + runs.slice(-4).map(r => r[0] + "x" + r[1]).join(" "));
console.log("  the values/256: " + runs.slice(0, 12).map(r => (r[0] / 256) + "x" + r[1]).join(" "));

console.log("the bytes from the end of the table:");
for (let i = 0; i < 64; i += 16) {
	const o = p + i;
	console.log("  +" + (o - t).toString(16).padStart(5, "0") + "  " +
		buf.subarray(o, o + 16).toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		buf.subarray(o, o + 16).toString("latin1").replace(/[^ -~]/g, "."));
}
