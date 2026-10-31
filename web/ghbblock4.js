/* ghbblock4.js - look for the triangle index list anywhere in the file.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const bound = parseInt(process.argv[3]);
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
console.log(file.replace(/^.*[\\/]/, "") + ": the bound " + bound + ", the file " + g.fileSize);

function scan(width) {
	let best = null;
	for (let o = 0; o + width * 4 < buf.length; o++) {
		let n = 0, q = o;
		while (q + width <= buf.length) {
			let v = 0;
			for (let k = 0; k < width; k++) v += buf[q + k] * Math.pow(256, k);
			if (v >= bound) break;
			n++; q += width;
		}
		if (n >= 24 && (!best || n > best[1])) best = [o, n];
	}
	return best;
}
for (const w of [1, 2, 4]) {
	const b = scan(w);
	if (b) {
		console.log("a u" + (w * 8) + " index list: " + b[1] + " entries at 0x" + b[0].toString(16) +
			" (the tail starts at 0x" + g.end.toString(16) + ", block 2 at 0x" + g.block2Offset.toString(16) + ")");
		const vals = [];
		for (let i = 0; i < 24; i++) {
			let v = 0;
			for (let k = 0; k < w; k++) v += buf[b[0] + i * w + k] * Math.pow(256, k);
			vals.push(v);
		}
		console.log("   the first 24: " + vals.join(" "));
	} else {
		console.log("no u" + (w * 8) + " index list with the values < " + bound);
	}
}
