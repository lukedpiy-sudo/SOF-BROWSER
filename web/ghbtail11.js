/* ghbtail11.js - the tail header of several models.
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const files = process.argv.slice(2);
for (const file of files) {
	const buf = fs.readFileSync(file);
	const g = parseGhoul(buf);
	const t = g.end;
	const a = buf.readUInt32LE(t), b = buf.readUInt32LE(t + 4);
	const c = buf.readUInt32LE(t + 8), d = buf.readUInt32LE(t + 12);
	const bolts = g.objA.filter(o => o.mode !== 0).length;
	console.log(file.replace(/^.*[\\/]/, ""));
	console.log("  the file " + g.fileSize + ", the tail " + (g.block2Offset - t) + ", block 2 " + g.block2Size);
	console.log("  the frames " + g.frameCount + ", the clips " + g.clips.length + ", the meshes " + g.meshes.length +
		", the submeshes " + g.meshes.reduce((x, m) => x + m.submeshes.length, 0));
	console.log("  the objects " + g.objA.length + "/" + g.objB.length + "/" + g.objC.length +
		", the bolts with a track " + bolts);
	console.log("  the tail header: " + a + ", " + b + ", " + c + ", " + d);
	console.log("    a/256 = " + (a / 256) + ", b/256 = " + (b / 256) + ", b/frames = " + (b / g.frameCount));
}
