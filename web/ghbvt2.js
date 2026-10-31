/*
 * ghbvt2.js - find the Ghoul class vtable in SoF.exe (.rdata).
 *
 * The Ghoul subsystem's virtual function 0x40 is the compressor that the
 * server uses for the svc 0x1A datagrams.
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
	for (const s of secs) if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	return -1;
}
const text = secs.find(s => s.name === ".text");
const textLo = imgbase + text.vaddr, textHi = textLo + text.vsize;
const rdata = secs.find(s => s.name === ".rdata") || secs.find(s => s.name === ".data");
console.log("the sections: " + secs.map(s => s.name).join(","));
console.log("the text 0x" + textLo.toString(16) + "..0x" + textHi.toString(16) +
	", the rdata 0x" + (imgbase + rdata.vaddr).toString(16));

const inText = (v) => v >= textLo && v < textHi;
const cands = [];
for (let o = rdata.rptr; o + 0x80 < rdata.rptr + rdata.rsize; o += 4) {
	const v = b.readUInt32LE(o);
	if (!inText(v)) continue;
	/* the entries around it must be code pointers too */
	let n = 0;
	for (let k = 0; k < 24; k++) if (inText(b.readUInt32LE(o + k * 4))) n++;
	if (n < 20) continue;
	const at40 = b.readUInt32LE(o + 0x40);
	if (at40 < 0x2008f000 || at40 > 0x200ea000) continue;
	cands.push([(imgbase + rdata.vaddr + (o - rdata.rptr)), at40, n]);
}
console.log("the vtable candidates: " + cands.length);
const seen = new Set();
for (const [va, at40, n] of cands) {
	if (seen.has(at40)) continue;
	seen.add(at40);
	console.log("  the vtable at 0x" + va.toString(16) + " (+0x40 = 0x" + at40.toString(16) + ", " + n + " code entries)");
}
