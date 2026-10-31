/*
 * ghbfov.js - look for the FOV cvars and the view model strings in the
 * engine.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
for (const n of ["fov", "FOV", "viewmodel", "view_model", "gun", "weaponmodel", "bob", "sway"]) {
	let p = 0, hits = [];
	while (true) {
		const i = b.indexOf(n, p);
		if (i < 0) break;
		hits.push(i);
		p = i + 1;
	}
	console.log("the needle " + n + ": " + hits.length);
}
/* the printable strings that contain "fov" */
const s = b.toString("latin1");
const re = /[\x20-\x7e]{4,}/g;
let m, out = [];
while ((m = re.exec(s)) !== null) {
	if (/fov/i.test(m[0])) out.push("0x" + m.index.toString(16) + "  " + m[0].slice(0, 80));
}
console.log("the strings with fov: " + out.length);
for (const o of out.slice(0, 40)) console.log("  " + o);
