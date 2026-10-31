/*
 * groundtest.js - is there a floor under the nycdm1 spawn point?
 *
 * The probe player spawns at (-2303.875, -1919.875, 23.5) (spawn point
 * (-2304,-1920,16) + 10) and then sinks to z -39.9, so either the map has no
 * floor there or the game module is not running the ground trace for our
 * connection.  This answers the map half of the question from the brush data
 * the browser already uses (web/www/map_bsp.json).
 *
 * Run: node groundtest.js
 */
"use strict";
const fs = require("fs");
const path = require("path");

const P = [-2304, -1920];
const j = JSON.parse(fs.readFileSync(path.join(__dirname, "www", "map_bsp.json"), "utf8"));
console.log("keys: " + Object.keys(j).join(", "));

const brushes = j.brushes || null;
if (!brushes) { console.log("no brushes array in the JSON - cannot trace"); process.exit(0); }
console.log("brushes=" + brushes.length + " sample=" + JSON.stringify(brushes[0]).slice(0, 200));

/* a brush is a set of half-spaces; a point is inside it when it is behind
 * every side plane.  contents: the Q2/Q3 SURF_* flags (solid = no CONTENTS_*
 * bit set) */
function sidesOf(b) {
	if (Array.isArray(b.p)) return b.p.map((s) => ({ n: s.n, d: s.d }));
	if (Array.isArray(b.sides)) return b.sides.map((s) => ({ n: s.normal || s.n, d: s.dist !== undefined ? s.dist : s.d }));
	return null;
}
function contentsOf(b) {
	if (b.c !== undefined) return b.c >>> 0;
	if (b.contents !== undefined) return b.contents >>> 0;
	return 0;
}
function pointInside(p, sides) {
	for (const s of sides) {
		if (!s.n) return false;
		const v = s.n[0] * p[0] + s.n[1] * p[1] + s.n[2] * p[2] - s.d;
		if (v > 0.001) return false;
	}
	return true;
}

/* walk down from z=25 to z=-60 in 1 unit steps and report the first solid
 * brush the player box (16x16x32, feet at the origin) touches */
let hit = null;
for (let z = 25; z >= -60 && !hit; z--) {
	const box = { min: [P[0] - 16, P[1] - 16, z - 24], max: [P[0] + 16, P[1] + 16, z + 32] };
	for (const b of brushes) {
		const sides = sidesOf(b);
		if (!sides) continue;
		const c = contentsOf(b);
		if (c & 0x80000000) continue;           /* not solid (contents mask) */
		const corners = [[box.min[0], box.min[1], box.min[2]], [box.max[0], box.max[1], box.max[2]],
			[box.min[0], box.max[1], box.min[2]], [box.max[0], box.min[1], box.max[2]]];
		for (const c2 of corners) {
			if (pointInside(c2, sides)) { hit = { z: z, brush: brushes.indexOf(b), contents: c }; break; }
		}
		if (hit) break;
	}
}
console.log(hit ? "player box touches brush #" + hit.brush + " at z=" + hit.z + " (contents " + hit.contents + ")"
	: "no solid brush anywhere on the column from z=25 down to z=-60");

/* nearest plane below the spawn point, whatever brush it belongs to */
const planes = j.planes;
if (Array.isArray(planes)) {
	let best = null;
	for (const pl of planes) {
		const n = pl.normal || pl.n;
		if (!n || n[2] > -0.9) continue;        /* only planes facing downward */
		const d = pl.dist !== undefined ? pl.dist : pl.d;
		const zAt = (n[0] * P[0] + n[1] * P[1] - d) / n[2];
		if (zAt <= 24 && zAt >= -80 && (best === null || zAt > best.z)) best = { z: zAt };
	}
	console.log(best ? "nearest downward plane below the spawn: z=" + best.z.toFixed(1) : "no downward plane below the spawn");
} else {
	console.log("planes not parsed in the JSON");
}
