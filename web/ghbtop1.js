/* ghbtop1.js - extract small GHB models from a pak and dump the tail in
 * full detail (every byte of the header, the histogram and the vertex
 * records) so the face topology can be worked out.
 *
 *   node ghbtop1.js <pak> <name in the pak> [outdir]
 */
"use strict";
const fs = require("fs");
const path = require("path");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const pak = process.argv[2];
const want = process.argv[3];
const outdir = process.argv[4] || path.join(require("os").tmpdir(), "ghbwork");

/* read the pak directory */
const b = fs.readFileSync(pak);
const dirOff = b.readUInt32LE(4), dirLen = b.readUInt32LE(8);
const n = dirLen / 64;
let found = null;
for (let i = 0; i < n; i++) {
	const o = dirOff + i * 64;
	let name = b.toString("latin1", o, o + 56);
	const z = name.indexOf("\0");
	if (z >= 0) name = name.slice(0, z);
	if (name.toLowerCase() === want.toLowerCase()) {
		found = { name: name, off: b.readUInt32LE(o + 56), len: b.readUInt32LE(o + 60) };
		break;
	}
}
if (!found) { console.log("not found: " + want); process.exit(1); }
fs.mkdirSync(outdir, { recursive: true });
const out = path.join(outdir, path.basename(found.name));
fs.writeFileSync(out, b.subarray(found.off, found.off + found.len));
console.log("extracted " + found.name + " (" + found.len + " bytes) -> " + out);

const buf = fs.readFileSync(out);
const g = parseGhoul(buf);
console.log("\n=== the container ===");
console.log("the file is " + buf.length + " bytes");
console.log("block 2 at 0x" + g.block2Offset.toString(16) + ", " + g.block2Size + " bytes");
console.log("the model stream ends at 0x" + g.end.toString(16) + " (the model path: " + g.path + ")");
console.log("the tail is 0x" + (g.block2Offset - g.end).toString(16) + " bytes");
console.log("the meshes: " + g.meshes.map(m => m.name).join(", "));
for (const m of g.meshes) {
	for (const s of m.submeshes) {
		console.log("  the submesh \"" + s.name + "\" verts=" + JSON.stringify(s.verts) +
			" faces=" + JSON.stringify(s.faces) + " flag=" + s.flag);
	}
}

const t = g.end, end = g.block2Offset;
console.log("\n=== the tail header (8 u32) ===");
for (let i = 0; i < 8; i++) {
	console.log("  +0x" + (i * 4).toString(16).padStart(2, "0") + "  " +
		buf.readUInt32LE(t + i * 4) + "   (0x" + buf.readUInt32LE(t + i * 4).toString(16) + ")");
}

/* the histogram */
let p = t + 0x20, last = -1, run = 0;
const tbl = [];
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v % 256 !== 0 || v < last || run > 16 || v > 0x100000) break;
	if (v === last) run++; else { run = 1; last = v; }
	tbl.push(v >> 8);
	p += 4;
}
console.log("\n=== the index table ===");
console.log("it holds " + tbl.length + " u32 values, from the tail +0x20 to +0x" + (p - t).toString(16));
const groups = [];
for (let i = 0; i < tbl.length;) {
	let j = i;
	while (j < tbl.length && tbl[j] === tbl[i]) j++;
	groups.push({ idx: tbl[i], n: j - i, at: i });
	i = j;
}
console.log("the groups: " + groups.length);
for (const gr of groups) {
	console.log("  the vertex " + gr.idx + " is used " + gr.n + " times (the table positions " + gr.at + ".." + (gr.at + gr.n - 1) + ")");
}

console.log("\n=== the 21 bytes of sub mesh data ===");
const sub = buf.subarray(p, p + 21);
console.log("  hex: " + sub.toString("hex"));
console.log("  as u32 (5): " + [0, 4, 8, 12, 16].map(i => buf.readUInt32LE(p + i)).join(", "));
console.log("  as u16 (10 + 1): " + [0, 2, 4, 6, 8, 10, 12, 14, 16, 18].map(i => buf.readUInt16LE(p + i)).join(", ") + ", " + buf[p + 20]);

const recStart = p + 21;
const nrec = Math.floor((end - recStart) / 43);
console.log("\n=== the vertex records ===");
console.log("they start at the tail +0x" + (recStart - t).toString(16) + " (file 0x" + recStart.toString(16) + ")");
console.log("there is room for " + nrec + " records of 43 bytes, " + (end - recStart) + " bytes");
console.log("the last vertex index in the table is " + (groups.length ? groups[groups.length - 1].idx : -1));

console.log("\n  #   u        v        s        x        y        z      | 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 | u16@27 u16@29 u16@31 u16@33 u16@35 u16@37 u16@39 u16@41");
for (let i = 0; i < nrec; i++) {
	const o = recStart + i * 43;
	const f = [0, 4, 8, 12, 16, 20].map(k => buf.readFloatLE(o + k).toFixed(3).padStart(8));
	const b24 = [];
	for (let k = 24; k < 43; k++) b24.push(buf[o + k].toString(16).padStart(2, "0"));
	const u16s = [27, 29, 31, 33, 35, 37, 39, 41].map(k => buf.readUInt16LE(o + k));
	console.log("  " + String(i).padStart(3) + " " + f.join(" ") + " | " + b24.join(" ") + " | " + u16s.join(" "));
}
