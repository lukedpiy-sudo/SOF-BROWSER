/*
 * bspverify7.js - the lightmap against the map's light entities.
 *
 *   node bspverify7.js <map.bsp>
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
	texinfo.push({ name: b.toString("latin1", o + 40, z) });
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
	const mg = num(e._mangle || e.angle);
	let dir = null;
	if (mg && mg.length >= 2) {
		const yaw = mg[0] * Math.PI / 180, pit = mg[1] * Math.PI / 180, cp = Math.cos(pit);
		dir = [Math.sin(yaw) * cp, Math.cos(yaw) * cp, Math.sin(pit)];
	}
	lights.push({
		p: p, c: c, i: parseFloat(e.light || "0") || 0,
		cone: e._cone ? parseFloat(e._cone) : 0, dir: dir, wait: e._wait ? parseFloat(e._wait) : 0
	});
}
console.log("the map's light entities:", lights.length,
	"(" + lights.filter(l => l.cone > 0).length + " spots)");

/* the faces */
const rows = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ofs = b.readInt32LE(o + 28);
	let sum = 0;
	for (let r = 0; r < h; r++) for (let c = 0; c < w; c++) {
		const p = ofs + (r * w + c) * 3;
		sum += lightData[p] * 0.3 + lightData[p + 1] * 0.6 + lightData[p + 2] * 0.1;
	}
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
	/* the nearest light, and the light that reaches the face */
	let near = null, nearD = 1e18, lit = 0;
	for (const L2 of lights) {
		const d = Math.hypot(L2.p[0] - cen[0], L2.p[1] - cen[1], L2.p[2] - cen[2]);
		if (d < nearD) { nearD = d; near = L2; }
		let contrib = (L2.i / 100) * Math.max(0, 1 - d / 600);
		if (L2.cone > 0 && L2.dir) {
			/* is the face inside the cone? */
			const dx = L2.p[0] - cen[0], dy = L2.p[1] - cen[1], dz = L2.p[2] - cen[2];
			const dl = Math.hypot(dx, dy, dz) || 1;
			const cs = (dx * L2.dir[0] + dy * L2.dir[1] + dz * L2.dir[2]) / dl;
			if (cs < Math.cos(L2.cone / 2)) contrib = 0;
		}
		lit += contrib;
	}
	rows.push({ i: i, mean: sum / (w * h), nearD: nearD, near: near, lit: lit, cen: cen });
}

/* the correlation */
function corr(a, b) {
	const n = a.length; if (n < 3) return 0;
	const ma = a.reduce((s, x) => s + x, 0) / n, mb = b.reduce((s, x) => s + x, 0) / n;
	let sa = 0, sb = 0, sab = 0;
	for (let i = 0; i < n; i++) { const da = a[i] - ma, db = b[i] - mb; sa += da * da; sb += db * db; sab += da * db; }
	return sab / Math.sqrt(sa * sb);
}
console.log("faces:", rows.length);
console.log("correlation(mean lightmap brightness, the light that reaches the face) =",
	corr(rows.map(r => r.mean), rows.map(r => r.lit)).toFixed(4));
console.log("correlation(mean lightmap brightness, 1/(1+d^2) of the nearest light) =",
	corr(rows.map(r => r.mean), rows.map(r => 1 / (1 + r.nearD * r.nearD / 40000))).toFixed(4));

console.log("\nthe mean lightmap brightness against the distance to the nearest light:");
const bins = [];
for (let d = 0; d < 1200; d += 100) bins.push({ d: d, sum: 0, n: 0 });
for (const r of rows) {
	const k = Math.min(bins.length - 1, Math.floor(r.nearD / 100));
	bins[k].sum += r.mean; bins[k].n++;
}
for (const b2 of bins) if (b2.n) console.log("   " + String(b2.d).padStart(5) + "-" + String(b2.d + 99).padStart(5) +
	" units: " + String(b2.n).padStart(5) + " faces, mean brightness " + (b2.sum / b2.n).toFixed(1));

console.log("\nthe 12 brightest and the 12 darkest faces (with their nearest light):");
const srt = rows.slice().sort((a, c) => a.mean - c.mean);
for (const r of srt.slice(0, 12)) console.log("   dark  face " + String(r.i).padStart(5) +
	" brightness " + r.mean.toFixed(1).padStart(6) + "  nearest light " + r.nearD.toFixed(0) +
	" units, power " + r.near.i + ", cone " + r.near.cone);
for (const r of srt.slice(-12)) console.log("   BRIGHT face " + String(r.i).padStart(5) +
	" brightness " + r.mean.toFixed(1).padStart(6) + "  nearest light " + r.nearD.toFixed(0) +
	" units, power " + r.near.i + ", cone " + r.near.cone);
