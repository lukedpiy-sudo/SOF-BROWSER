/*
 * ghb.js - a reader for the Ghoul 3D model files (.ghb) that SoF uses.
 *
 * The format was reverse engineered from the engine's own loader
 * (SoF.exe 0x200A18D0 and its helpers).  The container is:
 *
 *   file[0x00] u32  magic 0x198237FE
 *   file[0x04] u32  the absolute file offset of block 2
 *   file[0x08] u32  the size of block 2
 *
 * and the model stream starts at file[0x0C]:
 *
 *   u32  model magic 0x033FB1A3
 *   u32  the format version (0x4A)
 *   u32  the thunk flag (must be 0)
 *   str  the authoring path
 *   u32  the number of animation frames
 *   u32  the number of animation clips, then the clips
 *   u32  the number of meshes, then the meshes
 *   ...  the model bbox, the object sections and the skeleton
 *
 * A string is a u32 length followed by that many bytes (no NUL).
 */
"use strict";

const GHB_MAGIC = 0x198237FE;
const GHB_MODEL_MAGIC = 0x033FB1A3;

class Reader {
	constructor(buf, off) { this.b = buf; this.p = off || 0; }
	get left() { return this.b.length - this.p; }
	u8() { return this.b[this.p++]; }
	i8() { const v = this.b.readInt8(this.p); this.p += 1; return v; }
	u16() { const v = this.b.readUInt16LE(this.p); this.p += 2; return v; }
	i16() { const v = this.b.readInt16LE(this.p); this.p += 2; return v; }
	u32() { const v = this.b.readUInt32LE(this.p); this.p += 4; return v; }
	i32() { const v = this.b.readInt32LE(this.p); this.p += 4; return v; }
	f32() { const v = this.b.readFloatLE(this.p); this.p += 4; return v; }
	vec3() { const v = [this.f32(), this.f32(), this.f32()]; return v; }
	str() {
		const n = this.u32();
		const v = this.b.toString("latin1", this.p, this.p + n);
		this.p += n;
		return v;
	}
	bytes(n) { const v = this.b.subarray(this.p, this.p + n); this.p += n; return v; }
	bool() { return this.u8() === 1; }
}

function readBBox(r) {
	return { a: r.bool(), b: r.bool(), min: r.vec3(), max: r.vec3() };
}

function readTexBitmap(r) {
	/* a bool; when it is false a u32 count and a bitmap follow */
	if (!r.bool()) {
		const n = r.u32();
		r.bytes(((n + 31) >> 5) * 4);
		return { kind: "inline", count: n };
	}
	r.bool();
	return { kind: "external" };
}

function readObjectE8(r) {
	const o = {};
	o.name = r.str();
	o.name2 = r.str();
	o.tex = readTexBitmap(r);
	o.flags = [r.bool(), r.bool(), r.bool()];
	o.bbox = readBBox(r);
	o.mode = r.i32();
	if (o.mode !== 0) {
		o.v1 = r.vec3(); o.v2 = r.vec3(); o.v3 = r.vec3();
		o.block2Offset = r.u32();
	} else {
		const flag = r.bool();
		if (!flag) {
			const n = r.i32();
			o.blob = { kind: "inline", count: n, data: r.bytes(n * 0x44) };
		} else {
			o.blob = { kind: "one", data: r.bytes(0x44) };
		}
	}
	return o;
}

function readObject108(r) {
	const o = readObjectE8(r);
	o.extra = readBBox(r);
	return o;
}

/* an array whose elements have a fixed size; a bool says whether the data is
 * inline (a count and then the data) or external (one element only) */
function readArray(r, elemSize) {
	if (r.bool()) return { kind: "external", data: r.bytes(elemSize) };
	const n = r.i32();
	return { kind: "inline", count: n, data: r.bytes(n * elemSize) };
}

function readMesh(r) {
	const m = {};
	m.name = r.str();
	m.flags = [r.bool(), r.bool()];
	m.i32 = [r.i32(), r.i32()];
	m.submeshes = [];
	for (let i = 0; i < 2; i++) {
		const s = {};
		s.name = r.str();
		s.name2 = r.str();
		s.flags = [r.bool(), r.bool(), r.bool(), r.bool()];
		s.verts = readArray(r, 1);
		s.faces = readArray(r, 0x44);
		s.flag = r.bool();
		m.submeshes.push(s);
	}
	m.vec3a = readArray(r, 0x0C);
	m.vec3b = readArray(r, 0x0C);
	m.u32 = [readArray(r, 4), readArray(r, 4), readArray(r, 4), readArray(r, 4)];
	return m;
}

