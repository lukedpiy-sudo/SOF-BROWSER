/* bsphex.js - a hex dump of a file region.
 *   node bsphex.js <file> <offset> <length> [imagebase] [textva]
 * The optional imagebase/textva map a virtual address to a file offset.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const b = fs.readFileSync(file);
let off = Number(process.argv[3]);
const len = Number(process.argv[4] || 256);
/* if the offset looks like a VA and the image base is given, convert it */
const imageBase = process.argv[5] ? Number(process.argv[5]) : null;
if (imageBase !== null && off >= imageBase) {
	const e_lfanew = b.readUInt32LE(0x3c);
	const nsec = b.readUInt16LE(e_lfanew + 6);
	const optsz = b.readUInt16LE(e_lfanew + 20);
	const secoff = e_lfanew + 24 + optsz;
	for (let i = 0; i < nsec; i++) {
		const o = secoff + i * 40;
		const vaddr = b.readUInt32LE(o + 12);
		const vsize = b.readUInt32LE(o + 8);
		const rawptr = b.readUInt32LE(o + 20);
		const rawsize = b.readUInt16LE(o + 16);
		if (off >= imageBase + vaddr && off < imageBase + vaddr + Math.max(vsize, rawsize)) {
			off = rawptr + (off - (imageBase + vaddr));
			break;
		}
	}
}
for (let i = 0; i < len; i += 16) {
	const h = [], a = [];
	for (let k = 0; k < Math.min(16, len - i); k++) {
		const c = b[off + i + k];
		h.push(c.toString(16).padStart(2, "0"));
		a.push(c >= 0x20 && c < 0x7f ? String.fromCharCode(c) : ".");
	}
	console.log((off + i).toString(16).padStart(8, "0") + "  " + h.join(" ").padEnd(47) + "  |" + a.join("") + "|");
}
