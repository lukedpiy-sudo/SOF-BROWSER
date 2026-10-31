/* bspverify5.js - print the lightmap grids of a few faces.
 *   node bspverify5.js <map.bsp>
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
const lightData = b.subarray(L(7).off, L(7).off + L(7).len);
const faceCount = L(6).len / 44;
const want = (process.argv[3] || "0,2,9,10,11,12,21,16").split(",").map(Number);

for (const i of want) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	const ofs = b.readInt32LE(o + 28);
	const ti = texinfo[b.readUInt16LE(o + 10)];
	const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
	const ext = [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)];
	let mnS = 1e30, mxS = -1e30, mnT = 1e30, mxT = -1e30;
	const vs = [];
	for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
		const se = surfedges[b.readInt32LE(o + 4) + k];
		if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
		const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3];
		const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3];
		if (s < mnS) mnS = s; if (s > mxS) mxS = s;
		if (t < mnT) mnT = t; if (t > mxT) mxT = t;
		vs.push([+s.toFixed(1), +t.toFixed(1)]);
	}
	console.log("\nface " + i + "  " + ti.name + "  texinfo " + b.readUInt16LE(o + 10) +
		"  |s|=" + Math.hypot(ti.s[0], ti.s[1], ti.s[2]).toFixed(2) +
		"  |t|=" + Math.hypot(ti.t[0], ti.t[1], ti.t[2]).toFixed(2));
	console.log("  lightmap " + w + "x" + h + " at " + ofs +
		"  mins=" + JSON.stringify(mins) + " ext=" + JSON.stringify(ext) +
		"  aux=" + b[o + 34] + "," + b[o + 35]);
	console.log("  the face's texture box: s=[" + mnS.toFixed(1) + "," + mxS.toFixed(1) +
		"] t=[" + mnT.toFixed(1) + "," + mxT.toFixed(1) + "]");
	console.log("  the vertices (s,t): " + JSON.stringify(vs));
	console.log("  the luxel grid (R):");
	for (let r = 0; r < h; r++) {
		let line = "   ";
		for (let c = 0; c < w; c++) {
			const p = ofs + (r * w + c) * 3;
			line += ("[" + lightData[p] + "," + lightData[p + 1] + "," + lightData[p + 2] + "]").padStart(16);
		}
		console.log(line);
	}
}
