/* ghbtail6.js - walk the vertex records in the tail and show what follows.
 *
 *   node ghbtail6.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;
const lo = g.bbox.min, hi = g.bbox.max;
const inside = (x, y, z) => x >= lo[0] - 2 && x <= hi[0] + 2 &&
	y >= lo[1] - 2 && y <= hi[1] + 2 && z >= lo[2] - 2 && z <= hi[2] + 2;

/* find a start where 44 byte records give valid positions */
let best = null;
for (let o = t + 0x20; o + 44 * 4 <= end; o++) {
	let n = 0, p = o;
	while (p + 44 <= end) {
		const x = buf.readFloatLE(p + 0x10), y = buf.readFloatLE(p + 0x14), z = buf.readFloatLE(p + 0x18);
		if (!inside(x, y, z)) break;
		n++;
		p += 44;
	}
	if (n >= 4 && (!best || n > best[1])) best = [o, n];
}
if (!best) { console.log("no vertex records found"); process.exit(1); }
const start = best[0], count = best[1];
console.log("the vertex records: " + count + " from the tail +0x" + (start - t).toString(16) +
	" (the absolute 0x" + start.toString(16) + ")");
console.log("the first record:");
{
	const b = buf.subarray(start, start + 44);
	console.log("  hex " + b.toString("hex"));
	console.log("  u32 " + Array.from({ length: 11 }, (_, i) => buf.readUInt32LE(start + i * 4)).join(" "));
	console.log("  f32 " + Array.from({ length: 11 }, (_, i) => buf.readFloatLE(start + i * 4).toFixed(4)).join(" "));
}
console.log("the records:");
for (let i = 0; i < Math.min(count, 12); i++) {
	const o = start + i * 44;
	console.log("  #" + i + " u32 " + buf.readUInt32LE(o) +
		" f32 " + [4, 8, 12].map(k => buf.readFloatLE(o + k).toFixed(4)).join(" ") +
		" pos " + [16, 20, 24].map(k => buf.readFloatLE(o + k).toFixed(2)).join(" ") +
		" tail " + buf.subarray(o + 28, o + 44).toString("hex"));
}
const after = start + count * 44;
console.log("what follows the records: the tail +0x" + (after - t).toString(16));
for (let i = 0; i < 96; i += 16) {
	const o = after + i;
	const u = [];
	for (let k = 0; k < 4; k++) u.push(buf.readUInt32LE(o + k * 4));
	console.log("  +" + (o - t).toString(16).padStart(5, "0") + "  " +
		buf.subarray(o, o + 16).toString("hex").replace(/(.{32})/g, "$1 ") +
		"  u32 " + u.map(x => String(x).padStart(10)).join(" "));
}
console.log("the tail ends at +0x" + (end - t).toString(16));
