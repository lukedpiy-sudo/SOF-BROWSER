// _fix_sk3.js - un-scramble the startKeepAlive region by index
"use strict";
const fs = require("fs");
const path = "web/sofproto.js";
const L = fs.readFileSync(path, "utf8").split(/\r?\n/);
let idxP = -1;
for (let i = 0; i < L.length; i++) {
	// 0-based index of the processPacket line
	 if (L[i].includes("function processPacket")) { idxP = i; break; }
}
if (idxP < 0) { console.log("no processPacket"); process.exit(1); }
console.log("processPacket 0-based:", idxP);
// region to replace: idxP-12 .. idxP-1
const blank = L[idxP - 12];
const scr = L.slice(idxP - 11, idxP - 5);   // 6 scrambled function lines
const com = L.slice(idxP - 5, idxP);        // 5 comment lines, reversed
console.log("blank:", JSON.stringify(blank));
scr.forEach((t) => console.log("scr:", JSON.stringify(t)));
com.forEach((t) => console.log("com:", JSON.stringify(t)));
if (!scr.some((t) => /startKeepAlive/.test(t)) || !scr.some((t) => /keepAlive = setInterval/.test(t))) {
	 console.log("region check failed");
	 process.exit(1);
}
const fixed = [blank].concat(com.reverse()).concat(scr.reverse()).concat([""]);
L.splice(idxP - 12, 12);
for (let k = 0; k < fixed.length; k++) L.splice(idxP - 12 + k, 0, fixed[k]);
fs.writeFileSync(path, L.join("\n"));
let bal = 0;
for (const ch of L.join("\n")) { if (ch === "{") bal++; else if (ch === "}") bal--; }
console.log("lines", L.length, "net", bal);
