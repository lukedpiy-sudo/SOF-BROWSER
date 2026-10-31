/* bspbrush2.js - is the half space convention right?  (a convex brush's
 * support points must be inside the brush)
 *
 *   node bspbrush2.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];

const planes = [];
for (let i = 0; i < L(1).len / 20; i++) {
	const o = L(1).off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const brushes = [];
for (let i = 0; i < L(14).len / 12; i++) {
	const o = L(14).off + i * 12;
	brushes.push({ firstside: b.readInt32LE(o), numsides: b.readInt32LE(o + 4), contents: b.readInt32LE(o + 8) });
}
const sides = [];
for (let i = 0; i < L(15).len / 4; i++) {
	const o = L(15).off + i * 4;
	sides.push({ plane: b.readUInt16LE(o), tex: b.readUInt16LE(o + 2) });
}

/* the sign test: for the mean of the support points, how many sides are
 * violated? */
let inside = 0, outside = 0, tested = 0, bad = 0;
for (const br of brushes) {
	if (br.numsides < 3) continue;
	tested++;
	let ox = 0, oy = 0, oz = 0, n = 0, valid = true;
	for (let k = 0; k < br.numsides; k++) {
		const s = sides[br.firstside + k];
		const p = planes[s.plane];
		if (!p) { valid = false; break; }
		ox += p.n[0] * p.d; oy += p.n[1] * p.d; oz += p.n[2] * p.d; n++;
	}
	if (!valid || !n) { bad++; continue; }
	ox /= n; oy /= n; oz /= n;
	let viol = 0;
	for (let k = 0; k < br.numsides; k++) {
		const p = planes[sides[br.firstside + k].plane];
		if (!p) continue;
		if (p.n[0] * ox + p.n[1] * oy + p.n[2] * oz > p.d + 0.01) viol++;
	}
	if (viol === 0) inside++; else outside++;
}
console.log("the brushes tested:", tested, " unusable:", bad);
console.log("  the mean support point is inside the half spaces:", inside, " outside:", outside);

/* how many brushes contain a point? */
function containing(p, flip) {
	let c = 0;
	for (const br of brushes) {
		if (br.numsides < 3) continue;
		let ok = true;
		for (let k = 0; k < br.numsides; k++) {
			const s = sides[br.firstside + k];
			const pl = planes[s.plane];
			if (!pl) { ok = false; break; }
			const v = pl.n[0] * p[0] + pl.n[1] * p[1] + pl.n[2] * p[2];
			if (flip ? (v < pl.d) : (v > pl.d)) { ok = false; break; }
		}
		if (ok) c++;
	}
	return c;
}
const pts = [
	["the player", [-2304, -1920, 26]],
	["the player + 40 z", [-2304, -1920, 66]],
	["the map centre", [-1184, -1060, 100]],
	["the first light", [-1744, -232, 48]],
	["a corner", [-2360, -2240, -100]]
];
for (const [name, p] of pts) console.log("  the brushes containing " + name + " " +
	JSON.stringify(p) + ":  n.p<=d -> " + containing(p, false) + "   n.p>=d -> " + containing(p, true));

/* the "inside" test with the flipped convention */
let in2 = 0;
for (const br of brushes) {
	if (br.numsides < 3) continue;
	let ox = 0, oy = 0, oz = 0, n = 0;
	for (let k = 0; k < br.numsides; k++) {
		const p = planes[sides[br.firstside + k].plane];
		if (!p) continue;
		ox += p.n[0] * p.d; oy += p.n[1] * p.d; oz += p.n[2] * p.d; n++;
	}
	ox /= n; oy /= n; oz /= n;
	let viol = 0;
	for (let k = 0; k < br.numsides; k++) {
		const p = planes[sides[br.firstside + k].plane];
		if (!p) continue;
		if (p.n[0] * ox + p.n[1] * oy + p.n[2] * oz < p.d - 0.01) viol++;
	}
	if (viol === 0) in2++;
}
console.log("  with the flipped convention the mean support point is inside:", in2, "of", tested);

/* the plane type: how many planes are "axial" (the type field)? */
const types = new Map();
for (const p of planes) {
	const ax = Math.abs(p.n[0]) > 0.9 ? 0 : (Math.abs(p.n[1]) > 0.9 ? 1 : (Math.abs(p.n[2]) > 0.9 ? 2 : 3));
	types.set(ax, (types.get(ax) || 0) + 1);
}
console.log("the planes by axis:", JSON.stringify([...types]));
