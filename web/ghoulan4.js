/*
 * ghoulan4.js - try to parse the svc 0x1A payloads as [u16 len][data] records.
 */
"use strict";
const fs = require("fs");
const list = JSON.parse(fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
const all = [];
list.forEach((h, i) => {
	const b = Buffer.from(h, "hex");
	let o = 0, recs = [];
	while (o + 2 <= b.length) {
		const len = b.readUInt16LE(o);
		if (len === 0 || o + 2 + len > b.length) { recs.push(null); break; }
		recs.push(len);
		o += 2 + len;
	}
	const fits = recs[recs.length - 1] !== null && o === b.length;
	console.log("#" + i + " the payload " + b.length + " the records " + recs.length +
		" the consumed " + o + (fits ? " FITS" : " no") + " the lengths " + recs.slice(0, 8).join(","));
	if (fits) for (const len of recs) all.push(len);
});
console.log("the total records: " + all.length);
const hist = new Map();
for (const l of all) hist.set(l, (hist.get(l) || 0) + 1);
console.log("the distinct record lengths: " + hist.size);
const top = [...hist.entries()].sort((a, b) => b[1] - a[1]).slice(0, 10);
for (const [k, c] of top) console.log("  the length " + k + " x" + c);
