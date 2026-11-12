/*
 * derivepalette.js - solve for the Ghoul normal palette.
 *
 * SoF.exe keeps the animated normals in a 256 entry palette of unit vectors
 * at 0x20404C90 (a BSS global: the engine only ever READS it, never writes
 * it, so the table is built somewhere else).  The .ghb files store only the
 * palette INDEX of every normal keyframe.
 *
 * The palette can be recovered from the models themselves: the palette
 * entry of a byte is the (quantised) direction of the normals that use that
 * byte, and the direction of a normal is the face normal of the triangles
 * that use it.  So:
 *
 *   1. decode the animated positions of a model
 *   2. compute the face normals of its triangles
 *   3. accumulate them per animated normal index (the engine splits the
 *      normals into groups, so the hard edges are kept)
 *   4. the palette byte of a normal index gives that direction
 *
 * The script first calibrates the sign and the axis order with a static
 * model (its shared normals are in the file, so the face normals can be
 * compared with them), and then solves the palette.
 *
 *   node analysis/ghb/derivepalette.js <model.ghb> [...]
 */
"use strict";
const fs = require("fs");
const path = require("path");
const g = require("../../web/ghb.js");

/* the face normal of a triangle, in the model's own axes */
function faceNormal(gm, anim, frame, t) {
	const c = gm.corners;
	const p = [];
	for (const k of t.i) {
		const cc = c[k];
		if (cc.pos < 0) p.push(gm.cPos[-cc.pos - 1]);
		else {
			const o = (cc.pos * anim.frames + frame) * 3;
			p.push([anim.pos[o], anim.pos[o + 1], anim.pos[o + 2]]);
		}
	}
	const ux = p[1][0] - p[0][0], uy = p[1][1] - p[0][1], uz = p[1][2] - p[0][2];
	const vx = p[2][0] - p[0][0], vy = p[2][1] - p[0][1], vz = p[2][2] - p[0][2];
	return [uy * vz - uz * vy, uz * vx - ux * vz, ux * vy - uy * vx];
}

/* the calibration: a static model has real normals in the file */
function calibrate(file) {
	const buf = fs.readFileSync(file);
	const model = g.parseGhoul(buf);
	const gm = g.parseGeometry(buf, model);
	if (!gm || !gm.cNorm.length || !gm.tris.length) return null;
	/* accumulate the face normals per shared normal index */
	const acc = new Float64Array(gm.cNorm.length * 3);
	for (const t of gm.tris) {
		const n = faceNormal(gm, null, 0, t);
		for (const k of t.i) {
			const idx = gm.corners[k].nrm;
			if (idx >= 0) continue;
			const s = -idx - 1;
			if (s < 0 || s >= gm.cNorm.length) continue;
			acc[s * 3] += n[0]; acc[s * 3 + 1] += n[1]; acc[s * 3 + 2] += n[2];
		}
	}
	/* compare with the shared normals: the dot product tells us the sign */
	let sum = 0, n = 0, worst = 1;
	const perms = [[0, 1, 2], [0, 2, 1], [1, 0, 2], [1, 2, 0], [2, 0, 1], [2, 1, 0]];
	const scores = perms.map(() => 0);
	for (let i = 0; i < gm.cNorm.length; i++) {
		let x = acc[i * 3], y = acc[i * 3 + 1], z = acc[i * 3 + 2];
		const l = Math.hypot(x, y, z);
		if (l < 1e-6) continue;
		x /= l; y /= l; z /= l;
		const s = gm.cNorm[i];
		for (let p = 0; p < perms.length; p++) {
			const q = perms[p];
			const d = x * s[q[0]] + y * s[q[1]] + z * s[q[2]];
			scores[p] += d;
		}
		sum += Math.abs(x * s[0] + y * s[1] + z * s[2]);
		n++;
	}
	worst = sum / Math.max(1, n);
	let best = 0;
	for (let p = 0; p < scores.length; p++) if (scores[p] > scores[best]) best = p;
	return { perm: perms[best], score: scores[best] / Math.max(1, n), meanAbs: worst, normals: gm.cNorm.length };
}

