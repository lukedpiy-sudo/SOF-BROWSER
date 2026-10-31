/*
 * bspview.js - a software renderer for the map's faces, so that the geometry
 * can be inspected without the browser.
 *
 *   node bspview.js <map.bsp> <out.png> [camera] [size] [encoding]
 *
 * camera: "top" | "side" | "iso" | "x y z yaw pitch"  (the engine's Z up)
 * encoding: the surfedge encoding to use (see bspfacecheck.js)
 *
 * The faces are drawn with a z buffer; every face gets a colour from its
 * plane normal, so a wrong face shows up as a wrongly coloured slab.
 */
"use strict";
const fs = require("fs");
const zlib = require("zlib");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const outPng = process.argv[3] || "C:/Users/User/AppData/Local/Temp/opencode/bspview.png";
const camArg = process.argv[4] || "iso";
const sizeArg = parseInt(process.argv[5] || "1100", 10);
const encArg = process.argv[6] || "signed";

const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const planes = [];
for (let i = 0; i < L[1].len / 20; i++) {
	const o = L[1].off + i * 20;
	planes.push({ n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)], d: b.readFloatLE(o + 12) });
}
const vertices = [];
for (let i = 0; i < L[2].len / 12; i++) {
	const o = L[2].off + i * 12;
	vertices.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
}
const edges = [];
for (let i = 0; i < L[11].len / 4; i++) {
	const o = L[11].off + i * 4;
	edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
}
const surfedges = [];
for (let i = 0; i < L[12].len / 4; i++) surfedges.push(b.readInt32LE(L[12].off + i * 4));
const faceCount = L[6].len / 44;
const faces = [];
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	faces.push({
		i: i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
		firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8),
		texinfo: b.readUInt16LE(o + 10)
	});
}
const texinfo = [];
for (let i = 0; i < L[5].len / 76; i++) {
	const o = L[5].off + i * 76;
	let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
	texinfo.push({ name: b.toString("latin1", o + 40, z), flags: b.readInt32LE(o + 32) >>> 0 });
}

const DEC = {
	"signed": (se) => { const v = se | 0; const idx = Math.abs(v); return idx >= edges.length ? null : { idx: idx, rev: v < 0 }; },
	"q2": (se) => { const v = se | 0; if (!v) return null; const idx = Math.abs(v) - 1; return (idx < 0 || idx >= edges.length) ? null : { idx: idx, rev: v < 0 }; },
	"highbit": (se) => { const rev = (se & 0x80000000) !== 0; const idx = se & 0x7fffffff; return idx >= edges.length ? null : { idx: idx, rev: rev }; }
};
const dec = DEC[encArg] || DEC.signed;

/* the bounds */
let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
for (const v of vertices) for (let i = 0; i < 3; i++) { if (v[i] < mn[i]) mn[i] = v[i]; if (v[i] > mx[i]) mx[i] = v[i]; }
const ctr = [(mn[0] + mx[0]) / 2, (mn[1] + mx[1]) / 2, (mn[2] + mx[2]) / 2];

/* the camera */
let eye = ctr.slice(), dir = [0, 0, -1], up = [0, 0, 1], fov = 60;
if (camArg === "top") { eye = [ctr[0], ctr[1], mx[2] + 200]; dir = [0, 0, -1]; up = [0, 1, 0]; }
else if (camArg === "side") { eye = [ctr[0], mx[1] + 400, ctr[2]]; dir = [-1, 0, 0]; up = [0, 0, 1]; }
else if (camArg === "iso") {
	eye = [ctr[0] - 1400, ctr[1] - 1400, mx[2] + 1400];
	dir = [0.58, 0.58, -0.58];
	up = [0, 0, 1];
}
else {
	const p = camArg.split(/\s+/).map(Number);
	eye = [p[0], p[1], p[2]];
	const yaw = (p[3] || 0) * Math.PI / 180, pit = (p[4] || 0) * Math.PI / 180;
	dir = [Math.cos(yaw) * Math.cos(pit), Math.sin(yaw) * Math.cos(pit), -Math.sin(pit)];
	up = [0, 0, 1];
}
const norm = (v) => { const l = Math.hypot(v[0], v[1], v[2]); return [v[0] / l, v[1] / l, v[2] / l]; };
const right = norm([dir[1] * up[2] - dir[2] * up[1], dir[2] * up[0] - dir[0] * up[2], dir[0] * up[1] - dir[1] * up[0]]);
up = norm([right[1] * dir[2] - right[2] * dir[1], right[2] * dir[0] - right[0] * dir[2], right[0] * dir[1] - right[1] * dir[0]]);
dir = norm(dir);

