/*
 * bspmisc.js - the remaining lumps of the SoF v46 BSP: the leafs and their
 * clusters, the visibility lump, the brushes (and the water), the brush sides
 * and the POP lump.
 *
 *   node bspmisc.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];

/* ------------------------------------------------------------- the leafs */
const leafCount = L(8).len / 32;
console.log("LEAFS:", leafCount, "entries of 32 bytes");
const fields = [[], [], [], [], [], [], [], []];
for (let i = 0; i < leafCount; i++) {
	const o = L(8).off + i * 32;
	fields[0].push(b.readInt32LE(o));
	fields[1].push(b.readInt32LE(o + 4));
	fields[2].push(b.readInt32LE(o + 8));
	fields[3].push(b.readInt16LE(o + 12));
	fields[4].push(b.readInt16LE(o + 14));
	fields[5].push(b.readInt16LE(o + 16));
	fields[6].push(b.readInt16LE(o + 18));
	fields[7].push(b.readInt16LE(o + 20));
}
function survey(name, v) {
	const hist = new Map();
	for (const x of v) hist.set(x, (hist.get(x) || 0) + 1);
	const top = [...hist.entries()].sort((a, c) => c[1] - a[1]).slice(0, 6)
		.map(e => e[0] + "x" + e[1]);
	const mn = Math.min.apply(null, v), mx = Math.max.apply(null, v);
	console.log("  " + name.padEnd(12) + " min=" + String(mn).padStart(7) + " max=" + String(mx).padStart(7) +
		" distinct=" + String(hist.size).padStart(5) + "  " + top.join(" "));
}
console.log("  the 32 byte leaf record: contents, cluster, area, mins[3], maxs[3], firstleafbrush, numleafbrushes, +4");
survey("contents@0", fields[0]);
survey("cluster@4", fields[1]);
survey("area@8", fields[2]);
survey("mins0@12", fields[3]);
survey("mins1@14", fields[4]);
survey("mins2@16", fields[5]);
survey("maxs0@18", fields[6]);
survey("maxs1@20", fields[7]);
/* the last 4 bytes of the leaf */
const tail = new Map();
for (let i = 0; i < leafCount; i++) {
	const o = L(8).off + i * 32;
	const v = b.readUInt32LE(o + 24);
	tail.set(v, (tail.get(v) || 0) + 1);
}
console.log("  the last 4 bytes:", [...tail.entries()].sort((a, c) => c[1] - a[1]).slice(0, 6)
	.map(e => "0x" + e[0].toString(16) + "x" + e[1]).join(" "));

/* ------------------------------------------------------- the visibility */
const vis = b.subarray(L(3).off, L(3).off + L(3).len);
console.log("\nVISIBILITY:", vis.length, "bytes");
console.log("  the first 32 u16:", Array.from(vis.subarray(0, 64)).filter((v, i) => i % 2 === 0)
	.slice(0, 0).length ? "" : "");
const u16 = [];
for (let i = 0; i < 32 && 2 * i + 1 < vis.length; i++) u16.push(vis.readUInt16LE(2 * i));
console.log("  ", u16.join(" "));
const u32 = [];
for (let i = 0; i < 16 && 4 * i + 3 < vis.length; i++) u32.push(vis.readUInt32LE(4 * i));
console.log("  u32:", u32.map(x => "0x" + x.toString(16)).join(" "));
/* is it a table of (offset, flag) pairs? */
let pairs = 0, mono = 0, prev = -1;
for (let i = 0; i + 4 <= vis.length; i += 4) {
	const a = vis.readUInt16LE(i), f = vis.readUInt16LE(i + 2);
	if (f <= 1) pairs++;
	if (f === 1) { if (a <= prev) mono++; prev = a; }
}
console.log("  as (u16 offset, u16 flag<=1) pairs: " + pairs + " of " + (vis.length / 4) +
	", the flag=1 offsets are monotone: " + (mono === 0 ? "yes" : mono + " breaks"));

/* ---------------------------------------------------------- the brushes */
const brushCount = L(14).len / 12;
console.log("\nBRUSHES:", brushCount, "entries of 12 bytes");
const contents = new Map();
for (let i = 0; i < brushCount; i++) {
	const o = L(14).off + i * 12;
	const c = b.readInt32LE(o);
	contents.set(c, (contents.get(c) || 0) + 1);
}
console.log("  the contents flags:", [...contents.entries()].sort((a, c) => c[1] - a[1])
	.map(e => "0x" + e[0].toString(16) + " x" + e[1]).join("  "));
/* the firstside and numsides */
let firstSide = 0;
for (let i = 0; i < brushCount; i++) {
	const o = L(14).off + i * 12;
	if (b.readInt32LE(o + 4) !== 0) firstSide++;
}
console.log("  the brushes with a non zero firstside:", firstSide);
/* the brush sides: 4 bytes: planenum(u16) and texinfo(u16)? */
const sideCount = L(15).len / 4;
console.log("BRUSHSIDES:", sideCount, "entries of 4 bytes");
const sideTex = [];
for (let i = 0; i < sideCount; i++) {
	const o = L(15).off + i * 4;
	sideTex.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
}
const texMax = L(5).len / 76;
let badTex = 0;
for (const s of sideTex) if (s[1] >= texMax) badTex++;
console.log("  as (u16, u16): the second value out of range for " + badTex + " of " + sideCount +
	" (the texinfo count is " + texMax + ")");

/* ------------------------------------------------------------ the POP lump */
console.log("\nPOP lump:", L(16).len, "bytes, all zero:",
	b.subarray(L(16).off, L(16).off + L(16).len).every(x => x === 0));

/* ---------------------------------------------------- the model lump */
console.log("\nMODELS:", L(13).len / 48, "entries of 48 bytes");
for (let i = 0; i < L(13).len / 48; i++) {
	const o = L(13).off + i * 48;
	console.log("  model " + i + " mins=" + [0, 4, 8].map(k => b.readFloatLE(o + k).toFixed(0)).join(",") +
		" maxs=" + [12, 16, 20].map(k => b.readFloatLE(o + k).toFixed(0)).join(",") +
		" origin=" + [24, 28, 32].map(k => b.readFloatLE(o + k).toFixed(0)).join(",") +
		" headnode=" + [36, 40, 44].map(k => b.readInt32LE(o + k)).join(",") +
		" firstface=" + b.readInt32LE(o + 48 - 12) + " numfaces=" + b.readInt32LE(o + 48 - 8));
}

/* ------------------------------------------- the light style bytes of the face */
const styles = new Map();
for (let i = 0; i < L(6).len / 44; i++) {
	const o = L(6).off + i * 44;
	const k = b[o + 34] + "," + b[o + 35];
	styles.set(k, (styles.get(k) || 0) + 1);
}
console.log("\nthe face bytes +34/+35:", [...styles.entries()].sort((a, c) => c[1] - a[1])
	.map(e => e[0] + " x" + e[1]).join("  "));
