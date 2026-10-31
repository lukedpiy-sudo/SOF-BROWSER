/*
 * ghbinview2.js - dump the INVIEW string block of SoF.exe.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
let p = 0x1278e0, n = 0;
const out = [];
while (p < 0x1278e0 + 0x8000 && n < 400) {
	let e = b.indexOf(0, p);
	if (e < 0) break;
	const s = b.toString("latin1", p, e);
	let ok = s.length > 0;
	for (let i = 0; i < s.length; i++) {
		const c = s.charCodeAt(i);
		if (c < 32 || c > 126) { ok = false; break; }
	}
	if (!ok) { out.push("stop at 0x" + p.toString(16) + " the bytes " + s.slice(0, 24)); break; }
	out.push("0x" + p.toString(16) + "  " + s);
	n++;
	p = e + 1;
}
console.log(out.join("\n"));
console.log("the strings: " + n);