/* solve the palette from an animated model */
function solve(file, perm) {
	const buf = fs.readFileSync(file);
	const model = g.parseGhoul(buf);
	const gm = g.parseGeometry(buf, model);
	const anim = g.decodeAnimation(buf, gm.comp);
	if (!anim) return null;
	/* the per normal index, per frame, the accumulated face normal */
	const acc = new Float64Array(anim.norms * anim.frames * 3);
	for (const t of gm.tris) {
		for (let f = 0; f < anim.frames; f++) {
			const nn = faceNormal(gm, anim, f, t);
			for (const k of t.i) {
				const idx = gm.corners[k].nrm;
				if (idx < 0 || idx >= anim.norms) continue;
				const o = (idx * anim.frames + f) * 3;
				acc[o] += nn[0]; acc[o + 1] += nn[1]; acc[o + 2] += nn[2];
			}
		}
	}
	/* the palette bytes of every normal index, per frame */
	/* the records give the keyframes; the byte of a normal index at a frame
	 * is the keyframe that dominates there */
	const bytes = new Int16Array(anim.norms * anim.frames).fill(-1);
	for (const r of anim.records) {
		const rec = r.rec, kf = r.keyframes;
		const half = rec.frames >> 1;
		for (let n = 0; n < anim.norms; n++) {
			for (let f = 0; f < rec.frames; f++) {
				const gf = rec.first + f;
				if (gf >= anim.frames) continue;
				let k = 0;
				if (kf === 2) k = f * 2 >= rec.frames ? 1 : 0;
				else if (kf === 3) k = f <= half ? 0 : (f >= rec.frames - 1 ? 2 : 1);
				bytes[n * anim.frames + gf] = r.normalIndices[n * kf + k];
			}
		}
	}
	/* accumulate per palette byte */
	const pAcc = new Map();
	for (let n = 0; n < anim.norms; n++) {
		for (let f = 0; f < anim.frames; f++) {
			const b = bytes[n * anim.frames + f];
			if (b < 0) continue;
			const o = (n * anim.frames + f) * 3;
			let x = acc[o], y = acc[o + 1], z = acc[o + 2];
			const l = Math.hypot(x, y, z);
			if (l < 1e-6) continue;
			x /= l; y /= l; z /= l;
			/* the engine's palette stores (x, z, y) - see the dot product in
			 * FUN_2008fae0 - so the direction is stored back in that order */
			const v = [x, y, z];
			const w = [v[perm[0]], v[perm[1]], v[perm[2]]];
			let e = pAcc.get(b);
			if (!e) { e = { s: [0, 0, 0], n: 0, list: [] }; pAcc.set(b, e); }
			e.s[0] += w[0]; e.s[1] += w[1]; e.s[2] += w[2];
			e.n++;
			e.list.push(w);
		}
	}
	return pAcc;
}

const args = process.argv.slice(2);
if (!args.length) {
	console.log("usage: node derivepalette.js <model.ghb> [...]");
	process.exit(1);
}

/* the calibration model: the first static one */
let cal = null;
for (const a of args) {
	const buf = fs.readFileSync(a);
	const m = g.parseGhoul(buf);
	const gm = g.parseGeometry(buf, m);
	if (gm && gm.cNorm.length > 4 && gm.tris.length > 4 && !gm.corners.some((c) => c.pos >= 0)) {
		cal = calibrate(a);
		console.log("the calibration model " + path.basename(a) + ": " + JSON.stringify(cal));
		break;
	}
}
if (!cal) { console.log("no static model to calibrate with"); process.exit(1); }

const palette = [];
const spread = [];
for (const a of args) {
	const pAcc = solve(a, cal.perm);
	if (!pAcc) continue;
	let newBytes = 0;
	for (const [b, e] of pAcc) {
		const l = Math.hypot(e.s[0], e.s[1], e.s[2]);
		if (l < 1e-6) continue;
		const v = [e.s[0] / l, e.s[1] / l, e.s[2] / l];
		if (!palette[b]) { palette[b] = v; newBytes++; }
		else {
			/* the spread: the largest angle from the running mean */
			let worst = 0;
			for (const w of e.list) {
				const d = Math.max(-1, Math.min(1, w[0] * v[0] + w[1] * v[1] + w[2] * v[2]));
				const ang = Math.acos(d) * 180 / Math.PI;
				if (ang > worst) worst = ang;
			}
			spread.push({ b: b, ang: worst, n: e.n, file: path.basename(a) });
		}
	}
	console.log(path.basename(a) + ": the palette bytes seen " + pAcc.size + " (" + newBytes + " new)");
}
spread.sort((x, y) => y.ang - x.ang);
console.log("\nthe worst spreads:");
for (const s of spread.slice(0, 12)) {
	console.log("   the byte " + s.b + ": " + s.ang.toFixed(2) + " degrees over " + s.n + " samples (" + s.file + ")");
}
let sum = 0;
for (const s of spread) sum += s.ang;
console.log("the mean spread " + (sum / Math.max(1, spread.length)).toFixed(3) + " degrees over " + spread.length + " bytes");

/* write the palette */
const out = { perm: cal.perm, palette: palette };
fs.writeFileSync(__dirname + "/normalpalette.json", JSON.stringify(out));
console.log("\nwrote " + __dirname + "/normalpalette.json (" + palette.filter(Boolean).length + " entries)");
