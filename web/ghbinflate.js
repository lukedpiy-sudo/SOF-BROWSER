/* ghbinflate.js - is block 2's high entropy region a compressed stream?
 *
 * The vertex records point into it with an offset that grows by ~7000 per
 * record, so if it is a deflate stream the per vertex data can be inflated.
 *
 *   node ghbinflate.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/ext/y_ghoul_weapon_inview_sniperrifle_SNIPERRIFLE.ghb";
const buf = fs.readFileSync(file);
const model = parseGhoul(buf);
const geom = parseGeometry(buf, model);
const b2 = model.block2Offset;
console.log(file.replace(/^.*[\\/]/, "") + ": the block 2 at 0x" + b2.toString(16) + " (" + model.block2Size + " bytes)");

/* the offsets the vertex records point at (the attribute bytes 3 and 4) */
const offs = [];
for (const v of geom.vertices) {
	const a = v.attributes;
	offs.push(a[3] | (a[4] << 8));
}
console.log("the offsets: " + offs.slice(0, 8).join(" ") + " ... the last " + offs[offs.length - 1] +
	" (the deltas " + (offs.length > 1 ? offs.slice(1).map((o, i) => o - offs[i]).join(" ") : "") + ")");

/* try to inflate from a lot of offsets */
let found = 0;
for (let off = 0; off < model.block2Size && found < 6; off += 16) {
	try {
		const out = zlib.inflateRawSync(buf.subarray(b2 + off, b2 + model.block2Size));
		console.log("  a raw deflate stream at the block 2 +0x" + off.toString(16) + " -> " + out.length + " bytes");
		found++;
	} catch (e) { }
}
for (let off = 0; off < model.block2Size && found < 10; off += 16) {
	try {
		const out = zlib.inflateSync(buf.subarray(b2 + off, b2 + model.block2Size));
		console.log("  a zlib stream at the block 2 +0x" + off.toString(16) + " -> " + out.length + " bytes");
		found++;
	} catch (e) { }
}
if (!found) console.log("  no deflate stream in block 2");

/* the bone data: the names are in the block 2, so the skeleton follows the
 * bolt tracks */
const bolts = model.objA.concat(model.objB).filter(o => o.mode !== 0);
if (bolts.length) {
	const last = Math.max.apply(null, bolts.map(o => o.block2Offset + model.frameCount * 8));
	console.log("  the bolt tracks end at the block 2 +0x" + (last - b2).toString(16) +
		", the bones start there: " + JSON.stringify(buf.toString("latin1", b2 + last, b2 + last + 48).replace(/[^\x20-\x7e]/g, ".")));
}
