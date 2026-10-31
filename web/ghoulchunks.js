/* ghoulchunks.js - find the chunk structure of a Ghoul .ghb file.
 *
 * The file has a header, the authoring path, the animation frame names and
 * then the model data.  The frame names are preceded by a "HC" marker, so
 * the format is chunked: scan for four character tags and their positions.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/meso.ghb";
const b = fs.readFileSync(file);

/* the four byte tags: printable ascii in a row, followed by a plausible u32 */
const tags = new Map();
for (let i = 0; i + 8 <= b.length; i++) {
	const t = b.toString("latin1", i, i + 4);
	if (!/^[ -~]{4}$/.test(t)) continue;
	/* the tag must be followed by a length that fits the file */
	const len = b.readUInt32LE(i + 4);
	if (len < 4 || len > b.length) continue;
	const key = t + " len=" + len;
	tags.set(key, (tags.get(key) || 0) + 1);
}
const list = [...tags.entries()].sort((a, c) => c[1] - a[1]);
console.log("candidate tags (tag + u32 length), by frequency:");
list.slice(0, 30).forEach(([k, n]) => console.log("   " + n.toString().padStart(6) + "  " + k));

/* where do the "HC" chunks sit? */
console.log("\nHC markers:");
let n = 0;
for (let i = 0; i + 4 < b.length && n < 12; i++) {
	if (b[i] === 0x48 && b[i + 1] === 0x43) {
		const len = b.readUInt32LE(i + 2);
		let s = "";
		for (let k = 0; k < 40 && i + 6 + k < b.length && b[i + 6 + k] !== 0; k++) s += b.toString("latin1", i + 6 + k);
		console.log("   @0x" + i.toString(16) + " len=" + len + "  " + JSON.stringify(s));
		n++;
	}
}
