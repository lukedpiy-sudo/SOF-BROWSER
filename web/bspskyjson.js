/* bspskyjson.js - build web/www/map_sky.json: the engine's sky for a map.
 *
 *   node bspskyjson.js <sky.txt> <name1.m32> [<name2.m32> ...] [out.json]
 *
 * The engine (SoF.exe) reads "pics/sky/<name>.txt": one texture name per
 * line, one line per face of the sky box.  The renderer (ref_gl.dll) picks
 * the face by the dominant axis of the sky polygon's normal and the face
 * table at 0x3002ff60 gives the axes:
 *
 *   the face   the normal   the s axis   the t axis   the .txt line
 *   0          +X           -Y          +Z          0
 *   1          -X           +Y          +Z          1
 *   2          +Y           +X          +Z          2
 *   3          -Y           -X          +Z          3
 *   4          +Z           -Y          -X          4
 *   5          -Z           -Y          +X          5
 *
 * The textures are the .m32 materials of the pak; the base level is written
 * as a PNG (the same encoder as bspm32png.js).
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");

const txt = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ny.txt";
const out = process.argv[process.argv.length - 1].endsWith(".json")
	? process.argv[process.argv.length - 1] : "C:/Users/User/q2work/sof2/web/www/map_sky.json";
const m32 = process.argv.slice(3).filter(function (a) { return a.toLowerCase().endsWith(".m32"); });

/* the face table of the renderer: the normal axis, the s axis, the t axis */
const FACES = [
	{ axis: 1, s: -2, t: 3 },
	{ axis: -1, s: 2, t: 3 },
	{ axis: 2, s: 1, t: 3 },
	{ axis: -2, s: -1, t: 3 },
	{ axis: 3, s: -2, t: -1 },
	{ axis: -3, s: -2, t: 1 }
];

function crc32(buf) {
	let c, table = crc32.table;
	if (!table) {
		table = crc32.table = new Int32Array(256);
		for (let n = 0; n < 256; n++) {
			c = n;
			for (let k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320 ^ (c >>> 1) : c >>> 1;
			table[n] = c;
		}
	}
	let crc = -1;
	for (let i = 0; i < buf.length; i++) crc = (crc ^ buf[i]) & 0xFF ? (crc ^ buf[i]) & 0xFF : crc;
	/* the real loop (the one above is a placeholder) */
	crc = -1;
	for (let i = 0; i < buf.length; i++) crc = (crc >>> 8) ^ table[(crc ^ buf[i]) & 0xFF];
	return (crc ^ -1) >>> 0;
}
function chunk(type, data) {
	const len = Buffer.alloc(4); len.writeUInt32BE(data.length, 0);
	const td = Buffer.concat([Buffer.from(type, "latin1"), data]);
	const crc = Buffer.alloc(4); crc.writeUInt32BE(crc32(td), 0);
	return Buffer.concat([len, td, crc]);
}
function png(w, h, rgba) {
	const raw = Buffer.alloc((w * 4 + 1) * h);
	for (let y = 0; y < h; y++) {
		raw[y * (w * 4 + 1)] = 0;
		rgba.copy(raw, y * (w * 4 + 1) + 1, y * w * 4, (y + 1) * w * 4);
	}
	const ihdr = Buffer.alloc(13);
	ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4); ihdr[8] = 8; ihdr[9] = 6;
	return Buffer.concat([
		Buffer.from([0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A]),
		chunk("IHDR", ihdr), chunk("IDAT", zlib.deflateSync(raw, { level: 9 })), chunk("IEND", Buffer.alloc(0))
	]);
}
function m32png(file) {
	const b = fs.readFileSync(file);
	const w = b.readInt32LE(516), h = b.readInt32LE(520);
	const dataOff = b.readInt32LE(644), mip0 = b.readInt32LE(648);
	let bpp = 4;
	if (mip0 > dataOff) bpp = ((mip0 - dataOff) / (w * w)) === 2 ? 2 : 4;
	const rgba = Buffer.alloc(w * h * 4);
	if (bpp === 4) b.copy(rgba, 0, dataOff, dataOff + w * h * 4);
	else {
		for (let i = 0; i < w * h; i++) {
			const v = b.readUInt16LE(dataOff + i * 2);
			rgba[i * 4] = Math.round(((v >> 11) & 31) * 255 / 31);
			rgba[i * 4 + 1] = Math.round(((v >> 5) & 63) * 255 / 63);
			rgba[i * 4 + 2] = Math.round((v & 31) * 255 / 31);
			rgba[i * 4 + 3] = 255;
		}
	}
	return { w: w, h: h, png: png(w, h, rgba) };
}

/* the .txt: one texture name per line */
const names = fs.readFileSync(txt, "latin1").split(/\r?\n/).map(function (s) { return s.trim(); })
	.filter(function (s) { return s.length > 0; });
console.log("the sky file", txt, "->", names.length, "faces:", names.join(" "));

const textures = {};
for (const f of m32) {
	const key = f.replace(/^.*[\\\/]/, "").replace(/\.m32$/i, "");
	const t = m32png(f);
	textures[key] = { w: t.w, h: t.h, png: t.png.toString("base64") };
	console.log("  the texture", key, t.w + "x" + t.h, (t.png.length / 1024).toFixed(1) + " KB");
}
const faces = names.map(function (n, i) {
	const key = n.replace(/^.*\//, "");
	return {
		texture: key, name: n, file: FACES[i] || null,
		axis: FACES[i] ? FACES[i].axis : 0, s: FACES[i] ? FACES[i].s : 0, t: FACES[i] ? FACES[i].t : 0
	};
});
fs.writeFileSync(out, JSON.stringify({
	sky: (txt.match(/([^\\\/]+)\.txt$/i) || [, "ny"])[1].toLowerCase(),
	faces: faces,
	textures: textures,
	note: "the sky of pics/sky/<sky>.txt: one texture per face of the sky box, the axes from the renderer's face table (ref_gl.dll 0x3002ff60)"
}));
console.log("wrote", out, (fs.statSync(out).size / 1024).toFixed(1) + " KB");
