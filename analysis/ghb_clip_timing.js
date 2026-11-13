#!/usr/bin/env node
/* Check the Ghoul clip timing hypothesis against the ground-truth samples.
 *
 * Hypothesis (proved in SoF.exe 0x2007D200, the Ghoul entity vtable slot
 * +0x6C):
 *
 *     duration_seconds = clip.f32 * 0.001 * speed * globalSpeed * span
 *
 * so the clip's f32 is the FRAME PERIOD in milliseconds and the clip plays
 * at 1000/f32 frames a second.  The clip events carry an absolute time in ms.
 *
 * This script checks that every event time lies inside the clip and lands on
 * a frame boundary (or within a small tolerance).
 *
 *     node analysis/ghb_clip_timing.js samples/ghb/*.ghb samples/ghb/inview/*.ghb
 */
"use strict";
const fs = require("fs");
const path = require("path");
const ROOT = path.join(__dirname, "..");

const src = fs.readFileSync(path.join(ROOT, "web", "ghb.js"), "utf8");
const mod = { exports: {} };
new Function("module", "exports", "window",
	src + "\nmodule.exports = { parseGhoul };")(mod, mod.exports, {});
const parseGhoul = mod.exports.parseGhoul;

const f32 = (u) => {
	const b = Buffer.alloc(4);
	b.writeUInt32LE(u >>> 0);
	return b.readFloatLE(0);
};

let clips = 0, events = 0, inRange = 0, onFrame = 0;
let worst = 0, worstWhere = "";
for (const f of process.argv.slice(2)) {
	const m = parseGhoul(fs.readFileSync(f));
	for (const c of m.clips) {
		clips++;
		const period = c.frameMs, frames = c.frameCount, dur = period * frames;
		for (const e of c.events) {
			events++;
			const t = e.timeMs;
			if (t >= 0 && t <= dur + 1e-3) inRange++;
			const k = t / period;
			const d = Math.abs(k - Math.round(k)) * period;
			if (d <= 1.0) onFrame++;
			else if (d > worst) { worst = d; worstWhere = `${path.basename(f)} ${c.name} t=${t} period=${period}`; }
		}
	}
}
const pct = (n) => (100 * n / Math.max(events, 1)).toFixed(1) + " %";
console.log(`the clips:           ${clips}`);
console.log(`the events:          ${events}`);
console.log(`inside the clip:     ${inRange}  (${pct(inRange)})`);
console.log(`on a frame boundary: ${onFrame}  (${pct(onFrame)})`);
console.log(`the worst miss:      ${worst.toFixed(3)} ms   ${worstWhere}`);
