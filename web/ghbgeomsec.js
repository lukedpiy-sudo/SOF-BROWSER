/* ghbgeomsec.js - find the engine's geometry section in the file.
 *
 * The engine's mesh reader (SoF.exe 0x200AA250) reads five u32: the mesh
 * count, the sub mesh count and three array lengths, then the meshes, then
 * the sub mesh array (92 bytes each) and three arrays of 12 byte elements.
 * The header can be unaligned, so every byte offset is tried.
 *
 *   node ghbgeomsec.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const model = parseGhoul(buf);
const geom = parseGeometry(buf, model);
const nm = model.meshes.length;
const nsub = model.meshes.reduce((a, m) => a + m.submeshes.length, 0);
console.log(file.replace(/^.*[\\/]/, "") + ": the meshes " + nm + ", the sub meshes " + nsub +
	", the file " + buf.length);

const rd32 = (o) => (buf[o] | (buf[o + 1] << 8) | (buf[o + 2] << 16) | (buf[o + 3] << 24)) >>> 0;
for (let o = 0; o + 20 <= buf.length; o++) {
	if (rd32(o) !== nm || rd32(o + 4) !== nsub) continue;
	const a = rd32(o + 8), b = rd32(o + 12), c = rd32(o + 16);
	console.log("  the header at 0x" + o.toString(16) + " (the tail +0x" + (o - model.end).toString(16) +
		"): the meshes " + nm + ", the sub meshes " + nsub + ", A " + a + ", B " + b + ", C " + c);
	console.log("    the bytes: " + buf.subarray(o, o + 40).toString("hex").replace(/(.{32})/g, "$1 "));
	/* the sub mesh array would follow the meshes */
	for (let k = 0; k < 6; k++) {
		const p = o + 20 + k * 4;
		console.log("    +" + (20 + k * 4) + "  " + rd32(p) + " (0x" + rd32(p).toString(16) + ")");
	}
}
