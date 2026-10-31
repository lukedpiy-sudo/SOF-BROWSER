/* bspface6.js - pin down the SoF v46 face lighting fields.
 *
 *   node bspface6.js <map.bsp>
 *
 * The survey in bspface5.js showed that the bytes at +32 and +33 of the face
 * record behave like the lightmap width and height in luxels and that the
 * lightmap data is RGB (3 bytes per luxel).  This probe verifies that rule
 * against the LIGHTING lump and then finds which bytes of the record hold
 * the offset into that lump.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const faceCount = L[6].len / 44;
const lightLen = L[7].len;
const light = b.subarray(L[7].off, L[7].off + L[7].len);

/* try every candidate (w,h) byte pair in the record */
const cands = [];
for (let wk = 0; wk < 43; wk++) {
	for (let hk = wk + 1; hk < 44; hk++) {
		for (const bpp of [3, 4, 2]) {
			let total = 0, ok = true, cum = [];
			for (let i = 0; i < faceCount; i++) {
				const o = L[6].off + i * 44;
				const w = b[o + wk], h = b[o + hk];
				if (w === 0 || h === 0) { cum.push(total); continue; }
				const sz = w * h * bpp;
				cum.push(total);
				total += sz;
			}
			if (total === lightLen) {
				cands.push({ wk, hk, bpp, total, cum });
			}
		}
	}
}
console.log("lightLen", lightLen);
console.log("candidate (w,h,bpp) triples that tile the lighting lump exactly:", cands.length);
for (const c of cands) console.log("   w=+" + c.wk + " h=+" + c.hk + " bpp=" + c.bpp + " total=" + c.total);

/* for the best candidate, look for the field that holds the offset */
if (cands.length) {
	const c = cands[0];
	/* search every 1/2/4 byte window for a field equal to cum[i] */
	for (let k = 0; k <= 43; k++) {
		for (const width of [1, 2, 4]) {
			if (k + width > 44) continue;
			let hits = 0;
			for (let i = 0; i < faceCount; i++) {
				const o = L[6].off + i * 44 + k;
				let v = 0;
				for (let j = width - 1; j >= 0; j--) v = v * 256 + b[o + j];
				if (v === c.cum[i]) hits++;
			}
			if (hits > faceCount * 0.9) {
				console.log("  OFFSET FIELD at +" + k + " width " + width + " : " + hits + "/" + faceCount + " exact");
			}
		}
	}
	/* print the first faces */
	console.log("\nfirst 12 faces: cum offset, w, h, and the bytes 12..43");
	for (let i = 0; i < 12; i++) {
		const o = L[6].off + i * 44;
		const bytes = [];
		for (let j = 12; j < 44; j++) bytes.push(b[o + j].toString(16).padStart(2, "0"));
		console.log("  face " + String(i).padStart(4) + " off=" + String(c.cum[i]).padStart(8) +
			" w=" + b[o + c.wk] + " h=" + b[o + c.hk] + "  " + bytes.join(" "));
	}
}
