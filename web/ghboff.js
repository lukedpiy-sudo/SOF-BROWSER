/* ghboff.js - look at the block 2 at the offsets the vertex records point at.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const offs = process.argv.slice(3).map(x => parseInt(x));
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const b2 = g.block2Offset;
console.log(file.replace(/^.*[\\/]/, "") + ": block 2 at 0x" + b2.toString(16));
for (const off of offs) {
	const o = b2 + off;
	console.log("  +0x" + off.toString(16) + " (the absolute 0x" + o.toString(16) + "): " +
		buf.subarray(o, o + 32).toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		buf.subarray(o, o + 32).toString("latin1").replace(/[^ -~]/g, "."));
	const u16 = [];
	for (let i = 0; i < 16; i++) u16.push(buf.readUInt16LE(o + i * 2));
	console.log("      the u16s: " + u16.join(" "));
}
