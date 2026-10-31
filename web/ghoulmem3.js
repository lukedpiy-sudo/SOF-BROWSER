/*
 * ghoulmem3.js - find the Ghoul string table in the server's memory (ASCII
 * and UTF-16), and cluster the hits.
 */
"use strict";
const fs = require("fs");
const mem = fs.readFileSync(process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/servermem.bin");
function scan(needle, label, step) {
	const hits = [];
	let o = 0;
	while (true) {
		const i = mem.indexOf(needle, o);
		if (i < 0) break;
		hits.push(i);
		o = i + step;
	}
	console.log("=== " + label + ": " + hits.length + " hits");
	/* cluster: the hits within 4 KB of each other */
	const clusters = [];
	for (const h of hits) {
		const last = clusters[clusters.length - 1];
		if (last && h - last.end < 4096) { last.end = h; last.n++; }
		else clusters.push({ start: h, end: h, n: 1 });
	}
	clusters.sort((a, b) => b.n - a.n);
	for (const c of clusters.slice(0, 8)) {
		console.log("  the cluster 0x" + c.start.toString(16) + "..0x" + c.end.toString(16) + " the hits " + c.n);
	}
	return clusters;
}
const a = scan(Buffer.from("GHOUL/", "latin1"), "the ASCII GHOUL/", 1);
const u = scan(Buffer.from("G\0H\0O\0U\0L\0/\0", "latin1"), "the UTF-16 GHOUL/", 2);
/* the biggest ASCII cluster: dump the strings */
if (a.length) {
	const c = a[0];
	const strs = [];
	let cur = "";
	for (let i = c.start; i <= c.end + 64; i++) {
		const ch = mem[i];
		if (ch === 0) { if (cur.length > 3) strs.push(cur); cur = ""; }
		else if (ch >= 32 && ch < 127) cur += String.fromCharCode(ch);
		else { if (cur.length > 3) strs.push(cur); cur = ""; }
	}
	console.log("--- the strings in the cluster: " + strs.length);
	strs.slice(0, 50).forEach((s, i) => console.log("  [" + i + "] " + s));
	fs.writeFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/cluster.json", JSON.stringify(strs, null, 1));
}
