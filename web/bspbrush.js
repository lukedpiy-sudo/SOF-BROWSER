/*
 * bspbrush.js - the brush model of the SoF v46 BSP (the collision hull).
 *
 *   node bspbrush.js <map.bsp> [outdir]
 *
 * The brushes (lump 14) are 12 bytes and the brush sides (lump 15) are 4
 * bytes.  The engine's CM_LoadBrushsides complains "Bad brushside texinfo",
 * so one of the two u16 fields is the texinfo and the other is the plane.
 * Which is which is found here with a geometric test: the plane normals of
 * the sides of one brush must sum to zero (a closed convex hull).
 */
"use strict";
const fs = require("fs");
const path = require("path");
const { readBsp } = require("./bspmap.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const outdir = process.argv[3] || "C:/Users/User/AppData/Local/Temp/opencode";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];

/* the planes */
const planeCount = L(1).len / 20;
const planes = [];
for (let i = 0; i < planeCount; i++) {
	const o = L(1).off + i * 20;
	planes.push({
		n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
		d: b.readFloatLE(o + 12), type: b.readInt32LE(o + 16)
	});
}

/* the brushes */
const brushCount = L(14).len / 12;
const brushes = [];
for (let i = 0; i < brushCount; i++) {
	const o = L(14).off + i * 12;
	brushes.push({
		firstside: b.readInt32LE(o), numsides: b.readInt32LE(o + 4), contents: b.readInt32LE(o + 8)
	});
}
/* the brush sides */
const sideCount = L(15).len / 4;
const sides = [];
for (let i = 0; i < sideCount; i++) {
	const o = L(15).off + i * 4;
	sides.push({ a: b.readUInt16LE(o), c: b.readUInt16LE(o + 2) });
}

/* the geometric test: which field is the plane? */
function testPlaneField(field) {
	let ok = 0, tested = 0, bad = 0;
	for (const br of brushes) {
		if (br.numsides < 3) continue;
		tested++;
		let sx = 0, sy = 0, sz = 0, bad2 = false;
		for (let k = 0; k < br.numsides; k++) {
			const s = sides[br.firstside + k];
			const p = planes[s[field]];
			if (!p) { bad2 = true; break; }
			sx += p.n[0]; sy += p.n[1]; sz += p.n[2];
		}
		if (bad2) { bad++; continue; }
		const l = Math.hypot(sx, sy, sz);
		if (l < 0.02) ok++;
	}
	return { ok: ok, tested: tested, bad: bad };
}
console.log("the brushes:", brushCount, " the brush sides:", sideCount, " the planes:", planeCount);
console.log("  the sides' first u16 as the plane:", JSON.stringify(testPlaneField("a")));
console.log("  the sides' second u16 as the plane:", JSON.stringify(testPlaneField("c")));

/* pick the field that works */
const ta = testPlaneField("a"), tc = testPlaneField("c");
const planeField = (ta.ok >= tc.ok) ? "a" : "c";
const texField = (planeField === "a") ? "c" : "a";
console.log("  -> the plane is the " + (planeField === "a" ? "first" : "second") +
	" u16, the texinfo is the " + (texField === "a" ? "first" : "second") + " u16");

/* the contents */
const contents = new Map();
for (const br of brushes) contents.set(br.contents, (contents.get(br.contents) || 0) + 1);
console.log("  the brush contents:", [...contents.entries()].sort((a, c) => c[1] - a[1])
	.map(e => "0x" + e[0].toString(16) + " x" + e[1]).join("  "));

/* build the model: for every brush its origin, the planes of its sides and
 * the bounding box */
const model = [];
let used = 0;
for (const br of brushes) {
	const pl = [];
	for (let k = 0; k < br.numsides; k++) {
		const s = sides[br.firstside + k];
		const p = planes[s[planeField]];
		if (!p) continue;
		pl.push({ n: p.n, d: p.d, tx: s[texField] });
	}
	if (!pl.length) continue;
	/* the origin: the point that is inside every plane */
	let ox = 0, oy = 0, oz = 0;
	for (const s of pl) { ox += s.n[0] * s.d; oy += s.n[1] * s.d; oz += s.n[2] * s.d; }
	ox /= pl.length; oy /= pl.length; oz /= pl.length;
	/* the bounding box from the planes: the intersection of the half spaces */
	let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
	let ok = true;
	for (let a = 0; a < 3 && ok; a++) {
		for (let sgn = -1; sgn <= 1; sgn += 2) {
			/* the extreme along the axis a: maximise/minimise a over the planes */
			let best = null, bestVal = sgn > 0 ? -1e9 : 1e9;
			for (const s of pl) {
				const comp = s.n[a] * sgn;
				if (Math.abs(comp) < 1e-6) continue;
				/* the value of a on this plane along the direction sgn */
				const v = (s.d - (s.n[0] * ox + s.n[1] * oy + s.n[2] * oz - s.d)) / comp;
				if (sgn > 0 ? v > bestVal : v < bestVal) { bestVal = v; best = s; }
			}
			if (best === null) { ok = false; break; }
			if (sgn > 0) mx[a] = ox[a] + bestVal; else mn[a] = ox[a] + bestVal;
		}
	}
	if (!ok) { mn = [0, 0, 0]; mx = [0, 0, 0]; }
	model.push({
		o: [+ox.toFixed(2), +oy.toFixed(2), +oz.toFixed(2)],
		mn: mn.map(x => +x.toFixed(2)), mx: mx.map(x => +x.toFixed(2)),
		c: br.contents,
		p: pl.map(s => ({ n: s.n.map(x => +x.toFixed(5)), d: +s.d.toFixed(2) }))
	});
	used++;
}
console.log("  the model has", used, "brushes");
const allMn = [1e9, 1e9, 1e9], allMx = [-1e9, -1e9, -1e9];
for (const m of model) for (let a = 0; a < 3; a++) {
	if (m.mn[a] < allMn[a]) allMn[a] = m.mn[a];
	if (m.mx[a] > allMx[a]) allMx[a] = m.mx[a];
}
console.log("  the world bounds of the brushes:", allMn.map(x => x.toFixed(0)).join(","), "..",
	allMx.map(x => x.toFixed(0)).join(","));

/* the write out */
if (process.argv[4]) {
	fs.writeFileSync(process.argv[4], JSON.stringify({
		map: (file.match(/([^\\/]+)\.bsp$/i) || [, "map"])[1].toLowerCase(),
		brushes: model
	}));
	console.log("  wrote", process.argv[4]);
}
