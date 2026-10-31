/* ghbtail4.js - find the geometry records in the block 1 tail.
 *
 * The tail is: two u32 constants, padding, a table of u32, then the
 * submesh headers and the vertex records.  This walks the table and then
 * looks for the 44 byte vertex records.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/ext/y_ghoul_weapon_inview_sniperrifle_SNIPERRIFLE.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;
console.log("the tail 0x" + t.toString(16) + "..0x" + end.toString(16));
console.log("the bbox: min " + g.bbox.min.map(x => x.toFixed(3)) + " max " + g.bbox.max.map(x => x.toFixed(3)));

/* the table at +0x20 */
let p = t + 0x20;
const tbl = [];
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v > 0x10000) break;
	tbl.push(v);
	p += 4;
}
console.log("the table: " + tbl.length + " entries, the last " + tbl[tbl.length - 1] +
	", it ends at 0x" + p.toString(16) + " (+0x" + (p - t).toString(16) + ")");
const runs = [];
for (const v of tbl) {
	if (runs.length && runs[runs.length - 1][0] === v) runs[runs.length - 1][1]++;
	else runs.push([v, 1]);
}
console.log("the runs: " + runs.map(r => r[0] + "x" + r[1]).join(" "));

console.log("the data after the table:");
for (let i = 0; i < 256; i += 16) {
	const o = p + i;
	const u = [];
	for (let k = 0; k < 4; k++) u.push(buf.readUInt32LE(o + k * 4));
	const f = [];
	for (let k = 0; k < 4; k++) f.push(buf.readFloatLE(o + k * 4));
	console.log("  +" + (o - t).toString(16).padStart(5, "0") + "  " +
		buf.subarray(o, o + 16).toString("hex").replace(/(.{32})/g, "$1 ") +
		"  u32 " + u.map(x => String(x).padStart(9)).join(" ") +
		"  f32 " + f.map(x => x.toFixed(4).padStart(10)).join(" "));
}

/* look for the 44 byte records: the positions are inside the bbox */
const lo = g.bbox.min, hi = g.bbox.max;
const inside = (x, y, z) => x >= lo[0] - 1 && x <= hi[0] + 1 &&
	y >= lo[1] - 1 && y <= hi[1] + 1 && z >= lo[2] - 1 && z <= hi[2] + 1;
let found = [];
for (let o = p; o + 44 <= end; o++) {
	const x = buf.readFloatLE(o + 0x0c), y = buf.readFloatLE(o + 0x10), z = buf.readFloatLE(o + 0x14);
	if (!inside(x, y, z)) continue;
	const u0 = buf.readFloatLE(o), u1 = buf.readFloatLE(o + 4), u2 = buf.readFloatLE(o + 8);
	if (u0 < 0.001 || u0 > 1 || u1 < 0.001 || u1 > 1 || u2 < 0.001 || u2 > 1) continue;
	found.push([o, u0, u1, u2, x, y, z]);
}
console.log("the records with 3 UV floats and a position inside the bbox: " + found.length);
for (const f of found.slice(0, 12)) {
	console.log("  0x" + (f[0] - t).toString(16) + " (+0x" + f[0].toString(16) + ") uv " +
		f[1].toFixed(3) + " " + f[2].toFixed(3) + " " + f[3].toFixed(3) +
		" pos " + f[4].toFixed(3) + " " + f[5].toFixed(3) + " " + f[6].toFixed(3) +
		"  raw " + buf.subarray(f[0] + 0x18, f[0] + 0x2c).toString("hex"));
}
