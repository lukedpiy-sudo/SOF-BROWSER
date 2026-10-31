/* bspverify4.js - which space are the face's lightmap mins/extents in?
 *   node bspverify4.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const texinfo = [];
for (let i = 0; i < L(5).len / 76; i++) {
	const o = L(5).off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	texinfo.push({
		s: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)],
		t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)],
		name: b.toString("latin1", o + 40, z)
	});
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
const faceCount = L(6).len / 44;

const stats = { withOffset: 0, noOffset: 0, world: 0, none: 0 };
let checked = 0;
const bad = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ti = texinfo[b.readUInt16LE(o + 10)]; if (!ti) continue;
	const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
	const ext = [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)];
	let okW = true, okN = true;
	for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
		const se = surfedges[b.readInt32LE(o + 4) + k];
		if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
		const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2];
		const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2];
		if (s < mins[0] - 0.01 || s > mins[0] + ext[0] + 0.01) okW = false;
		if (t < mins[1] - 0.01 || t > mins[1] + ext[1] + 0.01) okN = false;
	}
	checked++;
	if (okW && okN) stats.noOffset++;
	else if (bad.length < 6) bad.push({ i: i, mins: mins, ext: ext, w: w, h: h, name: ti.name });
}
console.log("faces checked:", checked);
console.log("the stored extent covers the UNOFFSET texture coordinate:", stats.noOffset,
	"of", checked, " (failures: " + (checked - stats.noOffset) + ")");
for (const s of bad) console.log("   face", s.i, s.name, "mins", JSON.stringify(s.mins), "ext", JSON.stringify(s.ext), s.w + "x" + s.h);

/* print the texinfo axes of the first faces, with the stored mins */
console.log("\nface  texinfo  s axis (vec + offset)              t axis (vec + offset)             stored mins / ext");
for (let i = 0; i < 10; i++) {
	const o = L(6).off + i * 44;
	const ti = texinfo[b.readUInt16LE(o + 10)];
	const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
	const ext = [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)];
	console.log(String(i).padStart(4) + "  " + String(b.readUInt16LE(o + 10)).padStart(4) + "  " +
		("[" + ti.s.slice(0, 3).map(x => x.toFixed(2)).join(",") + " +" + ti.s[3].toFixed(1) + "]").padEnd(34) +
		("[" + ti.t.slice(0, 3).map(x => x.toFixed(2)).join(",") + " +" + ti.t[3].toFixed(1) + "]").padEnd(34) +
		JSON.stringify(mins) + " " + JSON.stringify(ext) + "  " + ti.name);
}
