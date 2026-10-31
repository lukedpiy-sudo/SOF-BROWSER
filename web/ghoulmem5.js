/*
 * ghoulmem5.js - extract the Ghoul string table (the svc 0x1A table) from
 * the server's memory and check the live entity model indices.
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
const clusters = [];
for (const h of hits) {
	const last = clusters[clusters.length - 1];
	if (last && h - last.end < 4096) { last.end = h; last.n++; }
	else clusters.push({ start: h, end: h, n: 1 });
}
clusters.sort((a, b) => b.n - a.n);
function strEnd(i) { let e = i; while (e < mem.length && mem[e] !== 0) e++; return e; }
function strStart(i) { let s = i; while (s > 0 && mem[s - 1] !== 0) s--; return s; }
const out = [];
for (const c of clusters.slice(0, 6)) {
	const first = strStart(c.start);
	let last = strEnd(c.end);
	const strs = [];
	let p = first;
	while (p < last) {
		const e = strEnd(p);
		if (e > p) {
			const s = mem.toString("latin1", p, e);
			if (/^[\x20-\x7e]+$/.test(s)) strs.push(s);
		}
		p = e + 1;
	}
	out.push({ c, strs });
	console.log("=== the cluster 0x" + c.start.toString(16) + " the hits " + c.n + " the strings " + strs.length);
	strs.slice(0, 6).forEach((s, i) => console.log("   [" + i + "] " + s));
	/* where is the player model */
	strs.forEach((s, i) => { if (/MESO_PLAYER\.GHB|MESO_IRQ3B\.GHB/.test(s)) console.log("   the player model at the string index " + i + ": " + s); });
	/* the strings around 95..110 */
	console.log("   the range 95..110:");
	for (let i = 95; i < 111 && i < strs.length; i++) console.log("     [" + i + "] " + strs[i]);
}
/* the biggest cluster: the full table */
const best = out.sort((a, b) => b.strs.length - a.strs.length)[0];
fs.writeFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/table.json", JSON.stringify(best.strs));
console.log("the table: " + best.strs.length + " strings -> table.json");
