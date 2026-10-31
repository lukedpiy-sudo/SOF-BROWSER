/*
 * ghbchunk.js - dump the block 2 chunks of a .ghb model: the per vertex
 * compressed chunks (the LZ stream) and the bolt tracks.
 *
 *   node ghbchunk.js [model path]
 */
"use strict";
const fs = require("fs");
const ghb = require("./ghb.js");
const RELAY = "http://127.0.0.1:8080";
const path = process.argv[2] || "GHOUL/WEAPON/INVIEW/SNIPERRIFLE/SNIPERRIFLE.GHB";
(async function () {
	const r = await fetch(RELAY + "/pak/" + path);
	const buf = Buffer.from(await r.arrayBuffer());
	const m = ghb.parseGhoul(buf);
	const g = ghb.parseGeometry(buf, m);
	console.log("the model " + path + " " + buf.length + " bytes");
	console.log("the block 2 at " + m.block2Offset + " the size " + m.block2Size +
		" the animation " + g.animationSize + " the vertices " + g.vertices.length +
		" the corners " + g.cornerCount);
	const b2 = m.block2Offset;
	/* the first bytes of block 2 */
	const head = buf.subarray(b2, b2 + 96);
	console.log("the head of block 2:");
	for (let i = 0; i < head.length; i += 16) {
		const s = head.subarray(i, i + 16);
		console.log("  +" + i.toString(16).padStart(4, "0") + "  " +
			[...s].map(x => x.toString(16).padStart(2, "0")).join(" ") + "  " +
			[...s].map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join(""));
	}
	/* the per vertex chunk: the first vertex's offsetA */
	const v0 = g.vertices[0];
	console.log("the vertex 0: the offsetA " + v0.offsetA + " the offsetB " + v0.offsetB +
		" the bones " + JSON.stringify(v0.bones) + " the valence " + v0.valence + " the corner " + v0.corner);
	const chunk = buf.subarray(b2 + v0.offsetA, b2 + v0.offsetA + 256);
	console.log("the chunk at the block 2 +" + v0.offsetA + ":");
	for (let i = 0; i < chunk.length; i += 16) {
		const s = chunk.subarray(i, i + 16);
		console.log("  +" + i.toString(16).padStart(4, "0") + "  " +
			[...s].map(x => x.toString(16).padStart(2, "0")).join(" ") + "  " +
			[...s].map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join(""));
	}
	/* the u16 values of the chunk */
	const c = buf.subarray(b2 + v0.offsetA, Math.min(b2 + v0.offsetA + 512, buf.length));
	const u16 = [];
	for (let i = 0; i + 1 < c.length; i += 2) u16.push(c.readUInt16LE(i));
	console.log("the u16s of the chunk: " + u16.slice(0, 40).join(" "));
})();
