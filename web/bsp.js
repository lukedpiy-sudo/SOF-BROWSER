/*
 * bsp.js - a reader for the SoF BSP v46 map format.
 *
 * The header is:
 *   char ident[4]      "IBSP"
 *   int  version       46
 *   22 x { int off; int len; }   the lump directory
 *
 * (the directory has no "numlumps" field: the header is exactly 184 bytes,
 * 8 + 22 * 8, and the first lump's data starts right after it)
 *
 * The lump order for v46 is NOT the Quake III order.  The lumps that have
 * been identified so far:
 *
 *   0  entities    the entity string (starts with '{')
 *   1  planes      4 floats per plane
 *   5  shaders     the texture names, e.g. "tokyo/1_ramp_ceil1"
 *
 * usage: node bsp.js <file.bsp>
 */
"use strict";
const fs = require("fs");

const NUM_LUMPS = 22;
const LUMP_NAMES = [
	"entities", "planes", "?", "?", "?", "shaders", "?", "?", "?", "?",
	"?", "?", "?", "?", "?", "?", "?", "?", "?", "?", "?", "?"
];

function readBsp(file) {
	const b = fs.readFileSync(file);
	if (b.toString("latin1", 0, 4) !== "IBSP")
		throw new Error("not a BSP: " + b.toString("latin1", 0, 4));
	const version = b.readInt32LE(4);
	if (version !== 46) console.warn("unexpected BSP version " + version);
	const lumps = [];
	for (let i = 0; i < NUM_LUMPS; i++) {
		const off = b.readInt32LE(8 + i * 8);
		const len = b.readInt32LE(8 + i * 8 + 4);
		lumps.push({ index: i, name: LUMP_NAMES[i], off, len, data: b.subarray(off, off + len) });
	}
	return { buffer: b, version, lumps };
}

/* print a short summary of every lump */
function describe(bsp) {
	console.log("version " + bsp.version + ", " + bsp.lumps.length + " lumps, " + bsp.buffer.length + " bytes");
	for (const l of bsp.lumps) {
		let extra = "";
		if (l.len) {
			const s = l.data.toString("latin1");
			const names = [...s.matchAll(/[\x20-\x7e]{6,}/g)].map(m => m[0]).slice(0, 2);
			if (names.length) extra = "  " + JSON.stringify(names);
		}
		console.log("  lump" + String(l.index).padStart(2) + " " + l.name.padEnd(10) +
			" off=" + String(l.off).padStart(6) + " len=" + String(l.len).padStart(6) + extra);
	}
}

if (require.main === module) {
	const file = process.argv[2];
	if (!file) { console.log("usage: node bsp.js <file.bsp>"); process.exit(1); }
	describe(readBsp(file));
}

module.exports = { readBsp, describe, NUM_LUMPS };
