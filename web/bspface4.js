/* bspface4.js - find the lightmap size rule for the SoF v46 BSP.
 *
 *   node bspface4.js <map.bsp>
 *
 * Two candidate rules are tested:
 *   A) the extents are taken in WORLD units along the two in-plane axes of
 *      the face (the Quake II ComputeAxisBase rule):  luxels = world/16
 *   B) the extents are taken in TEXTURE units (the texinfo s/t axes)
 *
 * The winner is the one whose total sample count divides the LIGHTING lump
 * exactly with an integer number of bytes per sample.
 */
"use strict";
const fs = require("fs");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const tex = [];
for (let i = 0; i < L[5].len / 76; i++) {
	const o = L[5].off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	tex.push({
		s: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)],
		t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)],
		flags: b.readInt32LE(o + 32), value: b.readInt32LE(o + 36),
		name: b.toString("latin1", o + 40, z)
	});
}
const planes = [];
for (let i = 0; i < L[1].len / 20; i++) {
	const o = L[1].off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const verts = [];
for (let i = 0; i < L[2].len / 12; i++) {
	const o = L[2].off + i * 12;
	verts.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
}
const edges = [];
for (let i = 0; i < L[11].len / 4; i++) { const o = L[11].off + i * 4; edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]); }
const surfedges = [];
for (let i = 0; i < L[12].len / 4; i++) surfedges.push(b.readInt32LE(L[12].off + i * 4));

const faceCount = L[6].len / 44;
const faces = [];
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	faces.push({ i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
		firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8),
		texinfo: b.readUInt16LE(o + 10) });
}

/* the flags survey */
const flagc = new Map();
for (const t of tex) flagc.set(t.flags, (flagc.get(t.flags) || 0) + 1);
console.log("texinfo flag values:");
for (const [k, v] of [...flagc.entries()].sort((a, c) => c[1] - a[1]).slice(0, 12))
	console.log("   0x" + (k >>> 0).toString(16) + " (" + k + ")  x" + v);

/* Quake II ComputeAxisBase */
function computeAxisBase(n, texaxis) {
	const up = [0, 0, 1];
	if (n[2] > 0.909) { up[0] = 1; up[1] = 0; up[2] = 0; }
	const scale = (n[0] < -0.1 || n[0] > 0.1) ? n[1] / n[0] : 1.0 / n[1];
	let r = [1 - n[0] * n[0] * scale, -n[0] * n[1] * scale, -n[0]];
	let len = Math.hypot(r[0], r[1], r[2]);
	r = [r[0] / len, r[1] / len, r[2] / len];
	// dtmp = cross(normal, rtmp);  ttmp = cross(dtmp, normal)
	const d = [n[1] * r[2] - n[2] * r[1], n[2] * r[0] - n[0] * r[2], n[0] * r[1] - n[1] * r[0]];
	const t = [d[1] * n[2] - d[2] * n[1], d[2] * n[0] - d[0] * n[2], d[0] * n[1] - d[1] * n[0]];
	return [r, t];
}

const lightLen = L[7].len;
console.log("\nlighting lump:", lightLen, "bytes;  faces:", faceCount);

let sumA = 0, sumA1 = 0, sumB = 0, sumB1 = 0, nA = 0;
const samples = [];
for (const f of faces) {
	const ti = tex[f.texinfo]; if (!ti) continue;
	const pl = planes[f.planenum]; if (!pl) continue;
	let mnA = [1e30, 1e30], mxA = [-1e30, -1e30];
	let mnB = [1e30, 1e30], mxB = [-1e30, -1e30];
	let n = 0;
	const [ax0, ax1] = computeAxisBase(pl.n, ti.s);
	for (let k = 0; k < f.numedges; k++) {
		const se = surfedges[f.firstedge + k]; if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const v = verts[se < 0 ? e[1] : e[0]]; if (!v) continue;
		const a0 = ax0[0] * v[0] + ax0[1] * v[1] + ax0[2] * v[2];
		const a1 = ax1[0] * v[0] + ax1[1] * v[1] + ax1[2] * v[2];
		const s = ti.s[0] * v[0] + ti.s[1] * v[1] + ti.s[2] * v[2] + ti.s[3];
		const t = ti.t[0] * v[0] + ti.t[1] * v[1] + ti.t[2] * v[2] + ti.t[3];
		if (a0 < mnA[0]) mnA[0] = a0; if (a0 > mxA[0]) mxA[0] = a0;
		if (a1 < mnA[1]) mnA[1] = a1; if (a1 > mxA[1]) mxA[1] = a1;
		if (s < mnB[0]) mnB[0] = s; if (s > mxB[0]) mxB[0] = s;
		if (t < mnB[1]) mnB[1] = t; if (t > mxB[1]) mxB[1] = t;
		n++;
	}
	if (!n) continue;
	nA++;
	const wA = Math.floor((mxA[0] - mnA[0]) / 16) + 1, hA = Math.floor((mxA[1] - mnA[1]) / 16) + 1;
	const wB = Math.floor((mxB[0] - mnB[0]) / 16) + 1, hB = Math.floor((mxB[1] - mnB[1]) / 16) + 1;
	sumA += wA * hA; sumA1 += (wA + 1) * (hA + 1);
	sumB += wB * hB; sumB1 += (wB + 1) * (hB + 1);
	if (samples.length < 10) samples.push({ i: f.i, name: ti.name, wA, hA, wB, hB, dA: mxA[0] - mnA[0], dA1: mxA[1] - mnA[1] });
}
console.log("faces with geometry:", nA);
console.log("A (world units): sum(w*h)=" + sumA + "  sum((w+1)*(h+1))=" + sumA1 +
	"   lightLen/sum=" + (lightLen / sumA).toFixed(4) + "  lightLen/sum1=" + (lightLen / sumA1).toFixed(4));
console.log("B (tex units)  : sum(w*h)=" + sumB + "  sum((w+1)*(h+1))=" + sumB1 +
	"   lightLen/sum=" + (lightLen / sumB).toFixed(4) + "  lightLen/sum1=" + (lightLen / sumB1).toFixed(4));
for (const s of samples) console.log("  face " + String(s.i).padStart(4) + " " + s.name.padEnd(24) +
	" worldW=" + s.wA + " worldH=" + s.hA + " texW=" + s.wB + " texH=" + s.hB +
	"  extents=" + s.dA.toFixed(1) + "x" + s.dA1.toFixed(1));
