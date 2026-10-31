/*
 * ghbinview8.js - look for the INVIEW string table indices in the game
 * module (the module's client code draws the view model).
 */
"use strict";
const fs = require("fs");
function scan(file) {
	const b = fs.readFileSync(file);
	const table = JSON.parse(fs.readFileSync("C:/Users/User/q2work/sof2/web/www/sofstringtable.json", "utf8")).names;
	const idx = [];
	for (let i = 0; i < table.length; i++) if (/INVIEW/i.test(table[i] || "")) idx.push(i);
	console.log("=== " + file);
	for (const i of idx) {
		const p4 = Buffer.alloc(4); p4.writeUInt32LE(i);
		const p2 = Buffer.alloc(2); p2.writeUInt16LE(i);
		let o = 0, h4 = [], h2 = [];
		while (true) { const j = b.indexOf(p4, o); if (j < 0) break; h4.push(j); o = j + 1; }
		o = 0;
		while (true) { const j = b.indexOf(p2, o); if (j < 0) break; h2.push(j); o = j + 1; }
		if (h4.length || h2.length) {
			console.log("  the index " + i + " (" + table[i].split("/").pop() + "): the u32 hits " + h4.length +
				" " + h4.slice(0, 6).map(x => "0x" + x.toString(16)).join(",") +
				" | the u16 hits " + h2.length + " " + h2.slice(0, 6).map(x => "0x" + x.toString(16)).join(","));
		}
	}
}
scan("C:/Users/User/Soldier of Fortune/Base/gamex86.dll");
