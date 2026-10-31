/*
 * ghbentry2.js - the candidate function starts before an address (the
 * MSVC prologue 55 8B EC) in a PE image.
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
	const cands = [];
	for (let p = fo; p > fo - 0x4000 && p > 0; p--) {
		if (b[p] === 0x55 && b[p + 1] === 0x8b && b[p + 2] === 0xec) cands.push(va - (fo - p));
		if (cands.length > 6) break;
	}
	console.log("  0x" + va.toString(16) + " the prologue candidates: " + cands.map(c => "0x" + c.toString(16)).join(", "));
	/* the bytes at the address */
	const bytes = [];
	for (let k = 0; k < 24; k++) bytes.push(b[fo + k].toString(16).padStart(2, "0"));
	console.log("     the bytes: " + bytes.join(" "));
}
