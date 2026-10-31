/*
 * ghbvt4.js - find the code that references the Ghoul subsystem global
 * (DAT_204036a0) so the class vtable can be located.
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
const text = secs.find(s => s.name === ".text");
const TARGETS = [0x204036a0, 0x20403878, 0x20403a48];
for (const t of TARGETS) {
	const pat = Buffer.alloc(4);
	pat.writeUInt32LE(t);
	let o = text.rptr, hits = [];
	while (true) {
		const i = b.indexOf(pat, o);
		if (i < 0 || i >= text.rptr + text.rsize) break;
		hits.push(imgbase + text.vaddr + (i - text.rptr));
		o = i + 1;
	}
	console.log("the global 0x" + t.toString(16) + " is referenced at: " + hits.map(h => "0x" + h.toString(16)).join(", "));
}
