/* bspcvar.js - read the engine's cvar table (name, string, value).
 *   node bspcvar.js <SoF.exe> [firstVA] [count]
 *
 * The cvar strings are stored with a 12 byte stride (the name pointer, the
 * string pointer and the float value), so a table of cvars can be read
 * straight out of the binary.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/q2work/sof2/sof_target/SoF.exe";
const first = Number(process.argv[3] || 0x2011d41c);
const count = parseInt(process.argv[4] || "40", 10);
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
console.log("the cvar table at 0x" + first.toString(16) + ", the stride 12:");
for (let i = 0; i < count; i++) {
	const va = first + i * 12;
	const name = str(b.readUInt32LE(fo(va)));
	const sp = b.readUInt32LE(fo(va) + 4);
	const sv = str(sp);
	const fv = b.readFloatLE(fo(va) + 8);
	const iv = b.readInt32LE(fo(va) + 8);
	console.log("  0x" + va.toString(16) + "  " + String(name).padEnd(22) +
		" the string: " + String(sv === null ? "(null)" : JSON.stringify(sv)).padEnd(18) +
		" the value: " + fv + "  (0x" + (iv >>> 0).toString(16) + ")");
}
