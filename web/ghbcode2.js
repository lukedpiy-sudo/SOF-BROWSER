/* ghbcode2.js - search the binaries for the constants of the Ghoul geometry
 * (the 43 byte vertex record, the 256 shift of the index table).
 *
 *   node ghbcode2.js
 */
"use strict";
const fs = require("fs");

const files = [
	["C:/Users/User/Soldier of Fortune/Base/gamex86.dll", 0x50000000],
	["C:/Users/User/Soldier of Fortune/SoF.exe", 0x20000000]
];
for (const [f, base] of files) {
	if (!fs.existsSync(f)) { console.log("missing " + f); continue; }
	const b = fs.readFileSync(f);
	const pe = b.readUInt32LE(0x3c);
	const nsec = b.readUInt16LE(pe + 6);
	const opt = pe + 24;
	const imgbase = b.readUInt32LE(opt + 28);
	const secoff = opt + b.readUInt16LE(pe + 20);
	console.log("== " + f + " (the image base 0x" + imgbase.toString(16) + ", " + b.length + " bytes)");
	for (let s = 0; s < nsec; s++) {
		const o = secoff + s * 40;
		const name = b.toString("latin1", o, o + 8).replace(/\0.*$/, "");
		const vaddr = b.readUInt32LE(o + 12);
		const rsize = b.readUInt32LE(o + 16);
		const rptr = b.readUInt32LE(o + 20);
		if (name !== ".text") continue;
		const start = imgbase + vaddr;
		/* the immediates: 43 (the record size) and 256 (the index shift) */
		const hits = [];
		for (let i = 0; i + 6 <= rsize; i++) {
			const op = b[rptr + i];
			const d = b[rptr + i + 1];
			if (op === 0x3d && b.readUInt32LE(rptr + i + 1) === 43) hits.push([i, "cmp eax,43"]);
			if (op === 0xb8 && b.readUInt32LE(rptr + i + 1) === 43) hits.push([i, "mov r32,43"]);
			if (op === 0x83 && d >= 0xc0 && b[rptr + i + 2] === 43) hits.push([i, "add r32,43"]);
			if (op === 0x81 && b.readUInt32LE(rptr + i + 2) === 43) hits.push([i, "op r/m32,43"]);
			if (op === 0x6b && b[rptr + i + 2] === 43) hits.push([i, "imul r32,r/m32,43"]);
			if (op === 0x69 && b.readUInt32LE(rptr + i + 2) === 43) hits.push([i, "imul r32,r/m32,43 (32)"]);
			if (op === 0xc7 && b.readUInt32LE(rptr + i + 1) === 43) hits.push([i, "mov r/m32,43"]);
		}
		console.log("   the 43 byte record: " + hits.length + " candidates");
		for (const h of hits) console.log("     0x" + (start + h[0]).toString(16) + "  " + h[1]);
	}
}
