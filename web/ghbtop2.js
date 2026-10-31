/* ghbtop2.js - scan every .ghb in a pak and report the geometry in the tail:
 * the tail size, the histogram size and the number of 43 byte records.
 *   node ghbtop2.js <pak> [filter]
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const pak = process.argv[2];
const filter = (process.argv[3] || "").toLowerCase();
const b = fs.readFileSync(pak);
const dirOff = b.readUInt32LE(4), dirLen = b.readUInt32LE(8);
const n = dirLen / 64;
const rows = [];
for (let i = 0; i < n; i++) {
	const o = dirOff + i * 64;
	let name = b.toString("latin1", o, o + 56);
	const z = name.indexOf("\0");
	if (z >= 0) name = name.slice(0, z);
	if (!/\.ghb$/i.test(name)) continue;
	if (filter && name.toLowerCase().indexOf(filter) < 0) continue;
	const off = b.readUInt32LE(o + 56), len = b.readUInt32LE(o + 60);
	const buf = b.subarray(off, off + len);
	let g;
	try { g = parseGhoul(buf); } catch (e) { rows.push({ name: name, len: len, err: String(e.message) }); continue; }
	const t = g.end, end = g.block2Offset;
	let p = t + 0x20, last = -1, run = 0, tn = 0, maxIdx = -1;
	while (p + 4 <= end) {
		const v = buf.readUInt32LE(p);
		if (v % 256 !== 0 || v < last || run > 16 || v > 0x100000) break;
		if (v === last) run++; else { run = 1; last = v; }
		if ((v >> 8) > maxIdx) maxIdx = v >> 8;
		tn++; p += 4;
	}
	const recStart = p + 21;
	const nrec = Math.max(0, Math.floor((end - recStart) / 43));
	rows.push({
		name: name, len: len, tail: end - t, tn: tn, maxIdx: maxIdx, nrec: nrec,
		rest: end - recStart - nrec * 43, vbs: buf.readUInt32LE(t), anim: buf.readUInt32LE(t + 4),
		meshes: g.meshes.length
	});
}
rows.sort((a, b2) => (a.nrec || 0) - (b2.nrec || 0));
for (const r of rows) {
	if (r.err) { console.log(r.name + " ERROR " + r.err); continue; }
	console.log(String(r.nrec).padStart(5) + " verts  tail " + String(r.tail).padStart(6) +
		"  tbl " + String(r.tn).padStart(6) + "  maxIdx " + String(r.maxIdx).padStart(5) +
		"  rest " + String(r.rest).padStart(4) + "  vbs " + String(r.vbs).padStart(8) +
		"  anim " + String(r.anim).padStart(8) + "  meshes " + r.meshes + "  " + r.name);
}
console.log(rows.length + " files");
