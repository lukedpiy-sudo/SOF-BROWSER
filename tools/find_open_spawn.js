/* Find a genuinely open spawn point from the BSP brush data. */
"use strict";
const fs = require("fs");
const path = require("path");
const m = JSON.parse(fs.readFileSync(path.resolve(__dirname, "../web/www/map_bsp.json"), "utf8"));
const brushes = m.brushes.filter(b => (b.c & 1) !== 0);
const MINS = [-16, -16, -24], MAXS = [16, 16, 32];
function boxRange(n, p) {
	let lo = 0, hi = 0;
	for (let i = 0; i < 3; i++) {
		if (n[i] > 0) { hi += n[i] * MAXS[i]; lo += n[i] * MINS[i]; }
		else if (n[i] < 0) { hi += n[i] * MINS[i]; lo += n[i] * MAXS[i]; }
	}
	const base = p[0] * n[0] + p[1] * n[1] + p[2] * n[2];
	return [base + lo, base + hi];
}
function inside(p) {
	for (const br of brushes) {
		let separated = false;
		for (const s of br.p) {
			const rg = boxRange(s.n, p);
			if (rg[0] > s.d + 0.5) { separated = true; break; }
		}
		if (!separated) return true;
	}
	return false;
}
function groundDistance(p) {
	let best = 1e9;
	for (const br of brushes) {
		for (const s of br.p) {
			if (s.n[2] < 0.5) continue;
			const rg = boxRange(s.n, p);
			/* moving straight down: n·delta = -n.z */
			const t = (rg[0] - s.d) / s.n[2];
			if (t > 0 && t < best) best = t;
		}
	}
	return best;
}
function clearance(p, dx, dy) {
	for (let d = 8; d <= 256; d += 8) {
		if (inside([p[0] + dx * d, p[1] + dy * d, p[2]])) return d;
	}
	return 256;
}
const dirs = [];
for (let i = 0; i < 8; i++) {
	const a = i * Math.PI / 4;
	dirs.push([Math.sin(a), -Math.cos(a)]);
}
const candidates = [];
for (const z of [24, 56, 88, 120, 152]) {
	for (let x = -2340; x <= -40; x += 40) {
		for (let y = -2220; y <= 100; y += 40) {
			const p = [x, y, z];
			if (inside(p)) continue;
			let worst = 256;
			for (const d of dirs) {
				const c = clearance(p, d[0], d[1]);
				if (c < worst) worst = c;
				if (worst < 80) break;
			}
			const gd = groundDistance(p);
			if (worst >= 80 && gd > 5 && gd < 60) candidates.push({ p, worst, gd: Math.round(gd) });
		}
	}
}
candidates.sort((a, b) => b.worst - a.worst);
console.log("open candidates:", candidates.length);
for (const c of candidates.slice(0, 20)) console.log(c.worst, c.p.join(" "));
