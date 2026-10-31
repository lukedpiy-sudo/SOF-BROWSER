/* ghbhdr.js - the 21 bytes between the index table and the vertex records.
 *
 *   node ghbhdr.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const files = process.argv.slice(2);
for (const file of files) {
	const buf = fs.readFileSync(file);
	const model = parseGhoul(buf);
	const geom = parseGeometry(buf, model);
	/* the geometry section: the table ends where the records start - 21 */
	const start = geom.vertices.length ? (geom.vertices[0].start || 0) : 0;
	/* find the table end again: the records start 21 bytes later */
	let p = model.end + 0x20, last = -1, run = 0;
	const maxIndex = Math.floor((model.block2Offset - model.end) / 43) + 1;
	while (p + 4 <= model.block2Offset) {
		const v = buf.readUInt32LE(p);
		if (v % 256 !== 0 || v < last || run > 16 || v >= maxIndex * 256) break;
		if (v === last) run++; else { run = 1; last = v; }
		p += 4;
	}
	const h = buf.subarray(p, p + 21);
	console.log(file.replace(/^.*[\\/]/, "").padEnd(40) +
		" the table " + geom.indexTable.length + " (" + (geom.indexTable.length * 4) + " bytes)" +
		" the vertices " + geom.vertices.length);
	console.log("   the 21 bytes: " + h.toString("hex"));
	const u16 = [];
	for (let i = 0; i < 10; i++) u16.push(h.readUInt16LE(i * 2));
	console.log("   the u16s:    " + u16.join(" "));
	console.log("   the u32s:    " + [0, 4, 8, 12, 16].map(i => h.readUInt32LE(i)).join(" "));
}
