// _fix_sk2.js - repair the scrambled startKeepAlive fragment in sofproto.js
"use strict";
const fs = require("fs");
const path = "web/sofproto.js";
const src = fs.readFileSync(path, "utf8");
const L = src.split(/\r?\n/);
let idxP = -1;
for (let i = 0; i < L.length; i++) {
	if (L[i].includes("function processPacket")) { idxP = i; break; }
}
if (idxP < 0) { console.log("no processPacket"); process.exit(1); }
console.log("processPacket line:", idxP + 1);
// print the preceding lines so we can see what to cut
for (let i = idxP - 12; i < idxP; i++) console.log(i + 1, JSON.stringify(L[i]));
// the scrambled fragment: the 7 lines just before processPacket (idxP-7..idxP-1)
// sanity: they must contain both 'keepAlive' and 'startKeepAlive'
const frag = L.slice(idxP - 7, idxP).join("\n");
if (!/keepAlive/.test(frag) || !/startKeepAlive/.test(frag)) {
	console.log("fragment check failed - not touching");
	 process.exit(1);
}
L.splice(idxP - 7, 7);
const ins = [
"\t/* The server keeps its outgoing reliable message in a queue until the",
"\t * client acknowledges it, and the acknowledgement only advances when the",
"\t * client sends a packet.  A client that stays silent between the",
"\t * server's requests therefore deadlocks the gamestate handshake, so we",
"\t * send a packet every 50 ms from the moment we are connected. */",
"\tfunction startKeepAlive() {",
"\t\tif (keepAlive) return;",
"\t\tkeepAlive = setInterval(() => {",
"\t\t\ttry { sendUserCmd(); } catch (e) { /* not connected yet */ }",
"\t\t}, 50);",
"\t}",
""
];
for (let k = 0; k < ins.length; k++) L.splice(idxP - 7, 0, ins[k]);
fs.writeFileSync(path, L.join("\n"));
console.log("lines now", L.length);
