/* bsppakget.js - extract one file from a .pak into the temp dir.
 *
 *   node bsppakget.js <pak> <pak-internal path> [outdir]
 *
 * The pak header is:
 *   char id[4]        "PACK"
 *   int  dirofs       the offset of the directory
 *   int  dirlen       the length of the directory
 *   int  dirofs2      the offset of the data (0x20000 in the SoF paks)
 * and each directory entry is 64 bytes:
 *   char name[56]
 *   int  filepos      the absolute offset of the file's data
 *   int  filelen      the length of the file's data
 */
"use strict";
const fs = require("fs");
const path = require("path");

const pak = process.argv[2];
const want = (process.argv[3] || "").toLowerCase();
const outdir = process.argv[4] || "C:/Users/User/AppData/Local/Temp/opencode";

const b = fs.readFileSync(pak);
if (b.toString("latin1", 0, 4) !== "PACK") throw new Error("not a pak");
const dirOff = b.readUInt32LE(4);
const dirLen = b.readUInt32LE(8);
const dataStart = b.readUInt32LE(12);
const n = Math.floor(dirLen / 64);
let hit = null;
for (let i = 0; i < n; i++) {
	const o = dirOff + i * 64;
	let name = b.toString("latin1", o, o + 56);
	const z = name.indexOf("\0");
	if (z >= 0) name = name.slice(0, z);
	if (name.toLowerCase() === want) {
		hit = { name, off: b.readUInt32LE(o + 56), len: b.readUInt32LE(o + 60) };
		break;
	}
}
if (!hit) { console.error("not found in " + pak + ": " + want); process.exit(1); }
const out = path.join(outdir, path.basename(hit.name));
fs.writeFileSync(out, b.subarray(hit.off, hit.off + hit.len));
console.log("wrote", out, hit.len, "bytes (pak entry off=" + hit.off + " len=" + hit.len +
	", dataStart=0x" + dataStart.toString(16) + ")");
