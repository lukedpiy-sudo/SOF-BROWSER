// _proc_all.js - process every server packet; frag bit is a marker, not a split
"use strict";
const fs = require("fs");
const p = "web/sofproto.js";
let L = fs.readFileSync(p, "utf8").split(/\r?\n/);
let i0 = -1;
for (let i = 0; i < L.length; i++) {
	if (L[i].includes("/* fragment reassembly */")) { i0 = i; break; }
}
if (i0 < 0) { console.log("block not found"); process.exit(1); }
let d = 0, i1 = -1;
for (let j = i0 + 1; j < L.length; j++) {
	for (const ch of L[j]) {
		if (ch === "{") d++;
		else if (ch === "}") d--;
	}
		if (d === 0 && L[j].trim() === "}") { i1 = j; break; }
	}
const repl = [
"\t\t/* the fragment bit on server packets marks a reliable-message carrier,",
"\t\t * not a message split - SoF keeps messages inside one datagram. Process",
"\t\t * every packet directly. */",
"\t\tif (isFragment) { processPacket(msg); return; }"
];
L.splice(i0, i1 - i0 + 1);
for (let k = 0; k < repl.length; k++) L.splice(i0 + k, 0, repl[k]);
fs.writeFileSync(p, L.join("\n"));
console.log("patched, lines", L.length);
