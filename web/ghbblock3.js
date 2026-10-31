/* ghbblock3.js - find the geometry section (the 5 u32 header) in block 2.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const b2 = g.block2Offset;
const nsub = g.meshes.reduce((a, m) => a + m.submeshes.length, 0);
console.log(file.replace(/^.*[\\/]/, "") + ": the meshes " + g.meshes.length + ", the submeshes " + nsub +
	", block 2 0x" + b2.toString(16) + " (" + g.block2Size + ")");
for (let o = b2; o + 20 <= b2 + g.block2Size; o += 4) {
	const a = buf.readUInt32LE(o);
	if (a !== g.meshes.length) continue;
	const b = buf.readUInt32LE(o + 4);
	if (b !== nsub) continue;
	const c = buf.readUInt32LE(o + 8), d = buf.readUInt32LE(o + 12), e = buf.readUInt32LE(o + 16);
	console.log("  the geometry header at the block 2 +0x" + (o - b2).toString(16) +
		" (the absolute 0x" + o.toString(16) + "): the meshes " + a + ", the submeshes " + b +
		", A " + c + ", B " + d + ", C " + e);
	for (let i = 0; i < 8; i++) {
		const p = o + 20 + i * 4;
		console.log("    +" + (20 + i * 4) + "  " + buf.readUInt32LE(p) + " (0x" + buf.readUInt32LE(p).toString(16) + ")");
	}
}
