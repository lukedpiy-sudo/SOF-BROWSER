/* paklist.js - list the entries of a .pak (or a filtered subset). */
"use strict";
const fs = require("fs");
const pak = process.argv[2] || "C:\\Users\\User\\Soldier of Fortune\\Base\\pak0.pak";
const filter = (process.argv[3] || "").toLowerCase();
const b = fs.readFileSync(pak);
const dirOff = b.readUInt32LE(4);
const dirLen = b.readUInt32LE(8);
const dataStart = b.readUInt32LE(12);
console.log("the pak is " + b.length + " bytes, the directory is " + dirLen + " bytes at " +
	dirOff + ", the data starts at 0x" + dataStart.toString(16));
const n = dirLen / 64;
const ext = {};
for (let i = 0; i < n; i++) {
	const o = dirOff + i * 64;
	let name = b.toString("latin1", o, o + 56);
	const z = name.indexOf("\0");
	if (z >= 0) name = name.slice(0, z);
	const off = b.readUInt32LE(o + 56);
	const len = b.readUInt32LE(o + 60);
	const e = (name.match(/\.[A-Za-z0-9]+$/) || ["?"])[0].toLowerCase();
	ext[e] = (ext[e] || 0) + 1;
	if (filter && name.toLowerCase().indexOf(filter) < 0) continue;
	console.log(name.padEnd(60) + " off " + off + " len " + len);
}
console.log("\nthe extensions:");
Object.keys(ext).sort((a, b2) => ext[b2] - ext[a]).forEach(k => console.log("   " + k + " x" + ext[k]));
