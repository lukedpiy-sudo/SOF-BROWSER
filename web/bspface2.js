/* bspface2.js - reverse the 44 byte SoF v46 face record of a BSP.
 *
 *   node bspface2.js <map.bsp>
 *
 * Known from the engine (SoF.exe): the FACES lump is 44 bytes per record on
 * disk (elemDisk=44) and 108 bytes in memory (elemMem=108).  The first 12
 * bytes are known from the geometry:
 *
 *   +0  u16 planenum
 *   +2  u16 side
 *   +4  i32 firstedge
 *   +8  u16 numedges
 *   +10 u16 texinfo
 *
 * The remaining 32 bytes hold the lighting information.  This probe looks
 * for the field that holds the lightmap offset: it must be a non decreasing
 * sequence of values inside the LIGHTING lump.
 */
"use strict";
const fs = require("fs");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const FACE = 6, TEXI = 5, LIGHT = 7, PLANE = 1;
const faceCount = L[FACE].len / 44;
const lightingLen = L[LIGHT].len;
console.log(file);
console.log("faces", faceCount, "lighting lump", lightingLen, "bytes");
console.log("texinfos", L[TEXI].len / 76, " planes", L[PLANE].len / 20);

/* the first 12 bytes are known, verify them */
let bad = 0;
for (let i = 0; i < faceCount; i++) {
	const o = L[FACE].off + i * 44;
	const te = b.readUInt16LE(o + 10);
	if (te >= L[TEXI].len / 76) bad++;
}
console.log("faces with an out of range texinfo:", bad);

/* scan every 4 byte window for a monotonically non decreasing int sequence
 * whose values stay inside the lighting lump */
console.log("\n4 byte candidate fields (offset, monotone-violations, #valid, min, max):");
const cands = [];
for (let k = 0; k <= 40; k++) {
	let viol = 0, valid = 0, mn = 1e9, mx = -1e9, prev = -1;
	for (let i = 0; i < faceCount; i++) {
		const o = L[FACE].off + i * 44 + k;
		if (k + 4 > 44) break;
		const v = b.readInt32LE(o);
		if (v >= 0 && v <= lightingLen) {
			valid++;
			if (v < prev) viol++;
			prev = v;
			if (v < mn) mn = v;
			if (v > mx) mx = v;
		}
	}
	cands.push({ k, viol, valid, mn, mx });
}
cands.sort((a, c2) => (a.viol - c2.viol) || (c2.valid - a.valid));
for (const c of cands.slice(0, 10)) {
	console.log("  +" + String(c.k).padStart(2) + "  viol=" + String(c.viol).padStart(6) +
		" valid=" + String(c.valid).padStart(6) + " min=" + String(c.mn).padStart(8) +
		" max=" + String(c.mx).padStart(8));
}

/* the best candidate: print the first faces with the candidate field */
const K = cands[0].k;
console.log("\nfirst 24 faces, field at +" + K + " (i32), plus the raw 44 bytes of face 0..3:");
for (let i = 0; i < 24; i++) {
	const o = L[FACE].off + i * 44;
	const v = b.readInt32LE(o + K);
	console.log("  face " + String(i).padStart(4) + "  v=" + String(v).padStart(9) +
		"  texinfo=" + b.readUInt16LE(o + 10) + " numedges=" + b.readUInt16LE(o + 8));
}
for (let i = 0; i < 4; i++) {
	const o = L[FACE].off + i * 44;
	const bytes = [];
	for (let j = 0; j < 44; j++) bytes.push(b[o + j].toString(16).padStart(2, "0"));
	console.log("  face " + i + ": " + bytes.join(" "));
}
