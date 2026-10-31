/* bsptrace.js - replicate the browser's trace offline and show what blocks it.
 *   node bsptrace.js <map.bsp> <x> <y> <z> <dx> <dy> <dz>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const P = [parseFloat(process.argv[3]), parseFloat(process.argv[4]), parseFloat(process.argv[5])];
const D = [parseFloat(process.argv[6] || "100"), parseFloat(process.argv[7] || "0"), parseFloat(process.argv[8] || "0")];
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
const MINS = [-16, -16, -24], MAXS = [16, 16, 32];
function support(n) {
	/* the biggest n.p over the box, relative to the origin */
	let r = 0;
	for (let i = 0; i < 3; i++) {
		r += Math.abs(n[i]) * (n[i] > 0 ? MAXS[i] : -MINS[i]);
	}
	return r;
}
const dlen = Math.hypot(D[0], D[1], D[2]);
let best = 1, bestInfo = null;
const all = [];
for (let bi = 0; bi < brushes.length; bi++) {
	const br = brushes[bi];
	if (!(br.contents & 1)) continue;
	for (let k = 0; k < br.numsides; k++) {
		const pl = planes[sides[br.firstside + k].plane];
		if (!pl) continue;
		const n = pl.n, d = pl.d;
		const nd = n[0] * D[0] + n[1] * D[1] + n[2] * D[2];
		const r = support(n);
		const num = (d - r) - (n[0] * P[0] + n[1] * P[1] + n[2] * P[2]);
		if (nd <= 1e-9) continue;
		if (num < -0.5) {
			all.push({ bi: bi, k: k, num: num, nd: nd, t: 0, c: br.contents, n: n, d: d });
			if (best > 0) { best = 0; bestInfo = { bi: bi, k: k, num: num, nd: nd, c: br.contents, n: n, d: d }; }
			continue;
		}
		const t = num / nd;
		all.push({ bi: bi, k: k, num: num, nd: nd, t: t, c: br.contents, n: n, d: d });
		if (t < best) { best = t; bestInfo = { bi: bi, k: k, num: num, nd: nd, c: br.contents, n: n, d: d }; }
	}
}
console.log("the point", JSON.stringify(P), "the move", JSON.stringify(D));
console.log("the blocking plane:", bestInfo ? ("brush " + bestInfo.bi + " side " + bestInfo.k +
	" contents 0x" + bestInfo.c.toString(16) + " n=" + JSON.stringify(bestInfo.n.map(x => +x.toFixed(3))) +
	" d=" + bestInfo.d.toFixed(2) + " num=" + bestInfo.num.toFixed(2) + " nd=" + bestInfo.nd.toFixed(2)) : "none",
	" fraction " + best.toFixed(3));
all.sort((a, c) => a.t - c.t);
console.log("the ten closest planes:");
for (const a of all.slice(0, 10)) console.log("   t=" + a.t.toFixed(3) + " brush " + a.bi + " side " + a.k +
	" c=0x" + a.c.toString(16) + " n=" + JSON.stringify(a.n.map(x => +x.toFixed(2))) + " d=" + a.d.toFixed(1) +
	" num=" + a.num.toFixed(2));
