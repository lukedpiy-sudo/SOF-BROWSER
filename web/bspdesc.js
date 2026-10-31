/* bspdesc.js - read the SoF engine's BSP lump descriptor table out of SoF.exe.
 *
 *   node bspdesc.js <SoF.exe> [imagebase]
 *
 * The engine keeps a 22 entry table of 44 byte (0x2c) lump descriptors at
 * VA 0x2011f938 (file offset 0x11f938 in the shipped SoF.exe).  Each record
 * is:
 *
 *   +0x00 dword  loaded data pointer (0 = not loaded yet)
 *   +0x04 dword  (unused)
 *   +0x08 dword  entry count after loading
 *   +0x0c dword  minimum entry count ("lump %s too small")
 *   +0x10 dword  maximum entry count ("lump %s has too many entries")
 *   +0x14 dword  base/first element index
 *   +0x18 dword  pointer to the "LUMP_XXX" name string
 *   +0x1c dword  on-disk element size (the divisor of the lump length)
 *   +0x20 dword  in-memory element size (the multiplier)
 *   +0x24 dword  (unused)
 *   +0x28 byte   loaded flag
 *   +0x29 byte   per-lump checksum byte
 *   +0x2a..2b    padding
 */
"use strict";
const fs = require("fs");
const path = require("path");

const file = process.argv[2] || "C:/Users/User/Soldier of Fortune/SoF.exe";
const b = fs.readFileSync(file);

/* --- the PE section table (so we can translate file offset <-> VA) ------ */
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
		rawptr: b.readUInt32LE(o + 20), rawsize: b.readUInt32LE(o + 16)
	});
}
function vaToFile(va) {
	for (const s of secs) {
		if (va >= imageBase + s.vaddr && va < imageBase + s.vaddr + Math.max(s.vsize, s.rawsize))
			return s.rawptr + (va - (imageBase + s.vaddr));
	}
	return null;
}
function fileToVa(fo) {
	for (const s of secs) {
		if (fo >= s.rawptr && fo < s.rawptr + s.rawsize)
			return imageBase + s.vaddr + (fo - s.rawptr);
	}
	return null;
}
function cstr(fo) {
	let z = fo;
	while (z < b.length && b[z] !== 0) z++;
	return b.toString("latin1", fo, z);
}

const DESC_VA = 0x2011f938;
const DESC_FILE = vaToFile(DESC_VA);
const STRIDE = 0x2c;
const N = 22;

console.log("SoF.exe lump descriptor table at VA 0x" + DESC_VA.toString(16) +
	" (file 0x" + DESC_FILE.toString(16) + "), " + N + " x " + STRIDE + " bytes\n");
console.log("idx name              data-ptr  count  min   max   base  elemDisk elemMem  chk");
const out = [];
for (let i = 0; i < N; i++) {
	const o = DESC_FILE + i * STRIDE;
	const data = b.readUInt32LE(o);
	const count = b.readUInt32LE(o + 8);
	const min = b.readUInt32LE(o + 0x0c);
	const max = b.readUInt32LE(o + 0x10);
	const base = b.readUInt32LE(o + 0x14);
	const namePtr = b.readUInt32LE(o + 0x18);
	const elemDisk = b.readInt32LE(o + 0x1c);
	const elemMem = b.readInt32LE(o + 0x20);
	const chk = b[o + 0x29];
	const nameFo = vaToFile(namePtr);
	const name = nameFo === null ? "?" : cstr(nameFo);
	out.push({ i, name, elemDisk, elemMem, min, max, base, chk });
	console.log(String(i).padStart(3) + " " + name.padEnd(18) +
		" 0x" + data.toString(16).padEnd(8) +
		String(count).padStart(6) + String(min).padStart(6) + String(max).padStart(6) +
		String(base).padStart(6) +
		String(elemDisk).padStart(9) + String(elemMem).padStart(8) +
		"  0x" + chk.toString(16).padEnd(4, "0"));
}
console.log("\n(the element sizes are the engine's own divisors/multipliers)");
if (process.argv[3] === "--json") {
	fs.writeFileSync(process.argv[4] || "lump_descs.json", JSON.stringify(out, null, 1));
	console.log("wrote json");
}
