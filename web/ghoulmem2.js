/*
 * ghoulmem2.js - find the Ghoul string table in the server's memory: the
 * engine keeps the names as a UTF-16 blob with NUL separated strings.
 */
"use strict";
const fs = require("fs");
const mem = fs.readFileSync(process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/servermem.bin");
const needle = Buffer.from("G\0H\0O\0U\0L\0/\0", "latin1");
const hits = [];
let o = 0;
while (true) {
	const i = mem.indexOf(needle, o);
	if (i < 0) break;
	hits.push(i);
	o = i + 2;
}
console.log("the UTF-16 GHOUL/ hits: " + hits.length);
/* the blob: walk back to the start of the UTF-16 string list and forward */
function isPrintable16(b, i) {
	/* a UTF-16 code unit that is printable ASCII or a space */
	const c = b[i] | (b[i + 1] << 8);
	return (c >= 32 && c < 127) || c === 9 || c === 10 || c === 13;
}
const groups = new Map();
for (const h of hits) {
	/* find the extent of the printable UTF-16 region around it */
	let s = h;
	while (s >= 2 && isPrintable16(mem, s - 2)) s -= 2;
	let e = h;
	while (e + 2 <= mem.length && isPrintable16(mem, e)) e += 2;
	const key = s + "-" + e;
	if (!groups.has(key)) groups.set(key, { start: s, end: e, count: 0 });
	groups.get(key).count++;
}
console.log("the printable UTF-16 regions: " + groups.size);
const list = [...groups.values()].sort((a, b) => b.count - a.count || b.end - b.start - (a.end - a.start));
for (const g of list.slice(0, 6)) {
	console.log("  the region 0x" + g.start.toString(16) + "..0x" + g.end.toString(16) + " (" + (g.end - g.start) + " bytes) the hits " + g.count);
}
/* the biggest region: split it into the strings */
const best = list[0];
if (best) {
	const strs = [];
	let cur = "";
	for (let i = best.start; i < best.end; i += 2) {
		const c = mem[i] | (mem[i + 1] << 8);
		if (c === 0) { if (cur.length) { strs.push(cur); cur = ""; } }
		else cur += String.fromCharCode(c);
	}
	if (cur.length) strs.push(cur);
	console.log("--- the strings: " + strs.length);
	strs.slice(0, 40).forEach((s, i) => console.log("  [" + i + "] " + s));
	fs.writeFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulmem/blob.json", JSON.stringify(strs, null, 1));
}
