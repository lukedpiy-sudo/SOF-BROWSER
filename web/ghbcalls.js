/*
 * ghbcalls.js - find the direct callers of a function in a PE image
 * (the call rel32 pattern).
 *
 *   node ghbcalls.js <file> <targetRva> [maxHits]
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const target = parseInt(process.argv[3], 16);
const b = fs.readFileSync(file);
const pe = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(pe + 6);
const opt = pe + 24;
const imgbase = b.readUInt32LE(opt + 28);
const secoff = opt + b.readUInt16LE(pe + 20);
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({ name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), rsize: b.readUInt32LE(o + 16), rptr: b.readUInt32LE(o + 20) });
}
const text = secs.find(s => s.name === ".text");
let n = 0;
for (let o = text.rptr; o + 5 < text.rptr + text.rsize; o++) {
	if (b[o] !== 0xe8) continue;
	const rel = b.readInt32LE(o + 1);
	const from = imgbase + text.vaddr + (o - text.rptr);
	const to = (from + 5 + rel) >>> 0;
	if (to === (imgbase + target)) {
		console.log("  the call at 0x" + from.toString(16));
		n++;
		if (n > 60) break;
	}
}
console.log("the callers of 0x" + (imgbase + target).toString(16) + ": " + n);