function parseGhoul(buf) {
	if (buf.length < 12) throw new Error("too short");
	const magic = buf.readUInt32LE(0);
	if (magic !== GHB_MAGIC) throw new Error("bad container magic 0x" + magic.toString(16));
	const out = {
		block2Offset: buf.readUInt32LE(4),
		block2Size: buf.readUInt32LE(8),
		fileSize: buf.length
	};
	const r = new Reader(buf, 0x0C);
	out.magic = r.u32();
	out.version = r.u32();
	out.thunk = r.u32();
	out.path = r.str();
	out.frameCount = r.i32();
	const nclip = r.i32();
	out.clips = [];
	for (let i = 0; i < nclip; i++) {
		const c = {};
		c.pos = r.vec3();
		c.scale = r.f32();
		c.name = r.str();
		const n = r.i32();
		c.events = [];
		for (let k = 0; k < n; k++) {
			c.events.push({ value: r.i32(), index: r.i32(), name: r.str(), param: r.str() });
		}
		c.tail = [r.i32(), r.i32()];
		out.clips.push(c);
	}
	out.clipEnd = r.p;
	const nmesh = r.i32();
	out.meshes = [];
	for (let i = 0; i < nmesh; i++) out.meshes.push(readMesh(r));
	out.meshEnd = r.p;
	out.bbox = readBBox(r);
	out.counter1 = r.u32();
	let n = r.i32();
	out.objA = [];
	for (let i = 0; i < n; i++) out.objA.push(readObjectE8(r));
	out.counter2 = r.u32();
	n = r.i32();
	out.objB = [];
	for (let i = 0; i < n; i++) out.objB.push(readObjectE8(r));
	out.counter3 = r.u32();
	n = r.i32();
	out.objC = [];
	for (let i = 0; i < n; i++) out.objC.push(readObject108(r));
	/* the skeleton */
	const sk = {};
	const v4 = r.i32();
	sk.parent = v4;
	if (v4 === -1) { sk.root = r.i32(); sk.id = r.i32(); } else { sk.id = v4; }
	sk.ints = [];
	for (let i = 0; i < 21; i++) sk.ints.push(r.i32());
	sk.bbox = readBBox(r);
	sk.vec3s = [r.vec3(), r.vec3(), r.vec3(), r.vec3()];
	out.skeleton = sk;
	out.end = r.p;
	return out;
}

/* The geometry section: the block 1 tail, between the end of the model
 * stream and block 2.
 *
 *   +0x00  u32  the size of the model's vertex buffer
 *   +0x04  u32  the size of the model's animation data (the frames x 256)
 *   +0x08  u32  0
 *   +0x0C  u32  0
 *   +0x10  u32  0
 *   +0x14  u32  0
 *   +0x18  u32  0
 *   +0x1C  u32  0
 *   +0x20  u32  the index table: the vertex indices, each value shifted
 *                left by 8 bits and repeated once per face that uses it
 *                (the list is sorted, so it is a valence histogram)
 *   ...     21 bytes: five u32 of sub mesh data
 *   ...     the vertex records, 43 bytes each:
 *              +0x00  3 floats  the UV coordinates (0..1)
 *              +0x0C  3 floats  the position
 *              +0x18  19 bytes  the packed attributes: the three bone
 *                             indices, the valence and the offsets
 *
 * The records are not 4 byte aligned in the file (the stride is 43), so
 * every field has to be read at its own offset.
 */
function parseGeometry(buf, model) {
	const t = model.end;
	const end = model.block2Offset;
	if (end <= t) return null;
	const g = {
		tailStart: t,
		tailEnd: end,
		vertexBufferSize: buf.readUInt32LE(t),
		animationSize: buf.readUInt32LE(t + 4),
		indexTable: [],
		header: [],
		vertices: []
	};
	/* the index table: the values are the vertex indices shifted left by 8
	 * bits and they never decrease */
	let p = t + 0x20;
	let last = -1, run = 0;
	/* the largest index the tail could hold: one record per vertex */
	const maxIndex = Math.floor((end - t) / 43) + 1;
	while (p + 4 <= end) {
		const v = buf.readUInt32LE(p);
		if (v % 256 !== 0 || v < last || run > 16 || v >= maxIndex * 256) break;
		if (v === last) run++; else { run = 1; last = v; }
		g.indexTable.push(v >>> 8);
		p += 4;
	}
	/* the five u32 of the sub mesh data and one byte of padding */
	for (let i = 0; i < 6; i++) g.header.push(buf.readUInt32LE(p + i * 4));
	g.vertexStart = p + 21;
	/* the vertex records: one per vertex, the count comes from the index
	 * table (the highest index it mentions) */
	let vcount = 0;
	for (const v of g.indexTable) if (v + 1 > vcount) vcount = v + 1;
	g.vertexCount = vcount;
	/* the per vertex attributes: the three bone indices, the valence (how
	 * many faces use the vertex) and two offsets into block 2 (the mesh
	 * counter changes when the mesh changes) */
	let cum = 0;
	for (let i = 0; i < vcount && g.vertexStart + i * 43 + 43 <= end; i++) {
		const o = g.vertexStart + i * 43;
		const a = buf.subarray(o, o + 43);
		const v = {
			uv: [a.readFloatLE(0), a.readFloatLE(4), a.readFloatLE(8)],
			position: [a.readFloatLE(12), a.readFloatLE(16), a.readFloatLE(20)],
			bones: [a[24], a[25], a[26]],
			valence: a[39],
			attributes: a.subarray(24, 43)
		};
		/* the two 16 bit offsets into block 2 (they wrap at 64 KB) */
		v.offsetA = a[27] | (a[28] << 8);
		v.offsetB = a[31] | (a[32] << 8);
		/* the mesh counter: it changes when the vertices move to the next
		 * mesh of the model */
		v.mesh = a[29];
		/* the index of the vertex's first corner in the corner list */
		v.corner = a[35];
		v.cornerEnd = v.corner + v.valence;
		cum += v.valence;
		g.vertices.push(v);
	}
	/* the corner list is the index table sorted by the vertex, so the table
	 * is a valence histogram: the corner of a vertex is not recoverable
	 * from it (the faces are in block 2) */
	g.cornerCount = g.indexTable.length;
	return g;
}

module.exports = { parseGhoul, parseGeometry, Reader, GHB_MAGIC, GHB_MODEL_MAGIC };
