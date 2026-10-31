/* ghbdeflate.js - look for a compressed stream anywhere in block 2.
 *
 *   node ghbdeflate.js <file.ghb>
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const file = process.argv[2];
const buf = fs.readFileSync(file);
const model = parseGhoul(buf);
const geom = parseGeometry(buf, model);
const b2 = model.block2Offset;
const size = model.block2Size;
console.log(file.replace(/^.*[\\/]/, "") + ": the block 2 is " + size + " bytes, the vertices " + geom.vertices.length);

let best = 0;
for (let off = 0; off < size; off++) {
	for (const fn of ["inflateRawSync", "inflateSync", "gunzipSync"]) {
		try {
			const out = zlib[fn](buf.subarray(b2 + off, b2 + size));
			if (out.length > 512) {
				console.log("  " + fn + " at the block 2 +0x" + off.toString(16) + " -> " + out.length + " bytes");
				best++;
				if (best > 8) process.exit(0);
			}
		} catch (e) { }
	}
}
if (!best) console.log("  no compressed stream found");
