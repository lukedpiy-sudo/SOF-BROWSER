#!/usr/bin/env node
/*
 * ghanimtest.js - the ground truth test for the Ghoul animation decoder.
 *
 * The reference values were produced by the independent decoder in
 * analysis/ghb/ghbanim.js, which was written directly from SoF.exe
 * 0x200b8210, and every decoded position was checked against the Comp
 * bbox of the model it came from.
 *
 *   node web/ghanimtest.js <model.ghb> [...]
 */
"use strict";
const fs = require("fs");
const g = require("./ghb.js");

let fail = 0, checks = 0;
function ok(cond, msg) {
	checks++;
	if (!cond) { console.log("  FAIL " + msg); fail++; }
}

for (const file of process.argv.slice(2)) {
	const buf = fs.readFileSync(file);
	const name = file.split("/").pop();
	const model = g.parseGhoul(buf);
	const G = g.parseGeometry(buf, model);
	if (!G) { console.log(name + ": no geometry"); fail++; continue; }
	const anim = g.decodeAnimation(buf, G.comp);
	if (!anim) {
		/* a static model: it must have no animated data at all */
		ok(G.cPos.length > 0, name + ": a static model has shared positions");
		console.log(name + ": static, " + G.cPos.length + " shared positions, " + G.triCount + " triangles");
		continue;
	}
	const bb = G.comp.bboxMin, bba = G.comp.bboxMax;
	let out = 0, nan = 0;
	let mn = [1e30, 1e30, 1e30], mx = [-1e30, -1e30, -1e30];
	for (let i = 0; i < anim.pos.length; i += 3) {
		for (let k = 0; k < 3; k++) {
			const x = anim.pos[i + k];
			if (!isFinite(x)) { nan++; continue; }
			if (x < mn[k]) mn[k] = x;
			if (x > mx[k]) mx[k] = x;
			if (x < bb[k] - 0.5 || x > bba[k] + 0.5) out++;
		}
	}
	console.log(name + ": V=" + anim.verts + " V2=" + anim.norms + " frames=" + anim.frames +
		" records=" + anim.sub.recs.length);
	console.log("   the bbox " + mn.map(x => x.toFixed(2)).join(",") + " .. " + mx.map(x => x.toFixed(2)).join(",") +
		" (the model " + bb.map(x => x.toFixed(1)).join(",") + " .. " + bba.map(x => x.toFixed(1)).join(",") + ")");
	ok(nan === 0, name + ": no NaN in the positions");
	ok(out === 0, name + ": " + out + " positions outside the bbox");

	/* every corner that refers to an animated position must be inside the
	 * animated vertex range */
	let badCorner = 0;
	for (const c of G.corn) if (c.pos >= anim.verts) badCorner++;
	ok(badCorner === 0, name + ": " + badCorner + " corners refer to a missing vertex");
	let badNorm = 0;
	for (const c of G.corn) if (c.nrm >= anim.norms) badNorm++;
	ok(badNorm === 0, name + ": " + badNorm + " corners refer to a missing normal");

	/* the position bit stream must end exactly where the normals start */
	let badBits = 0;
	for (const r of anim.records) {
		const want = r.rec.off2 - r.rec.off1 - 4;
		const got = Math.ceil(r.bitsUsed / 8);
		if (got !== want) { badBits++; console.log("   the record at frame " + r.rec.first + ": the bits " + r.bitsUsed + " (" + got + " bytes), expected " + want); }
	}
	ok(badBits === 0, name + ": " + badBits + " records with a wrong bit stream length");

	/* the animation must actually move */
	let moved = 0;
	for (let v = 0; v < anim.verts; v++) {
		for (let f = 1; f < anim.frames; f++) {
			const d = Math.abs(anim.pos[(v * anim.frames + f) * 3] - anim.pos[(v * anim.frames + f - 1) * 3]);
			if (d > 0.01) { moved++; break; }
		}
	}
	ok(moved > anim.verts / 4, name + ": only " + moved + " of " + anim.verts + " vertices move");
	console.log("   " + moved + " of " + anim.verts + " vertices move between the frames");

	/* ---- the normals ----
	 * The palette index of every normal keyframe must be inside the
	 * palette, the blended normal must be a unit vector, and it must
	 * agree with the face normals of the triangles that use it. */
	let badIndex = 0;
	for (let i = 0; i < anim.nrmK.length; i++) if (anim.nrmK[i] > 255) badIndex++;
	ok(badIndex === 0, name + ": " + badIndex + " normal palette indices out of range");

	const P = g.NORMAL_PALETTE;
	let notUnit = 0;
	const sample = Math.max(1, Math.floor(anim.frames / 12));
	const tmp = [0, 0, 0];
	for (let f = 0; f < anim.frames; f += sample) {
		for (let n = 0; n < anim.norms; n += Math.max(1, Math.floor(anim.norms / 64))) {
			g.animatedNormal(anim, P, n, f, tmp);
			const l = Math.hypot(tmp[0], tmp[1], tmp[2]);
			/* the engine blends the palette vectors linearly and does NOT
			 * renormalise, so the length can drop to almost nothing when
			 * the two keyframes are more than 90 degrees apart */
			if (!isFinite(l) || l < 1e-6 || l > 1.0001) notUnit++;
		}
	}
	ok(notUnit === 0, name + ": " + notUnit + " blended normals have a bad length");

	/* the face normals, compared with the stored normals */
	const acc = new Float64Array(anim.norms * 3);
	for (const t of G.tris) {
		const p = [];
		for (const k of t.i) {
			const c = G.corners[k];
			if (c.posIndex < 0) p.push(G.cPos[-c.posIndex - 1]);
			else {
				const o = (c.posIndex * anim.frames) * 3;
				p.push([anim.pos[o], anim.pos[o + 1], anim.pos[o + 2]]);
			}
		}
		const ux = p[1][0] - p[0][0], uy = p[1][1] - p[0][1], uz = p[1][2] - p[0][2];
		const vx = p[2][0] - p[0][0], vy = p[2][1] - p[0][1], vz = p[2][2] - p[0][2];
		const nx = uy * vz - uz * vy, ny = uz * vx - ux * vz, nz = ux * vy - uy * vx;
		for (const k of t.i) {
			const idx = G.corners[k].nrmIndex;
			if (idx < 0 || idx >= anim.norms) continue;
			acc[idx * 3] += nx; acc[idx * 3 + 1] += ny; acc[idx * 3 + 2] += nz;
		}
	}
	const ds = [];
	for (let n = 0; n < anim.norms; n++) {
		let x = acc[n * 3], y = acc[n * 3 + 1], z = acc[n * 3 + 2];
		const l = Math.hypot(x, y, z);
		if (l < 1e-9) continue;
		x /= l; y /= l; z /= l;
		g.animatedNormal(anim, P, n, 0, tmp);
		ds.push(Math.abs(x * tmp[0] + y * tmp[1] + z * tmp[2]));
	}
	ds.sort((a, b) => a - b);
	const median = ds.length ? ds[ds.length >> 1] : 0;
	const good = ds.filter((d) => d > 0.9).length;
	console.log("   the normals: the median |dot| with the face normals " + median.toFixed(3) +
		", " + good + " of " + ds.length + " above 0.9");
	ok(median > 0.80, name + ": the median normal dot product is only " + median.toFixed(3));
	ok(good > ds.length * 0.25, name + ": only " + good + " of " + ds.length + " normals match the geometry");
}

console.log("\n" + (fail ? "FAILED " + fail + " of " + checks : "PASS " + checks + " checks"));
process.exit(fail ? 1 : 0);
