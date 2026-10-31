/*
 * ghbapi.js - dump the client API vtable of the module (SoF.exe 0x20403A48)
 * and the Ghoul subsystem vtable hunt (the global at 0x204036a0).
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
function dumpTable(va, count) {
	console.log("=== the table at 0x" + va.toString(16));
	for (let i = 0; i < count; i++) {
		const v = b.readUInt32LE(toFile(va + i * 4));
		console.log("  +0x" + (i * 4).toString(16).padStart(3, "0") + "  0x" + v.toString(16));
	}
}
dumpTable(0x20403A48, 40);
/* the Ghoul subsystem global */
const go = toFile(0x204036a0);
console.log("=== the global 0x204036a0 at the file offset 0x" + go.toString(16) + " = " + b.readUInt32LE(go));
for (let i = 0; i < 8; i++) {
	const v = b.readUInt32LE(go + i * 4);
	console.log("   +" + (i * 4) + " 0x" + v.toString(16));
}
