/* bspstr.js - print the printable strings of a binary around a byte offset.
 *   node bspstr.js <file> <offset> [radius]
 * and/or
 *   node bspstr.js <file> --strings <minlen> [filter]
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const b = fs.readFileSync(file);
if (process.argv[3] === "--strings") {
	const minLen = parseInt(process.argv[4] || "6", 10);
	const filter = (process.argv[5] || "").toLowerCase();
	const s = b.toString("latin1");
	const re = new RegExp("[\\x20-\\x7e]{" + minLen + ",}", "g");
	let m, out = [];
	while ((m = re.exec(s)) !== null) {
		if (filter && m[0].toLowerCase().indexOf(filter) < 0) continue;
		out.push("0x" + m.index.toString(16) + "  " + m[0].slice(0, 160));
	}
	console.log(out.join("\n"));
	console.log("(" + out.length + " strings)");
} else {
	const off = Number(process.argv[3]);
	const rad = Number(process.argv[4] || "96");
	const s = b.toString("latin1", Math.max(0, off - rad), off + rad);
	console.log("0x" + (Math.max(0, off - rad)).toString(16) + ": " +
		JSON.stringify(s).replace(/\\u0000/g, "\\0"));
}
