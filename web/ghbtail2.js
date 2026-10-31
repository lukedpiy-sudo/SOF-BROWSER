/* ghbtail2.js - the block 1 tail of the weapon model: the bone hierarchy and
 * whatever references the geometry.  It is only ~11 KB, so it can be read. */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
let p = g.end;
const end = g.block2Offset;
console.log("the block 1 tail: 0x" + p.toString(16) + " .. 0x" + end.toString(16) +
	" (" + (end - p) + " bytes)");

/* hexdump the first 512 bytes */
for (let i = 0; i < 512 && p + i < end; i += 16) {
	const c = buf.subarray(p + i, p + i + 16);
	console.log("  " + (p + i).toString(16).padStart(6, "0") + "  " +
		c.toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		c.toString("latin1").replace(/[^ -~]/g, "."));
}
/* the u32s and the floats of the first 64 bytes */
console.log("u32s:");
for (let i = 0; i < 32; i++) {
	const v = buf.readUInt32LE(p + i * 4);
	const f = buf.readFloatLE(p + i * 4);
	console.log("  +" + (i * 4).toString(16).padStart(3, "0") + "  " + String(v).padStart(11) + "  0x" +
		v.toString(16).padStart(8, "0") + "  " + f.toFixed(4));
}
