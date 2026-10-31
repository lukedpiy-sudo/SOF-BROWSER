/* ghbtail.js - find the geometry in the tail of block 2.
 *
 * The bolt tracks (45 x 3393 x 8 bytes) end at a known offset; what follows
 * is the rest of the model.  This looks for the repeating structure.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/MESO_IRQ3B.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const b2 = g.block2Offset;

/* how many bolt tracks are there? the section A objects with a block2 offset */
const tracks = g.objA.filter(o => o.block2Offset !== undefined)
	.map(o => o.block2Offset).sort((a, b) => a - b);
console.log("bolt tracks:", tracks.length, "first", tracks.slice(0, 4), "last", tracks.slice(-2));
const frames = g.frameCount;
console.log("frames per track:", frames, " stride:", frames * 8);
const last = tracks[tracks.length - 1] + frames * 8;
console.log("the tracks end at block2+" + last + " (0x" + last.toString(16) + ")");
const tailStart = b2 + last;
const tailLen = buf.length - tailStart;
console.log("the tail is " + tailLen + " bytes at 0x" + tailStart.toString(16));
console.log("the first 128 bytes of the tail:");
console.log("  " + buf.subarray(tailStart, tailStart + 128).toString("hex").replace(/(.{32})/g, "$1 "));

/* is it a repeating structure? look for the distance between similar
 * 8 byte records */
function smoothAt(off, n) {
	/* how many consecutive records share the same value? */
	let same = 0;
	for (let i = 1; i < n; i++) {
		if (buf.readInt16LE(off + i * 8) === buf.readInt16LE(off + (i - 1) * 8)) same++;
		else break;
	}
	return same;
}
for (const t of [0, 45 * 8, 0x1000, 0x10000, 0x100000]) {
	console.log("  smooth run at tail+" + t + ": " + smoothAt(tailStart + t, 100));
}

/* look for the structure: try to interpret the tail as an array of
 * records with a repeating stride by testing several strides for a
 * "many equal values" signature */
console.log("stride scan (the fraction of repeated 8 byte records):");
for (let stride = 8; stride <= 256; stride *= 2) {
	let same = 0, total = 0;
	for (let i = 1; i < 2000; i++) {
		const o = tailStart + i * stride;
		if (o + stride > buf.length) break;
		total++;
		if (buf.readInt32LE(o) === buf.readInt32LE(o - stride)) same++;
	}
	if (total > 100) console.log("   stride " + stride + ": " + (same / total).toFixed(2));
}

/* the int16 histograms of the tail */
const hist = new Array(8).fill(0);
for (let i = 0; i < 4000; i++) {
	for (let k = 0; k < 4; k++) hist[k] += Math.abs(buf.readInt16LE(tailStart + i * 8 + k * 2));
}
console.log("the mean |value| of the four int16 fields: " + hist.map(v => (v / 4000).toFixed(0)).join(" "));
