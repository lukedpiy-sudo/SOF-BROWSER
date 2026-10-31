// _revert_frag.js - restore the original fragment reassembly block from bundle.js
"use strict";
const fs = require("fs");
const b = fs.readFileSync("web/www/bundle.js", "utf8").split(/\r?\n/);
// find the block inside the bundle: from "/* fragment reassembly */" to the
// matching close, then splice it into web/sofproto.js replacing our new block.
let s0 = -1;
for (let i = 0; i < b.length; i++) {
	if (b[i].includes("/* fragment reassembly */")) { s0 = i; break; }
}
if (s0 < 0) { console.log("bundle block not found"); process.exit(1); }
let d = 0, e0 = -1;
for (let j = s0 + 1; j < b.length; j++) {
		for (const ch of b[j]) { if (ch === "{") d++; else if (ch === "}") d--; }
		if (d === 0 && b[j].trim() === "}") { e0 = j; break; }
	}
const orig = b.slice(s0, e0 + 1);
console.log("bundle block lines:", s0 + 1, "..", e0 + 1);
const L = fs.readFileSync("web/sofproto.js", "utf8").split(/\r?\n/);
let s1 = -1;
for (let i = 0; i < L.length; i++) {
	 if (L[i].includes("/* fragment reassembly: the flag means")) { s1 = i; break; }
}
if (s1 < 0) { console.log("new block marker not found"); process.exit(1); }
let d2 = 0, e1 = -1;
for (let j = s1 + 1; j < L.length; j++) {
		for (const ch of L[j]) { if (ch === "{") d2++; else if (ch === "}") d2--; }
	 if (d2 === 0 && L[j].trim() === "}") { e1 = j; break; }
}
console.log("sofproto block lines:", s1 + 1, "..", e1 + 1);
L.splice(s1, e1 - s1 + 1);
for (let k = 0; k < orig.length; k++) L.splice(s1 + k, 0, orig[k]);
fs.writeFileSync("web/sofproto.js", L.join("\n"));
let bal = 0;
for (const ch of L.join("\n")) { if (ch === "{") bal++; else if (ch === "}") bal++; }
console.log("replaced; lines", L.length);
