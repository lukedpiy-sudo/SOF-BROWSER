/*
 * adp2wav.js - decode a .adp out of a pak and write it as a .wav, so the
 * result can be listened to in any audio player.
 *
 *   node web/adp2wav.js <path in the pak> [out.wav] [pak]
 */
"use strict";
const fs = require("fs");
const path = require("path");
const dec = require(path.join(__dirname, "audiodec.js"));

const want = process.argv[2];
const out = process.argv[3] || (want ? want.replace(/[\\\/]/g, "_") + ".wav" : "out.wav");
const PAK = process.argv[4] || "C:\\Users\\User\\Soldier of Fortune\\Base\\pak0.pak";
if (!want) { console.log("usage: node adp2wav.js <path in the pak> [out.wav] [pak]"); process.exit(1); }

const fd = fs.openSync(PAK, "r");
const head = Buffer.alloc(16);
fs.readSync(fd, head, 0, 16, 0);
const dirLen = head.readUInt32LE(8), dirOff = head.readUInt32LE(4);
const dir = Buffer.alloc(dirLen);
fs.readSync(fd, dir, 0, dirLen, dirOff);
let data = null;
for (let i = 0; i < dirLen; i += 64) {
	let nm = dir.toString("latin1", i, i + 56);
	const z = nm.indexOf("\0");
	if (z >= 0) nm = nm.slice(0, z);
	if (nm.toLowerCase() === want.toLowerCase()) {
		const len = dir.readUInt32LE(i + 60), off = dir.readUInt32LE(i + 56);
		data = Buffer.alloc(len);
		fs.readSync(fd, data, 0, len, off);
		break;
	}
}
fs.closeSync(fd);
if (!data) { console.log("not in the pak: " + want); process.exit(1); }

const a = dec.decodeAdp(data);
const n = a.samples.length;
const pcm = Buffer.alloc(n * 2);
for (let i = 0; i < n; i++) pcm.writeInt16LE(a.samples[i], i * 2);
const hdr = Buffer.alloc(44);
hdr.write("RIFF", 0); hdr.writeUInt32LE(36 + pcm.length, 4); hdr.write("WAVE", 8);
hdr.write("fmt ", 12); hdr.writeUInt32LE(16, 16); hdr.writeUInt16LE(1, 20);
hdr.writeUInt16LE(1, 22); hdr.writeUInt32LE(a.rate, 24); hdr.writeUInt32LE(a.rate * 2, 28);
hdr.writeUInt16LE(2, 32); hdr.writeUInt16LE(16, 34);
hdr.write("data", 36); hdr.writeUInt32LE(pcm.length, 40);
fs.writeFileSync(out, Buffer.concat([hdr, pcm]));
console.log(want + " -> " + out + "  " + a.rate + " Hz, " + n + " samples, " +
	(n / a.rate).toFixed(1) + " s, " + fs.statSync(out).size + " bytes");
