/*
 * ghbvt9.js - read the Ghoul class vtable (PTR_FUN_20113ba4) from SoF.exe.
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
const vt = 0x20113ba4;
const o = toFile(vt);
console.log("the vtable at 0x" + vt.toString(16) + " (the file offset 0x" + o.toString(16) + ")");
for (let i = 0; i < 30; i++) {
	const e = b.readUInt32LE(o + i * 4);
	console.log("  +0x" + (i * 4).toString(16).padStart(3, "0") + "  0x" + e.toString(16));
}
