/* bsppe.js - print the PE section table of a Windows binary and map a file
 * offset to a virtual address (or the other way round).
 *
 *   node bsppe.js <file> [fileoffset]
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]);
const e_lfanew = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(e_lfanew + 6);
const optsz = b.readUInt16LE(e_lfanew + 20);
const imageBase = b.readUInt32LE(e_lfanew + 0x34);
const secoff = e_lfanew + 24 + optsz;
console.log("imageBase 0x" + imageBase.toString(16) + " (" + imageBase + "), " + nsec + " sections");
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	const name = b.toString("latin1", o, o + 8).replace(/\0.*$/, "");
	const vsize = b.readUInt32LE(o + 8);
	const vaddr = b.readUInt32LE(o + 12);
	const rawsize = b.readUInt32LE(o + 16);
	const rawptr = b.readUInt32LE(o + 20);
	secs.push({ name, vaddr, vsize, rawptr, rawsize });
	console.log("  " + name.padEnd(9) + " VA 0x" + (imageBase + vaddr).toString(16).padEnd(12) +
		" vsize " + String(vsize).padStart(8) +
		" raw 0x" + rawptr.toString(16).padEnd(10) + " rawsize " + String(rawsize).padStart(9) +
		"  (file 0x" + rawptr.toString(16) + ".." + (rawptr + rawsize).toString(16) + ")");
}
if (process.argv[3] !== undefined) {
	const fo = Number(process.argv[3]);
	for (const s of secs) {
		if (fo >= s.rawptr && fo < s.rawptr + s.rawsize) {
			const va = imageBase + s.vaddr + (fo - s.rawptr);
			console.log("file 0x" + fo.toString(16) + " -> VA 0x" + va.toString(16) +
				" (section " + s.name + ", +0x" + (fo - s.rawptr).toString(16) + ")");
		}
	}
}
