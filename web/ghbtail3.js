/* ghbtail3.js - the block 1 tail of a .ghb: the geometry section.
 *
 *   node ghbtail3.js <file.ghb> [maxBytes]
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/ext/s_ghoul_weapon_inview_sniperrifle_SNIPERRIFLE.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;
console.log(file);
console.log("the model stream ends at 0x" + t.toString(16) + ", block 2 at 0x" + end.toString(16) +
	" (" + (end - t) + " bytes of tail)");
console.log("the meshes: " + g.meshes.length + ", the clips: " + g.clips.length +
	", the objects: " + g.objA.length + "/" + g.objB.length + "/" + g.objC.length);
for (const m of g.meshes) {
	console.log("  mesh \"" + m.name + "\" submeshes: " +
		m.submeshes.map(s => "\"" + s.name + "\"/\"" + s.name2 + "\" verts=" +
			(s.verts.kind === "inline" ? s.verts.count : "ext") +
			" faces=" + (s.faces.kind === "inline" ? s.faces.count : "ext")).join(", "));
}

const n = Math.min(parseInt(process.argv[3] || "256", 10), end - t);
console.log("the first " + n + " bytes of the tail:");
for (let i = 0; i < n; i += 16) {
	const c = buf.subarray(t + i, t + i + 16);
	const u = [];
	for (let k = 0; k < 4; k++) u.push(buf.readUInt32LE(t + i + k * 4));
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " +
		c.toString("hex").replace(/(.{32})/g, "$1 ") + "  u32 " +
		u.map(x => String(x).padStart(10)).join(" ") + "  f32 " +
		u.map((x, k) => buf.readFloatLE(t + i + k * 4).toFixed(3)).join(" "));
}
