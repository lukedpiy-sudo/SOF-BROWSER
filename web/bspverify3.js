/* bspverify3.js - the relation between the lightmap extent and the luxel count.
 *   node bspverify3.js <map.bsp>
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
const faceCount = L(6).len / 44;

console.log("face  texinfo  |s|   |t|   texboxS        texboxT       stored ext   w h   worldBox");
for (let i = 0; i < 22; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	const ti = texinfo[b.readUInt16LE(o + 10)];
	if (!ti) continue;
	let mnS = 1e30, mxS = -1e30, mnT = 1e30, mxT = -1e30;
	let wmn = [1e30, 1e30, 1e30], wmx = [-1e30, -1e30, -1e30], n = 0;
	for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
		const se = surfedges[b.readInt32LE(o + 4) + k];
		if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
		const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3];
		const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3];
		if (s < mnS) mnS = s; if (s > mxS) mxS = s;
		if (t < mnT) mnT = t; if (t > mxT) mxT = t;
		for (let q = 0; q < 3; q++) { if (p[q] < wmn[q]) wmn[q] = p[q]; if (p[q] > wmx[q]) wmx[q] = p[q]; }
		n++;
	}
	const ls = Math.hypot(ti.s[0], ti.s[1], ti.s[2]);
	const lt = Math.hypot(ti.t[0], ti.t[1], ti.t[2]);
	const wb = "[" + wmn.map(x => x.toFixed(0)).join(",") + ".." + wmx.map(x => x.toFixed(0)).join(",") + "]";
	console.log(String(i).padStart(4) + "  " + String(b.readUInt16LE(o + 10)).padStart(4) + "  " +
		ls.toFixed(3).padStart(6) + " " + lt.toFixed(3).padStart(6) + "  " +
		("[" + mnS.toFixed(1) + "," + mxS.toFixed(1) + "]").padEnd(16) +
		("[" + mnT.toFixed(1) + "," + mxT.toFixed(1) + "]").padEnd(16) +
		(String(b.readUInt16LE(o + 40)) + "," + b.readUInt16LE(o + 42)).padEnd(13) +
		String(w).padStart(2) + String(h).padStart(3) + "  " +
		wb.padEnd(26) + ti.name);
}

/* the global relation: luxels per face against the extent and the scale */
console.log("\nstatistic over all the lit faces:");
const hist = new Map();
let n = 0;
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ti = texinfo[b.readUInt16LE(o + 10)]; if (!ti) continue;
	const ex = b.readUInt16LE(o + 40), ey = b.readUInt16LE(o + 42);
	const ls = Math.hypot(ti.s[0], ti.s[1], ti.s[2]);
	const lt = Math.hypot(ti.t[0], ti.t[1], ti.t[2]);
	/* the luxel size in texture units, and in world units */
	const luxS = ls > 0 ? ex / (w - 1) : 0;
	const luxT = lt > 0 ? ey / (h - 1) : 0;
	const key = (luxS * ls).toFixed(1) + "/" + (luxT * lt).toFixed(1);
	hist.set(key, (hist.get(key) || 0) + 1);
	n++;
}
console.log("  faces:", n);
const top = [...hist.entries()].sort((a, c) => c[1] - a[1]).slice(0, 14);
for (const [k, v] of top) console.log("   world luxel size s/t = " + k.padEnd(18) + " x" + v);