/* the frame */
const W = sizeArg, H = Math.round(sizeArg * 0.66);
const zbuf = new Float64Array(W * H).fill(Infinity);
const rgb = Buffer.alloc(W * H * 3);
for (let i = 0; i < W * H; i++) { rgb[i * 3] = 12; rgb[i * 3 + 1] = 14; rgb[i * 3 + 2] = 20; }

function project(p) {
	const d = [p[0] - eye[0], p[1] - eye[1], p[2] - eye[2]];
	const z = d[0] * dir[0] + d[1] * dir[1] + d[2] * dir[2];
	if (z < 1) return null;
	const x = d[0] * right[0] + d[1] * right[1] + d[2] * right[2];
	const y = d[0] * up[0] + d[1] * up[1] + d[2] * up[2];
	const k = (H / 2) / Math.tan(fov * Math.PI / 360);
	return { x: W / 2 + x * k / z, y: H / 2 - y * k / z, z: z };
}

function faceColour(f) {
	const pl = planes[f.planenum];
	if (!pl) return [255, 0, 255];
	const n = pl.n;
	const s = f.side ? -1 : 1;
	/* the light from the camera's upper left */
	const l = norm([0.4, 0.4, 0.8]);
	const d = Math.max(0, (n[0] * l[0] + n[1] * l[1] + n[2] * l[2]) * s);
	const base = [0.55, 0.6, 0.68];
	return [Math.round(255 * base[0] * (0.25 + 0.75 * d)),
		Math.round(255 * base[1] * (0.25 + 0.75 * d)),
		Math.round(255 * base[2] * (0.25 + 0.75 * d))];
}

let drawn = 0, skipped = 0;
for (const f of faces) {
	const pts = [];
	for (let k = 0; k < f.numedges; k++) {
		const raw = surfedges[f.firstedge + k];
		if (raw === undefined) { skipped++; break; }
		const d = dec(raw);
		if (!d) { skipped++; break; }
		const e = edges[d.idx];
		if (!e) { skipped++; break; }
		const vi = d.rev ? e[1] : e[0];
		const p = vertices[vi];
		if (!p) { skipped++; break; }
		pts.push(p);
	}
	if (pts.length < 3) { skipped++; continue; }
	const pr = pts.map(project);
	if (pr.some(x => !x)) { skipped++; continue; }
	const col = faceColour(f);
	/* the fan */
	for (let k = 1; k + 1 < pr.length; k++) {
		const a = pr[0], c = pr[k], e2 = pr[k + 1];
		const minx = Math.max(0, Math.floor(Math.min(a.x, c.x, e2.x)));
		const maxx = Math.min(W - 1, Math.ceil(Math.max(a.x, c.x, e2.x)));
		const miny = Math.max(0, Math.floor(Math.min(a.y, c.y, e2.y)));
		const maxy = Math.min(H - 1, Math.ceil(Math.max(a.y, c.y, e2.y)));
		const area = (c.x - a.x) * (e2.y - a.y) - (c.y - a.y) * (e2.x - a.x);
		if (Math.abs(area) < 1e-9) continue;
		for (let y = miny; y <= maxy; y++) {
			for (let x = minx; x <= maxx; x++) {
				const px = x + 0.5, py = y + 0.5;
				const w0 = ((c.x - a.x) * (py - a.y) - (c.y - a.y) * (px - a.x)) / area;
				const w1 = ((px - a.x) * (e2.y - a.y) - (py - a.y) * (e2.x - a.x)) / area;
				const w2 = 1 - w0 - w1;
				if (w0 < 0 || w1 < 0 || w2 < 0) continue;
				const z = a.z * w2 + c.z * w1 + e2.z * w0;
				const idx = y * W + x;
				if (z >= zbuf[idx]) continue;
				zbuf[idx] = z;
				rgb[idx * 3] = col[0]; rgb[idx * 3 + 1] = col[1]; rgb[idx * 3 + 2] = col[2];
			}
		}
		drawn++;
	}
}

/* the PNG */
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
const raw = Buffer.alloc((W * 3 + 1) * H);
for (let y = 0; y < H; y++) {
	raw[y * (W * 3 + 1)] = 0;
	rgb.copy(raw, y * (W * 3 + 1) + 1, y * W * 3, (y + 1) * W * 3);
}
const ihdr = Buffer.alloc(13);
ihdr.writeUInt32BE(W, 0); ihdr.writeUInt32BE(H, 4); ihdr[8] = 8; ihdr[9] = 2;
const png = Buffer.concat([
	Buffer.from([0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A]),
	chunk("IHDR", ihdr), chunk("IDAT", zlib.deflateSync(raw, { level: 9 })), chunk("IEND", Buffer.alloc(0))
]);
fs.writeFileSync(outPng, png);
console.log("wrote", outPng, W + "x" + H, " the faces drawn:", drawn, " skipped:", skipped,
	"the camera:", camArg, "the encoding:", encArg);
