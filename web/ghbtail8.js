/* ghbtail8.js - the vertex records, aligned.
 *
 *   node ghbtail8.js <file.ghb> <absStart> [count]
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const start = parseInt(process.argv[3]);
const count = parseInt(process.argv[4] || "8");
const lo = g.bbox.min, hi = g.bbox.max;

for (let i = 0; i < count; i++) {
	const o = start + i * 44;
	const b = buf.subarray(o, o + 44);
	console.log("#" + i + " " + b.toString("hex").replace(/(.{44})/g, "$1 "));
	console.log("   u32 " + Array.from({ length: 11 }, (_, k) => buf.readUInt32LE(o + k * 4)).join(" ").padEnd(11));
	console.log("   f32 " + Array.from({ length: 11 }, (_, k) => buf.readFloatLE(o + k * 4).toFixed(4).padStart(11)).join(" "));
	const px = buf.readFloatLE(o + 0x10), py = buf.readFloatLE(o + 0x14), pz = buf.readFloatLE(o + 0x18);
	const inb = px >= lo[0] && px <= hi[0] && py >= lo[1] && py <= hi[1] && pz >= lo[2] && pz <= hi[2];
	console.log("   the position is " + (inb ? "inside" : "OUTSIDE") + " the bbox");
}
