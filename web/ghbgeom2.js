/* ghbgeom2.js - the geometry tables of a .ghb.
 *
 * The block 1 tail holds:
 *   u32 the size of the whole vertex block
 *   u32 the size of the index block
 *   u32[?] a pad
 *   u32[] the index table
 *   then the vertex arrays: a count and the positions
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
let p = g.end;
const end = g.block2Offset;

console.log("+0x00 u32 " + buf.readUInt32LE(p));
console.log("+0x04 u32 " + buf.readUInt32LE(p + 4));

/* the index table: u32 values that are multiples of 256 and rise */
let q = p + 0x20;
const idx = [];
while (q + 4 <= end) {
	const v = buf.readUInt32LE(q);
	if (v % 256 !== 0) break;
	idx.push(v);
	q += 4;
}
console.log("the index table: " + idx.length + " entries, the values " +
	idx.slice(0, 6).join(",") + " ... " + idx.slice(-4).join(",") +
	"  (they end at 0x" + q.toString(16) + ")");
console.log("  the steps: " + [...new Set(idx.slice(1).map((v, i) => v - idx[i]))].slice(0, 8).join(","));

/* what follows */
let r = q;
console.log("after the table @0x" + r.toString(16) + ":");
for (let i = 0; i < 8; i++) {
	const u = buf.readUInt32LE(r + i * 4);
	const f = buf.readFloatLE(r + i * 4);
	console.log("  +" + (i * 4).toString(16).padStart(3, "0") + "  u32 " + String(u).padStart(10) +
		"  f32 " + f.toFixed(4));
}
/* the first 40 floats */
console.log("the first floats:");
const fl = [];
for (let i = 0; i < 40; i++) fl.push(buf.readFloatLE(r + i * 4).toFixed(3));
console.log("  " + fl.join(" "));

/* how many floats until the values look non-floaty? */
let good = 0;
for (let i = 0; i < 20000; i++) {
	const f = buf.readFloatLE(r + i * 4);
	if (isFinite(f) && Math.abs(f) < 100000) good++;
	else break;
}
console.log("the plausible float run: " + good + " floats (" + (good * 4) + " bytes)");
