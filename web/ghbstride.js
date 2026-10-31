/* ghbstride.js - find the vertex stride and the triangle indices empirically.
 *
 * The geometry lives in the block 1 tail (after the skeleton): a header, an
 * index table and then the vertex records.  The record layout is found by
 * testing every candidate stride: the three position floats must land
 * inside the model bounding box for every vertex.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const end = g.block2Offset;
const bb = g.bbox;
const lo = [bb.min[0], bb.min[1], bb.min[2]];
const hi = [bb.max[0], bb.max[1], bb.max[2]];
const pad = 8;
const inside = (v, i) => v >= lo[i] - pad && v <= hi[i] + pad;
console.log("the bbox", JSON.stringify(bb));

/* the vertex data: the first long run of plausible floats after the
 * skeleton; then the header of the submesh it belongs to */
let vStart = -1;
for (let i = g.end; i + 12 < end; i += 4) {
	const x = buf.readFloatLE(i), y = buf.readFloatLE(i + 4), z = buf.readFloatLE(i + 8);
	if (!isFinite(x) || !isFinite(y) || !isFinite(z)) continue;
	if (!inside(x, 0) || !inside(y, 1) || !inside(z, 2)) continue;
	/* count the run */
	let n = 0;
	for (let k = 0; k < 2000 && i + k * 4 + 4 <= end; k++) {
		const f = buf.readFloatLE(i + k * 4);
		if (!isFinite(f) || Math.abs(f) > 1e6) break;
		n++;
	}
	if (n > 100) { vStart = i; break; }
}
console.log("the float run starts @0x" + vStart.toString(16));

/* the stride: the positions must be at a fixed offset inside the record */
for (const stride of [20, 24, 28, 32, 36, 40, 44, 48, 52]) {
	for (const off of [0, 4, 8, 12, 16, 20]) {
		let good = 0, total = 0;
		for (let k = 0; k < 300; k++) {
			const o = vStart + off + k * stride;
			if (o + 12 > end) break;
			const x = buf.readFloatLE(o), y = buf.readFloatLE(o + 4), z = buf.readFloatLE(o + 8);
			if (!isFinite(x) || !isFinite(y) || !isFinite(z)) break;
			total++;
			if (inside(x, 0) && inside(y, 1) && inside(z, 2)) good++;
		}
		if (total > 50 && good / total > 0.9) {
			console.log("  stride " + stride + " pos@" + off + ": " + good + "/" + total);
		}
	}
}
