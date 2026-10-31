// _fix_frag.js - replace the fragment-reassembly block with the flag-means-more rule
"use strict";
const fs = require("fs");
const path = "web/sofproto.js";
let L = fs.readFileSync(path, "utf8").split(/\r?\n/);
let start = -1;
for (let i = 0; i < L.length; i++) {
	if (L[i].includes("/* fragment reassembly */")) { start = i; break; }
}
if (start < 0) { console.log("start not found"); process.exit(1); }
let d = 0, end = -1;
for (let j = start + 1; j < L.length; j++) {
	for (const ch of L[j]) { if (ch === "{") d++; else if (ch === "}") d--; }
		if (d === 0 && j > start + 1 && L[j].trim() === "}") { end = j; break; }
	}
if (end < 0) { console.log("end not found"); process.exit(1); }
console.log("block lines", start + 1, "..", end + 1);
const repl = [
"\t\t/* fragment reassembly: the flag means \"more follows\" - accumulate until",
"\t\t * a packet arrives without the flag, which carries the last piece. */",
"\t\tif (isFragment) {",
"\t\t\tfragPending = Buffer.concat([fragPending, msg.slice(8)]);",
"\t\t\treturn;",
"\t\t}",
"\t\tif (fragPending.length) {",
"\t\t\tconst full = Buffer.concat([Buffer.from([0, 0, 0, 0, 0, 0, 0, 0]), fragPending, msg.slice(8)]);",
"\t\t\tfragPending = Buffer.alloc(0);",
"\t\t\tprocessPacket(full);",
"\t\t\treturn;",
"\t\t}"
];
L.splice(start, end - start + 1);
for (let k = 0; k < repl.length; k++) L.splice(start + k, 0, repl[k]);
fs.writeFileSync(path, L.join("\n"));
let bal = 0;
for (const ch of L.join("\n")) { if (ch === "{") bal++; else if (ch === "}") bal--; }
console.log("lines", L.length, "net braces", bal);
