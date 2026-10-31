/*
 * psinside.js - is the spawn point inside a solid brush?
 *
 * The module simulates gravity (the player sinks) but never moves
 * horizontally - which is what happens when the player is embedded in the
 * world: every move is clipped to zero.  The brush model is in
 * web/www/map_bsp.json (the brushes, their sides and the planes).
 */
"use strict";
const fs = require("fs");
const map = JSON.parse(fs.readFileSync(__dirname + "/www/map_bsp.json", "utf8"));
console.log("map keys: " + Object.keys(map).join(", "));
const brushes = map.brushes || [];
const planes = map.planes || [];
console.log("brushes " + brushes.length + " planes " + planes.length);
if (!brushes.length || !planes.length) { console.log("no brush data in map_bsp.json"); process.exit(0); }

/* the spawn the client gets */
const P = [-2304, -1920, 26];

function inside(b, p) {
	/* a brush is the intersection of its half spaces: n.p <= d */
	for (const s of b.sides) {
		const pl = planes[s.plane];
		if (!pl) continue;
		const n = pl.n, d = pl.d;
		if (n[0] * p[0] + n[1] * p[1] + n[2] * p[2] > d + 0.5) return false;
	}
	return true;
}

let n = 0;
for (const b of brushes) {
	if (inside(b, P)) {
		n++;
		if (n < 6) console.log("  inside brush: sides " + b.sides.length + " contents 0x" +
			(b.contents || 0).toString(16));
	}
}
console.log("the spawn " + P.join(",") + " is inside " + n + " brushes");

/* the map's own spawn points */
const ents = JSON.parse(fs.readFileSync(__dirname + "/www/map_entities.json", "utf8"));
const spawns = ents.filter((e) => /spawn/i.test(e.classname || ""));
console.log("the map's spawn entities: " + spawns.length);
let best = null;
for (const s of spawns) {
	if (!s.origin) continue;
	const d = Math.hypot(s.origin[0] - P[0], s.origin[1] - P[1], s.origin[2] - P[2]);
	if (!best || d < best.d) best = { d, s };
}
if (best) console.log("  the closest map spawn: " + best.s.classname + " @" + best.s.origin.join(",") +
	"  distance " + best.d.toFixed(0) + " units");
for (const s of spawns.slice(0, 6)) console.log("  " + s.classname + " @" + (s.origin || []).join(","));
