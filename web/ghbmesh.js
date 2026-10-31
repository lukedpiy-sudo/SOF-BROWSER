/* ghbmesh.js - build a mesh from the tail's vertices and the table, and
 * render it to a PNG so the interpretation can be checked by eye.
 *
 *   node ghbmesh.js <file.ghb> <out.png> [mode]
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");
const { parseGhoul } = require("./ghb.js");

const file = process.argv[2];
const out = process.argv[3] || "mesh.png";
const mode = process.argv[4] || "fan";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const end = g.block2Offset;

/* the table: the u32 values, the multiples of 256 */
let p = t + 0x20;
let last = -1, run = 0;
const tbl = [];
while (p + 4 <= end) {
	const v = buf.readUInt32LE(p);
	if (v % 256 !== 0 || v < last || run > 16 || v > 0x100000) break;
	if (v === last) run++; else { run = 1; last = v; }
	tbl.push(v >> 8);
	p += 4;
}
const groups = [];
for (let i = 0; i < tbl.length;) {
	let j = i;
	while (j < tbl.length && tbl[j] === tbl[i]) j++;
	groups.push({ idx: tbl[i], n: j - i, at: i });
	i = j;
}

/* the vertices: 43 byte records, 21 bytes after the table */
const recStart = p + 21;
const verts = [];
for (let o = recStart; o + 43 <= end; o += 43) {
	const uv = [buf.readFloatLE(o), buf.readFloatLE(o + 4), buf.readFloatLE(o + 8)];
	const pos = [buf.readFloatLE(o + 12), buf.readFloatLE(o + 16), buf.readFloatLE(o + 20)];
	verts.push({ uv: uv, pos: pos, raw: buf.subarray(o + 24, o + 43) });
}
console.log("the table: " + tbl.length + " entries, " + groups.length + " groups");
console.log("the vertices: " + verts.length + " records from the tail +0x" + (recStart - t).toString(16));
console.log("the first groups: " + groups.slice(0, 8).map(x => x.idx + "x" + x.n).join(" "));
console.log("the last groups: " + groups.slice(-4).map(x => x.idx + "x" + x.n).join(" "));

/* the triangles */
const tris = [];
if (mode === "fan") {
	/* for every vertex: the fans (v, n[i], n[i+1]) */
	for (const gr of groups) {
		const ns = tbl.slice(gr.at, gr.at + gr.n);
		for (let i = 1; i + 1 < ns.length; i++) tris.push([gr.idx, ns[i], ns[i + 1]]);
	}
} else if (mode === "seq") {
	/* the table in order, three by three */
	for (let i = 0; i + 2 < tbl.length; i += 3) tris.push([tbl[i], tbl[i + 1], tbl[i + 2]]);
}
console.log("the triangles (" + mode + "): " + tris.length);

/* ------------------------------------------------------------ the renderer */
const W = 256, H = 256;
const img = Buffer.alloc(W * H * 3, 20);
function put(x, y, r, g, b) {
	if (x < 0 || y < 0 || x >= W || y >= H) return;
	const o = (y * W + x) * 3;
	img[o] = r; img[o + 1] = g; img[o + 2] = b;
}
/* the projection: the bounding box of the vertices, orthographic */
let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
for (const v of verts) for (let i = 0; i < 3; i++) {
	if (v.pos[i] < mn[i]) mn[i] = v.pos[i];
	if (v.pos[i] > mx[i]) mx[i] = v.pos[i];
}
const c = [(mn[0] + mx[0]) / 2, (mn[1] + mx[1]) / 2, (mn[2] + mx[2]) / 2];
const span = Math.max(mx[0] - mn[0], mx[1] - mn[1], mx[2] - mn[2]) || 1;
const sc = (W * 0.45) / span;
function proj(p, ax) {
	/* ax: 0 = the x axis to the right, 1 = the y axis up */
	const d = [p[0] - c[0], p[1] - c[1], p[2] - c[2]];
	if (ax === 0) return [W / 2 + d[0] * sc, H / 2 - d[2] * sc, d[1]];
	return [W / 2 + d[0] * sc, H / 2 - d[1] * sc, d[2]];
}
for (const ax of [0, 1]) {
	const off = ax === 0 ? 0 : 0;
	for (const tr of tris) {
		const a = proj(verts[tr[0]].pos, ax), b = proj(verts[tr[1]].pos, ax), d = proj(verts[tr[2]].pos, ax);
		/* a flat colour by the depth */
		const z = (a[2] + b[2] + d[2]) / 3;
		const sh = Math.max(0.2, Math.min(1, 0.5 + z / (span * 2)));
		const r = 255 * sh, g = 200 * sh, bl = 120 * sh;
		/* a filled triangle */
		const minX = Math.floor(Math.min(a[0], b[0], d[0])), maxX = Math.ceil(Math.max(a[0], b[0], d[0]));
		const minY = Math.floor(Math.min(a[1], b[1], d[1])), maxY = Math.ceil(Math.max(a[1], b[1], d[1]));
		const det = (b[1] - d[1]) * (a[0] - d[0]) + (d[0] - b[0]) * (a[1] - d[1]);
		for (let y = minY; y <= maxY; y++) for (let x = minX; x <= maxX; x++) {
			const l0 = ((b[1] - d[1]) * (x - d[0]) + (d[0] - b[0]) * (y - d[1])) / det;
			const l1 = ((d[1] - a[1]) * (x - d[0]) + (a[0] - d[0]) * (y - d[1])) / det;
			const l2 = 1 - l0 - l1;
			if (l0 < 0 || l1 < 0 || l2 < 0) continue;
			put(x, y, r, g, bl);
		}
	}
}
/* the PNG */
function crc32(buf) {
	let c, crc = 0xffffffff;
	for (let n = 0; n < buf.length; n++) {
		c = (crc ^ buf[n]) & 0xff;
		for (let k = 0; k < 8; k++) c = (c & 1) ? (0xedb88320 ^ (c >>> 1)) : (c >>> 1);
		crc = (crc >>> 8) ^ c;
	}
	return (crc ^ 0xffffffff) >>> 0;
}
function chunk(type, data) {
	const len = Buffer.alloc(4); len.writeUInt32BE(data.length);
	const td = Buffer.concat([Buffer.from(type, "latin1"), data]);
	const crc = Buffer.alloc(4); crc.writeUInt32BE(crc32(td));
	return Buffer.concat([len, td, crc]);
}
const ihdr = Buffer.alloc(13);
ihdr.writeUInt32BE(W, 0); ihdr.writeUInt32BE(H, 4);
ihdr[8] = 8; ihdr[9] = 2; ihdr[10] = 0; ihdr[11] = 0; ihdr[12] = 0;
const raw = Buffer.alloc((W * 3 + 1) * H);
for (let y = 0; y < H; y++) {
	raw[y * (W * 3 + 1)] = 0;
	img.copy(raw, y * (W * 3 + 1) + 1, y * W * 3, (y + 1) * W * 3);
}
const png = Buffer.concat([
	Buffer.from([137, 80, 78, 71, 13, 10, 26, 10]),
	chunk("IHDR", ihdr),
	chunk("IDAT", zlib.deflateSync(raw)),
	chunk("IEND", Buffer.alloc(0))
]);
fs.writeFileSync(out, png);
console.log("wrote " + out);
