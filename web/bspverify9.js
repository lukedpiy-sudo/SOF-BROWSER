/*
 * bspverify9.js - the decisive test for the lightmap mapping.
 *
 *   node bspverify9.js <map.bsp>
 *
 * The baked lighting is continuous in the world: two coplanar faces that
 * share an edge must have the same light at the shared point.  So the luxel
 * grid of every face is placed in the world (with a candidate mapping) and
 * the luxels of neighbouring coplanar faces are compared.  The mapping with
 * the smallest difference is the one the engine uses.
 *
 * The candidates:
 *   the luxel size in texture units   16 (a fixed grid) or ext/(n-1)
 *   the row order                     row 0 = the first t, or the last t
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
		t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)]
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

/* the faces */
const faces = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const pl = planes[b.readUInt16LE(o)];
	const sgn = b.readUInt16LE(o + 2) ? -1 : 1;
	faces.push({
		i: i, w: w, h: h, ofs: b.readInt32LE(o + 28),
		mins: [b.readInt16LE(o + 36), b.readInt16LE(o + 38)],
		ext: [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)],
		ti: texinfo[b.readUInt16LE(o + 10)], pl: pl,
		n: pl ? [pl.n[0] * sgn, pl.n[1] * sgn, pl.n[2] * sgn] : null
	});
}
console.log("faces with a lightmap:", faces.length);

function build(luxelRule, flip) {
	const pts = [];
	for (const f of faces) {
		if (!f.ti || !f.pl) continue;
		const ls = luxelRule === "fixed" ? 16 : (f.w > 1 ? f.ext[0] / (f.w - 1) : f.ext[0]);
		const lt = luxelRule === "fixed" ? 16 : (f.h > 1 ? f.ext[1] / (f.h - 1) : f.ext[1]);
		for (let r = 0; r < f.h; r++) {
			const row = flip ? (f.h - 1 - r) : r;
			for (let c = 0; c < f.w; c++) {
				const s = f.mins[0] + ls * (c + 0.5);
				const t = f.mins[1] + lt * (row + 0.5);
				const p = solve3([f.ti.s.slice(0, 3), f.ti.t.slice(0, 3), f.pl.n],
					[s - f.ti.s[3], t - f.ti.t[3], f.pl.d]);
				if (!p) continue;
				const q = f.ofs + (r * f.w + c) * 3;
				pts.push({
					x: p[0], y: p[1], z: p[2],
					l: lightData[q] * 0.3 + lightData[q + 1] * 0.6 + lightData[q + 2] * 0.1,
					n: f.n, fi: f.i
				});
			}
		}
	}
	return pts;
}

function compare(pts) {
	/* a spatial hash: the neighbours of a luxel of another, coplanar face */
	const CELL = 24;
	const grid = new Map();
	for (let i = 0; i < pts.length; i++) {
		const p = pts[i];
		const k = Math.floor(p.x / CELL) + "," + Math.floor(p.y / CELL) + "," + Math.floor(p.z / CELL);
		let a = grid.get(k); if (!a) { a = []; grid.set(k, a); }
		a.push(i);
	}
	let sum = 0, n = 0, worst = 0, worstPair = null;
	for (let i = 0; i < pts.length; i++) {
		const p = pts[i];
		const cx = Math.floor(p.x / CELL), cy = Math.floor(p.y / CELL), cz = Math.floor(p.z / CELL);
		for (let dx = -1; dx <= 1; dx++) for (let dy = -1; dy <= 1; dy++) for (let dz = -1; dz <= 1; dz++) {
			const a = grid.get((cx + dx) + "," + (cy + dy) + "," + (cz + dz));
			if (!a) continue;
			for (const j of a) {
				if (j <= i) continue;
				const q = pts[j];
				if (q.fi === p.fi) continue;
				const dot = p.n[0] * q.n[0] + p.n[1] * q.n[1] + p.n[2] * q.n[2];
				if (dot < 0.95) continue;                 /* only coplanar faces */
				const d = Math.hypot(p.x - q.x, p.y - q.y, p.z - q.z);
				if (d > 20) continue;
				const diff = Math.abs(p.l - q.l);
				sum += diff * diff; n++;
				if (diff > worst) { worst = diff; worstPair = [p, q]; }
			}
		}
	}
	return { rms: n ? Math.sqrt(sum / n) : -1, n: n, worst: worst, worstPair: worstPair };
}

for (const rule of ["fixed", "ext"]) {
	for (const flip of [false, true]) {
		const pts = build(rule, flip);
		const c = compare(pts);
		console.log("luxel=" + rule.padEnd(6) + " flip=" + String(flip).padEnd(6) +
			" luxels=" + String(pts.length).padStart(7) +
			" pairs=" + String(c.n).padStart(8) +
			" rms=" + c.rms.toFixed(2).padStart(8) +
			" worst=" + c.worst.toFixed(1));
	}
}
