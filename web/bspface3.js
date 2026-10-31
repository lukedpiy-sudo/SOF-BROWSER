/* bspface3.js - work out the SoF v46 lightmap layout.
 *
 *   node bspface3.js <map.bsp>
 *
 * Hypothesis (GoldSrc BSP30 style, which SoF inherits): the LIGHTING lump is
 * a raw array of RGB samples, the per face lightmap offset is implicit (the
 * engine walks the faces in order) and the size of a face's lightmap is
 * derived from the texture space extent of the face:
 *
 *     w = (maxs[0] - mins[0]) / 16 + 1
 *     h = (maxs[1] - mins[1]) / 16 + 1
 *
 * This probe computes the extents from the real geometry and the real
 * texinfo axes and checks whether the sum of w*h matches the lighting lump.
 */
"use strict";
const fs = require("fs");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const read = (i) => L[i];

/* ---- texinfo (76 bytes: s[4] t[4] floats, flags, value, name[32], next) */
const texCount = read(5).len / 76;
const tex = [];
for (let i = 0; i < texCount; i++) {
	const o = read(5).off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	tex.push({
		s: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)],
		t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)],
		flags: b.readInt32LE(o + 32),
		value: b.readInt32LE(o + 36),
		name: b.toString("latin1", o + 40, z),
		next: b.readInt32LE(o + 72)
	});
}

/* ---- geometry */
const planes = [];
for (let i = 0; i < read(1).len / 20; i++) {
	const o = read(1).off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const verts = [];
for (let i = 0; i < read(2).len / 12; i++) {
	const o = read(2).off + i * 12;
	verts.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
}
const edges = [];
for (let i = 0; i < read(11).len / 4; i++) {
	const o = read(11).off + i * 4;
	edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
}
const surfedges = [];
for (let i = 0; i < read(12).len / 4; i++) surfedges.push(b.readInt32LE(read(12).off + i * 4));

const faceCount = read(6).len / 44;
const faces = [];
for (let i = 0; i < faceCount; i++) {
	const o = read(6).off + i * 44;
	faces.push({
		i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
		firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8),
		texinfo: b.readUInt16LE(o + 10),
		raw: b.subarray(o, o + 44)
	});
}

/* the texinfo axis scale survey */
console.log("texinfos:", texCount);
const scales = new Map();
for (const t of tex) {
	const k = Math.abs(t.s[0]) + "," + Math.abs(t.s[1]) + "," + Math.abs(t.s[2]);
	scales.set(k, (scales.get(k) || 0) + 1);
}
console.log("distinct |s| axis triples:", scales.size);
const top = [...scales.entries()].sort((a, c) => c[1] - a[1]).slice(0, 12);
for (const [k, v] of top) console.log("   s=" + k + "  x" + v);
const names = new Set(tex.map(t => t.name));
console.log("distinct texture names:", names.size);
console.log("first 8 texinfos:");
for (let i = 0; i < 8; i++) {
	const t = tex[i];
	console.log("  " + String(i).padStart(4) + " " + t.name.padEnd(28) +
		"s=[" + t.s.map(x => x.toFixed(4)).join(",") + "]" +
		" t=[" + t.t.map(x => x.toFixed(4)).join(",") + "]" +
		" flags=" + t.flags + " value=" + t.value + " next=" + t.next);
}

/* ---- coplanarity test */
let checked = 0, worst = 0;
for (const f of faces) {
	const pl = planes[f.planenum]; if (!pl) continue;
	for (let k = 0; k < f.numedges; k++) {
		const se = surfedges[f.firstedge + k]; if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const v = verts[se < 0 ? e[1] : e[0]]; if (!v) continue;
		const d = Math.abs(pl.n[0] * v[0] + pl.n[1] * v[1] + pl.n[2] * v[2] - pl.d);
		if (d > worst) worst = d;
		checked++;
	}
}
console.log("coplanarity: " + checked + " verts, worst offset " + worst.toFixed(4));

/* ---- texture space extents and the lightmap size */
const lightLen = read(7).len;
let sumWH = 0, sumWH1 = 0, facesWithVerts = 0;
const rows = [];
for (const f of faces) {
	const ti = tex[f.texinfo];
	if (!ti) continue;
	let mnS = 1e30, mxS = -1e30, mnT = 1e30, mxT = -1e30, n = 0;
	for (let k = 0; k < f.numedges; k++) {
		const se = surfedges[f.firstedge + k]; if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const v = verts[se < 0 ? e[1] : e[0]]; if (!v) continue;
		const s = ti.s[0] * v[0] + ti.s[1] * v[1] + ti.s[2] * v[2] + ti.s[3];
		const t = ti.t[0] * v[0] + ti.t[1] * v[1] + ti.t[2] * v[2] + ti.t[3];
		if (s < mnS) mnS = s; if (s > mxS) mxS = s;
		if (t < mnT) mnT = t; if (t > mxT) mxT = t;
		n++;
	}
	if (!n) continue;
	facesWithVerts++;
	const w = Math.floor((mxS - mnS) / 16) + 1;
	const h = Math.floor((mxT - mnT) / 16) + 1;
	const w1 = Math.floor((mxS - mnS) / 16) + 2;
	const h1 = Math.floor((mxT - mnT) / 16) + 2;
	sumWH += w * h;
	sumWH1 += w1 * h1;
	if (rows.length < 12) rows.push({ i: f.i, name: ti.name, mnS, mxS, mnT, mxT, w, h, n });
}
console.log("faces with vertices:", facesWithVerts, "of", faceCount);
console.log("sum(w*h) =", sumWH, "   sum((w+1)*(h+1)) =", sumWH1);
console.log("lighting lump =", lightLen, " bytes");
console.log("lightLen / sum(w*h)   =", (lightLen / sumWH).toFixed(4));
console.log("lightLen / sum((w+1)*(h+1)) =", (lightLen / sumWH1).toFixed(4));
for (const r of rows) {
	console.log("  face " + String(r.i).padStart(4) + " " + r.name.padEnd(24) +
		" s=[" + r.mnS.toFixed(1) + "," + r.mxS.toFixed(1) + "] t=[" + r.mnT.toFixed(1) + "," + r.mxT.toFixed(1) + "]" +
		" w=" + r.w + " h=" + r.h + " verts=" + r.n);
}
