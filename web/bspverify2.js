/*
 * bspverify2.js - the last two checks on the lightmaps.
 *
 *   node bspverify2.js <map.bsp>
 *
 *  A) the relation between the stored lightmap extent and the stored luxel
 *     count;
 *  B) the row order of the lightmap: the bright half of a face's lightmap
 *     has to be the half that is towards the light, in texture space;
 *  C) per luxel: the brightest luxel of a face is nearer the light than its
 *     darkest luxel.
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
		flags: b.readInt32LE(o + 32), name: b.toString("latin1", o + 40, z)
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
const lights = [];
for (const e of entList) {
	if ((e.classname || "") !== "light") continue;
	const p = num(e.origin); if (!p || p.length !== 3) continue;
	lights.push({ p: p, i: parseFloat(e.light || "0") || 0, cone: e._cone, mangle: e._mangle, wait: e._wait });
}

/* ---- A: the extent and the luxel count ---- */
console.log("A) the lightmap extent and the luxel count");
const rules = { "floor(e/16)+1": 0, "ceil(e/16)+1": 0, "round(e/16)+1": 0, "e/16": 0 };
const fails = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ex = b.readUInt16LE(o + 40), ey = b.readUInt16LE(o + 42);
	if (w === Math.floor(ex / 16) + 1 && h === Math.floor(ey / 16) + 1) rules["floor(e/16)+1"]++;
	if (w === Math.ceil(ex / 16) + 1 && h === Math.ceil(ey / 16) + 1) rules["ceil(e/16)+1"]++;
	if (w === Math.round(ex / 16) + 1 && h === Math.round(ey / 16) + 1) rules["round(e/16)+1"]++;
	if (w === ex / 16 && h === ey / 16) rules["e/16"]++;
	if (fails.length < 8 && !(w === Math.ceil(ex / 16) + 1 && h === Math.ceil(ey / 16) + 1))
		fails.push({ i: i, w: w, h: h, ex: ex, ey: ey });
}
console.log("  the rule that fits:", JSON.stringify(rules));
for (const f of fails) console.log("   face", f.i, "w=" + f.w, "h=" + f.h, "ext=" + f.ex + "," + f.ey);

/* ---- B: the row order ---- */
console.log("\nB) the row order (the bright half of the lightmap is towards the light)");
for (const flip of [false, true]) {
	let agree = 0, tested = 0;
	for (let i = 0; i < faceCount; i++) {
		const o = L(6).off + i * 44;
		const w = b[o + 32], h = b[o + 33];
		if (!w || !h || h < 3) continue;
		const ti = texinfo[b.readUInt16LE(o + 10)];
		if (!ti) continue;
		const ofs = b.readInt32LE(o + 28);
		const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
		/* the mean brightness of the first and the last row */
		let first = 0, last = 0;
		for (let c = 0; c < w; c++) {
			let p = ofs + c * 3; first += lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
			p = ofs + ((h - 1) * w + c) * 3; last += lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
		}
		const brightIsFirst = first > last;
		/* the face centre */
		const cen = [0, 0, 0]; let n = 0;
		for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
			const se = surfedges[b.readInt32LE(o + 4) + k];
			if (se === undefined) break;
			const e = edges[Math.abs(se)]; if (!e) continue;
			const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
			cen[0] += p[0]; cen[1] += p[1]; cen[2] += p[2]; n++;
		}
		if (!n) continue;
		cen[0] /= n; cen[1] /= n; cen[2] /= n;
		/* the nearest light */
		let best = null, bestD = 1e18;
		for (const L2 of lights) {
			const d = Math.hypot(L2.p[0] - cen[0], L2.p[1] - cen[1], L2.p[2] - cen[2]);
			if (d < bestD) { bestD = d; best = L2; }
		}
		if (!best || bestD > 260) continue;
		/* where is the light in texture space? */
		const lt = ti.t[0] * best.p[0] + ti.t[1] * best.p[1] + ti.t[2] * best.p[2] + ti.t[3];
		const ls = ti.s[0] * best.p[0] + ti.s[1] * best.p[1] + ti.s[2] * best.p[2] + ti.s[3];
		const lightAbove = lt > (mins[1] + (h - 1) * 16) / 2;
		/* with the rows stored from the top (t decreasing) the bright half is
		 * the last row when the light is above */
		const brightIsHighT = flip ? !brightIsFirst : brightIsFirst;
		tested++;
		if (brightIsHighT === lightAbove) agree++;
	}
	console.log("  flip=" + flip + ": " + agree + "/" + tested + " faces agree (" +
		(100 * agree / (tested || 1)).toFixed(1) + "%)");
}

/* ---- C: the brightest luxel against the darkest ---- */
console.log("\nC) per luxel: is the brightest luxel nearer the light than the darkest?");
for (const flip of [false, true]) {
	let better = 0, tested = 0;
	for (let i = 0; i < faceCount; i++) {
		const o = L(6).off + i * 44;
		const w = b[o + 32], h = b[o + 33];
		if (!w || !h) continue;
		const ti = texinfo[b.readUInt16LE(o + 10)]; if (!ti) continue;
		const ofs = b.readInt32LE(o + 28);
		const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
		/* the centre and the nearest light */
		const cen = [0, 0, 0]; let n = 0;
		for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
			const se = surfedges[b.readInt32LE(o + 4) + k];
			if (se === undefined) break;
			const e = edges[Math.abs(se)]; if (!e) continue;
			const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
			cen[0] += p[0]; cen[1] += p[1]; cen[2] += p[2]; n++;
		}
		if (!n) continue;
		cen[0] /= n; cen[1] /= n; cen[2] /= n;
		let best = null, bestD = 1e18;
		for (const L2 of lights) {
			const d = Math.hypot(L2.p[0] - cen[0], L2.p[1] - cen[1], L2.p[2] - cen[2]);
			if (d < bestD) { bestD = d; best = L2; }
		}
		if (!best || bestD > 260) continue;
		/* the texture space distance of the light */
		const ls = ti.s[0] * best.p[0] + ti.s[1] * best.p[1] + ti.s[2] * best.p[2] + ti.s[3];
		const lt = ti.t[0] * best.p[0] + ti.t[1] * best.p[1] + ti.t[2] * best.p[2] + ti.t[3];
		let bi = -1, bj = -1, bv = -1, dv = 1e9, di = -1, dj = -1;
		for (let r = 0; r < h; r++) for (let c = 0; c < w; c++) {
			const p = ofs + (r * w + c) * 3;
			const lum = lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
			if (lum > bv) { bv = lum; bi = c; bj = r; }
			if (lum < dv) { dv = lum; di = c; dj = r; }
		}
		if (bi < 0) continue;
		const rowOf = (r) => (flip ? (h - 1 - r) : r);
		const dBright = Math.hypot(mins[0] + 16 * (bi + 0.5) - ls, mins[1] + 16 * (rowOf(bj) + 0.5) - lt);
		const dDark = Math.hypot(mins[0] + 16 * (di + 0.5) - ls, mins[1] + 16 * (rowOf(dj) + 0.5) - lt);
		tested++;
		if (dBright < dDark) better++;
	}
	console.log("  flip=" + flip + ": " + better + "/" + tested + " (" +
		(100 * better / (tested || 1)).toFixed(1) + "%)");
}
