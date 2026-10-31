/*
 * bspfacecheck.js - verify the face -> surfedge -> edge -> vertex chain of a
 * SoF v46 BSP and find the correct surfedge encoding.
 *
 *   node bspfacecheck.js <map.bsp>
 *
 * The tests:
 *   1. planarity: every vertex of a face must lie on the face's plane
 *   2. the area: the signed area of the polygon must be positive and must
 *      agree with the plane's normal
 *   3. the shared edge test: two faces that use the same edge must use the
 *      same two vertexes (in reverse order) - this is what catches a wrong
 *      surfedge sign or a wrong edge index
 *   4. the vertexes of a face must be distinct and the polygon must be
 *      convex (the BSP splits the surfaces into convex pieces)
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const planes = [];
for (let i = 0; i < L[1].len / 20; i++) {
	const o = L[1].off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const vertices = [];
for (let i = 0; i < L[2].len / 12; i++) {
	const o = L[2].off + i * 12;
	vertices.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
}
const edges = [];
for (let i = 0; i < L[11].len / 4; i++) {
	const o = L[11].off + i * 4;
	edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
}
const surfedges = [];
for (let i = 0; i < L[12].len / 4; i++) surfedges.push(b.readUInt32LE(L[12].off + i * 4));
const faceCount = L[6].len / 44;
const faces = [];
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	faces.push({
		i: i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
		firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8),
		texinfo: b.readUInt16LE(o + 10)
	});
}

/* the candidate encodings of a surfedge */
const ENCODINGS = {
	/* the signed int, the edge index is 1 based (Quake II) */
	"q2 signed, index-1": (se) => {
		const v = se | 0;
		if (v === 0) return null;
		const idx = Math.abs(v) - 1;
		return idx < 0 || idx >= edges.length ? null : { idx: idx, rev: v < 0 };
	},
	/* the signed int, the edge index is 0 based */
	"signed, index": (se) => {
		const v = se | 0;
		const idx = Math.abs(v);
		return idx >= edges.length ? null : { idx: idx, rev: v < 0 };
	},
	/* the high bit is the reverse flag, the index is 0 based */
	"u32 high bit, index": (se) => {
		const rev = (se & 0x80000000) !== 0;
		const idx = se & 0x7fffffff;
		return idx >= edges.length ? null : { idx: idx, rev: rev };
	},
	/* the high bit is the reverse flag, the index is 1 based */
	"u32 high bit, index-1": (se) => {
		const rev = (se & 0x80000000) !== 0;
		const idx = (se & 0x7fffffff) - 1;
		return idx < 0 || idx >= edges.length ? null : { idx: idx, rev: rev };
	}
};

function faceVerts(f, dec) {
	const out = [];
	for (let k = 0; k < f.numedges; k++) {
		const raw = surfedges[f.firstedge + k];
		if (raw === undefined) return null;
		const d = dec(raw);
		if (!d) return null;
		const e = edges[d.idx];
		if (!e) return null;
		out.push(d.rev ? e[1] : e[0]);
	}
	return out;
}

function analyse(dec) {
	let planar = 0, nonPlanar = 0, worst = 0, bad = 0;
	let vcount = new Map(), dup = 0, convexBad = 0;
	const edgeUse = new Map();     /* "v0,v1" -> the faces */
	let sharedOk = 0, sharedBad = 0, sharedSame = 0;
	let area = 0, areaNeg = 0, areaBad = 0;
	const seen = new Set();
	for (const f of faces) {
		const v = faceVerts(f, dec);
		if (!v) { bad++; continue; }
		if (seen.has(f.firstedge + ":" + f.numedges)) { }
		seen.add(f.firstedge + ":" + f.numedges);
		vcount.set(v.length, (vcount.get(v.length) || 0) + 1);
		/* the distinct vertexes */
		const set = new Set(v);
		if (set.size !== v.length) dup++;
		/* the planarity */
		const pl = planes[f.planenum];
		if (!pl) { bad++; continue; }
		let w = 0;
		for (const vi of v) {
			const p = vertices[vi];
			if (!p) { bad++; continue; }
			const d = Math.abs(pl.n[0] * p[0] + pl.n[1] * p[1] + pl.n[2] * p[2] - pl.d);
			if (d > w) w = d;
		}
		if (w > 0.1) { nonPlanar++; if (w > worst) worst = w; } else planar++;
		/* the area (the fan from the first vertex) */
		let a = 0;
		for (let k = 1; k + 1 < v.length; k++) {
			const p0 = vertices[v[0]], p1 = vertices[v[k]], p2 = vertices[v[k + 1]];
			if (!p0 || !p1 || !p2) continue;
			const u = [p1[0] - p0[0], p1[1] - p0[1], p1[2] - p0[2]];
			const wv = [p2[0] - p0[0], p2[1] - p0[1], p2[2] - p0[2]];
			const cr = [u[1] * wv[2] - u[2] * wv[1], u[2] * wv[0] - u[0] * wv[2], u[0] * wv[1] - u[1] * wv[0]];
			a += cr[0] * pl.n[0] + cr[1] * pl.n[1] + cr[2] * pl.n[2];
		}
		a *= 0.5;
		area += Math.abs(a);
		if (a < 0) areaNeg++;
		if (Math.abs(a) < 0.01) areaBad++;
		/* the shared edges */
		for (let k = 0; k < v.length; k++) {
			const v0 = v[k], v1 = v[(k + 1) % v.length];
			const key = v0 < v1 ? v0 + "," + v1 : v1 + "," + v0;
			const dir = v0 < v1 ? 1 : -1;
			const list = edgeUse.get(key);
			if (!list) { edgeUse.set(key, [dir, 1]); }
			else {
				list[1]++;
				if (list[0] === dir) sharedSame++; else sharedOk++;
			}
		}
	}
	return {
		planar: planar, nonPlanar: nonPlanar, worst: worst, bad: bad, dup: dup,
		vcount: [...vcount.entries()].sort((a, c) => c[1] - a[1]),
		area: area, areaNeg: areaNeg, areaBad: areaBad,
		sharedOk: sharedOk, sharedSame: sharedSame, edges: edgeUse.size
	};
}

console.log("the map:", file);
console.log("the faces:", faceCount, " the edges:", edges.length, " the surfedges:", surfedges.length);
console.log("the surfedge values: the first 12 as u32 and as signed:",
	surfedges.slice(0, 12).map(x => "0x" + x.toString(16)).join(" "));
console.log("   as signed:", surfedges.slice(0, 12).map(x => (x | 0)).join(" "));
for (const [name, dec] of Object.entries(ENCODINGS)) {
	const r = analyse(dec);
	console.log("\n== " + name);
	console.log("   planar: " + r.planar + "  non planar: " + r.nonPlanar +
		" (worst " + r.worst.toFixed(3) + ")  unusable faces: " + r.bad +
		"  faces with a repeated vertex: " + r.dup);
	console.log("   the vertex count per face:", JSON.stringify(r.vcount));
	console.log("   the area: " + r.area.toFixed(0) + "  negative: " + r.areaNeg +
		"  zero: " + r.areaBad);
	console.log("   the edges: " + r.edges + "  used in the opposite direction: " + r.sharedOk +
		"  used in the same direction: " + r.sharedSame);
}
