/* ghbtail9.js - find the vertex records and their stride.
 *
 *   node ghbtail9.js <file.ghb>
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
const inb = (x, y, z) => x >= lo[0] && x <= hi[0] && y >= lo[1] && y <= hi[1] && z >= lo[2] && z <= hi[2];

for (const stride of [44, 43, 42, 45, 40, 48]) {
	let best = null;
	for (let o = t; o + stride * 8 <= end; o++) {
		let n = 0, p = o;
		while (p + stride <= end) {
			const x = buf.readFloatLE(p), y = buf.readFloatLE(p + 4), z = buf.readFloatLE(p + 8);
			if (!inb(x, y, z)) break;
			n++; p += stride;
		}
		if (n >= 8 && (!best || n > best[1])) best = [o, n];
	}
	if (best) {
		console.log("the stride " + stride + ": " + best[1] + " records from the tail +0x" +
			(best[0] - t).toString(16) + " (the absolute 0x" + best[0].toString(16) + ")" +
			" -> the end at the tail +0x" + (best[0] + best[1] * stride - t).toString(16));
	}
}
