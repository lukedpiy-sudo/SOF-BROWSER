/* bsprefs.js - find every occurrence of a 32-bit little-endian value in a
 * binary and report the file offset and the virtual address.
 *
 *   node bsprefs.js <file> <hex32> [hex32 ...]
 *
 * This is how a string address (a PUSH immediate) is located in .text.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const b = fs.readFileSync(file);

/* PE sections */
const e_lfanew = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(e_lfanew + 6);
const optsz = b.readUInt16LE(e_lfanew + 20);
const imageBase = b.readUInt32LE(e_lfanew + 0x34);
const secoff = e_lfanew + 24 + optsz;
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({
		name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""),
		vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8),
		rawptr: b.readUInt32LE(o + 20), rawsize: b.readUInt32LE(o + 16)
	});
}
function fileToVa(fo) {
	for (const s of secs) {
		if (fo >= s.rawptr && fo < s.rawptr + s.rawsize)
			return imageBase + s.vaddr + (fo - s.rawptr);
	}
	return null;
}
for (const hex of process.argv.slice(3)) {
	const v = parseInt(hex, 16) >>> 0;
	const pat = Buffer.alloc(4);
	pat.writeUInt32LE(v, 0);
	let pos = 0, hits = [];
	while (true) {
		const i = b.indexOf(pat, pos);
		if (i < 0) break;
		const va = fileToVa(i);
		hits.push("file 0x" + i.toString(16) + (va === null ? "" : " / VA 0x" + va.toString(16)));
		pos = i + 1;
	}
	console.log("0x" + v.toString(16) + ": " + hits.length + " hit(s) " + hits.slice(0, 30).join(", "));
}
