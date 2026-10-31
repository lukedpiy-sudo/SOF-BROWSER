// _fix_sk.js - move the startKeepAlive function to createClient scope
"use strict";
const fs = require("fs");
const path = "web/sofproto.js";
let s = fs.readFileSync(path, "utf8");
const L = s.split(/\r?\n/);
let def = -1, end = -1;
for (let i = 0; i < L.length; i++) {
	if (L[i].includes("function startKeepAlive() {")) {
		def = i;
		let d = 0;
		for (let j = i; j < L.length; j++) {
			for (const ch of L[j]) {
				if (ch === "{") d++;
				else if (ch === "}") d--;
			}
			if (d === 0 && j > i) { end = j; break; }
		}
		break;
	}
}
if (def < 0 || end < 0) { console.log("block not found"); process.exit(1); }
const block = L.slice(def, end + 1);
console.log("block lines:", def + 1, "..", end + 1);
L.splice(def, block.length);
let tgt = -1;
for (let i = 0; i < L.length; i++) {
	if (L[i].includes("function processPacket")) { tgt = i; break; }
}
if (tgt < 0) { console.log("target not found"); process.exit(1); }
const ins = block.concat([""]);
for (let k = 0; k < ins.length; k++) L.splice(tgt, 0, ins[k]);
fs.writeFileSync(path, L.join("\n"));
const out = L.join("\n");
let bal = 0;
for (const ch of out) {
	if (ch === "{") bal++;
	else if (ch === "}") bal--;
}
console.log("inserted before line", tgt + 1, "lines", L.length, "net braces", bal);
