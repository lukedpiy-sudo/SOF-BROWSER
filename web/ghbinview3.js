/*
 * ghbinview3.js - find the table of pointers to the INVIEW model paths in
 * SoF.exe and the code that uses it.
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
/* the INVIEW strings */
const pat = Buffer.from("INVIEW", "latin1");
const strs = [];
let o = 0;
while (true) {
	const i = b.indexOf(pat, o);
	if (i < 0) break;
	let s = i;
	while (s > 0 && b[s - 1] >= 32 && b[s - 1] < 127) s--;
	let e = b.indexOf(0, i);
	strs.push({ fo: s, rva: toRva(s), path: b.toString("latin1", s, e) });
	o = i + 1;
}
console.log("the INVIEW strings: " + strs.length);
const byRva = new Map();
for (const s of strs) byRva.set(s.rva, s.path);
console.log("the first 6: " + strs.slice(0, 6).map(s => "0x" + s.rva.toString(16) + " " + s.path).join(" | "));
/* the pointer table: a run of u32 pointers into the strings */
const rdata = secs.find(s => s.name === ".rdata");
for (let o2 = rdata.rptr; o2 + 8 < rdata.rptr + rdata.rsize; o2 += 4) {
	const v = b.readUInt32LE(o2);
	if (!byRva.has(v)) continue;
	/* the run */
	let n = 0, p = o2;
	while (p + 4 <= rdata.rptr + rdata.rsize && byRva.has(b.readUInt32LE(p))) { n++; p += 4; }
	if (n >= 4) {
		console.log("the table at the file offset 0x" + o2.toString(16) + " (the RVA 0x" + toRva(o2).toString(16) + ") with " + n + " entries");
		for (let i = 0; i < Math.min(n, 60); i++) {
			const q = b.readUInt32LE(o2 + i * 4);
			console.log("   [" + i + "] 0x" + q.toString(16) + "  " + byRva.get(q));
		}
	}
}
