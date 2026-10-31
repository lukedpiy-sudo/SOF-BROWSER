/* ghbdump.js - hexdump a region of a file. */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const from = parseInt(process.argv[3], 16);
const to = parseInt(process.argv[4], 16);
const b = fs.readFileSync(file);
for (let i = from; i < to; i += 16) {
	const c = b.subarray(i, i + 16);
	const h = Array.from(c).map(x => x.toString(16).padStart(2, "0")).join(" ");
	const a = Array.from(c).map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join("");
	console.log(i.toString(16).padStart(6, "0") + "  " + h.padEnd(47) + "  " + a);
}
