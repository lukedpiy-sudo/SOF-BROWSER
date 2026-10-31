/*
 * ghbfind.js - find the function that contains an address, using the
 * engine's function inventory (analysis/sof_funcs.txt).
 *
 *   node ghbfind.js <file> <addr> [<addr> ...]
 */
"use strict";
const fs = require("fs");
const list = process.argv[2];
const funcs = [];
for (const line of fs.readFileSync(list, "utf8").split(/\r?\n/)) {
	const m = line.match(/^FUNC\s+([0-9a-f]+)\s+(\d+)\s+(\S+)/i);
	if (m) funcs.push({ addr: parseInt(m[1], 16), size: parseInt(m[2], 10), name: m[3] });
}
funcs.sort((a, b) => a.addr - b.addr);
console.log("the functions: " + funcs.length);
for (let i = 3; i < process.argv.length; i++) {
	const a = parseInt(process.argv[i], 16);
	let best = null;
	for (const f of funcs) {
		if (f.addr <= a && a < f.addr + f.size) { best = f; break; }
	}
	console.log("  0x" + a.toString(16) + " -> " + (best ? best.name + " (0x" + best.addr.toString(16) + " +" + (a - best.addr) + ")" : "none"));
}
