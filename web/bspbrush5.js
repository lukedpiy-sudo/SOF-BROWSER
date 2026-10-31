/* bspbrush5.js - which brushes contain the player?
 *   node bspbrush5.js <map.bsp> <x> <y> <z>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const P = [parseFloat(process.argv[3] || "-1696"), parseFloat(process.argv[4] || "-176"), parseFloat(process.argv[5] || "162")];
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const planes = [];
for (let i = 0; i < L(1).len / 20; i++) {
	const o = L(1).off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12), type: b.readInt32LE(o + 16) });
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
/* a box is inside a brush when all its corners are */
function boxInside(br, mn, mx) {
	for (let k = 0; k < br.numsides; k++) {
		const pl = planes[sides[br.firstside + k].plane];
		if (!pl) return false;
		let worst = -1e30;
		for (let a = 0; a < 8; a++) {
			const p = [
				(a & 1) ? mx[0] : mn[0], (a & 2) ? mx[1] : mn[1], (a & 4) ? mx[2] : mn[2]
			];
			const v = pl.n[0] * p[0] + pl.n[1] * p[1] + pl.n[2] * p[2];
			if (v > worst) worst = v;
		}
		if (worst > pl.d + 0.01) return false;
	}
	return true;
}
console.log("the point", JSON.stringify(P));
const variants = [
	["the origin, a point", P, P],
	["the feet box (-16,-16,-24)..(16,16,32)", [P[0] - 16, P[1] - 16, P[2] - 24], [P[0] + 16, P[1] + 16, P[2] + 32]],
	["the centre box (-16,-16,-32)..(16,16,32)", [P[0] - 16, P[1] - 16, P[2] - 32], [P[0] + 16, P[1] + 16, P[2] + 32]],
	["a small box (-4,-4,-4)..(4,4,4)", [P[0] - 4, P[1] - 4, P[2] - 4], [P[0] + 4, P[1] + 4, P[2] + 4]]
];
for (const v of variants) {
	const name = v[0], mn = v[1], mx = v[2];
	let solid = 0, clip = 0, list = [];
	for (const br of brushes) {
		if (!boxInside(br, mn, mx)) continue;
		if (br.contents & 1) { solid++; if (list.length < 6) list.push("solid 0x" + br.contents.toString(16)); }
		else { clip++; if (list.length < 6) list.push("clip 0x" + br.contents.toString(16)); }
	}
	console.log("  " + name + ": solid=" + solid + " other=" + clip + "  " + list.join(" "));
}
/* how far is the point from the nearest solid brush plane? */
let best = null;
for (const br of brushes) {
	if (!(br.contents & 1)) continue;
	for (let k = 0; k < br.numsides; k++) {
		const pl = planes[sides[br.firstside + k].plane];
		if (!pl) continue;
		const v = pl.n[0] * P[0] + pl.n[1] * P[1] + pl.n[2] * P[2] - pl.d;
		if (!best || Math.abs(v) < Math.abs(best.v)) best = { v: v, n: pl.n, d: pl.d };
	}
}
console.log("  the closest solid brush plane:", best ? ("v=" + best.v.toFixed(2) + " n=" + JSON.stringify(best.n.map(x => +x.toFixed(2))) + " d=" + best.d.toFixed(1)) : "none");
