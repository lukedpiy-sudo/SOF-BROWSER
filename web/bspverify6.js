/*
 * bspverify6.js - the direction test: the lightmap's brightness gradient must
 * follow the sun, and that fixes the row order of the lightmap.
 *
 *   node bspverify6.js <map.bsp>
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
const lightData = b.subarray(L(7).off, L(7).off + L(7).len);
const faceCount = L(6).len / 44;

/* the entities */
const entTxt = b.toString("latin1", L(0).off, L(0).off + L(0).len);
const entList = [];
{
	const re = /\{([^{}]*)\}/g; let m;
	while ((m = re.exec(entTxt)) !== null) {
		const kv = {}; const kre = /"([^"]*)"\s*"([^"]*)"/g; let k;
		while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
		entList.push(kv);
	}
}
const num = (v) => { const p = String(v || "").trim().split(/\s+/).map(Number); return p.some(isNaN) ? null : p; };
const world = entList.find(e => e.classname === "worldspawn") || {};
const sunEnt = entList.find(e => e.targetname === world._sun);
const sunP = sunEnt ? num(sunEnt.origin) : null;
let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
for (const v of vertices) for (let i = 0; i < 3; i++) { if (v[i] < mn[i]) mn[i] = v[i]; if (v[i] > mx[i]) mx[i] = v[i]; }
const ctr = [(mn[0] + mx[0]) / 2, (mn[1] + mx[1]) / 2, (mn[2] + mx[2]) / 2];
const sd = [sunP[0] - ctr[0], sunP[1] - ctr[1], sunP[2] - ctr[2]];
const sl = Math.hypot(sd[0], sd[1], sd[2]);
const sunDir = [sd[0] / sl, sd[1] / sl, sd[2] / sl];
console.log("the sun's direction (towards the sun):", sunDir.map(x => +x.toFixed(3)).join(", "));

function slope(vals) {
	/* the least squares slope of vals against 0,1,2,... */
	const n = vals.length; if (n < 2) return 0;
	const mx2 = (n - 1) / 2;
	let my = 0; for (const v of vals) my += v; my /= n;
	let num2 = 0, den = 0;
	for (let i = 0; i < n; i++) { num2 += (i - mx2) * (vals[i] - my); den += (i - mx2) * (i - mx2); }
	return den ? num2 / den : 0;
}

for (const flip of [false, true]) {
	let sOk = 0, sTested = 0, tOk = 0, tTested = 0;
	let faceOk = 0, faceTested = 0;
	for (let i = 0; i < faceCount; i++) {
		const o = L(6).off + i * 44;
		const w = b[o + 32], h = b[o + 33];
		if (!w || !h || w < 3 || h < 3) continue;
		const ti = texinfo[b.readUInt16LE(o + 10)]; if (!ti) continue;
		const pl = planes[b.readUInt16LE(o)]; if (!pl) continue;
		const sgn = b.readUInt16LE(o + 2) ? -1 : 1;
		const nrm = [pl.n[0] * sgn, pl.n[1] * sgn, pl.n[2] * sgn];
		/* the sun's projection on the face plane */
		const dn = sunDir[0] * nrm[0] + sunDir[1] * nrm[1] + sunDir[2] * nrm[2];
		if (dn <= 0.05) continue;                 /* only the faces the sun hits */
		const g = [sunDir[0] - dn * nrm[0], sunDir[1] - dn * nrm[1], sunDir[2] - dn * nrm[2]];
		const gs = g[0] * ti.s[0] + g[1] * ti.s[1] + g[2] * ti.s[2];
		const gt = g[0] * ti.t[0] + g[1] * ti.t[1] + g[2] * ti.t[2];
		const ofs = b.readInt32LE(o + 28);
		/* the column means and the row means */
		const colM = new Array(w).fill(0), rowM = new Array(h).fill(0);
		for (let r = 0; r < h; r++) for (let c = 0; c < w; c++) {
			const p = ofs + (r * w + c) * 3;
			const lum = lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
			colM[c] += lum; rowM[r] += lum;
		}
		for (let c = 0; c < w; c++) colM[c] /= h;
		for (let r = 0; r < h; r++) rowM[r] /= w;
		const sc = slope(colM), sr = slope(rowM);
		if (Math.abs(sc) > 0.5) { sTested++; if (Math.sign(sc) === Math.sign(gs)) sOk++; }
		if (Math.abs(sr) > 0.5) {
			tTested++;
			const rowIdx = flip ? rowM.slice().reverse() : rowM;
			const srf = slope(rowIdx);
			if (Math.sign(srf) === Math.sign(gt)) tOk++;
		}
		faceTested++;
		if (Math.sign(sc) === Math.sign(gs) && Math.sign(sr) === Math.sign(gt)) faceOk++;
	}
	console.log("flip=" + flip +
		": the s gradient agrees " + sOk + "/" + sTested +
		", the t gradient agrees " + tOk + "/" + tTested +
		", both " + faceOk + "/" + faceTested);
}
