/*
 * ghbapi3.js - read the client API table of the engine (SoF.exe
 * 0x20403A48) from the file and list the entries.
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
for (const s of secs) console.log("the section " + s.name + " 0x" + (imgbase + s.vaddr).toString(16) + " +" + s.vsize + " the file " + s.rptr + " +" + s.rsize);
function toFile(va) {
	const rva = va - imgbase;
	for (const s of secs) if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	return -1;
}
const base = 0x20403a48;
const o = toFile(base);
console.log("the table at 0x" + base.toString(16) + " is at the file offset 0x" + o.toString(16));
for (let i = 0; i < 40; i++) {
	const v = b.readUInt32LE(o + i * 4);
	console.log("  +0x" + (i * 4).toString(16) + "  0x" + v.toString(16));
}
