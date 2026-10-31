/* ghboffs.js - what is at the offsets the vertex records point at?
 *
 *   node ghboffs.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/ext/y_ghoul_weapon_inview_sniperrifle_SNIPERRIFLE.ghb";
const buf = fs.readFileSync(file);
const model = parseGhoul(buf);
const geom = parseGeometry(buf, model);
const b2 = model.block2Offset;
const end = b2 + model.block2Size;

console.log(file.replace(/^.*[\\/]/, "") + ": the block 2 at 0x" + b2.toString(16) + ", the vertices " + geom.vertices.length);

/* the attribute bytes of every record */
for (let i = 0; i < Math.min(geom.vertices.length, 26); i++) {
	const a = geom.vertices[i].attributes;
	console.log("  #" + String(i).padStart(2) + " " + Buffer.from(a).toString("hex") +
		"  u8: " + Array.from(a).join(" ").padEnd(46) +
		" u16@2 " + (a[2] | (a[3] << 8)) + " u16@3 " + (a[3] | (a[4] << 8)) +
		" u16@4 " + (a[4] | (a[5] << 8)) + " u16@7 " + (a[7] | (a[8] << 8)) +
		" u16@11 " + (a[11] | (a[12] << 8)));
}

/* the candidates for the "offset that grows by ~7000" */
for (const off of [2, 3, 4, 7, 8, 11, 12, 15, 16]) {
	const seq = geom.vertices.map(v => {
		const a = v.attributes;
		return (a[off] | (a[off + 1] << 8));
	});
	let mono = true;
	for (let i = 1; i < seq.length; i++) if (seq[i] < seq[i - 1]) mono = false;
	const d = [];
	for (let i = 1; i < seq.length; i++) d.push(seq[i] - seq[i - 1]);
	const avg = d.reduce((a, b) => a + b, 0) / (d.length || 1);
	console.log("  the u16 at the byte " + off + ": " + seq.slice(0, 6).join(" ") +
		" ... the last " + seq[seq.length - 1] + "  monotonic " + mono + " the mean delta " + avg.toFixed(0));
}

/* what is at the block 2 at those offsets */
const off = geom.vertices.map(v => (v.attributes[3] | (v.attributes[4] << 8)));
for (let i = 0; i < Math.min(6, off.length); i++) {
	const o = b2 + off[i];
	if (o + 48 > end) { console.log("  the offset " + off[i] + " is past the block 2"); continue; }
	console.log("  the block 2 +0x" + off[i].toString(16) + ": " +
		buf.subarray(o, o + 48).toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		buf.subarray(o, o + 48).toString("latin1").replace(/[^ -~]/g, "."));
	const u16 = [];
	for (let k = 0; k < 12; k++) u16.push(buf.readUInt16LE(o + k * 2));
	console.log("     the u16s: " + u16.join(" "));
}
