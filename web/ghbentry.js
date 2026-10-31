/*
 * ghbentry.js - find the likely function entry before an address (the
 * prologue heuristic) in a PE image.
 *
 *   node ghbentry.js <file> <addr> ...
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]);
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
function toFile(va) {
	const rva = va - imgbase;
	for (const s of secs) if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	return -1;
}
	for (let i = 3; i < process.argv.length; i++) {
	const va = parseInt(process.argv[i], 16);
	const fo = toFile(va);
	let entry = null;
	for (let p = fo; p > fo - 0x4000 && p > 0; p--) {
		/* a prologue after a padding or a ret */
		const prev = b[p - 1];
		if (prev === 0xc3 || prev === 0xcc || prev === 0xc2 || (prev >= 0x90 && prev <= 0x9f) || prev === 0x00) {
			if (b[p] === 0x55 && b[p + 1] === 0x8b && b[p + 2] === 0xec) { entry = p; break; }
			if (b[p] === 0x55 && b[p + 1] === 0x89 && b[p + 2] === 0xe5) { entry = p; break; }
			if (b[p] === 0x83 && b[p + 1] === 0xec) { entry = p; break; }
			if (b[p] === 0x8b && b[p + 1] === 0xff && b[p + 2] === 0x55) { entry = p; break; }
			if (b[p] === 0x56 && b[p + 1] === 0x57) { entry = p; break; }
		}
	}
	console.log("  0x" + va.toString(16) + " -> the entry " + (entry !== null ? "0x" + (va - (fo - entry)).toString(16) : "none"));
}
