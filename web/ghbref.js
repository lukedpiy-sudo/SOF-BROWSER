/*
 * ghbref.js - find the code that references a string (the file offset) in
 * the engine: the push/mov immediates and the function entries.
 *
 *   node ghbref.js <file> <fileOffset> [<fileOffset> ...]
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]);
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
function toRva(fo) {
	for (const s of secs) if (fo >= s.rptr && fo < s.rptr + s.rsize) return imgbase + s.vaddr + (fo - s.rptr);
	return 0;
}
function toFile(va) {
	const rva = va - imgbase;
	for (const s of secs) if (rva >= s.vaddr && rva < s.vaddr + Math.max(s.vsize, s.rsize)) return s.rptr + (rva - s.vaddr);
	return -1;
}
const text = secs.find(s => s.name === ".text");
for (let i = 3; i < process.argv.length; i++) {
	const fo = parseInt(process.argv[i], 16);
	const rva = toRva(fo);
	const p = Buffer.alloc(4);
	p.writeUInt32LE(rva);
	let o = text.rptr;
	console.log("=== the string at the file offset 0x" + fo.toString(16) + " (the RVA 0x" + rva.toString(16) + ")");
	while (true) {
		const j = b.indexOf(p, o);
		if (j < 0 || j >= text.rptr + text.rsize) break;
		const va = imgbase + text.vaddr + (j - text.rptr);
		const op = b[j - 1];
		/* the function entry: scan back for a prologue */
		let entry = null;
		for (let k = j; k > j - 0x3000 && k > text.rptr; k--) {
			const prev = b[k - 1];
			if (prev === 0xc3 || prev === 0xcc || prev === 0xc2 || (prev >= 0x90 && prev <= 0x9f)) {
				if ((b[k] === 0x55 && b[k + 1] === 0x8b && b[k + 2] === 0xec) ||
					(b[k] === 0x55 && b[k + 1] === 0x89 && b[k + 2] === 0xe5) ||
					(b[k] === 0x83 && b[k + 1] === 0xec) ||
					(b[k] === 0x8b && b[k + 1] === 0xff && b[k + 2] === 0x55) ||
					(b[k] === 0x56 && b[k + 1] === 0x57)) { entry = imgbase + text.vaddr + (k - text.rptr); break; }
			}
		}
		console.log("   the reference at 0x" + va.toString(16) + " the opcode 0x" + op.toString(16) +
			" the function " + (entry !== null ? "0x" + entry.toString(16) : "?"));
		o = j + 1;
	}
}
