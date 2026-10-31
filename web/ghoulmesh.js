/* ghoulmesh.js - find the vertex table in a Ghoul .ghb file.
 *
 * The mesh is a long run of vertex records.  Two candidates are searched:
 * 3 floats per vertex and 3 shorts per vertex, both in a human sized range.
 * The best runs are reported with their offsets and the implied counts.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);

function plausibleFloats(off) {
	const x = b.readFloatLE(off), y = b.readFloatLE(off + 4), z = b.readFloatLE(off + 8);
	if (!isFinite(x) || !isFinite(y) || !isFinite(z)) return false;
	if (Math.abs(x) > 400 || Math.abs(y) > 400 || Math.abs(z) > 400) return false;
	/* a real mesh vertex is not a round number */
	return true;
}
function plausibleShorts(off) {
	const x = b.readInt16LE(off), y = b.readInt16LE(off + 2), z = b.readInt16LE(off + 4);
	if (Math.abs(x) > 3000 || Math.abs(y) > 3000 || Math.abs(z) > 3000) return false;
	return true;
}

function scan(stride, check) {
	const runs = [];
	let start = -1, len = 0;
	for (let off = 0; off + stride * 2 < b.length; off += stride) {
		if (check(off)) {
			if (start < 0) { start = off; len = 0; }
			len++;
		} else {
			if (len > 200) runs.push({ start, len });
			start = -1; len = 0;
		}
	}
	if (len > 200) runs.push({ start, len });
	runs.sort((a, c) => c.len - a.len);
	return runs.slice(0, 8);
}

console.log("== 3 floats per vertex ==");
for (const r of scan(12, plausibleFloats)) {
	console.log("  offset 0x" + r.start.toString(16) + " (" + r.start + ")  run " + r.len + " vertices (" + (r.len * 12) + " bytes)");
	const s = [];
	for (let i = 0; i < 6; i++) {
		s.push("(" + b.readFloatLE(r.start + i * 12).toFixed(2) + "," +
			b.readFloatLE(r.start + i * 12 + 4).toFixed(2) + "," +
			b.readFloatLE(r.start + i * 12 + 8).toFixed(2) + ")");
	}
	console.log("     " + s.join(" "));
}
console.log("== 3 shorts per vertex ==");
for (const r of scan(6, plausibleShorts)) {
	console.log("  offset 0x" + r.start.toString(16) + " (" + r.start + ")  run " + r.len + " vertices");
	const s = [];
	for (let i = 0; i < 6; i++) {
		s.push("(" + b.readInt16LE(r.start + i * 6) + "," +
			b.readInt16LE(r.start + i * 6 + 2) + "," +
			b.readInt16LE(r.start + i * 6 + 4) + ")");
	}
	console.log("     " + s.join(" "));
}
