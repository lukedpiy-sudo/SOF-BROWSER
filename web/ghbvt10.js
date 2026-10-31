/*
 * ghbvt10.js - find the Ghoul subsystem's vtable in SoF.exe's .rdata: a run
 * of at least 18 code pointers whose +0x40 entry is a Ghoul function.
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
const textLo = imgbase + text.vaddr, textHi = textLo + text.vsize;
const inText = v => v >= textLo && v < textHi;
for (const s of secs) {
	if (s.name !== ".rdata" && s.name !== ".data") continue;
	for (let o = s.rptr; o + 0x48 < s.rptr + s.rsize; o += 4) {
		let n = 0;
		while (o + n * 4 + 4 <= s.rptr + s.rsize && inText(b.readUInt32LE(o + n * 4))) n++;
		if (n < 18) continue;
		const at40 = b.readUInt32LE(o + 0x40);
		const at44 = b.readUInt32LE(o + 0x44);
		/* the Ghoul subsystem: the compress and the lookup are near the
		 * other Ghoul functions */
		const near = v => v >= 0x2008d000 && v < 0x20092000;
		if (!near(at40) || !near(at44)) continue;
		console.log("the vtable at the file offset 0x" + o.toString(16) + " with " + n + " entries" +
			" +0x40 = 0x" + at40.toString(16) + " +0x44 = 0x" + at44.toString(16));
		for (let k = 0; k < Math.min(n, 20); k++) {
			console.log("   +0x" + (k * 4).toString(16) + " 0x" + b.readUInt32LE(o + k * 4).toString(16));
		}
	}
}
