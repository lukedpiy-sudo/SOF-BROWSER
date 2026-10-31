/* bspvsjson.js - does the browser's map_nycdm1.json agree with the BSP?
 *   node bspvsjson.js <map.bsp> <map_nycdm1.json>
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const jsonFile = process.argv[3] || "C:/Users/User/q2work/sof2/web/www/map_nycdm1.json";
const b = fs.readFileSync(file);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(12 + i * 8) });

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
const faces = [];
for (let i = 0; i < L(6).len / 44; i++) {
	const o = L(6).off + i * 44;
	faces.push({
		i: i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
		firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8), texinfo: b.readUInt16LE(o + 10)
	});
}
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

const m = JSON.parse(fs.readFileSync(jsonFile, "utf8"));
console.log("the json:", jsonFile);
console.log("  the faces:", m.faces.length, " the vertices:", m.vertices.length,
	" the textures:", Object.keys(m.textures || {}).length);

/* rebuild the BSP's faces and compare the vertex sequences */
let same = 0, diff = 0, missing = 0, firstDiff = null;
let uvOk = 0, uvBad = 0, firstUv = null;
let matOk = 0, matBad = 0;
for (let i = 0; i < Math.min(m.faces.length, faces.length); i++) {
	const f = faces[i];
	const jf = m.faces[i];
	/* the BSP's vertexes */
	const v = [];
	for (let k = 0; k < f.numedges; k++) {
		const se = surfedges[f.firstedge + k];
		const e = edges[Math.abs(se)];
		v.push(se < 0 ? e[1] : e[0]);
	}
	if (!jf.v || jf.v.length !== v.length) { missing++; continue; }
	let ok = true;
	for (let k = 0; k < v.length; k++) if (jf.v[k] !== v[k]) { ok = false; break; }
	if (ok) same++; else {
		diff++;
		if (!firstDiff) firstDiff = { i: i, json: jf.v.slice(0, 8), bsp: v.slice(0, 8) };
	}
	/* the material */
	const ti = texinfo[f.texinfo];
	if (ti && jf.mat === ti.name) matOk++; else { matBad++; }
	/* the UV */
	if (ti && jf.uv && jf.uv.length === v.length) {
		let uok = true;
		for (let k = 0; k < v.length; k++) {
			const p = vertices[v[k]];
			const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3];
			const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3];
			if (Math.abs(jf.uv[k][0] - s / 64) > 0.01 || Math.abs(jf.uv[k][1] - t / 64) > 0.01) { uok = false; break; }
		}
		if (uok) uvOk++; else { uvBad++; if (!firstUv) firstUv = { i: i, json: jf.uv[0], want: (function () { const ti = texinfo[f.texinfo]; const p = vertices[v[0]]; return [(ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3]) / 64, (ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3]) / 64]; })() }; }
	}
}
console.log("  the vertex sequence matches the BSP:", same, " differs:", diff, " a different length:", missing);
if (firstDiff) console.log("   the first difference, face", firstDiff.i, " json:", JSON.stringify(firstDiff.json), " bsp:", JSON.stringify(firstDiff.bsp));
console.log("  the material matches:", matOk, " differs:", matBad);
console.log("  the UV matches (s/64):", uvOk, " differs:", uvBad);
if (firstUv) console.log("   the first UV difference, face", firstUv.i, " json:", JSON.stringify(firstUv.json), " want:", JSON.stringify(firstUv.want));
/* the normal */
let nOk = 0, nBad = 0, firstN = null;
for (let i = 0; i < Math.min(m.faces.length, faces.length); i++) {
	const f = faces[i], jf = m.faces[i];
	const pl = planes[f.planenum];
	if (!pl || !jf.n) { nBad++; continue; }
	const s = f.side ? -1 : 1;
	const want = [pl.n[0] * s, pl.n[1] * s, pl.n[2] * s];
	let ok = true;
	for (let k = 0; k < 3; k++) if (Math.abs(jf.n[k] - want[k]) > 0.01) { ok = false; break; }
	if (ok) nOk++; else { nBad++; if (!firstN) firstN = { i: i, json: jf.n, want: want }; }
}
console.log("  the normal matches (the plane normal * the side):", nOk, " differs:", nBad);
if (firstN) console.log("   the first normal difference, face", firstN.i, " json:", JSON.stringify(firstN.json), " want:", JSON.stringify(firstN.want));
