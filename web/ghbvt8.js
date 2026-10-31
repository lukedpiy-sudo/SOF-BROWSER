/*
 * ghbvt8.js - the Ghoul subsystem's vtable: the global DAT_20403c14 in
 * SoF.exe points at it.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
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
function rd32(va) { const o = toFile(va); return o < 0 ? 0 : b.readUInt32LE(o); }
for (const g of [0x20403c14, 0x204036a0, 0x20403878, 0x20403a48]) {
	const v = rd32(g);
	console.log("the global 0x" + g.toString(16) + " = 0x" + v.toString(16));
	if (v > 0x20001000 && v < 0x20120000) {
		for (let i = 0; i < 26; i++) {
			const e = rd32(v + i * 4);
			console.log("   +0x" + (i * 4).toString(16).padStart(3, "0") + "  0x" + e.toString(16));
		}
	}
}
