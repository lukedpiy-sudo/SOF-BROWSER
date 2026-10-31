/* ghoulscan.js - explore the Ghoul .ghb container.
 *
 * The header is: [FE 37][u32 ?][u32 ?][u32 payload size][authoring path]
 * followed by a list of null terminated animation frame names.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);

console.log("size", b.length);
console.log("magic", b.subarray(0, 2).toString("hex"));
const a = b.readUInt32LE(2), c = b.readUInt32LE(6), sz = b.readUInt32LE(10);
console.log("field1", a, "field2", c, "payload", sz, "rest", b.length - 14 - sz);

/* the authoring path */
let p = 14;
while (b[p] !== 0) p++;
const path = b.toString("latin1", 14, p);
console.log("path", JSON.stringify(path), "at", 14, "-", p);
p++;

/* the frame names */
const names = [];
while (p < b.length) {
	const start = p;
	while (p < b.length && b[p] !== 0) p++;
	if (p === start) { p++; break; }   /* the list ends with an empty string */
	names.push(b.toString("latin1", start, p));
	p++;
}
console.log("frame names:", names.length, "first:", names.slice(0, 4).join(", "));
console.log("data starts at", p, "remaining", b.length - p);
console.log("next bytes:", b.subarray(p, p + 96).toString("hex").replace(/(.{32})/g, "$1\n"));
const ints = [];
for (let i = 0; i < 16; i++) ints.push(b.readUInt32LE(p + i * 4));
console.log("u32s:", ints.join(" "));
const fl = [];
for (let i = 0; i < 16; i++) fl.push(b.readFloatLE(p + i * 4).toFixed(3));
console.log("f32s:", fl.join(" "));
