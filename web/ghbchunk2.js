/*
 * ghbchunk2.js - dump the second block 2 chunk (the compressed corner list)
 * of a .ghb model and the surroundings.
 */
"use strict";
const fs = require("fs");
const ghb = require("./ghb.js");
const RELAY = "http://127.0.0.1:8080";
const path = process.argv[2] || "GHOUL/WEAPON/INVIEW/SNIPERRIFLE/SNIPERRIFLE.GHB";
function hexdump(b, from, to, tag) {
	console.log(tag);
	for (let i = from; i < to; i += 16) {
		const s = b.subarray(i, Math.min(i + 16, to));
		console.log("  +" + i.toString(16).padStart(6, "0") + "  " +
			[...s].map(x => x.toString(16).padStart(2, "0")).join(" ") + "  " +
			[...s].map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join(""));
	}
}
(async function () {
	const r = await fetch(RELAY + "/pak/" + path);
	const buf = Buffer.from(await r.arrayBuffer());
	const m = ghb.parseGhoul(buf);
	const g = ghb.parseGeometry(buf, m);
	const b2 = m.block2Offset;
	console.log("the model " + path + " the block 2 at " + b2 + " the size " + m.block2Size +
		" the animation " + g.animationSize + " the vertices " + g.vertices.length + " the corners " + g.cornerCount);
	/* the vertices: the offsets and the corner data */
	for (const v of g.vertices.slice(0, 6)) {
		console.log("  the vertex: the offsetA " + v.offsetA + " the offsetB " + v.offsetB +
			" the corner " + v.corner + " the valence " + v.valence + " the bones " + JSON.stringify(v.bones));
	}
	const v0 = g.vertices[0], v1 = g.vertices[1];
	for (const [name, off] of [["A", v0.offsetA], ["B", v0.offsetB], ["B1", v1.offsetB]]) {
		const o = b2 + off;
		hexdump(buf, o, o + 160, "=== the chunk " + name + " at the block 2 +" + off + " (the file 0x" + o.toString(16) + ")");
	}
	/* the sum of the valences */
	let sum = 0;
	for (const v of g.vertices) sum += v.valence;
	console.log("the sum of the valences: " + sum + " the corner count: " + g.cornerCount);
})();
