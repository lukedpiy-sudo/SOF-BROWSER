/* bspwater2.js - which materials are on the brushes of each content group?
 *   node bspwater2.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const texinfo = [];
for (let i = 0; i < L(5).len / 76; i++) {
	const o = L(5).off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	texinfo.push({ flags: b.readInt32LE(o + 32) >>> 0, name: b.toString("latin1", o + 40, z) });
}
const brushes = [];
for (let i = 0; i < L(14).len / 12; i++) {
	const o = L(14).off + i * 12;
	brushes.push({ firstside: b.readInt32LE(o), numsides: b.readInt32LE(o + 4), contents: b.readInt32LE(o + 8) });
}
const sides = [];
for (let i = 0; i < L(15).len / 4; i++) {
	const o = L(15).off + i * 4;
	sides.push({ plane: b.readUInt16LE(o), tex: b.readUInt16LE(o + 2) });
}
const groups = new Map();
for (const br of brushes) {
	const mats = new Set();
	for (let k = 0; k < br.numsides; k++) {
		const s = sides[br.firstside + k];
		if (s.tex === 0xffff) continue;
		const t = texinfo[s.tex];
		if (t) mats.add(t.name);
	}
	const g = groups.get(br.contents) || { n: 0, mats: new Map() };
	g.n++;
	for (const m of mats) g.mats.set(m, (g.mats.get(m) || 0) + 1);
	groups.set(br.contents, g);
}
for (const [c, g] of [...groups.entries()].sort((a, b) => b[1].n - a[1].n)) {
	console.log("\ncontents 0x" + c.toString(16) + ": " + g.n + " brushes");
	const top = [...g.mats.entries()].sort((a, b) => b[1] - a[1]).slice(0, 8);
	for (const [m, k] of top) console.log("    " + m.padEnd(34) + " x" + k);
}
/* the faces with no lightmap: their materials and flags */
console.log("\nthe faces whose texinfo has the low flag bits 0x04/0x05 (no lightmap):");
const noLm = new Map();
for (let i = 0; i < L(6).len / 44; i++) {
	const o = L(6).off + i * 44;
	const t = texinfo[b.readUInt16LE(o + 10)];
	if (!t) continue;
	if ((t.flags & 0x0f) === 0x04 || (t.flags & 0x0f) === 0x05) {
		noLm.set(t.name, (noLm.get(t.name) || 0) + 1);
	}
}
for (const [m, k] of [...noLm.entries()].sort((a, b) => b[1] - a[1]).slice(0, 12)) console.log("   " + m.padEnd(34) + " x" + k);
/* the flags of the texinfos that the water brushes use */
console.log("\nthe texinfo flags of the sides of the 0x18030000 brushes:");
const f = new Map();
for (const br of brushes) {
	if (br.contents !== 0x18030000) continue;
	for (let k = 0; k < br.numsides; k++) {
		const s = sides[br.firstside + k];
		if (s.tex === 0xffff) continue;
		const t = texinfo[s.tex];
		if (t) f.set(t.flags, (f.get(t.flags) || 0) + 1);
	}
}
for (const [k, v] of [...f.entries()].sort((a, b) => b[1] - a[1]).slice(0, 10)) console.log("   0x" + k.toString(16) + " x" + v);
