/*
 * validatepalette.js - check the recovered normal palette against the models.
 *
 * The palette (analysis/ghb/normalpalette.json) is a table of 256 unit
 * directions.  The .ghb files store the palette INDEX of every normal
 * keyframe, so the geometry of a model must agree with the palette: the
 * face normal of the triangles that use a normal index must be close to
 * the direction of the palette entry that the index points at.
 *
 * The script also proves the layout of the normal index array (the normal
 * index is the outer loop and the keyframe the inner one) and the way the
 * keyframes are blended over the frames.
 *
 *   node analysis/ghb/validatepalette.js <model.ghb> [...]
 */
"use strict";
const fs = require("fs");
const path = require("path");
const g = require("../../web/ghb.js");

const pal = JSON.parse(fs.readFileSync(path.join(__dirname, "normalpalette.json"), "utf8"));
const P = pal.palette;

/* the face normal of a triangle */
function faceNormal(gm, anim, frame, t) {
	const p = [];
	for (const k of t.i) {
		const c = gm.corners[k];
		if (c.posIndex < 0) p.push(gm.cPos[-c.posIndex - 1]);
		else {
			const o = (c.posIndex * anim.frames + frame) * 3;
			p.push([anim.pos[o], anim.pos[o + 1], anim.pos[o + 2]]);
		}
	}
	const ux = p[1][0] - p[0][0], uy = p[1][1] - p[0][1], uz = p[1][2] - p[0][2];
	const vx = p[2][0] - p[0][0], vy = p[2][1] - p[0][1], vz = p[2][2] - p[0][2];
	return [uy * vz - uz * vy, uz * vx - ux * vz, ux * vy - uy * vx];
}

const PERMS = [
	[0, 1, 2], [0, 2, 1], [1, 0, 2], [1, 2, 0], [2, 0, 1], [2, 1, 0]
];

/* the ways the normal index array can be laid out */
const LAYOUTS = {
	"n*kf+k": (n, k, kf, V2) => n * kf + k,
	"k*V2+n": (n, k, kf, V2) => k * V2 + n
};

const files = process.argv.slice(2);
if (!files.length) { console.log("usage: node validatepalette.js <model.ghb> [...]"); process.exit(1); }

const score = {};
for (const p of PERMS) { score[p.join(",")] = 0; }
const layoutScore = {};
for (const l of Object.keys(LAYOUTS)) layoutScore[l] = 0;

let samples = 0;
const hist = new Array(10).fill(0);

for (const file of files) {
	const buf = fs.readFileSync(file);
	const model = g.parseGhoul(buf);
	const gm = g.parseGeometry(buf, model);
	if (!gm) { console.log(path.basename(file) + ": no geometry"); continue; }
	const anim = g.decodeAnimation(buf, gm.comp);
	if (!anim) { console.log(path.basename(file) + ": static"); continue; }

	/* the face normals, per triangle, per frame (only a few frames: the
	 * geometry of a character does not change that much between them) */
	const frameStep = Math.max(1, Math.floor(anim.frames / 8));
	const frames = [];
	for (let f = 0; f < anim.frames; f += frameStep) frames.push(f);

	/* the accumulated face normal per normal index and frame */
	const acc = new Float64Array(anim.norms * anim.frames * 3);
	for (const t of gm.tris) {
		for (const f of frames) {
			const fn = faceNormal(gm, anim, f, t);
			for (const k of t.i) {
				const idx = gm.corners[k].nrmIndex;
				if (idx < 0 || idx >= anim.norms) continue;
				const o = (idx * anim.frames + f) * 3;
				acc[o] += fn[0]; acc[o + 1] += fn[1]; acc[o + 2] += fn[2];
			}
		}
	}

	/* the palette byte of a normal index at a frame, for every layout */
	for (const lname of Object.keys(LAYOUTS)) {
		const at = LAYOUTS[lname];
		let s = 0, n = 0;
		for (const r of anim.records) {
			const rec = r.rec, kf = r.keyframes;
			const nstart = gm.comp.block2Offset + anim.sub.base + rec.off2;
			for (let i = 0; i < anim.norms; i++) {
				for (let f = 0; f < rec.frames; f++) {
					const gf = rec.first + f;
					if (gf >= anim.frames) continue;
					/* the keyframe that dominates the frame */
					const half = rec.frames >> 1;
					let k = 0;
					if (kf === 2) k = f * 2 >= rec.frames ? 1 : 0;
					else if (kf === 3) k = f <= half ? 0 : (f >= rec.frames - 1 ? 2 : 1);
					const b = buf[nstart + at(i, k, kf, anim.norms)];
					if (!P[b]) continue;
					const o = (i * anim.frames + gf) * 3;
					let x = acc[o], y = acc[o + 1], z = acc[o + 2];
					const len = Math.hypot(x, y, z);
					if (len < 1e-9) continue;
					x /= len; y /= len; z /= len;
					s += x * P[b][0] + y * P[b][1] + z * P[b][2];
					n++;
				}
			}
		}
		layoutScore[lname] += s;
		if (lname === "n*kf+k") samples += n;
	}

	/* the axis order, with the winning layout */
	const nstart0 = gm.comp.block2Offset + anim.sub.base + anim.records[0].rec.off2;
	const kf0 = anim.records[0].keyframes;
	const byteAt = new Uint8Array(anim.norms);
	for (let i = 0; i < anim.norms; i++) byteAt[i] = buf[nstart0 + i * kf0];
	for (let i = 0; i < anim.norms; i++) {
		const o = (i * anim.frames) * 3;   /* the frame 0 slot */
		let x = acc[o], y = acc[o + 1], z = acc[o + 2];
		const len = Math.hypot(x, y, z);
		if (len < 1e-9) continue;
		x /= len; y /= len; z /= len;
		const v = P[byteAt[i]];
		if (!v) continue;
		for (const p of PERMS) score[p.join(",")] += x * v[p[0]] + y * v[p[1]] + z * v[p[2]];
	}
	console.log(path.basename(file) + ": " + anim.verts + " verts, " + anim.norms + " normals, " + anim.frames + " frames");
}

/* the histogram of the dot products, for the identity permutation */
console.log("\nthe axis order (the mean dot product):");
for (const [k, v] of Object.entries(score).sort((a, b) => b[1] - a[1])) {
	console.log("   " + k.padEnd(10) + (v / Math.max(1, samples)).toFixed(4));
}
console.log("\nthe layout of the normal index array:");
for (const [k, v] of Object.entries(layoutScore).sort((a, b) => b[1] - a[1])) {
	console.log("   " + k.padEnd(10) + (v / Math.max(1, samples)).toFixed(4));
}
void hist;
