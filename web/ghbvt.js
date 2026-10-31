/*
 * ghbvt.js - the Ghoul subsystem's vtable.
 *
 *   node ghbvt.js
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
	secs.push({
		name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""),
		vaddr: b.readUInt32LE(o + 12),
		vsize: b.readUInt32LE(o + 8),
		rsize: b.readUInt32LE(o + 16),
		rptr: b.readUInt32LE(o + 20)
	});
}
function toFile(va) {
	const rva = va - imgbase;
	for (const s of secs) {
		if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	}
	return -1;
}
function rd32(va) { const o = toFile(va); return o < 0 ? 0 : b.readUInt32LE(o); }
const singleton = 0x204036a0;
const vt = rd32(singleton);
console.log("the Ghoul subsystem at 0x" + singleton.toString(16) + ", the vtable at 0x" + vt.toString(16));
for (let i = 0; i < 24; i++) {
	const fn = rd32(vt + i * 4);
	console.log("  +0x" + (i * 4).toString(16).padStart(3, "0") + "  0x" + fn.toString(16));
}
