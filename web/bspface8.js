/* bspface8.js - what are the two mystery bytes at face+34/+35?
 *
 *   node bspface8.js <map.bsp>
 *
 * Also dumps every key used by the map's entity lump, so that the light
 * entity keys (style, wait, _cone, ...) are known.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const faceCount = L[6].len / 44;

/* entity lump keys */
const entTxt = b.toString("latin1", L[0].off, L[0].off + L[0].len);
const keys = new Map();
const re = /"([^"]*)"\s*"([^"]*)"/g;
let m;
while ((m = re.exec(entTxt)) !== null) keys.set(m[1], (keys.get(m[1]) || 0) + 1);
console.log("entity lump keys:");
for (const [k, v] of [...keys.entries()].sort((a, c) => c[1] - a[1]))
	console.log("   " + k.padEnd(24) + " x" + v);

/* light entities in full */
const lightRe = /\{([^{}]*)\}/g;
const lights = [];
while ((m = lightRe.exec(entTxt)) !== null) {
	const kv = {};
	const kre = /"([^"]*)"\s*"([^"]*)"/g;
	let k2;
	while ((k2 = kre.exec(m[1])) !== null) kv[k2[1]] = k2[2];
	if ((kv.classname || "").indexOf("light") === 0) lights.push(kv);
}
console.log("\nlight entities:", lights.length);
const sample = lights.slice(0, 3);
for (const l of sample) console.log("   " + JSON.stringify(l));
const keyset = new Map();
for (const l of lights) for (const k of Object.keys(l)) keyset.set(k, (keyset.get(k) || 0) + 1);
console.log("   light entity keys:", [...keyset.entries()].map(e => e[0] + ":x" + e[1]).join(" "));

/* correlation of face+34/+35 with the face geometry */
const tex = [];
for (let i = 0; i < L[5].len / 76; i++) {
	const o = L[5].off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	tex.push({ flags: b.readInt32LE(o + 32), name: b.toString("latin1", o + 40, z) });
}
const corr = new Map();
const whBy34 = new Map(), whBy35 = new Map();
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	const w = b[o + 32], h = b[o + 33], a = b[o + 34], c = b[o + 35];
	const ti = tex[b.readUInt16LE(o + 10)];
	const key = a + "/" + c + " texflags=0x" + (ti ? (ti.flags >>> 0).toString(16) : "?");
	corr.set(key, (corr.get(key) || 0) + 1);
	if (!whBy34.has(a)) whBy34.set(a, []);
	whBy34.get(a).push(w * 100 + h);
	if (!whBy35.has(c)) whBy35.set(c, []);
	whBy35.get(c).push(w * 100 + h);
}
console.log("\nface[+34]/face[+35] x texinfo flags:");
for (const [k, v] of [...corr.entries()].sort((a, c) => c[1] - a[1]).slice(0, 20)) console.log("   " + k.padEnd(40) + " x" + v);

/* is +34 related to the luxel count? */
const byA = new Map();
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	const w = b[o + 32], h = b[o + 33], a = b[o + 34];
	if (!w || !h) continue;
	const k = a + ": w" + w + " h" + h;
	byA.set(k, (byA.get(k) || 0) + 1);
}
console.log("\n+34 vs (w,h) pairs (top 30):");
for (const [k, v] of [...byA.entries()].sort((a, c) => c[1] - a[1]).slice(0, 30)) console.log("   " + k.padEnd(18) + " x" + v);
