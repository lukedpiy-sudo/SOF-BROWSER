/* ghoulmesh2.js - search for the mesh tables using the header counts.
 *
 * The header has 337 and 6530 - a plausible vertex and face count.  The
 * search looks for a run of vertex records followed by index data whose
 * values are all below the vertex count, which is a very strong signature.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);
const V = parseInt(process.argv[3] || "337", 10);
const F = parseInt(process.argv[4] || "6530", 10);

function okF(off) {
	const x = b.readFloatLE(off), y = b.readFloatLE(off + 4), z = b.readFloatLE(off + 8);
	if (!isFinite(x) || !isFinite(y) || !isFinite(z)) return false;
	if (Math.abs(x) > 500 || Math.abs(y) > 500 || Math.abs(z) > 500) return false;
	return true;
}
function okS(off) {
	const x = b.readInt16LE(off), y = b.readInt16LE(off + 2), z = b.readInt16LE(off + 4);
	return Math.abs(x) < 4000 && Math.abs(y) < 4000 && Math.abs(z) < 4000;
}

/* how many of the next 2*F u16s are below V? */
function indexScore(off) {
	let good = 0, n = 0;
	for (let i = 0; i < F * 2 && off + i * 2 + 2 <= b.length; i++) {
		const v = b.readUInt16LE(off + i * 2);
		n++;
		if (v < V) good++;
	}
	return good / Math.max(1, n);
}

const results = [];
for (const stride of [6, 8, 12, 16, 20, 24, 28, 32]) {
	const check = stride === 6 ? okS : okF;
	const vsize = stride;
	for (let off = 0x60; off + V * vsize + 64 < b.length; off += 4) {
		/* all V vertices plausible? */
		let ok = true;
		for (let i = 0; i < V; i++) {
			if (!check(off + i * vsize)) { ok = false; break; }
		}
		if (!ok) continue;
		const after = off + V * vsize;
		const s = indexScore(after);
		if (s > 0.97) results.push({ off, stride, s, after });
	}
}
results.sort((a, c) => c.s - a.s);
console.log("candidates: " + results.length);
results.slice(0, 10).forEach(r => {
	console.log("  vertices @0x" + r.off.toString(16) + " stride " + r.stride +
		"  index score " + r.s.toFixed(3) + "  indices @0x" + r.after.toString(16));
	const s = [];
	for (let i = 0; i < 6; i++) {
		if (r.stride === 6) s.push("(" + b.readInt16LE(r.off + i * 6) + "," + b.readInt16LE(r.off + i * 6 + 2) + "," + b.readInt16LE(r.off + i * 6 + 4) + ")");
		else s.push("(" + b.readFloatLE(r.off + i * r.stride).toFixed(2) + "," + b.readFloatLE(r.off + i * r.stride + 4).toFixed(2) + "," + b.readFloatLE(r.off + i * r.stride + 8).toFixed(2) + ")");
	}
	console.log("     " + s.join(" "));
	const idx = [];
	for (let i = 0; i < 12; i++) idx.push(b.readUInt16LE(r.after + i * 2));
	console.log("     indices: " + idx.join(" "));
});
