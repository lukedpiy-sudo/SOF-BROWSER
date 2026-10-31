/*
 * ghbcode3.js - find the code that handles the svc 0x1A service in SoF.exe.
 *
 *   node ghbcode3.js
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
const pe = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(pe + 6);
const opt = pe + 24;
const imgbase = b.readUInt32LE(opt + 28);
const secoff = opt + b.readUInt16LE(pe + 20);
const pats = [
	["cmp eax, 0x1a", [0x3d, 0x1a, 0x00, 0x00, 0x00]],
	["cmp al, 0x1a", [0x3c, 0x1a]],
	["cmp ecx, 0x1a", [0x81, 0xf9, 0x1a, 0x00, 0x00, 0x00]],
	["cmp [mem], 0x1a", [0x83, 0x3d, 0x1a]],
	["sub eax, 0x1a", [0x83, 0xe8, 0x1a]],
	["mov eax, 0x1a", [0xb8, 0x1a, 0x00, 0x00, 0x00]],
	["push 0x1a", [0x6a, 0x1a]]
];
for (let s = 0; s < nsec; s++) {
	const o = secoff + s * 40;
	const name = b.toString("latin1", o, o + 8).replace(/\0.*$/, "");
	const vaddr = b.readUInt32LE(o + 12);
	const rsize = b.readUInt32LE(o + 16);
	const rptr = b.readUInt32LE(o + 20);
	if (name !== ".text") continue;
	console.log("the section " + name + " at 0x" + (imgbase + vaddr).toString(16));
	for (const [label, pat] of pats) {
		const hits = [];
		for (let i = 0; i + pat.length <= rsize; i++) {
			let ok = true;
			for (let k = 0; k < pat.length; k++) if (b[rptr + i + k] !== pat[k]) { ok = false; break; }
			if (ok) hits.push((imgbase + vaddr + i).toString(16));
		}
		if (hits.length) console.log("  " + label + ": " + hits.length + " -> " + hits.slice(0, 12).join(", "));
	}
}
