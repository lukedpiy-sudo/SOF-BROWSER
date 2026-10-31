/*
 * bspverify.js - prove that the decoded lightmaps are the real ones.
 *
 *   node bspverify.js <map.bsp>
 *
 *  1. every face's lightmap rectangle lies inside the lighting lump and the
 *     rectangles tile it exactly;
 *  2. the lightmap extents that the face record stores agree with the real
 *     geometry (the texture space bounding box of the face, snapped to the
 *     16 unit luxel grid) and the luxel count matches the stored size;
 *  3. the brightness of a face agrees with the map's lighting: the sun's
 *     direction and the point light entities.
 *  4. the row order of the lightmap is found: the brightest luxel of a face
 *     has to be the one that is nearest the light.
 */
"use strict";
const { readBsp } = require("./bspmap.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, version, lumps } = readBsp(file);
const L = (i) => lumps[i];

/* ---- the geometry ---- */
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

/* ---- the entities ---- */
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
	lights.push({ p: p, c: c, i: parseFloat(e.light || "0") || 0, cone: e._cone, mangle: e._mangle });
}
const world = entList.find(e => e.classname === "worldspawn") || {};
const sunEnt = entList.find(e => e.targetname === world._sun);
const sunP = sunEnt ? num(sunEnt.origin) : null;
console.log("lights from the entity lump:", lights.length);
console.log("sun:", JSON.stringify({
	color: world._sun_color, light: world._sun_light, ambient: world._sun_ambient,
	target: world._sun, origin: sunP
}));

/* the sun direction: from the map's centre towards the sun */
let sunDir = null;
if (sunP) {
	let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
	for (const v of vertices) for (let i = 0; i < 3; i++) {
		if (v[i] < mn[i]) mn[i] = v[i]; if (v[i] > mx[i]) mx[i] = v[i];
	}
	const c = [(mn[0] + mx[0]) / 2, (mn[1] + mx[1]) / 2, (mn[2] + mx[2]) / 2];
	const d = [sunP[0] - c[0], sunP[1] - c[1], sunP[2] - c[2]];
	const l = Math.hypot(d[0], d[1], d[2]) || 1;
	sunDir = [d[0] / l, d[1] / l, d[2] / l];
	console.log("sun direction (towards the sun):", sunDir.map(x => +x.toFixed(3)).join(", "));
}

/* ---- check 1: the rectangles tile the lighting lump ---- */
let total = 0, outOfRange = 0, lit = 0;
const faceInfo = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33], ofs = b.readInt32LE(o + 28);
	if (!w || !h) continue;
	lit++;
	if (ofs < 0 || ofs + w * h * 3 > lightData.length) { outOfRange++; continue; }
	total += w * h * 3;
	faceInfo.push({
		i, ofs, w, h, mins: [b.readInt16LE(o + 36), b.readInt16LE(o + 38)],
		ext: [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)]
	});
}
console.log("\ncheck 1: the lightmap rectangles");
console.log("  faces with a lightmap:", lit, " out of range:", outOfRange);
console.log("  the rectangles cover", total, "of", lightData.length, "bytes ->",
	total === lightData.length ? "EXACT" : "MISMATCH");

/* ---- check 2: the extents against the geometry ---- */
let extOk = 0, extBad = 0, sizeOk = 0, sizeBad = 0, samples = [];
for (const f of faceInfo) {
	const o = L(6).off + f.i * 44;
	const ti = texinfo[b.readUInt16LE(o + 10)];
	if (!ti) continue;
	let mnS = 1e30, mxS = -1e30, mnT = 1e30, mxT = -1e30, n = 0;
	for (let k = 0; k < b.readUInt16LE(o + 8); k++) {
		const se = surfedges[b.readInt32LE(o + 4) + k];
		if (se === undefined) break;
		const e = edges[Math.abs(se)]; if (!e) continue;
		const p = vertices[se < 0 ? e[1] : e[0]]; if (!p) continue;
		const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3];
		const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3];
		if (s < mnS) mnS = s; if (s > mxS) mxS = s;
		if (t < mnT) mnT = t; if (t > mxT) mxT = t;
		n++;
	}
	if (!n) continue;
	/* the stored extent has to cover the real box, snapped to the grid */
	const s0 = f.mins[0], t0 = f.mins[1], s1 = f.mins[0] + f.ext[0], t1 = f.mins[1] + f.ext[1];
	const cover = (mnS >= s0 - 0.01 && mnS < s0 + 16.01 && mxS <= s1 + 0.01 && mxS > s1 - 16.01 &&
		mnT >= t0 - 0.01 && mnT < t0 + 16.01 && mxT <= t1 + 0.01 && mxT > t1 - 16.01);
	if (cover) extOk++; else {
		extBad++;
		if (samples.length < 6) samples.push({ i: f.i, stored: [s0, t0, f.ext[0], f.ext[1]], real: [mnS, mxS, mnT, mxT], name: ti.name });
	}
	if (f.w === f.ext[0] / 16 + 1 && f.h === f.ext[1] / 16 + 1) sizeOk++; else sizeBad++;
}
console.log("\ncheck 2: the lightmap extents against the geometry");
console.log("  the stored extent covers the face's texture box:", extOk, " failures:", extBad);
console.log("  the luxel count matches extent/16 + 1:", sizeOk, " failures:", sizeBad);
for (const s of samples) console.log("   face", s.i, s.name, "stored", JSON.stringify(s.stored),
	"real", JSON.stringify(s.real.map(x => +x.toFixed(2))));

