/* ghbgeom.js - map the geometry tables of a .ghb.
 *
 * The block 1 tail (after the skeleton) starts with two sizes and then an
 * index table.  This finds the table's end and prints what follows.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
let p = g.end;
const end = g.block2Offset;

const sizeA = buf.readUInt32LE(p);
const sizeB = buf.readUInt32LE(p + 4);
console.log("+0x00 u32 " + sizeA + " (0x" + sizeA.toString(16) + ")");
console.log("+0x04 u32 " + sizeB + " (0x" + sizeB.toString(16) + ")");
console.log("+0x08..+0x1f: " + buf.subarray(p + 8, p + 0x20).toString("hex"));

/* walk the index table from +0x20 until the values stop increasing */
let q = p + 0x20;
let n = 0, max = 0, prev = -1, monotonic = true;
while (q + 4 <= end) {
	const v = buf.readUInt32LE(q);
	if (v < prev) { monotonic = false; }
	if (v > max) max = v;
	prev = v;
	n++;
	q += 4;
	if (!monotonic && n > 4) break;
}
console.log("the table at +0x20: " + n + " u32s, the max value " + max + ", the table ends at 0x" + q.toString(16));
console.log("  the last values: " + Array.from(buf.subarray(q - 32, q)).map((x, i) =>
	buf.readUInt32LE(q - 32 + i * 4)).join(","));
console.log("  the bytes after the table: " + buf.subarray(q, q + 64).toString("hex").replace(/(.{32})/g, "$1 "));
console.log("  remaining in the tail: " + (end - q) + " bytes");

/* what do the sizes mean? */
console.log("\nsizeA " + sizeA + " = " + (sizeA / 8) + " x 8 or " + (sizeA / 12) + " x 12 or " + (sizeA / 4) + " x u32");
console.log("sizeB " + sizeB + " = " + (sizeB / 4) + " x u32 or " + (sizeB / 12) + " x vec3");
console.log("frameCount " + g.frameCount + " x 8 = " + (g.frameCount * 8));

/* the block 2 offset of the two tables */
const tracks = g.objA.filter(o => o.block2Offset !== undefined).map(o => o.block2Offset).sort((a, b) => a - b);
const trackEnd = tracks.length ? tracks[tracks.length - 1] + g.frameCount * 8 : 0;
console.log("the tracks end at block2+" + trackEnd + " (0x" + trackEnd.toString(16) + ")");
console.log("the block 2 rest is " + (g.block2Size - trackEnd) + " bytes");
const rest = g.block2Offset + trackEnd;
console.log("  the first 64 bytes: " + buf.subarray(rest, rest + 64).toString("hex").replace(/(.{32})/g, "$1 "));

/* is the block 2 rest a copy of the tail? compare */
const tailLen = end - p;
let same = 0;
for (let i = 0; i < Math.min(tailLen, 256); i++) if (buf[p + i] === buf[rest + i]) same++;
console.log("  the first 256 bytes vs the tail: " + same + " equal bytes");

/* look for the index table pattern inside the block 2 rest */
function findTable(off, limit) {
	for (let i = 0; i < limit; i += 4) {
		const a = buf.readUInt32LE(off + i), b = buf.readUInt32LE(off + i + 4);
		if (a <= 8 && b <= 16 && a < b) {
			/* a rising start - check the pattern */
			let ok = true, prev = -1;
			for (let k = 0; k < 64 && off + i + k * 4 + 4 <= buf.length; k++) {
				const v = buf.readUInt32LE(off + i + k * 4);
				if (v < prev) { ok = false; break; }
				prev = v;
			}
			if (ok) return off + i;
		}
	}
	return -1;
}
const t = findTable(rest, 400000);
console.log("  a rising index table inside the block 2 rest at " + (t < 0 ? "none" : "0x" + t.toString(16) +
	" (block2+" + (t - g.block2Offset) + ")"));
