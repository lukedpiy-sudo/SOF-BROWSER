/*
 * ghbvt7.js - look for a table of the INVIEW string table indices (u16 or
 * u32) anywhere in the engine.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
const table = JSON.parse(fs.readFileSync("C:/Users/User/q2work/sof2/web/www/sofstringtable.json", "utf8")).names;
const inview = new Set();
for (let i = 0; i < table.length; i++) if (/INVIEW/i.test(table[i] || "")) inview.add(i);
/* also the .GHB only */
const ghb = new Set();
for (let i = 0; i < table.length; i++) if (/INVIEW\/.*\.GHB$/i.test(table[i] || "")) ghb.add(i);
for (const [name, set, width] of [["u32", inview, 4], ["u16", inview, 2], ["u32ghb", ghb, 4], ["u16ghb", ghb, 2]]) {
	let runs = [];
	let i = 0;
	while (i + width <= b.length) {
		const v = width === 4 ? b.readUInt32LE(i) : b.readUInt16LE(i);
		if (set.has(v)) {
			const start = i; let n = 0;
			while (i + width <= b.length) {
				const w = width === 4 ? b.readUInt32LE(i) : b.readUInt16LE(i);
				if (!set.has(w)) break;
				n++; i += width;
			}
			if (n >= 3) runs.push([start, n]);
		} else i++;
	}
	console.log("=== the " + name + " runs: " + runs.length);
	for (const [s, n] of runs.slice(0, 10)) {
		console.log("  the file offset 0x" + s.toString(16) + " with " + n + " entries:");
		for (let k = 0; k < n; k++) {
			const v = width === 4 ? b.readUInt32LE(s + k * width) : b.readUInt16LE(s + k * width);
			console.log("     +" + (k * width) + "  " + v + "  " + (table[v] || "?"));
		}
	}
}
