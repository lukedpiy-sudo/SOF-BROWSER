/* bspcvar2.js - find the engine's cvar structs and read their defaults.
 *   node bspcvar2.js <SoF.exe> <nameVA> [<nameVA> ...]
 *
 * The cvar name strings are in .rdata; the cvar_t structs live in .data and
 * point at them.  The struct is searched by its name pointer.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/q2work/sof2/sof_target/SoF.exe";
const b = fs.readFileSync(file);
const e_lfanew = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(e_lfanew + 6);
const optsz = b.readUInt16LE(e_lfanew + 20);
const imageBase = b.readUInt32LE(e_lfanew + 0x34);
const secoff = e_lfanew + 24 + optsz;
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({
		name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""),
		vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8),
		rawptr: b.readUInt32LE(o + 20), rawsize: b.readUInt16LE(o + 16)
	});
}
function fo(va) {
	for (const s of secs) {
		if (va >= imageBase + s.vaddr && va < imageBase + s.vaddr + Math.max(s.vsize, s.rawsize))
			return s.rawptr + (va - (imageBase + s.vaddr));
	}
	return null;
}
function str(va) {
	const o = fo(va);
	if (o === null) return null;
	let z = o; while (z < b.length && b[z] !== 0) z++;
	return b.toString("latin1", o, z);
}
for (let a = 3; a < process.argv.length; a++) {
	const nameVA = Number(process.argv[a]);
	const pat = Buffer.alloc(4); pat.writeUInt32LE(nameVA, 0);
	let pos = 0, hits = 0;
	while (hits < 4) {
		const i = b.indexOf(pat, pos);
		if (i < 0) break;
		pos = i + 1; hits++;
		/* the struct: the name pointer is at +0, the string at +4, the flags
		 * at +8, the value at +12, the next at +16 (or the value at +12 and
		 * the next at +16) */
		const name = str(b.readUInt32LE(i));
		const sv = str(b.readUInt32LE(i + 4));
		const f1 = b.readFloatLE(i + 8), f2 = b.readFloatLE(i + 12), f3 = b.readFloatLE(i + 16);
		const i1 = b.readInt32LE(i + 8), i2 = b.readInt32LE(i + 12), i3 = b.readInt32LE(i + 16);
		console.log("0x" + nameVA.toString(16) + " at file 0x" + i.toString(16) +
			" (VA 0x" + (imageBase + 0).toString(16) + "+)  the name: " + name);
		console.log("    +4 the string: " + JSON.stringify(sv) +
			"   +8: " + f1 + " (0x" + (i1 >>> 0).toString(16) + ")" +
			"   +12: " + f2 + " (0x" + (i2 >>> 0).toString(16) + ")" +
			"   +16: " + f3 + " (0x" + (i3 >>> 0).toString(16) + ")");
	}
}
