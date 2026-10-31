/*
 * ghbapi2b.js - the code that references a few engine globals.
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
function toRva(fo) {
	for (const s of secs) if (fo >= s.rptr && fo < s.rptr + s.rsize) return imgbase + s.vaddr + (fo - s.rptr);
	return 0;
}
const text = secs.find(s => s.name === ".text");
const targets = [0x20403c14, 0x20403c18, 0x20403c10, 0x204036a0];
for (const t of targets) {
	const p = Buffer.alloc(4);
	p.writeUInt32LE(t);
	let o = text.rptr; const out = [];
	while (true) {
		const i = b.indexOf(p, o);
		if (i < 0 || i >= text.rptr + text.rsize) break;
		out.push("0x" + toRva(i).toString(16) + " (the opcode 0x" + b[i - 1].toString(16) + ")");
		o = i + 1;
	}
	console.log("=== 0x" + t.toString(16) + ": " + out.length + " " + out.join(", "));
}
