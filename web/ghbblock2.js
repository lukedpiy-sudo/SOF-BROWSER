/* ghbblock2.js - the block 2: the bolt tracks and what follows.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const b2 = g.block2Offset;
console.log(file.replace(/^.*[\\/]/, "") + ": the tail 0x" + t.toString(16) + ", block 2 0x" + b2.toString(16) +
	" (" + g.block2Size + " bytes), the frames " + g.frameCount);
const bolts = g.objA.concat(g.objB).filter(o => o.mode !== 0);
console.log("the bolts with a track: " + bolts.length);
bolts.forEach(o => console.log("  " + o.name + " mode " + o.mode + " at the block 2 +0x" + o.block2Offset.toString(16)));
const last = bolts.length ? Math.max.apply(null, bolts.map(o => o.block2Offset + g.frameCount * 8)) : b2;
console.log("the tracks end at the block 2 +0x" + (last - b2).toString(16) + " (the absolute 0x" + last.toString(16) + ")");
console.log("what follows:");
for (let i = 0; i < 128; i += 16) {
	const o = last + i;
	console.log("  +" + (o - b2).toString(16).padStart(6, "0") + "  " +
		buf.subarray(o, o + 16).toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		buf.subarray(o, o + 16).toString("latin1").replace(/[^ -~]/g, "."));
}
/* the byte distribution of the rest of block 2 */
const hist = new Array(256).fill(0);
for (let i = last; i < b2 + g.block2Size; i++) hist[buf[i]]++;
let used = 0, max = 0;
for (const h of hist) { if (h) used++; if (h > max) max = h; }
const n = g.block2Size - (last - b2);
console.log("the rest: " + n + " bytes, " + used + " distinct byte values, the most common " +
	max + " times (" + (100 * max / n).toFixed(1) + "%), the entropy " +
	(-hist.reduce((a, h) => a + (h ? (h / n) * Math.log2(h / n) : 0), 0)).toFixed(2) + " bits");
