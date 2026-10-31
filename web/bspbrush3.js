/* bspbrush3.js - find the half space convention of the SoF brushes.
 *
 *   node bspbrush3.js <map.bsp>
 *
 * The test: the map's light and item entities are in the open space, so
 * (almost) no brush may contain their origins.  The wrong convention puts
 * the open space inside the walls.
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
console.log("the maximum side plane index:", Math.max.apply(null, sides.map(s => s.plane)),
	"the maximum texinfo:", Math.max.apply(null, sides.map(s => s.tex)), " the planes:", planes.length);

/* the entity origins: the lights and the items are in the open */
const entTxt = b.toString("latin1", L(0).off, L(0).off + L(0).len);
const points = [];
{
	const re = /\{([^{}]*)\}/g; let m;
	while ((m = re.exec(entTxt)) !== null) {
		const kv = {}; const kre = /"([^"]*)"\s*"([^"]*)"/g; let k;
		while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
		if (!kv.origin) continue;
		const p = kv.origin.trim().split(/\s+/).map(Number);
		if (p.length !== 3 || p.some(isNaN)) continue;
		points.push({ p: p, cls: kv.classname });
	}
}
console.log("the entity origins:", points.length);

/* the four conventions */
function test(sign, flipD) {
	let total = 0, hits = 0;
	for (const q of points) {
		let c = 0;
		for (const br of brushes) {
			if (br.numsides < 3) continue;
			let ok = true;
			for (let k = 0; k < br.numsides; k++) {
				const s = sides[br.firstside + k];
				const pl = planes[s.plane];
				if (!pl) { ok = false; break; }
				const v = pl.n[0] * q.p[0] + pl.n[1] * q.p[1] + pl.n[2] * q.p[2];
				const d = flipD ? -pl.d : pl.d;
				if (sign > 0 ? (v > d) : (v < d)) { ok = false; break; }
			}
			if (ok) c++;
		}
		total += c; hits++;
	}
	return (total / hits).toFixed(2);
}
console.log("the mean number of brushes containing an entity origin:");
console.log("  n.p <= d      :", test(1, false));
console.log("  n.p >= d      :", test(-1, false));
console.log("  n.p <= -d     :", test(1, true));
console.log("  n.p >= -d     :", test(-1, true));

/* and the same for the world (the solid brushes) with the volume */
function volume(sign, flipD) {
	let v = 0, n = 0;
	for (const br of brushes) {
		if (br.numsides < 3) continue;
		/* the volume of the polytope: sample a grid inside the bounding box */
		let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
		for (let k = 0; k < br.numsides; k++) {
			const pl = planes[sides[br.firstside + k].plane];
			if (!pl) continue;
			const p = [pl.n[0] * pl.d, pl.n[1] * pl.d, pl.n[2] * pl.d];
			for (let a = 0; a < 3; a++) {
				if (p[a] < mn[a]) mn[a] = p[a];
				if (p[a] > mx[a]) mx[a] = p[a];
			}
		}
		let cnt = 0, tot = 0;
		for (let i = 0; i < 6; i++) for (let j = 0; j < 6; j++) for (let k = 0; k < 6; k++) {
			const p = [mn[0] + (mx[0] - mn[0]) * (i + 0.5) / 6, mn[1] + (mx[1] - mn[1]) * (j + 0.5) / 6, mn[2] + (mx[2] - mn[2]) * (k + 0.5) / 6];
			tot++;
			let ok = true;
			for (let s2 = 0; s2 < br.numsides; s2++) {
				const pl = planes[sides[br.firstside + s2].plane];
				if (!pl) { ok = false; break; }
				const val = pl.n[0] * p[0] + pl.n[1] * p[1] + pl.n[2] * p[2];
				const d = flipD ? -pl.d : pl.d;
				if (sign > 0 ? (val > d) : (val < d)) { ok = false; break; }
			}
			if (ok) cnt++;
		}
		v += cnt / tot; n++;
	}
	return (v / n).toFixed(3);
}
console.log("the mean fraction of the brush's bounding box that is inside the brush:");
console.log("  n.p <= d      :", volume(1, false));
console.log("  n.p >= d      :", volume(-1, false));
console.log("  n.p <= -d     :", volume(1, true));
console.log("  n.p >= -d     :", volume(-1, true));
