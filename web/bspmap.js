/*
 * bspmap.js - the decoder for the SoF v46 BSP.
 *
 *   node bspmap.js <map.bsp> <outdir> [mapname]
 *
 * It writes two files:
 *   <outdir>/map_bsp.json        the map: lump table, texinfo, geometry, the
 *                                 lighting parameters of every face, the
 *                                 visibility data, the models and the lights.
 *   <outdir>/map_lightmaps.json  the lightmap atlas (a PNG) and the atlas
 *                                 rectangle of every face.
 *
 * The layout of every structure is taken from the engine itself: SoF.exe
 * keeps a table of 22 lump descriptors (44 bytes each) at VA 0x2011f938 that
 * names every lump and gives its on-disk and in-memory element size.  That
 * table is what web/bspdesc.js prints.
 *
 * The face record (44 bytes) is:
 *
 *   +0  u16 planenum        the plane of the face
 *   +2  u16 side            0 = front, 1 = back
 *   +4  i32 firstedge       the first surfedge of the face
 *   +8  u16 numedges        the number of surfedges
 *   +10 u16 texinfo         the texture info of the face
 *   +12 u16 flags
 *   +14 u16 -
 *   +16 u16 -    +18 u16 -
 *   +20 u8  -    +21 u8 -  +22 u8 -  +23 u8 -
 *   +24 u16 -    +25 u8 -  +26 u16 -
 *   +28 i32 lightofs         the byte offset of the lightmap in the LIGHTING lump
 *   +32 u8  lm_w             the lightmap width in luxels
 *   +33 u8  lm_h             the lightmap height in luxels
 *   +34 u8  -    +35 u8 -
 *   +36 i16 lm_mins[0]       the lightmap origin in texture space (snapped to 16)
 *   +38 i16 lm_mins[1]
 *   +40 u16 lm_extents[0]    the lightmap size in texture units
 *   +42 u16 lm_extents[1]
 *
 * The lightmaps themselves are plain RGB, 3 bytes per luxel, stored back to
 * back in the LIGHTING lump in face order.
 */
"use strict";
const fs = require("fs");
const path = require("path");
const zlib = require("zlib");

/* ------------------------------------------------------------ the engine */
const LUMP_NAMES = [
	"LUMP_ENTITIES", "LUMP_PLANES", "LUMP_VERTEXES", "LUMP_VISIBILITY",
	"LUMP_NODES", "LUMP_TEXINFO", "LUMP_FACES", "LUMP_LIGHTING", "LUMP_LEAFS",
	"LUMP_LEAFFACES", "LUMP_LEAFBRUSHES", "LUMP_EDGES", "LUMP_SURFEDGES",
	"LUMP_MODELS", "LUMP_BRUSHES", "LUMP_BRUSHSIDES", "LUMP_POP", "LUMP_AREAS",
	"LUMP_AREAPORTALS", "LUMP_REGIONFACES", "LUMP_LIGHTS", "LUMP_REGIONS"
];
/* the on-disk element size of every lump, from the engine's descriptor table */
const LUMP_ELEM = [
	1, 20, 12, 1, 28, 76, 44, 1, 32, 2, 2, 4, 4, 48, 12, 4, 1, 8, 8, 8, 36, 76
];
const LUMP_ELEM_MEM = [
	1, 20, 12, 1, 60, 72, 108, 1, 60, 4, 2, 4, 4, 56, 16, 8, 0, 16, 8, 4, 0, 240
];
const NUM_LUMPS = 22;
const LUXEL = 16;            /* texture units per lightmap luxel */

/* ------------------------------------------------------------------ PNG */
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
	for (let i = 0; i < buf.length; i++) crc = table[(crc ^ buf[i]) & 0xFF] ^ (crc >>> 8);
	return (crc ^ -1) >>> 0;
}
function chunk(type, data) {
	const len = Buffer.alloc(4); len.writeUInt32BE(data.length, 0);
	const td = Buffer.concat([Buffer.from(type, "latin1"), data]);
	const crc = Buffer.alloc(4); crc.writeUInt32BE(crc32(td), 0);
	return Buffer.concat([len, td, crc]);
}
/* rgb buffer, w x h -> PNG bytes */
function encodePNG(rgb, w, h) {
	const raw = Buffer.alloc((w * 3 + 1) * h);
	for (let y = 0; y < h; y++) {
		raw[y * (w * 3 + 1)] = 0;                       /* filter: none */
		rgb.copy(raw, y * (w * 3 + 1) + 1, y * w * 3, (y + 1) * w * 3);
	}
	const ihdr = Buffer.alloc(13);
	ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4);
	ihdr[8] = 8; ihdr[9] = 2; ihdr[10] = 0; ihdr[11] = 0; ihdr[12] = 0;
	return Buffer.concat([
		Buffer.from([0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A]),
		chunk("IHDR", ihdr),
		chunk("IDAT", zlib.deflateSync(raw, { level: 9 })),
		chunk("IEND", Buffer.alloc(0))
	]);
}

