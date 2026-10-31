/*
 * ghoulmem4.js - extract the Ghoul string table from the server's memory
 * and check the live entity model indices against it.
 */
"use strict";
const fs = require("fs");
const mem = fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/servermem.bin");
const needle = Buffer.from("GHOUL/", "latin1");
const hits = [];
let o = 0;
while (true) {
	const i = mem.indexOf(needle, o);
	if (i < 0) break;
	hits.push(i);
	o = i + 1;
}
/* the biggest cluster */
const clusters = [];
for (const h of hits) {
	const last = clusters[clusters.length - 1];
	if (last && h - last.end < 4096) { last.end = h; last.n++; }
	else clusters.push({ start: h, end: h, n: 1 });
}
clusters.sort((a, b) => b.n - a.n);
const c = clusters[0];
/* the exact blob: the NUL terminated strings around the cluster */
function strEnd(i) { let e = i; while (e < mem.length && mem[e] !== 0) e++; return e; }
function strStart(i) { let s = i; while (s > 0 && mem[s - 1] !== 0) s--; return s; }
const first = strStart(c.start);
let last = strEnd(c.end);
console.log("the cluster 0x" + c.start.toString(16) + "..0x" + c.end.toString(16) + " the hits " + c.n +
	" the blob 0x" + first.toString(16) + "..0x" + last.toString(16));
/* the strings of the blob */
const strs = [];
let p = first;
while (p < last) {
	const e = strEnd(p);
	if (e > p) strs.push(mem.toString("latin1", p, e));
	p = e + 1;
}
console.log("the strings: " + strs.length);
for (let i = 0; i < 12; i++) console.log("  [" + i + "] " + strs[i]);
console.log("--- the range 90..115");
for (let i = 90; i < 116 && i < strs.length; i++) console.log("  [" + i + "] " + strs[i]);
/* where is MESO_PLAYER */
strs.forEach((s, i) => { if (/MESO_PLAYER|MESO_IRQ3B/.test(s)) console.log("  the player model at the index " + i + ": " + s); });
fs.writeFileSync("C:/Users\User/AppData/Local/Temp/opencode/ghoulmem/table.json", JSON.stringify(strs));
