/* bspscan.js - search a binary for an ASCII needle (no node -e quoting issues).
 *   node bspscan.js <file> <needle> [needle...]
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const needles = process.argv.slice(3);
const b = fs.readFileSync(file);
console.log(file, b.length, "bytes");
for (const n of needles) {
	const pat = Buffer.from(n, "latin1");
	let pos = 0, hits = [];
	while (true) {
		const i = b.indexOf(pat, pos);
		if (i < 0) break;
		hits.push(i);
		pos = i + 1;
		if (hits.length > 40) { hits.push("..."); break; }
	}
	console.log("  " + JSON.stringify(n) + " -> " + hits.length + " hit(s): " +
		hits.slice(0, 40).map(x => "0x" + x.toString(16)).join(" "));
}
