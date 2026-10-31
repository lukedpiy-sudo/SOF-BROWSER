/* ghoul2.js - a careful look at the Ghoul .ghb container.
 *
 * Header (observed): "FE 37" + three u32 + the authoring path + the frame
 * names.  This dumps the header and then hunts for the mesh tables.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);

function hexdump(off, len) {
	const out = [];
	for (let i = 0; i < len; i += 16) {
		const chunk = b.subarray(off + i, off + i + 16);
		const h = Array.from(chunk).map(x => x.toString(16).padStart(2, "0")).join(" ");
		const a = Array.from(chunk).map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join("");
		out.push((off + i).toString(16).padStart(6, "0") + "  " + h.padEnd(47) + "  " + a);
	}
	return out.join("\n");
}
console.log("size " + b.length);
console.log(hexdump(0, 0x60));

const u32 = (o) => b.readUInt32LE(o);
console.log("u32 at 2,6,10,14,18,22,26: " + [2, 6, 10, 14, 18, 22, 26].map(u32).join(" "));

/* the authoring path: a NUL terminated string after the header */
let p = 30;
while (b[p] !== 0 && p < 0x200) p++;
const path = b.toString("latin1", 30, p);
console.log("path @" + 30 + ": " + JSON.stringify(path) + " (ends " + p + ")");
p++;

/* what follows the path */
console.log(hexdump(p, 0x40));

/* the frame names: a list of NUL terminated strings */
const names = [];
let q = p;
while (q < b.length) {
	const s = q;
	while (q < b.length && b[q] !== 0) q++;
	if (q === s) { q++; break; }
	names.push(b.toString("latin1", s, q));
	q++;
}
console.log("frame names: " + names.length + " (first " + names.slice(0, 5).join(", ") + ")");
console.log("the names end at " + q + " -> 0x" + q.toString(16));
console.log(hexdump(q, 0x60));
