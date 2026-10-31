/*
 * bspverify10.js - where is the brightest luxel of the map, and is there a
 * light entity there?
 *   node bspverify10.js <map.bsp>
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
const lightData = b.subarray(L(7).off, L(7).off + L(7).len);
const faceCount = L(6).len / 44;

function solve3(M, rhs) {
	const A = M.map((r, i) => r.slice().concat([rhs[i]]));
	for (let c = 0; c < 3; c++) {
		let piv = c;
		for (let r = c + 1; r < 3; r++) if (Math.abs(A[r][c]) > Math.abs(A[piv][c])) piv = r;
		if (Math.abs(A[piv][c]) < 1e-9) return null;
		const tmp = A[c]; A[c] = A[piv]; A[piv] = tmp;
		for (let r = 0; r < 3; r++) {
			if (r === c) continue;
			const f = A[r][c] / A[c][c];
			for (let k = c; k < 4; k++) A[r][k] -= f * A[c][k];
		}
	}
	return [A[0][3] / A[0][0], A[1][3] / A[1][1], A[2][3] / A[2][2]];
}

/* the entity lights */
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
	let c = num(e._color || e.color) || [1, 1, 1];
	if (c[0] > 1 || c[1] > 1 || c[2] > 1) c = c.map(x => x / 255);
	lights.push({ p: p, c: c, i: parseFloat(e.light || "0") || 0, cone: e._cone });
}

/* the brightest luxels of the map */
const best = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ofs = b.readInt32LE(o + 28);
	const ti = texinfo[b.readUInt16LE(o + 10)];
	const pl = planes[b.readUInt16LE(o)];
	if (!ti || !pl) continue;
	const mins = [b.readInt16LE(o + 36), b.readInt16LE(o + 38)];
	const ext = [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)];
	const ls = w > 1 ? ext[0] / (w - 1) : ext[0];
	const lt = h > 1 ? ext[1] / (h - 1) : ext[1];
	for (let r = 0; r < h; r++) for (let c = 0; c < w; c++) {
		const p = ofs + (r * w + c) * 3;
		const lum = lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
		best.push({ lum: lum, rgb: [lightData[p], lightData[p + 1], lightData[p + 2]], i: i, c: c, r: r, w: w, h: h, ofs: ofs, ti: ti, pl: pl, mins: mins, ls: ls, lt: lt });
	}
}
best.sort((a, c) => c.lum - a.lum);
console.log("the 12 brightest luxels of the map:");
for (const x of best.slice(0, 12)) {
	const s = x.mins[0] + x.ls * (x.c + 0.5);
	const t = x.mins[1] + x.lt * (x.r + 0.5);
	const p = solve3([x.ti.s.slice(0, 3), x.ti.t.slice(0, 3), x.pl.n],
		[s - x.ti.s[3], t - x.ti.t[3], x.pl.d]);
	let near = null, nd = 1e18;
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - p[0], L2.p[1] - p[1], L2.p[2] - p[2]);
		if (d < nd) { nd = d; near = L2; }
	}
	console.log("  face " + String(x.i).padStart(5) + " (" + x.c + "," + x.r + ") rgb " + x.rgb.join(",") +
		"  at " + (p ? p.map(v => v.toFixed(0)).join(",") : "?") +
		"  nearest light " + nd.toFixed(0) + " units (power " + near.i + ", cone " + near.cone + ")");
}
/* the mean distance from a luxel to the nearest light, over all the luxels */
let sum = 0, n = 0, under50 = 0;
for (let k = 0; k < best.length; k += 37) {
	const x = best[k];
	const s = x.mins[0] + x.ls * (x.c + 0.5);
	const t = x.mins[1] + x.lt * (x.r + 0.5);
	const p = solve3([x.ti.s.slice(0, 3), x.ti.t.slice(0, 3), x.pl.n], [s - x.ti.s[3], t - x.ti.t[3], x.pl.d]);
	if (!p) continue;
	let nd = 1e18;
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - p[0], L2.p[1] - p[1], L2.p[2] - p[2]);
		if (d < nd) nd = d;
	}
	sum += nd; n++;
	if (nd < 50) under50++;
}
console.log("\na sample of " + n + " luxels: the mean distance to the nearest light entity is " +
	(sum / n).toFixed(0) + " units, " + under50 + " are within 50 units");
