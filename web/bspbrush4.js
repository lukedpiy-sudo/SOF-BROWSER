/* bspbrush4.js - print the first brushes with their sides and planes.
 *   node bspbrush4.js <map.bsp> [count]
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const count = parseInt(process.argv[3] || "3", 10);
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const planes = [];
for (let i = 0; i < L(1).len / 20; i++) {
	const o = L(1).off + i * 20;
	planes.push({
		n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
		d: b.readFloatLE(o + 12), type: b.readInt32LE(o + 16)
	});
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
const types = new Map();
for (const p of planes) types.set(p.type, (types.get(p.type) || 0) + 1);
console.log("the plane types:", JSON.stringify([...types]));
console.log("the first 8 planes:");
for (let i = 0; i < 8; i++) console.log("  " + i + ": n=" + JSON.stringify(planes[i].n.map(x => +x.toFixed(3))) +
	" d=" + planes[i].d.toFixed(3) + " type=" + planes[i].type);
for (let bi = 0; bi < count; bi++) {
	const br = brushes[bi];
	console.log("\nbrush " + bi + ": firstside=" + br.firstside + " numsides=" + br.numsides +
		" contents=0x" + br.contents.toString(16));
	for (let k = 0; k < br.numsides; k++) {
		const s = sides[br.firstside + k];
		const p = planes[s.plane];
		console.log("  side " + k + ": plane=" + s.plane + " tex=" + s.tex + "  n=" +
			JSON.stringify(p.n.map(x => +x.toFixed(3))) + " d=" + p.d.toFixed(3) + " type=" + p.type);
	}
}
