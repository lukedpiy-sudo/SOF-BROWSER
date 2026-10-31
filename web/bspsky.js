/* bspsky.js - the sky faces of the map: how big are they?
 *   node bspsky.js <map.bsp>
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(12 + i * 8) });
const planes = [];
for (let i = 0; i < L(1).len / 20; i++) {
	const o = L(1).off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const vertices = [];
for (let i = 0; i < L(2).len / 12; i++) {
	const o = L(2).off + i * 12;
	vertices.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
}
const edges = [];
for (let i = 0; i < L(11).len / 4; i++) { const o = L(11).off + i * 4; edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]); }
const surfedges = [];
for (let i = 0; i < L(12).len / 4; i++) surfedges.push(b.readInt32LE(L(12).off + i * 4));
const texinfo = [];
for (let i = 0; i < L(5).len / 76; i++) {
	const o = L(5).off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	texinfo.push({ flags: b.readInt32LE(o + 32) >>> 0, name: b.toString("latin1", o + 40, z) });
}
const faceCount = L(6).len / 44;
const sky = [], other = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const ti = texinfo[b.readUInt16LE(o + 10)];
	if (!ti) continue;
	const isSky = (ti.flags & 0x0f) === 0x04 || (ti.flags & 0x0f) === 0x05;
	const first = b.readInt32LE(o + 4), num = b.readUInt16LE(o + 8);
	const v = [];
	for (let k = 0; k < num; k++) {
		const se = surfedges[first + k];
		if (se === undefined) break;
		const e = edges[Math.abs(se)];
		if (!e) break;
		const vi = se < 0 ? e[1] : e[0];
		if (vertices[vi]) v.push(vertices[vi]);
	}
	const rec = { i: i, mat: ti.name, flags: ti.flags, n: v.length, v: v };
	if (isSky) sky.push(rec); else other.push(rec);
}
function extent(list, name) {
	let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
	for (const f of list) for (const p of f.v) for (let i = 0; i < 3; i++) {
		if (p[i] < mn[i]) mn[i] = p[i];
		if (p[i] > mx[i]) mx[i] = p[i];
	}
	console.log(name + ": " + list.length + " faces, the extent " +
		mn.map(x => x.toFixed(0)).join(",") + " .. " + mx.map(x => x.toFixed(0)).join(","));
	return { mn: mn, mx: mx };
}
extent(sky, "the sky faces");
extent(other, "the other faces");
/* the sky materials and their flags */
const mats = new Map();
for (const f of sky) mats.set(f.mat + " 0x" + f.flags.toString(16), (mats.get(f.mat + " 0x" + f.flags.toString(16)) || 0) + 1);
console.log("the sky materials:", JSON.stringify([...mats]));
/* the biggest sky faces */
sky.sort((a, c) => c.n - a.n);
for (const f of sky.slice(0, 5)) {
	let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
	for (const p of f.v) for (let i = 0; i < 3; i++) { if (p[i] < mn[i]) mn[i] = p[i]; if (p[i] > mx[i]) mx[i] = p[i]; }
	console.log("  face " + f.i + " " + f.mat + " " + f.n + " vertices, the extent " +
		mn.map(x => x.toFixed(0)).join(",") + " .. " + mx.map(x => x.toFixed(0)).join(","));
}
