/* ghoulparse.js - a structural parser for the Ghoul .ghb container.
 *
 * The header (little endian):
 *   +0x00 u16  magic 0x37fe
 *   +0x02 u16  ?
 *   +0x04 u16  ?
 *   +0x06 u16  ?
 *   +0x08 u32  the size of the data that follows the header
 *   +0x0C u32  ?
 *   +0x10 u32  the number of animation frames
 *   +0x14 u32  ?
 *   +0x18 u32  the length of the authoring path
 *   +0x1C      the authoring path (NUL terminated)
 *
 * The animation frame names follow as a sequence of
 *   "HC" + u32 nameLength + the name
 * and the mesh data follows the names.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);

console.log("size " + b.length);
console.log("magic 0x" + b.readUInt16LE(0).toString(16));
console.log("+0x02 u16 " + b.readUInt16LE(2));
console.log("+0x04 u16 " + b.readUInt16LE(4));
console.log("+0x06 u16 " + b.readUInt16LE(6));
const dataSize = b.readUInt32LE(8);
console.log("+0x08 u32 " + dataSize + "  (the file is " + b.length + ")");
console.log("+0x0C u32 " + b.readUInt32LE(12) + "  0x" + b.readUInt32LE(12).toString(16));
const frames = b.readUInt32LE(16);
console.log("+0x10 u32 " + frames);
console.log("+0x14 u32 " + b.readUInt32LE(20));
const pathLen = b.readUInt32LE(24);
console.log("+0x18 u32 " + pathLen + "  (the path length)");
let p = 28;
const path = b.toString("latin1", p, p + pathLen);
console.log("+0x1C    " + JSON.stringify(path));
p += pathLen;
/* the path is NUL terminated */
while (p < b.length && b[p] !== 0) p++;
p++;
console.log("the path ends at 0x" + p.toString(16));

/* the frame names */
const names = [];
for (let i = 0; i < frames; i++) {
	if (b[p] !== 0x48 || b[p + 1] !== 0x43) {
		console.log("  expected HC at 0x" + p.toString(16) + ", found " +
			b.toString("hex", p, p + 4));
		break;
	}
	p += 2;
	const len = b.readUInt32LE(p);
	p += 4;
	names.push(b.toString("latin1", p, p + len));
	p += len;
	/* the name is NUL terminated */
	while (p < b.length && b[p] !== 0) p++;
	p++;
	/* a record of extra data follows the name */
	const extra = b.readUInt32LE(p);
	console.log("  frame " + i + ": " + names[i] + "  (len " + len + ", extra " + extra + ")");
	p += 4;
	/* the extra block: it starts with a count and then that many u32 */
	const n = b.readUInt32LE(p);
	p += 4;
	p += n * 4;
}
console.log("the names end at 0x" + p.toString(16) + " (" + names.length + " frames)");
console.log("remaining " + (b.length - p) + " bytes");
console.log("next bytes:");
let h = "";
for (let i = 0; i < 96; i++) h += b[p + i].toString(16).padStart(2, "0") + " ";
console.log("  " + h);
const ints = [];
for (let i = 0; i < 14; i++) ints.push(b.readUInt32LE(p + i * 4));
console.log("  u32s: " + ints.join(" "));
