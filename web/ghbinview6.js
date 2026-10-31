/*
 * ghbinview6.js - find the table that maps a weapon to the string table
 * index of its INVIEW model (the u16 indices of the INVIEW paths).
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
const pe = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(pe + 6);
const opt = pe + 24;
const imgbase = b.readUInt32LE(opt + 28);
const secoff = opt + b.readUInt16LE(pe + 20);
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({ name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), rsize: b.readUInt32LE(o + 16), rptr: b.readUInt32LE(o + 20) });
}
function toRva(fo) {
	for (const s of secs) if (fo >= s.rptr && fo < s.rptr + s.rsize) return imgbase + s.vaddr + (fo - s.rptr);
	return 0;
}
/* the INVIEW string table indices (the global table) */
const table = JSON.parse(fs.readFileSync("C:/Users/User/q2work/sof2/web/www/sofstringtable.json", "utf8")).names;
const inview = [];
for (let i = 0; i < table.length; i++) if (/INVIEW/i.test(table[i] || "")) inview.push(i);
console.log("the INVIEW string table indices: " + inview.join(","));
/* search the file for the u16 pairs */
const found = new Map();
for (const idx of inview) {
	const p = Buffer.alloc(2);
	p.writeUInt16LE(idx);
	let o = 0;
	while (true) {
		const i = b.indexOf(p, o);
		if (i < 0) break;
		found.set(i, (found.get(i) || []).concat(idx));
		o = i + 1;
	}
}
console.log("the u16 occurrences: " + found.size);
/* the runs of consecutive hits */
const addrs = [...found.keys()].sort((a, b) => a - b);
let runs = [];
let cur = [addrs[0]];
for (let i = 1; i < addrs.length; i++) {
	if (addrs[i] === addrs[i - 1] + 2) cur.push(addrs[i]);
	else { if (cur.length >= 3) runs.push(cur); cur = [addrs[i]]; }
}
if (cur.length >= 3) runs.push(cur);
console.log("the runs of 3 or more: " + runs.length);
for (const r of runs.slice(0, 20)) {
	console.log("  the file offset 0x" + r[0].toString(16) + " (the RVA 0x" + toRva(r[0]).toString(16) + ") with " + r.length + " entries");
	for (let i = 0; i < r.length; i++) {
		const fo = r[i], idx = b.readUInt16LE(fo);
		console.log("     +" + (i * 2) + "  " + idx + "  " + (table[idx] || "?"));
	}
}
