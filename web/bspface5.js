/* bspface5.js - a byte by byte survey of the 44 byte SoF face record.
 *
 *   node bspface5.js <map.bsp>
 *
 * For every byte offset it prints the value distribution, so that the
 * lighting fields can be identified (an "no lightmap" marker, an offset into
 * the lighting lump, a size, or a style index).
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

console.log("faces", faceCount, " lighting", lightLen);
console.log("\nbyte offset : u16 histogram (top 6)   | as u32 (offset+3) distinct count / top 4");
for (let k = 0; k < 44; k++) {
	const hist = new Map();
	for (let i = 0; i < faceCount; i++) {
		const v = b.readUInt16LE(L[6].off + i * 44 + k);
		hist.set(v, (hist.get(v) || 0) + 1);
	}
	const top = [...hist.entries()].sort((a, c) => c[1] - a[1]).slice(0, 5)
		.map(e => "0x" + e[0].toString(16) + ":x" + e[1]);
	const u32 = new Map();
	if (k + 4 <= 44) {
		for (let i = 0; i < faceCount; i++) {
			const v = b.readUInt32LE(L[6].off + i * 44 + k);
			u32.set(v, (u32.get(v) || 0) + 1);
		}
	}
	const u32top = [...u32.entries()].sort((a, c) => c[1] - a[1]).slice(0, 4)
		.map(e => "0x" + e[0].toString(16) + ":x" + e[1]);
	console.log("  +" + String(k).padStart(2) + "  distinct=" + String(hist.size).padStart(5) +
		"  " + top.join(" ").padEnd(46) + " | " + u32top.join(" "));
}

/* the raw bytes of the first 8 faces, 4 bytes per column */
console.log("\nfirst 8 faces (byte offset : value):");
for (let i = 0; i < 8; i++) {
	const o = L[6].off + i * 44;
	let s = "  face " + i + ": ";
	for (let j = 0; j < 44; j += 4) {
		s += "[" + j + ":" + b.readUInt32LE(o + j).toString(16).padStart(8, "0") + "]";
	}
	console.log(s);
}

/* how many faces have 0xffffffff at each 4 byte window, and whether the
 * remaining values are in range for the lighting lump */
console.log("\n4 byte windows: how many faces hold -1 (0xffffffff) and how many hold a value inside the lighting lump");
for (let k = 0; k <= 40; k++) {
	let neg = 0, inrange = 0, other = 0, mono = 0, prev = -1;
	for (let i = 0; i < faceCount; i++) {
		const o = L[6].off + i * 44 + k;
		if (k + 4 > 44) break;
		const v = b.readInt32LE(o);
		if (v === -1) neg++;
		else if (v >= 0 && v <= lightLen) { inrange++; if (v < prev) mono++; prev = v; }
		else other++;
	}
	console.log("  +" + String(k).padStart(2) + "  -1:" + String(neg).padStart(5) +
		"  inRange:" + String(inrange).padStart(5) + "  other:" + String(other).padStart(5) +
		"  nonMonotone:" + String(mono).padStart(5));
}
