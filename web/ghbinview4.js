/*
 * ghbinview4.js - find the code that references the INVIEW model paths in
 * SoF.exe (the client's first person weapon code).
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
	strs.push({ rva: toRva(s), path: b.toString("latin1", s, e) });
	o = i + 1;
}
const text = secs.find(s => s.name === ".text");
const hits = new Map();
for (const s of strs) {
	const pat2 = Buffer.alloc(4);
	pat2.writeUInt32LE(s.rva);
	let p = text.rptr;
	while (true) {
		const i = b.indexOf(pat2, p);
		if (i < 0 || i >= text.rptr + text.rsize) break;
		const va = toRva(i);
		hits.set(va, s.path);
		p = i + 1;
	}
}
const addrs = [...hits.keys()].sort((a, b) => a - b);
console.log("the code references to the INVIEW paths: " + addrs.length);
for (const a of addrs) console.log("  0x" + a.toString(16) + "  " + hits.get(a));
