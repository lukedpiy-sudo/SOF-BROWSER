/* ghbweapon.js - analyse the small weapon model end to end.
 *
 * The weapon model is 198 KB, so every byte can be accounted for.  This
 * prints the whole model stream structure and the block 2 layout, looking
 * for the vertex data (3 floats per vertex, or a fixed point form).
 */
"use strict";
const fs = require("fs");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghb/sniperrifle.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);

console.log("file", g.fileSize, " block2 @0x" + g.block2Offset.toString(16), " size " + g.block2Size);
console.log("frames", g.frameCount, " clips", g.clips.length);
g.clips.forEach(c => console.log("   " + c.name.padEnd(24) + " scale " + c.scale + " events " + c.events.length +
	(c.events.length ? " " + JSON.stringify(c.events[0]) : "")));
console.log("meshes", g.meshes.length);
g.meshes.forEach(m => {
	console.log("  mesh " + m.name + " flags " + m.flags.map(Number).join("") + " i32 " + m.i32.join(","));
	m.submeshes.forEach((s, i) => {
		console.log("    sub" + i + " " + JSON.stringify(s.name) + " flags " + s.flags.map(Number).join("") +
			" verts " + s.verts.kind + (s.verts.count !== undefined ? ":" + s.verts.count : ":" + s.verts.data.length) +
			" faces " + s.faces.kind + (s.faces.count !== undefined ? ":" + s.faces.count : ":" + s.faces.data.length) +
			" flag " + s.flag);
		if (s.verts.kind === "external") console.log("      verts bytes: " + s.verts.data.toString("hex"));
		if (s.faces.kind === "external") console.log("      faces bytes: " + s.faces.data.toString("hex").replace(/(.{32})/g, "$1 "));
	});
	console.log("    vec3a " + (g.meshes[0] && m.vec3a.kind) + " " + (m.vec3a.kind === "inline" ? m.vec3a.count : m.vec3a.data.toString("hex")));
	console.log("    vec3b " + (m.vec3b.kind === "inline" ? m.vec3b.count : m.vec3b.data.toString("hex")));
	m.u32.forEach((a, i) => console.log("    u32[" + i + "] " + (a.kind === "inline" ? a.count : a.data.toString("hex"))));
});
console.log("bbox", JSON.stringify(g.bbox));
console.log("objA", g.objA.length, "objB", g.objB.length, "objC", g.objC.length);
g.objA.forEach(o => console.log("   A " + o.name + " mode=" + o.mode + " blk2=" + (o.block2Offset !== undefined ? o.block2Offset : "-") +
	(o.v1 ? " v1=" + o.v1.map(x => x.toFixed(2)) : "")));
g.objC.forEach(o => console.log("   C " + o.name + " mode=" + o.mode +
	(o.blob ? " blob=" + o.blob.kind + ":" + (o.blob.count !== undefined ? o.blob.count : o.blob.data.length) : "")));
console.log("skeleton ints", g.skeleton.ints.join(","));
console.log("skeleton vec3s", g.skeleton.vec3s.map(v => v.map(x => x.toFixed(2)).join("/")).join(" "));
console.log("parse end @0x" + g.end.toString(16) + "  block1 ends @0x" + g.block2Offset.toString(16));

/* the block 2 */
const b2 = g.block2Offset;
console.log("\nblock 2 (" + g.block2Size + " bytes):");
console.log("  " + buf.subarray(b2, b2 + 96).toString("hex").replace(/(.{32})/g, "$1 "));
const tracks = g.objA.filter(o => o.block2Offset !== undefined).map(o => o.block2Offset).sort((a, b) => a - b);
console.log("  tracks at", tracks.join(", "), " frames " + g.frameCount);
const end = tracks.length ? tracks[tracks.length - 1] + g.frameCount * 8 : 0;
console.log("  the tracks end at block2+" + end);
const rest = buf.subarray(b2 + end, b2 + end + 256);
console.log("  the rest: " + rest.toString("hex").replace(/(.{32})/g, "$1 "));
/* try to read floats */
const fl = [];
for (let i = 0; i < 16; i++) fl.push(buf.readFloatLE(b2 + end + i * 4).toFixed(3));
console.log("  as floats: " + fl.join(" "));
/* and the 36 KB tail of block 1 */
console.log("\nblock 1 tail @0x" + g.end.toString(16) + " (" + (g.block2Offset - g.end) + " bytes):");
console.log("  " + buf.subarray(g.end, g.end + 128).toString("hex").replace(/(.{32})/g, "$1 "));
