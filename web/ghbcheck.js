/* ghbcheck.js - verify the 44 byte vertex record and print the geometry. */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const bb = g.bbox;
const lo = [bb.min[0], bb.min[1], bb.min[2]], hi = [bb.max[0], bb.max[1], bb.max[2]];
const inside = (v, i) => v >= lo[i] - 8 && v <= hi[i] + 8;

const base = parseInt(process.argv[3] || "1be0", 16);
for (const stride of [40, 44, 48]) {
	let good = 0, total = 0;
	const pts = [];
	for (let k = 0; k < 60; k++) {
		const o = base + k * stride;
		const p = [buf.readFloatLE(o), buf.readFloatLE(o + 4), buf.readFloatLE(o + 8)];
		total++;
		if (p.every((v, i) => isFinite(v) && inside(v, i))) { good++; if (pts.length < 4) pts.push(p.map(v => v.toFixed(2)).join(",")); }
	}
	console.log("stride " + stride + ": " + good + "/" + total + " inside the bbox   " + pts.join("  "));
}
/* the raw bytes of one record */
console.log("the record at 0x" + base.toString(16) + ":");
for (let i = 0; i < 44; i += 4) {
	const u = buf.readUInt32LE(base + i), f = buf.readFloatLE(base + i);
	console.log("  +" + i.toString(16).padStart(2, "0") + "  u32 " + String(u).padStart(12) + "  f32 " + f.toFixed(4));
}
