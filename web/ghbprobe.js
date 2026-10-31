/* ghbprobe.js - explore what a .ghb file holds, in particular the mesh data. */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/MESO_IRQ3B.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);

console.log("file          ", g.fileSize, "bytes");
console.log("block2        @0x" + g.block2Offset.toString(16) + " size " + g.block2Size);
console.log("model magic   0x" + g.magic.toString(16), " version " + g.version, " thunk " + g.thunk);
console.log("path          ", JSON.stringify(g.path));
console.log("frame count   ", g.frameCount);
console.log("clips         ", g.clips.length, " (ends @0x" + g.clipEnd.toString(16) + ")");
g.clips.slice(0, 4).forEach(c => console.log("   " + c.name.padEnd(26) +
	" scale " + c.scale + " events " + c.events.length +
	(c.events.length ? " e0=" + JSON.stringify(c.events[0]) : "")));
console.log("meshes        ", g.meshes.length, " (ends @0x" + g.meshEnd.toString(16) + ")");
g.meshes.forEach(m => {
	console.log("   mesh " + m.name + "  i32=" + m.i32.join(","));
	m.submeshes.forEach((s, i) => {
		console.log("      sub" + i + " " + JSON.stringify(s.name) + " " + JSON.stringify(s.name2) +
			" flags=" + s.flags.map(Number).join("") +
			" verts=" + (s.verts.kind + (s.verts.count !== undefined ? ":" + s.verts.count : ":" + s.verts.data.length)) +
			" faces=" + (s.faces.kind + (s.faces.count !== undefined ? ":" + s.faces.count : ":" + s.faces.data.length)));
	});
	console.log("      vec3a=" + (m.vec3a.kind + (m.vec3a.count !== undefined ? ":" + m.vec3a.count : ":" + m.vec3a.data.length)) +
		" vec3b=" + (m.vec3b.kind + (m.vec3b.count !== undefined ? ":" + m.vec3b.count : ":" + m.vec3b.data.length)));
	console.log("      u32=" + m.u32.map(a => a.kind + (a.count !== undefined ? ":" + a.count : ":" + a.data.length)).join(" "));
});
console.log("model bbox    ", JSON.stringify(g.bbox));
console.log("objects A/B/C ", g.objA.length, g.objB.length, g.objC.length);
g.objA.slice(0, 4).forEach(o => console.log("   A " + o.name + " mode=" + o.mode +
	" blk2=" + (o.block2Offset !== undefined ? o.block2Offset : "-")));
g.objC.slice(0, 6).forEach(o => console.log("   C " + o.name + " mode=" + o.mode));
console.log("skeleton      ", JSON.stringify(g.skeleton.ints.slice(0, 8)));
console.log("parse end     @0x" + g.end.toString(16) + " (block1 ends @0x" + g.block2Offset.toString(16) + ")");
