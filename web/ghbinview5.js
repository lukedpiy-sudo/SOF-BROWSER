/*
 * ghbinview5.js - dump the pointer table that holds the INVIEW paths.
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
function toRva(fo) {
	for (const s of secs) if (fo >= s.rptr && fo < s.rptr + s.rsize) return imgbase + s.vaddr + (fo - s.rptr);
	return 0;
}
function str(va) {
	const o = toFile(va);
	if (o < 0) return null;
	const e = b.indexOf(0, o);
	if (e < 0) return null;
	const s = b.toString("latin1", o, e);
	for (let i = 0; i < s.length; i++) { const c = s.charCodeAt(i); if (c < 32 || c > 126) return null; }
	return s;
}
/* the table around the file offset 0x122aa4 */
const centre = 0x122aa4;
let start = centre, end = centre;
while (start - 4 >= 0) {
	const v = b.readUInt32LE(start - 4);
	if (!str(v)) break;
	start -= 4;
}
while (end + 4 < b.length) {
	const v = b.readUInt32LE(end);
	if (!str(v)) break;
	end += 4;
}
const n = (end - start) / 4;
console.log("the table at the file offset 0x" + start.toString(16) + " with " + n + " entries (the RVA 0x" + toRva(start).toString(16) + ")");
for (let i = 0; i < n; i++) {
	const v = b.readUInt32LE(start + i * 4);
	console.log("  [" + i + "] 0x" + v.toString(16) + "  " + str(v));
}
