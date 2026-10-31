/* bspm32png.js - convert a .m32 material to a PNG (the base level).
 *   node bspm32png.js <file.m32> <out.png>
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");
const file = process.argv[2];
const out = process.argv[3] || (file + ".png");
const b = fs.readFileSync(file);
const mipsizes = [];
for (let i = 0; i < 7; i++) mipsizes.push(b.readInt32LE(516 + i * 4));
const dataOff = b.readInt32LE(644);
const mip0 = b.readInt32LE(648);
const w = mipsizes[0], h = mipsizes[0];
let bpp = 4;
if (mip0 > dataOff) {
	const per = (mip0 - dataOff) / (w * w);
	bpp = per === 2 ? 2 : 4;
}
console.log(file, w + "x" + h, "the format:", bpp === 2 ? "RGB565" : "RGBA",
	"the name:", b.toString("latin1", 4, 4 + 128).replace(/\0.*/, ""));
const rgba = Buffer.alloc(w * h * 4);
if (bpp === 4) {
	b.copy(rgba, 0, dataOff, dataOff + w * h * 4);
} else {
	for (let i = 0; i < w * h; i++) {
		const v = b.readUInt16LE(dataOff + i * 2);
		rgba[i * 4] = Math.round(((v >> 11) & 31) * 255 / 31);
		rgba[i * 4 + 1] = Math.round(((v >> 5) & 63) * 255 / 63);
		rgba[i * 4 + 2] = Math.round((v & 31) * 255 / 31);
		rgba[i * 4 + 3] = 255;
	}
}
function crc32(buf) {
	let c, table = crc32.table;
	if (!table) {
		table = crc32.table = new Int32Array(256);
		for (let n = 0; n < 256; n++) { c = n; for (let k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320 ^ (c >>> 1) : c >>> 1; table[n] = c; }
	}
	let crc = -1;
	for (let i = 0; i < buf.length; i++) crc = table[(crc ^ buf[i]) & 0xFF] ^ (crc >>> 8);
	return (crc ^ -1) >>> 0;
}
function chunk(type, data) {
	const len = Buffer.alloc(4); len.writeUInt32BE(data.length, 0);
	const td = Buffer.concat([Buffer.from(type, "latin1"), data]);
	const crc = Buffer.alloc(4); crc.writeUInt32BE(crc32(td), 0);
	return Buffer.concat([len, td, crc]);
}
const raw = Buffer.alloc((w * 4 + 1) * h);
for (let y = 0; y < h; y++) {
	raw[y * (w * 4 + 1)] = 0;
	rgba.copy(raw, y * (w * 4 + 1) + 1, y * w * 4, (y + 1) * w * 4);
}
const ihdr = Buffer.alloc(13);
ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4); ihdr[8] = 8; ihdr[9] = 6;
const png = Buffer.concat([
	Buffer.from([0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A]),
	chunk("IHDR", ihdr), chunk("IDAT", zlib.deflateSync(raw, { level: 9 })), chunk("IEND", Buffer.alloc(0))
]);
fs.writeFileSync(out, png);
console.log("wrote", out, (png.length / 1024).toFixed(1) + " KB");
