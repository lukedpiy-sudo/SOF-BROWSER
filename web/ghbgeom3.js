/* ghbgeom3.js - walk the vertex arrays of a .ghb.
 *
 * The geometry block in the block 1 tail starts with
 *   u32 the total size, u32 ?, u32 the number of submeshes
 * and then the per submesh data.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const end = g.block2Offset;

/* find the header: the total size, a zero and the submesh count */
let p = g.end + 0x20;
let hdr = -1;
for (let i = p; i + 12 <= end; i += 4) {
	const a = buf.readUInt32LE(i);
	if (a > 0 && a < 0x100000 && buf.readUInt32LE(i + 4) === 0) {
		const c = buf.readUInt32LE(i + 8);
		if (c > 0 && c < 64) { hdr = i; break; }
	}
}
if (hdr < 0) { console.log("no geometry header found"); process.exit(1); }
const total = buf.readUInt32LE(hdr);
const pad = buf.readUInt32LE(hdr + 4);
const count = buf.readUInt32LE(hdr + 8);
console.log("the geometry header @0x" + hdr.toString(16) +
	": total " + total + ", pad " + pad + ", submeshes " + count);
console.log("  (the header before it: " + buf.readUInt32LE(g.end) + ", " + buf.readUInt32LE(g.end + 4) + ")");

let q = hdr + 12;
/* walk the floats until a non float appears */
const fl = [];
while (q + 4 <= end) {
	const f = buf.readFloatLE(q);
	if (!isFinite(f) || Math.abs(f) > 100000) break;
	fl.push(f);
	q += 4;
}
console.log("the float run: " + fl.length + " floats (" + (fl.length * 4) + " bytes), ending at 0x" + q.toString(16));
console.log("  the first 12: " + fl.slice(0, 12).map(x => x.toFixed(2)).join(" "));
/* the floats after the run */
console.log("  what follows: " + buf.subarray(q, q + 48).toString("hex").replace(/(.{32})/g, "$1 "));
console.log("  as u32s: " + Array.from({ length: 8 }, (_, i) => buf.readUInt32LE(q + i * 4)).join(", "));
console.log("  the tail ends at 0x" + end.toString(16) + ", " + (end - q) + " bytes left");
console.log("  the last 48 bytes: " + buf.subarray(end - 48, end).toString("hex").replace(/(.{32})/g, "$1 "));