/* ---- check 3: the brightness ---- */
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
function corr(a, b) {
	const n = a.length; if (n < 3) return 0;
	const ma = a.reduce((s, x) => s + x, 0) / n, mb = b.reduce((s, x) => s + x, 0) / n;
	let sa = 0, sb = 0, sab = 0;
	for (let i = 0; i < n; i++) { const da = a[i] - ma, db = b[i] - mb; sa += da * da; sb += db * db; sab += da * db; }
	return sab / Math.sqrt(sa * sb);
}

const rows = [];
for (const f of faceInfo) {
	const o = L(6).off + f.i * 44;
	const ti = texinfo[b.readUInt16LE(o + 10)];
	const pl = planes[b.readUInt16LE(o)];
	if (!ti || !pl) continue;
	const sgn = b.readUInt16LE(o + 2) ? -1 : 1;
	const nrm = [pl.n[0] * sgn, pl.n[1] * sgn, pl.n[2] * sgn];
	let sum = 0, mx = 0, my = 0, mxv = -1;
	for (let r = 0; r < f.h; r++) for (let c = 0; c < f.w; c++) {
		const p = f.ofs + (r * f.w + c) * 3;
		const lum = lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
		sum += lum;
		if (lum > mxv) { mxv = lum; mx = c; my = r; }
	}
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
	/* the expected light: the sun and the point lights */
	let expected = 0;
	if (sunDir) expected += Math.max(0, nrm[0] * sunDir[0] + nrm[1] * sunDir[1] + nrm[2] * sunDir[2]) * 60;
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - cen[0], L2.p[1] - cen[1], L2.p[2] - cen[2]);
		if (d > 700) continue;
		expected += (L2.i / 100) * (1 - d / 700);
	}
	rows.push({ f, ti, pl, nrm, mean: sum / (f.w * f.h), max: mxv, mx, my, cen, expected });
}
const br = rows.map(r => r.mean), ex = rows.map(r => r.expected);
console.log("\ncheck 3: the brightness against the map's lighting");
console.log("  faces:", rows.length);
console.log("  correlation(mean lightmap brightness, sun+lights) =", corr(br, ex).toFixed(4));
/* the faces under a light and the faces in a corner */
const near = rows.filter(r => {
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - r.cen[0], L2.p[1] - r.cen[1], L2.p[2] - r.cen[2]);
		if (d < 120) return true;
	}
	return false;
});
const far = rows.filter(r => {
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - r.cen[0], L2.p[1] - r.cen[1], L2.p[2] - r.cen[2]);
		if (d < 400) return false;
	}
	return true;
});
const avg = (a) => a.reduce((s, x) => s + x, 0) / (a.length || 1);
console.log("  faces within 120 units of a light:", near.length,
	" mean lightmap brightness", avg(near.map(r => r.mean)).toFixed(1));
console.log("  faces further than 400 units from every light:", far.length,
	" mean lightmap brightness", avg(far.map(r => r.mean)).toFixed(1));
const sorted = rows.slice().sort((a, c) => a.mean - c.mean);
console.log("  the 5 darkest faces:", sorted.slice(0, 5).map(r =>
	"#" + r.f.i + "(" + r.mean.toFixed(0) + ", n=" + r.nrm.map(x => x.toFixed(1)).join("/") + ")").join(" "));
console.log("  the 5 brightest faces:", sorted.slice(-5).map(r =>
	"#" + r.f.i + "(" + r.mean.toFixed(0) + ", n=" + r.nrm.map(x => x.toFixed(1)).join("/") + ")").join(" "));

/* ---- check 4: the row order ---- */
console.log("\ncheck 4: the row order of the lightmap");
for (const flip of [false, true]) {
	let good = 0, tested = 0, sumD = 0;
	for (const r of rows) {
		let best = null, bestD = 1e18;
		for (const L2 of lights) {
			const d = Math.hypot(L2.p[0] - r.cen[0], L2.p[1] - r.cen[1], L2.p[2] - r.cen[2]);
			if (d < bestD) { bestD = d; best = L2; }
		}
		if (!best || bestD > 200) continue;
		const t = r.f.mins[1] + 16 * ((flip ? (r.f.h - 1 - r.my) : r.my) + 0.5);
		const s = r.f.mins[0] + 16 * (r.mx + 0.5);
		const p = solve3([r.ti.s.slice(0, 3), r.ti.t.slice(0, 3), r.pl.n],
			[s - r.ti.s[3], t - r.ti.t[3], r.pl.d]);
		if (!p) continue;
		tested++;
		const d = Math.hypot(p[0] - best.p[0], p[1] - best.p[1], p[2] - best.p[2]);
		sumD += d;
		if (d < 250) good++;
	}
	console.log("  flip=" + flip + ": " + good + "/" + tested +
		" brightest luxels within 250 units of the light, mean distance " +
		(sumD / (tested || 1)).toFixed(0));
}
