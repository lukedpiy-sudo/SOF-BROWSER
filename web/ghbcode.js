/* ghbcode.js - search the engine binaries for the code that handles a
 * 43 byte record (0x2b).
 */
"use strict";
const fs = require("fs");

const files = [
	"C:/Users/User/Soldier of Fortune/SoF.exe",
	"C:/Users/User/Soldier of Fortune/Base/ref_gl.dll"
];
for (const f of files) {
	if (!fs.existsSync(f)) { console.log("missing " + f); continue; }
	const b = fs.readFileSync(f);
	/* the PE sections */
	const pe = b.readUInt32LE(0x3c);
	const nsec = b.readUInt16LE(pe + 6);
	const opt = pe + 24;
	const imgbase = b.readUInt32LE(opt + 28);
	const secoff = opt + b.readUInt16LE(pe + 20);
	console.log("== " + f + " (" + b.length + " bytes, the image base 0x" + imgbase.toString(16) + ")");
	const pats = [
		["add r32, 0x2b", [0x83]],
		["imul r32, r/m32, 0x2b", [0x6b]],
		["imul r32, r/m32, 0x2b (imm32)", [0x69]],
		["mov r32, 0x2b", [0xb8]],
		["cmp r/m32, 0x2b", [0x81]],
		["sub r32, 0x2b", [0x83]]
	];
	for (const sec of Array.from({ length: nsec }, (_, i) => i)) {
		const o = secoff + sec * 40;
		const name = b.toString("latin1", o, o + 8).replace(/\0.*$/, "");
		const vsize = b.readUInt32LE(o + 8);
		const vaddr = b.readUInt32LE(o + 12);
		const rsize = b.readUInt32LE(o + 16);
		const rptr = b.readUInt32LE(o + 20);
		if (!name.includes("text")) continue;
		console.log("  the section " + name + " at 0x" + (imgbase + vaddr).toString(16) + " (" + rsize + " bytes)");
		const hits = [];
		for (let i = 0; i < rsize - 6; i++) {
			const op = b[rptr + i];
			for (const [label, ops] of pats) {
				if (ops.indexOf(op) < 0) continue;
				let hit = false;
				if (op === 0x83 && b[rptr + i + 2] === 0x2b) hit = true;
				if (op === 0x6b && b[rptr + i + 2] === 0x2b) hit = true;
				if (op === 0x69 && b.readUInt32LE(rptr + i + 2) === 0x2b) hit = true;
				if (op === 0xb8 && b.readUInt32LE(rptr + i + 1) === 0x2b) hit = true;
				if (op === 0x81 && b.readUInt32LE(rptr + i + 2) === 0x2b) hit = true;
				if (hit) hits.push([label, i]);
			}
		}
		const ghoul = hits.filter(h => h[1] >= 0x8f000 && h[1] < 0xea000);
		console.log("    the hits for 0x2b: " + hits.length + ", in the Ghoul range (0x8f000-0xea000): " + ghoul.length);
		for (const h of ghoul) console.log("      " + h[0] + " at 0x" + (imgbase + vaddr + h[1]).toString(16));
	}
}
