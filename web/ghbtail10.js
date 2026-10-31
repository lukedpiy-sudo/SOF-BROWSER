/* ghbtail10.js - find the vertex records with a strict test.
 *
 * A record: 3 floats (the UVs, 0..1) + 3 floats (the position, in the bbox)
 * + the rest.
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

for (const stride of [40, 41, 42, 43, 44, 45, 46, 47, 48]) {
	let best = null;
	for (let o = t; o + stride * 8 <= end; o++) {
		let n = 0, p = o;
		while (p + stride <= end) {
			const u0 = buf.readFloatLE(p), u1 = buf.readFloatLE(p + 4), u2 = buf.readFloatLE(p + 8);
			if (!(u0 > 0.0001 && u0 < 1 && u1 > 0.0001 && u1 < 1 && u2 > 0.0001 && u2 < 1)) break;
			const x = buf.readFloatLE(p + 12), y = buf.readFloatLE(p + 16), z = buf.readFloatLE(p + 20);
			if (!inb(x, y, z)) break;
			n++; p += stride;
		}
		if (n >= 8 && (!best || n > best[1])) best = [o, n];
	}
	if (best) {
		console.log("the stride " + stride + ": " + best[1] + " records from the tail +0x" +
			(best[0] - t).toString(16) + " (the absolute 0x" + best[0].toString(16) + ")" +
			" -> the end at the tail +0x" + (best[0] + best[1] * stride - t).toString(16) +
			" (the tail is 0x" + (end - t).toString(16) + ")");
		const o = best[0];
		console.log("   the first: uv " + [0, 4, 8].map(k => buf.readFloatLE(o + k).toFixed(4)).join(" ") +
			" pos " + [12, 16, 20].map(k => buf.readFloatLE(o + k).toFixed(3)).join(" ") +
			"  rest " + buf.subarray(o + 24, o + stride).toString("hex"));
	}
}
