/*
 * ghbexp.js - list the exports of the game module.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/Soldier of Fortune/Base/gamex86.dll";
const b = fs.readFileSync(file);
const pe = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(pe + 6);
const opt = pe + 24;
const secoff = opt + b.readUInt16LE(pe + 20);
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({ name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), rsize: b.readUInt32LE(o + 16), rptr: b.readUInt32LE(o + 20) });
}
function toFile(va) {
	const rva = va;
	for (const s of secs) if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	return -1;
}
const expRva = b.readUInt32LE(opt + 96);
const expSize = b.readUInt32LE(opt + 100);
console.log("the exports at the RVA 0x" + expRva.toString(16));
if (!expRva) { console.log("no exports"); process.exit(0); }
const e = toFile(expRva);
const nfun = b.readUInt32LE(e + 20);
const nnam = b.readUInt32LE(e + 24);
const funRva = b.readUInt32LE(e + 28);
const namRva = b.readUInt32LE(e + 32);
const ordRva = b.readUInt32LE(e + 36);
const fun = toFile(funRva), nam = toFile(namRva), ord = toFile(ordRva);
console.log("the functions " + nfun + " the names " + nnam);
for (let i = 0; i < nnam; i++) {
	const no = b.readUInt32LE(nam + i * 4);
	let s = "", p = toFile(no);
	while (p !== undefined && p >= 0 && b[p]) s += String.fromCharCode(b[p++]);
	const oi = b.readUInt16LE(ord + i * 2);
	const fa = b.readUInt32LE(fun + oi * 4);
	console.log("  " + s + "  the RVA 0x" + fa.toString(16));
}
