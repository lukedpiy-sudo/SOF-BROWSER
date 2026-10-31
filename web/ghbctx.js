/*
 * ghbctx.js - print the context of the string hits in a binary.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]).toString("latin1").toLowerCase();
for (const n of process.argv.slice(3)) {
	let p = 0, i = 0;
	while (true) {
		const j = b.indexOf(n, p);
		if (j < 0) break;
		i++;
		const s = Math.max(0, j - 80), e = Math.min(b.length, j + 120);
		const ctx = b.slice(s, e).replace(/[^\x20-\x7e]/g, ".");
		console.log("  [" + i + "] 0x" + j.toString(16) + ": ..." + ctx + "...");
		p = j + 1;
	}
	console.log("--- the needle \"" + n + "\": " + i + " hits");
}
