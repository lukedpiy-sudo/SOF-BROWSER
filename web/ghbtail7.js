/* ghbtail7.js - find the geometry section header in the tail.
 *
 * The engine reads: u32 meshCount, u32 submeshCount, u32 A, u32 B, u32 C.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;
console.log(file + ": the tail 0x" + t.toString(16) + "..0x" + end.toString(16) +
	", the meshes " + g.meshes.length + ", the submeshes " +
	g.meshes.reduce((a, m) => a + m.submeshes.length, 0));

for (let o = t; o + 20 <= end; o += 4) {
	const a = buf.readUInt32LE(o), b = buf.readUInt32LE(o + 4);
	if (a === g.meshes.length && b === g.meshes.length * 2) {
		const c = buf.readUInt32LE(o + 8), d = buf.readUInt32LE(o + 12), e = buf.readUInt32LE(o + 16);
		console.log("  the header at the tail +0x" + (o - t).toString(16) + " (0x" + o.toString(16) +
			"): meshes " + a + ", submeshes " + b + ", A " + c + ", B " + d + ", C " + e);
	}
}
