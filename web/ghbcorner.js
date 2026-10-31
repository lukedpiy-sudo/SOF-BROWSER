/* ghbcorner.js - find the corner list: a long run of the vertex indices.
 *
 * The index table in the tail is sorted (a valence histogram), so the real
 * corner list (the faces in order) has to be somewhere else.  A run of the
 * vertex indices is unmistakable.
 *
 *   node ghbcorner.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const model = parseGhoul(buf);
const geom = parseGeometry(buf, model);
const nv = geom.vertices.length;
const corners = geom.indexTable.length;
console.log(file.replace(/^.*[\\/]/, "") + ": the vertices " + nv + ", the corners " + corners);

function scan(width, limit) {
	let best = null;
	for (let o = 0; o + width * 4 < buf.length; o++) {
		let n = 0, q = o;
		while (q + width <= buf.length) {
			let v = 0;
			for (let k = 0; k < width; k++) v += buf[q + k] * Math.pow(256, k);
			if (v >= limit) break;
			n++; q += width;
		}
		if (n >= 8 && (!best || n > best[1])) best = [o, n];
	}
	return best;
}
for (const w of [1, 2, 4]) {
	const b = scan(w, nv);
	if (b) {
		console.log("  a u" + (w * 8) + " run of the vertex indices: " + b[1] + " entries at 0x" +
			b[0].toString(16) + (b[0] < model.block2Offset ? " (the block 1 tail)" : " (the block 2)"));
		const vals = [];
		for (let i = 0; i < Math.min(36, b[1]); i++) {
			let v = 0;
			for (let k = 0; k < w; k++) v += buf[b[0] + i * w + k] * Math.pow(256, k);
			vals.push(v);
		}
		console.log("     the first: " + vals.join(" "));
		if (b[1] >= corners * 0.9) console.log("     THE WHOLE CORNER LIST? " + b[1] + " of " + corners);
	} else {
		console.log("  no u" + (w * 8) + " run of the vertex indices");
	}
}
