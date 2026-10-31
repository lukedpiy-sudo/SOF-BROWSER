/*
 * bspverify8.js - what does the baked lightmap contain?
 *   node bspverify8.js <map.bsp>
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
	texinfo.push({ flags: b.readInt32LE(o + 32), name: b.toString("latin1", o + 40, z) });
}
const planes = [];
for (let i = 0; i < L(1).len / 20; i++) {
	const o = L(1).off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const lightData = b.subarray(L(7).off, L(7).off + L(7).len);
const faceCount = L(6).len / 44;

/* the sun */
const entTxt = b.toString("latin1", L(0).off, L(0).off + L(0).len);
const entList = [];
{
	const re = /\{([^{}]*)\}/g; let m;
	while ((m = re.exec(entTxt)) !== null) {
		const kv = {}; const kre = /"([^"]*)"\s*"([^"]*)"/g; let k;
		while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
		entList.push(kv);
	}
}
const num = (v) => { const p = String(v || "").trim().split(/\s+/).map(Number); return p.some(isNaN) ? null : p; };
const world = entList.find(e => e.classname === "worldspawn") || {};
const sunEnt = entList.find(e => e.targetname === world._sun);
console.log("the worldspawn:", JSON.stringify(world));
console.log("the sun entity:", JSON.stringify(sunEnt));

/* the histogram of the luxel colours */
const hist = new Map();
let total = 0;
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ofs = b.readInt32LE(o + 28);
	for (let r = 0; r < h; r++) for (let c = 0; c < w; c++) {
		const p = ofs + (r * w + c) * 3;
		const key = lightData[p] + "," + lightData[p + 1] + "," + lightData[p + 2];
		hist.set(key, (hist.get(key) || 0) + 1);
		total++;
	}
}
console.log("\nluxels:", total, " distinct colours:", hist.size);
const top = [...hist.entries()].sort((a, c) => c[1] - a[1]).slice(0, 12);
for (const [k, v] of top) console.log("   " + k.padEnd(16) + " x" + v +
	" (" + (100 * v / total).toFixed(1) + "%)");

/* the faces that are entirely (1,1,1) */
let uniform = 0, uniformFaces = [];
for (let i = 0; i < faceCount; i++) {
	const o = L(6).off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ofs = b.readInt32LE(o + 28);
	let same = true;
	for (let r = 0; r < h && same; r++) for (let c = 0; c < w; c++) {
		const p = ofs + (r * w + c) * 3;
		if (lightData[p] !== 1 || lightData[p + 1] !== 1 || lightData[p + 2] !== 1) { same = false; break; }
	}
	if (same) { uniform++; uniformFaces.push(i); }
}
console.log("\nfaces whose lightmap is entirely (1,1,1):", uniform);
if (uniformFaces.length) {
	console.log("   the first 10:", uniformFaces.slice(0, 10).join(", "));
	for (const i of uniformFaces.slice(0, 6)) {
		const o = L(6).off + i * 44;
		const pl = planes[b.readUInt16LE(o)];
		const sgn = b.readUInt16LE(o + 2) ? -1 : 1;
		console.log("   face " + i + " texinfo " + b.readUInt16LE(o + 10) + " " +
			texinfo[b.readUInt16LE(o + 10)].name + " flags 0x" + (texinfo[b.readUInt16LE(o + 10)].flags >>> 0).toString(16) +
			" normal [" + [pl.n[0] * sgn, pl.n[1] * sgn, pl.n[2] * sgn].map(x => x.toFixed(2)).join(",") + "]" +
			" aux " + b[o + 34] + "," + b[o + 35]);
	}
}