/* ------------------------------------------------------------------ BSP */
function readBsp(file) {
	const b = fs.readFileSync(file);
	if (b.toString("latin1", 0, 4) !== "IBSP") throw new Error("not a BSP");
	const version = b.readInt32LE(4);
	const lumps = [];
	for (let i = 0; i < NUM_LUMPS; i++) {
		lumps.push({ index: i, off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
	}
	return { b, version, lumps };
}

function decode(src, outdir, mapName) {
	const { b, version, lumps } = readBsp(src);
	const L = (i) => lumps[i];

	/* ---- the lump table ---- */
	const lumpTable = lumps.map((l) => ({
		index: l.index, name: LUMP_NAMES[l.index], off: l.off, len: l.len,
		elemDisk: LUMP_ELEM[l.index], elemMem: LUMP_ELEM_MEM[l.index],
		count: LUMP_ELEM[l.index] ? Math.floor(l.len / LUMP_ELEM[l.index]) : 0
	}));

	/* ---- the entities ---- */
	const entTxt = b.toString("latin1", L(0).off, L(0).off + L(0).len);
	const entities = [];
	{
		const re = /\{([^{}]*)\}/g; let m;
		while ((m = re.exec(entTxt)) !== null) {
			const kv = {}; const kre = /"([^"]*)"\s*"([^"]*)"/g; let k;
			while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
			entities.push(kv);
		}
	}

	/* ---- the planes ---- */
	const planes = [];
	for (let i = 0; i < L(1).len / 20; i++) {
		const o = L(1).off + i * 20;
		planes.push({
			n: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
			d: b.readFloatLE(o + 12), type: b.readInt32LE(o + 16)
		});
	}

	/* ---- the vertexes ---- */
	const vertices = [];
	for (let i = 0; i < L(2).len / 12; i++) {
		const o = L(2).off + i * 12;
		vertices.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]);
	}

	/* ---- the edges and the surfedges ---- */
	const edges = [];
	for (let i = 0; i < L(11).len / 4; i++) {
		const o = L(11).off + i * 4;
		edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
	}
	const surfedges = [];
	for (let i = 0; i < L(12).len / 4; i++) surfedges.push(b.readInt32LE(L(12).off + i * 4));

	/* ---- the texture infos (76 bytes) ---- */
	const texinfo = [];
	for (let i = 0; i < L(5).len / 76; i++) {
		const o = L(5).off + i * 76;
		let z = o + 40; while (z < o + 72 && b[z] !== 0) z++;
		texinfo.push({
			s: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)],
			t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)],
			flags: b.readInt32LE(o + 32), value: b.readInt32LE(o + 36),
			name: b.toString("latin1", o + 40, z), next: b.readInt32LE(o + 72)
		});
	}

	/* ---- the lighting lump ---- */
	const lightData = b.subarray(L(7).off, L(7).off + L(7).len);

	/* ---- the faces ---- */
	const faceCount = L(6).len / 44;
	const faces = [];
	for (let i = 0; i < faceCount; i++) {
		const o = L(6).off + i * 44;
		const f = {
			i, planenum: b.readUInt16LE(o), side: b.readUInt16LE(o + 2),
			firstedge: b.readInt32LE(o + 4), numedges: b.readUInt16LE(o + 8),
			texinfo: b.readUInt16LE(o + 10),
			flags: b.readUInt16LE(o + 12),
			lightofs: b.readInt32LE(o + 28),
			lmw: b[o + 32], lmh: b[o + 33],
			aux34: b[o + 34], aux35: b[o + 35],
			mins: [b.readInt16LE(o + 36), b.readInt16LE(o + 38)],
			ext: [b.readUInt16LE(o + 40), b.readUInt16LE(o + 42)]
		};
		const ti = texinfo[f.texinfo];
		f.mat = ti ? ti.name : null;
		f.tflags = ti ? ti.flags : 0;
		/* the vertices of the face */
		const v = [], uv = [], lmuv = [];
		for (let k = 0; k < f.numedges; k++) {
			const se = surfedges[f.firstedge + k];
			if (se === undefined) break;
			const e = edges[Math.abs(se)];
			if (!e) continue;
			const vi = se < 0 ? e[1] : e[0];
			const p = vertices[vi];
			if (!p) continue;
			v.push(vi);
			if (ti) {
				const s = ti.s[0] * p[0] + ti.s[1] * p[1] + ti.s[2] * p[2] + ti.s[3];
				const t = ti.t[0] * p[0] + ti.t[1] * p[1] + ti.t[2] * p[2] + ti.t[3];
				/* the base texture: the engine's own divisor is 64 */
				uv.push([s / 64, t / 64]);
				/* the lightmap: the luxel of the vertex.  The luxel grid of a
				 * face covers the face's texture box (mins .. mins+ext) with
				 * w x h samples, so the luxel size is ext/(n-1) and the
				 * sample centres are at 0.5, 1.5, ... */
				lmuv.push([
					f.lmw > 1 && f.ext[0] > 0 ? (s - f.mins[0]) * (f.lmw - 1) / f.ext[0] + 0.5 : 0.5,
					f.lmh > 1 && f.ext[1] > 0 ? (t - f.mins[1]) * (f.lmh - 1) / f.ext[1] + 0.5 : 0.5
				]);
			} else { uv.push([0, 0]); lmuv.push([0, 0]); }
		}
		f.v = v; f.uv = uv; f.lmuv = lmuv;
		const pl = planes[f.planenum];
		if (pl) {
			const sgn = f.side ? -1 : 1;
			f.n = [pl.n[0] * sgn, pl.n[1] * sgn, pl.n[2] * sgn];
		} else f.n = [0, 0, 1];
		faces.push(f);
	}

	/* ---- the lightmap atlas ---- */
	/* a simple shelf packer: the faces are sorted by height.  The first four
	 * pixels of the atlas are left free and hold the map's ambient colour:
	 * the faces that have no lightmap (the sky) use them. */
	const MARGIN = 4;
	const lit = faces.filter(f => f.lmw && f.lmh && f.lightofs >= 0 &&
		f.lightofs + f.lmw * f.lmh * 3 <= lightData.length);
	let atlasW = 1024, atlasH = 256;
	for (let pass = 0; pass < 6; pass++) {
		const order = lit.slice().sort((a, b) => b.lmh - a.lmh);
		let x = MARGIN, y = MARGIN, shelf = 0, ok = true;
		for (const f of order) {
			if (f.lmw > atlasW - 2 * MARGIN) { ok = false; break; }
			if (x + f.lmw > atlasW - MARGIN) { x = MARGIN; y += shelf; shelf = 0; }
			if (y + f.lmh > atlasH - MARGIN) { ok = false; break; }
			f.ax = x; f.ay = y;
			x += f.lmw; if (f.lmh > shelf) shelf = f.lmh;
		}
		if (ok) break;
		atlasH *= 2;
		if (atlasH > 4096) { atlasH = 4096; break; }
	}
	const atlas = Buffer.alloc(atlasW * atlasH * 3);
	/* the ambient colour of the map, for the faces without a lightmap */
	let amb = [25, 25, 25];
	{
		const w = entities.find(e => e.classname === "worldspawn");
		if (w && w._sun_ambient) {
			const p = w._sun_ambient.trim().split(/\s+/).map(Number);
			if (p.length === 3 && p.every(x => !isNaN(x))) amb = p;
		}
	}
	for (let y = 0; y < MARGIN; y++) for (let x = 0; x < MARGIN; x++) {
		const d = (y * atlasW + x) * 3;
		atlas[d] = amb[0]; atlas[d + 1] = amb[1]; atlas[d + 2] = amb[2];
	}
	for (const f of lit) {
		for (let r = 0; r < f.lmh; r++) {
			for (let c = 0; c < f.lmw; c++) {
				const src = f.lightofs + (r * f.lmw + c) * 3;
				const dst = ((f.ay + r) * atlasW + (f.ax + c)) * 3;
				atlas[dst] = lightData[src];
				atlas[dst + 1] = lightData[src + 1];
				atlas[dst + 2] = lightData[src + 2];
			}
		}
	}
	const png = encodePNG(atlas, atlasW, atlasH);

	/* ---- the leafs, the nodes and the visibility ---- */
	const leafs = [];
	for (let i = 0; i < L(8).len / 32; i++) {
		const o = L(8).off + i * 32;
		leafs.push({
			contents: b.readInt32LE(o), cluster: b.readInt32LE(o + 4),
			area: b.readInt32LE(o + 8),
			mins: [b.readInt16LE(o + 12), b.readInt16LE(o + 14), b.readInt16LE(o + 16)],
			maxs: [b.readInt16LE(o + 18), b.readInt16LE(o + 20), b.readInt16LE(o + 22)],
			firstleafbrush: b.readInt16LE(o + 24), numleafbrushes: b.readInt16LE(o + 26),
			extra: [b.readUInt16LE(o + 28), b.readUInt16LE(o + 30)]
		});
	}
	const nodes = [];
	for (let i = 0; i < L(4).len / 28; i++) {
		const o = L(4).off + i * 28;
		nodes.push({
			planenum: b.readUInt16LE(o),
			child0: b.readInt32LE(o + 4), child1: b.readInt32LE(o + 8),
			mins: [b.readInt16LE(o + 12), b.readInt16LE(o + 14), b.readInt16LE(o + 16)],
			maxs: [b.readInt16LE(o + 18), b.readInt16LE(o + 20), b.readInt16LE(o + 22)],
			firstface: b.readUInt16LE(o + 24), numfaces: b.readUInt16LE(o + 26),
			extra: b.readUInt16LE(o + 28 - 2)
		});
	}
	const models = [];
	for (let i = 0; i < L(13).len / 48; i++) {
		const o = L(13).off + i * 48;
		models.push({
			mins: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
			maxs: [b.readFloatLE(o + 12), b.readFloatLE(o + 16), b.readFloatLE(o + 20)],
			origin: [b.readFloatLE(o + 24), b.readFloatLE(o + 28), b.readFloatLE(o + 32)],
			headnode: [b.readInt32LE(o + 36), b.readInt32LE(o + 40),
				b.readInt32LE(o + 44), b.readInt32LE(o + 48 - 4)]
		});
	}
	const lights = [];
	for (let i = 0; i < L(20).len / 36; i++) {
		const o = L(20).off + i * 36;
		lights.push({
			o: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
			c: [b.readFloatLE(o + 12), b.readFloatLE(o + 16), b.readFloatLE(o + 20)],
			i: b.readFloatLE(o + 24), type: b.readInt32LE(o + 28), spare: b.readFloatLE(o + 32)
		});
	}

	/* ---- the brush model (the collision hull) ---- */
	/* The brushes (lump 14) are 12 bytes: the first side, the number of
	 * sides and the contents.  The brush sides (lump 15) are 4 bytes: the
	 * first u16 is the plane of the side, the second one the texinfo.
	 * (Which is which was found with web/bspbrush.js: the plane normals of
	 * the sides of one brush must sum to zero.) */
	const brushes = [];
	{
		const brushCount = L(14).len / 12;
		const sideCount = L(15).len / 4;
		const sidePlane = [], sideTex = [];
		for (let i = 0; i < sideCount; i++) {
			const o = L(15).off + i * 4;
			sidePlane.push(b.readUInt16LE(o));
			sideTex.push(b.readUInt16LE(o + 2));
		}
		for (let i = 0; i < brushCount; i++) {
			const o = L(14).off + i * 12;
			const firstside = b.readInt32LE(o);
			const numsides = b.readInt32LE(o + 4);
			const contents = b.readInt32LE(o + 8);
			const pl = [];
			for (let k = 0; k < numsides; k++) {
				const si = firstside + k;
				if (si < 0 || si >= sideCount) continue;
				const p = planes[sidePlane[si]];
				if (!p) continue;
				pl.push({
					n: p.n.map(x => +x.toFixed(5)),
					d: +p.d.toFixed(2),
					t: sideTex[si]
				});
			}
			if (!pl.length) continue;
			/* a bounding sphere: the centre is the mean of the support
			 * points, the radius the biggest distance from it.  The browser
			 * uses it to reject the brushes that are far away. */
			let cx = 0, cy = 0, cz = 0;
			for (const s of pl) { cx += s.n[0] * s.d; cy += s.n[1] * s.d; cz += s.n[2] * s.d; }
			cx /= pl.length; cy /= pl.length; cz /= pl.length;
			let rad = 0;
			for (const s of pl) {
				const dx = s.n[0] * s.d - cx, dy = s.n[1] * s.d - cy, dz = s.n[2] * s.d - cz;
				const r = Math.hypot(dx, dy, dz);
				if (r > rad) rad = r;
			}
			brushes.push({
				c: contents,
				o: [+cx.toFixed(2), +cy.toFixed(2), +cz.toFixed(2)],
				r: +rad.toFixed(2),
				mn: [cx - rad, cy - rad, cz - rad].map(x => +x.toFixed(1)),
				mx: [cx + rad, cy + rad, cz + rad].map(x => +x.toFixed(1)),
				p: pl
			});
		}
	}

	/* ---- the map bounds ---- */
	const mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
	for (const v of vertices) for (let i = 0; i < 3; i++) {
		if (v[i] < mn[i]) mn[i] = v[i];
		if (v[i] > mx[i]) mx[i] = v[i];
	}

	/* ---- the output ---- */
	const mapOut = {
		source: src,
		map: mapName || path.basename(src).replace(/\.bsp$/i, "").toLowerCase(),
		version: version,
		bounds: { min: mn.map(x => +x.toFixed(2)), max: mx.map(x => +x.toFixed(2)) },
		lumps: lumpTable,
		counts: {
			entities: entities.length,
			planes: planes.length, vertexes: vertices.length,
			edges: edges.length, surfedges: surfedges.length,
			texinfos: texinfo.length, faces: faces.length,
			litfaces: lit.length, luxels: lit.reduce((s, f) => s + f.lmw * f.lmh, 0),
			leafs: leafs.length, nodes: nodes.length, models: models.length,
			lights: lights.length, leafbrushes: L(10).len / 2, leaffaces: L(9).len / 2,
			brushes: L(14).len / 12, brushsides: L(15).len / 4,
			areas: L(17).len / 8, areaportals: L(18).len / 8
		},
		texinfo: texinfo.map(t => ({
			name: t.name, flags: t.flags, value: t.value,
			s: t.s.map(x => +x.toFixed(6)), t: t.t.map(x => +x.toFixed(6))
		})),
		vertices: vertices.map(v => v.map(x => +x.toFixed(2))),
		faces: faces.map(f => ({
			i: f.i, mat: f.mat, n: f.n.map(x => +x.toFixed(5)),
			v: f.v, uv: f.uv.map(u => [+u[0].toFixed(5), +u[1].toFixed(5)]),
			/* the lightmap atlas coordinate of the vertex */
			auv: f.lmw && f.lmh ? f.lmuv.map(u => [
				+((f.ax + u[0]) / atlasW).toFixed(7),
				+((f.ay + u[1]) / atlasH).toFixed(7)
			]) : [[0.5 / atlasW, 0.5 / atlasH]],
			/* the luxel coordinate of the vertex (for the debug view) */
			lmuv: f.lmuv.map(u => [+u[0].toFixed(4), +u[1].toFixed(4)]),
			lm: (f.lmw && f.lmh) ? { x: f.ax, y: f.ay, w: f.lmw, h: f.lmh, o: f.lightofs } : null,
			/* the light styles of the face (the two bytes at +34 and +35) */
			sty: [f.aux34, f.aux35],
			/* the lightmap origin and size in texture units */
			lmBox: [f.mins[0], f.mins[1], f.ext[0], f.ext[1]]
		})),
		leafs: leafs,
		nodes: nodes,
		models: models,
		lights: lights,
		brushes: brushes,
		entities: entities,
		visibility: {
			offset: L(3).off, length: L(3).len,
			note: "the raw visibility lump; the engine decompresses it at load time"
		}
	};
	const lmOut = {
		map: mapOut.map,
		atlas: { w: atlasW, h: atlasH, png: png.toString("base64") },
		luxel: LUXEL,
		ambient: amb,
		note: "the atlas holds every face lightmap, w x h luxels, RGB, in face order"
	};

	fs.mkdirSync(outdir, { recursive: true });
	fs.writeFileSync(path.join(outdir, "map_bsp.json"), JSON.stringify(mapOut));
	fs.writeFileSync(path.join(outdir, "map_lightmaps.json"), JSON.stringify(lmOut));
	console.log("map", mapOut.map, "version", version);
	console.log("lumps:");
	for (const l of lumpTable) console.log("  " + String(l.index).padStart(2) + " " + l.name.padEnd(17) +
		" len=" + String(l.len).padStart(8) + " elem=" + String(l.elemDisk).padStart(3) +
		" -> " + String(l.count).padStart(7) + " entries");
	console.log("faces", faces.length, "lit", lit.length,
		"luxels", mapOut.counts.luxels, "atlas", atlasW + "x" + atlasH,
		"png", (png.length / 1024).toFixed(1) + " KB");
	console.log("wrote", path.join(outdir, "map_bsp.json"),
		(fs.statSync(path.join(outdir, "map_bsp.json")).size / 1048576).toFixed(2) + " MB");
	console.log("wrote", path.join(outdir, "map_lightmaps.json"),
		(fs.statSync(path.join(outdir, "map_lightmaps.json")).size / 1048576).toFixed(2) + " MB");
	return mapOut;
}

if (require.main === module) {
	const src = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
	const outdir = process.argv[3] || "C:/Users/User/q2work/sof2/web/www";
	decode(src, outdir, process.argv[4]);
}

module.exports = { decode, readBsp, LUMP_NAMES, LUMP_ELEM, encodePNG };
