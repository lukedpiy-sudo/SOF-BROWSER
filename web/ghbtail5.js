/* ghbtail5.js - a hexdump of the tail region with the floats.
 *
 *   node ghbtail5.js <file.ghb> <tailOffset> <count>
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const from = parseInt(process.argv[3] || "0x1b00");
const count = parseInt(process.argv[4] || "256");
console.log(file + "  the tail starts at 0x" + t.toString(16));
for (let i = 0; i < count; i += 4) {
	const o = t + from + i;
	const u = buf.readUInt32LE(o);
	const f = buf.readFloatLE(o);
	const b = buf.subarray(o, o + 4).toString("hex");
	console.log("  +" + (from + i).toString(16).padStart(5, "0") + "  " + b + "  u32 " +
		String(u).padStart(11) + "  f32 " + f.toFixed(5).padStart(13));
}
