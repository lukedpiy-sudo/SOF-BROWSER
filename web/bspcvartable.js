/* bspcvartable.js - read the engine's cvar table (the {name, default} pairs)
 * and look for the sky box geometry in the binary.
 *   node bspcvartable.js <SoF.exe> [from] [count]
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
const from = Number(process.argv[3] || 0x2011d300);
const count = parseInt(process.argv[4] || "40", 10);
console.log("the cvar table at 0x" + from.toString(16) + ":");
for (let i = 0; i < count; i++) {
	const va = from + i * 8;
	const o = fo(va);
	if (o === null) { console.log("  (out of the sections)"); break; }
	const name = str(b.readUInt32LE(o));
	const dv = str(b.readUInt32LE(o + 4));
	if (name === null && dv === null) { console.log("  0x" + va.toString(16) + " (not a pair)"); break; }
	console.log("  0x" + va.toString(16) + "  " + String(name).padEnd(24) + " the default: " + JSON.stringify(dv));
}

/* the sky box: 24 vertices of 3 floats, every float exactly +-1 */
console.log("\nthe sky box (a run of +-1 floats):");
for (let o = 0; o + 288 <= b.length; o += 4) {
	let ok = true, seen = 0;
	for (let i = 0; i < 72; i++) {
		const f = b.readFloatLE(o + i * 4);
		if (f !== 1 && f !== -1) { ok = false; break; }
		seen++;
	}
	if (ok && seen === 72) {
		/* the 6 groups of 4 vertices */
		const s = [];
		for (let g = 0; g < 6; g++) {
			const v = [];
			for (let k = 0; k < 4; k++) {
				v.push([b.readFloatLE(o + (g * 4 + k) * 12), b.readFloatLE(o + (g * 4 + k) * 12 + 4), b.readFloatLE(o + (g * 4 + k) * 12 + 8)]);
			}
			s.push(v);
		}
		console.log("  at file 0x" + o.toString(16) + ":");
		for (let g = 0; g < 6; g++) console.log("    face " + g + ": " + s[g].map(v => v.join(",")).join("  "));
	}
}
