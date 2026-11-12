/*
 * ghb.js - a reader for the Ghoul 3D model files (.ghb) that SoF uses.
 *
 * The format was reverse engineered from the engine's own loader
 * (SoF.exe 0x200A18D0 and its helpers) and is documented in
 * analysis/ghb_format.md.  The container is:
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
 *
 * The mesh itself is the Comp blob in block 2; parseGeometry() decodes it.
 * This module runs both in node (Buffer) and in the browser (Uint8Array),
 * so it never uses the Buffer-only accessors.
 */
"use strict";

const GHB_MAGIC = 0x198237FE;
const GHB_MODEL_MAGIC = 0x033FB1A3;

/* the 10 blob sections, in file order (FUN_200ab2b0) */
const SECTION_NAMES = ["matBlocks", "cPos", "cTex", "cNorm", "mesh", "elem", "corn", "aPos", "aTex", "aNorm"];

class Reader {
	constructor(buf, off) {
		this.b = buf;
		this.p = off || 0;
		this.dv = new DataView(buf.buffer, buf.byteOffset, buf.byteLength);
	}
	get left() { return this.b.length - this.p; }
	u8() { return this.b[this.p++]; }
	i8() { const v = this.dv.getInt8(this.p); this.p += 1; return v; }
	u16() { const v = this.dv.getUint16(this.p, true); this.p += 2; return v; }
	i16() { const v = this.dv.getInt16(this.p, true); this.p += 2; return v; }
	u32() { const v = this.dv.getUint32(this.p, true); this.p += 4; return v; }
	i32() { const v = this.dv.getInt32(this.p, true); this.p += 4; return v; }
	f32() { const v = this.dv.getFloat32(this.p, true); this.p += 4; return v; }
	vec3() { const v = [this.f32(), this.f32(), this.f32()]; return v; }
	str() {
		const n = this.u32();
		let s = "";
		for (let i = 0; i < n; i++) s += String.fromCharCode(this.b[this.p + i]);
		this.p += n;
		return s;
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
	const dv = new DataView(buf.buffer, buf.byteOffset, buf.byteLength);
	const magic = dv.getUint32(0, true);
	if (magic !== GHB_MAGIC) throw new Error("bad container magic 0x" + magic.toString(16));
	const out = {
		block2Offset: dv.getUint32(4, true),
		block2Size: dv.getUint32(8, true),
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

/* The mesh geometry: the Comp blob.
 *
 * The Comp header lives inside the model stream and is NOT 4 byte aligned
 * (it is at 0x429 in ACC_BOX_HIP.ghb and 0x2170 in FEM_ARM.ghb), so it is
 * found by scanning for the 0xFFFFFFFF marker and checking that the ten
 * blob cursors it carries are monotonic.
 *
 * The header is the Comp struct's fields serialised flat (FUN_200ab850):
 *
 *   H+0x00  u32  0xFFFFFFFF marker
 *   H+0x04  u32  Comp+0x110 (the version)
 *   H+0x08  u32  Comp+0x04
 *   H+0x0C  u32  Comp+0x08  the number of material blocks
 *   H+0x10  u32  Comp+0x0C  the number of shared positions
 *   H+0x14  u32  Comp+0x10  the number of shared texcoords
 *   H+0x18  u32  Comp+0x14  the number of shared normals
 *   H+0x1C  u32  Comp+0x18  the number of face groups
 *   H+0x20  u32  Comp+0x1C  the number of elements
 *   H+0x24  u32  Comp+0x20  the number of corners
 *   H+0x28  u32  Comp+0x24  the aPos stride
 *   H+0x2C  u32  Comp+0x28
 *   H+0x30  u32  Comp+0x2C  the aNorm stride
 *   H+0x34  u32 x10  Comp+0x30 .. Comp+0x54, the blob section cursors
 *   H+0x5C  u8   Comp+0x70, H+0x5D u8 Comp+0x71
 *   H+0x5E  vec3 the bbox min
 *   H+0x6A  vec3 the bbox max
 *   H+0x76  vec3 the scale, H+0x82 vec3 the inverse scale
 *   H+0x8E  vec3 the centre, H+0x9A vec3 the 0.375 constant
 *   H+0xA6  u8   the subdata flag, H+0xA7 the subdata
 *
 * The blob itself is in block 2; the last 16 bytes of the model stream
 * carry its size and its offset relative to block 2.
 *
 * The blob holds ten sections, delimited by the ten cursors:
 *
 *   MatBlocks  N x u32 (matIndex, faceGroupStart, faceGroupCount)
 *   cPos       N x vec3 float   the shared (static) positions
 *   cTex       N x vec2 float   the shared texture coordinates
 *   cNorm      N x vec3 float   the shared normals
 *   Mesh       N x {u16 A, u16 elemStart, u16 elemCount}
 *   Elem       N x u16          the topology primitive stream
 *   Corn       N x {i16 posIndex, i16 normIndex, i16 texIndex}
 *   aPos, aTex, aNorm            the animated per object data
 *
 * The Elem stream is a sequence of primitives (FUN_200b09e0, the Ghoul
 * renderer):
 *
 *   header > 0   GL_TRIANGLE_STRIP, n = header vertices follow
 *   header == 0  GL_TRIANGLES, the next u16 is n, n/3 triangles
 *   header < 0   GL_TRIANGLE_FAN,  n = -header vertices follow
 *
 * A negative index in a corner means the shared array: shared[-v - 1].
 * A positive index means the animated array (not decoded yet).
 */
function parseGeometry(buf, model) {
	const dv = new DataView(buf.buffer, buf.byteOffset, buf.byteLength);
	const u32 = (o) => dv.getUint32(o, true);
	const i16 = (o) => dv.getInt16(o, true);
	const f32 = (o) => dv.getFloat32(o, true);

	const block2Off = model.block2Offset;
	const block2Size = model.block2Size;
	const modelEnd = block2Off;
	if (modelEnd < 16) return null;

	/* Find the Comp header inside the model stream.  It is NOT 4 byte
	 * aligned (0x429 in ACC_BOX_HIP.ghb, 0x2170 in FEM_ARM.ghb), so it is
	 * found by scanning for the 0xFFFFFFFF marker and checking that the ten
	 * blob cursors it carries are monotonic and that the section sizes
	 * agree with the counts. */
	let H = -1;
	for (let o = 0x0c; o + 0xa7 <= modelEnd; o++) {
		if (u32(o) !== 0xffffffff) continue;
		const c = [];
		for (let k = 0; k < 10; k++) c.push(u32(o + 0x34 + k * 4));
		let mono = true;
		for (let k = 1; k < 10; k++) if (c[k] < c[k - 1]) mono = false;
		if (!mono) continue;
		if (c[1] - c[0] !== u32(o + 0x0c) * 12) continue;   /* MatBlocks */
		if (c[3] - c[2] !== u32(o + 0x14) * 8) continue;    /* cTex */
		if (c[5] - c[4] !== u32(o + 0x1c) * 6) continue;    /* Mesh */
		if (c[6] - c[5] !== u32(o + 0x20) * 2) continue;    /* Elem */
		if (c[7] - c[6] !== u32(o + 0x24) * 6) continue;    /* Corn */
		H = o;
		break;
	}
	if (H < 0) return null;

	/* The blob descriptor follows the Comp header (and its subdata): the
	 * blob size, the blob offset relative to block 2 and the marker
	 * 0x05DC159F.  It is not always at the end of the model stream, so it
	 * is found by scanning for the marker. */
	let blobSize = 0, blobOffset = 0, descAt = -1;
	for (let o = H + 0xa7; o + 8 <= modelEnd; o++) {
		if (u32(o) !== 0x05dc159f) continue;
		const bs = u32(o - 8), bo = u32(o - 4);
		if (bo + bs > block2Size || bo >= block2Size) continue;
		blobSize = bs; blobOffset = bo; descAt = o - 8;
		break;
	}
	if (descAt < 0) return null;
	const blobBase = block2Off + blobOffset;

	/* the cursors have to fit in the blob */
	const curs = [];
	for (let k = 0; k < 10; k++) curs.push(u32(H + 0x34 + k * 4));
	if (curs[9] > blobSize) return null;

	const comp = {
		headerOffset: H,
		block2Offset: block2Off,
		block2Size: block2Size,
		numMatBlocks: u32(H + 0x0c),
		numPos: u32(H + 0x10),
		numTex: u32(H + 0x14),
		numNorm: u32(H + 0x18),
		numFaceGroups: u32(H + 0x1c),
		numElems: u32(H + 0x20),
		numCorners: u32(H + 0x24),
		aPosStride: u32(H + 0x28),
		aNormStride: u32(H + 0x30),
		bboxMin: [f32(H + 0x5e), f32(H + 0x62), f32(H + 0x66)],
		bboxMax: [f32(H + 0x6a), f32(H + 0x6e), f32(H + 0x72)],
		scale: [f32(H + 0x76), f32(H + 0x7a), f32(H + 0x7e)],
		invScale: [f32(H + 0x82), f32(H + 0x86), f32(H + 0x8a)],
		centre: [f32(H + 0x8e), f32(H + 0x92), f32(H + 0x96)],
		hasSubdata: buf[H + 0xa6] !== 0,
		subdataSize: descAt - (H + 0xa7),
		descOffset: descAt,
		blobBase: blobBase,
		blobSize: blobSize,
		/* the bytes of block 2 that follow the blob: the animated data */
		tailSize: block2Size - blobOffset - blobSize
	};

	/* the ten sections */
	const sec = {};
	for (let i = 0; i < 10; i++) {
		const s = curs[i];
		const e = (i === 9) ? blobSize : curs[i + 1];
		sec[SECTION_NAMES[i]] = { start: s, size: e - s, base: blobBase + s };
	}
	comp.sections = sec;

	/* the material blocks: (matIndex, faceGroupStart, faceGroupCount) */
	const matBlocks = [];
	for (let i = 0; i < sec.matBlocks.size / 12; i++) {
		const o = sec.matBlocks.base + i * 12;
		matBlocks.push({ mat: u32(o), groupStart: u32(o + 4), groupCount: u32(o + 8) });
	}

	/* the face groups: (A, elemStart, elemCount) */
	const mesh = [];
	for (let i = 0; i < sec.mesh.size / 6; i++) {
		const o = sec.mesh.base + i * 6;
		mesh.push({ A: dv.getUint16(o, true), start: dv.getUint16(o + 2, true), count: dv.getUint16(o + 4, true) });
	}

	/* the element stream */
	const elem = [];
	for (let i = 0; i < sec.elem.size / 2; i++) elem.push(dv.getUint16(sec.elem.base + i * 2, true));

	/* the corners: (posIndex, normIndex, texIndex) */
	const corn = [];
	for (let i = 0; i < sec.corn.size / 6; i++) {
		const o = sec.corn.base + i * 6;
		corn.push({ pos: i16(o), nrm: i16(o + 2), tex: i16(o + 4) });
	}

	/* the shared arrays */
	const cPos = [], cTex = [], cNorm = [];
	for (let i = 0; i < sec.cPos.size / 12; i++) {
		const o = sec.cPos.base + i * 12;
		cPos.push([f32(o), f32(o + 4), f32(o + 8)]);
	}
	for (let i = 0; i < sec.cTex.size / 8; i++) {
		const o = sec.cTex.base + i * 8;
		cTex.push([f32(o), f32(o + 4)]);
	}
	for (let i = 0; i < sec.cNorm.size / 12; i++) {
		const o = sec.cNorm.base + i * 12;
		cNorm.push([f32(o), f32(o + 4), f32(o + 8)]);
	}

	/* the topology: the Elem stream is a sequence of primitives */
	const groups = [];
	const tris = [];
	let triTotal = 0, malformed = 0;
	for (let g = 0; g < mesh.length; g++) {
		const r = mesh[g];
		let p = r.start;
		const end = r.start + r.count;
		const prims = [];
		while (p < end) {
			const h = elem[p];
			let mode, n;
			if (h & 0x8000) { mode = "fan"; n = (-h) & 0xffff; p += 1; }
			else if (h === 0) { mode = "tris"; n = elem[p + 1]; p += 2; }
			else { mode = "strip"; n = h; p += 1; }
			if (p + n > end) { malformed++; break; }
			const idx = [];
			for (let k = 0; k < n; k++) {
				const v = elem[p + k];
				idx.push(v & 0x8000 ? v - 0x10000 : v);
			}
			p += n;
			prims.push({ mode: mode, n: n, idx: idx });
		}
		if (p !== end) malformed++;
		/* expand the primitives into triangles */
		for (const pr of prims) {
			if (pr.mode === "tris") {
				for (let k = 0; k + 2 < pr.n; k += 3) tris.push({ i: [pr.idx[k], pr.idx[k + 1], pr.idx[k + 2]], group: g, A: r.A });
			} else if (pr.mode === "strip") {
				for (let k = 0; k + 2 < pr.n; k++) tris.push({ i: [pr.idx[k], pr.idx[k + 1], pr.idx[k + 2]], group: g, A: r.A });
			} else {
				for (let k = 1; k + 1 < pr.n; k++) tris.push({ i: [pr.idx[0], pr.idx[k], pr.idx[k + 1]], group: g, A: r.A });
			}
		}
		triTotal += prims.length;
		groups.push({ group: g, A: r.A, start: r.start, count: r.count, prims: prims });
	}

	/* the corners with their attributes resolved: a negative index selects
	 * the shared array, a positive one the animated array (not decoded) */
	const corners = [];
	for (let i = 0; i < corn.length; i++) {
		const c = corn[i];
		corners.push({
			posIndex: c.pos, nrmIndex: c.nrm, texIndex: c.tex,
			pos: c.pos < 0 ? (cPos[-c.pos - 1] || null) : null,
			nrm: c.nrm < 0 ? (cNorm[-c.nrm - 1] || null) : null,
			uv: c.tex < 0 ? (cTex[-c.tex - 1] || null) : null
		});
	}

	/* the static meshes have every position in the shared array; the
	 * characters have none (their positions are animated) */
	let staticPositions = cPos.length > 0;
	for (const c of corn) if (c.pos >= 0) { staticPositions = false; break; }

	return {
		comp: comp,
		matBlocks: matBlocks,
		mesh: mesh,
		elem: elem,
		corn: corn,
		corners: corners,
		cPos: cPos, cTex: cTex, cNorm: cNorm,
		groups: groups,
		tris: tris,
		triCount: tris.length,
		malformed: malformed,
		staticPositions: staticPositions,
		/* the old field names, so the old callers keep working */
		vertexCount: corners.length,
		vertices: corners
	};
}

/* ==========================================================================
 * The animation.
 *
 * The characters and the weapons have no static positions at all: every
 * vertex comes from an animated position array.  The animation data lives in
 * the Comp subdata, the region between the Comp header and the blob
 * descriptor:
 *
 *   int   the number of animated vertices (V)
 *   int   the number of animated normals (V2)
 *   int   the number of frames
 *   int x the frame -> record index list
 *   int   the offset of the last record in block 2
 *   int   the base offset of the bit streams in block 2
 *   int   the number of records
 *   record x recordCount   43 bytes each:
 *     int   the first frame
 *     int   the number of frames
 *     vec3  the scale
 *     vec3  the offset (the bind base position)
 *     byte  the x bit width, byte y, byte z
 *     int   the bit stream offset (the positions)
 *     int   the bit stream offset (the normals)
 *
 * The positions are bit packed (SoF.exe 0x200b8210).  The bit stream is LSB
 * first and every vertex starts with a 2 bit tag:
 *
 *   tag == 0  the absolute path: three values of the record's bit widths,
 *              three 4 bit delta counts, then the per frame deltas.  The
 *              deltas are signed (count + 1 bits, biased by 1 << count) and
 *              they accumulate.  The position is value * scale + offset.
 *
 *   tag != 0  the delta path: the index of an already written vertex (the
 *              number of bits is the number of bits needed for v - 1, see
 *              SoF.exe 0x200b83e5), a 4 bit value width, then per component
 *              a 4 bit delta count and a signed value (the width bits plus
 *              a sign bit).  Then per frame an unsigned delta of the delta
 *              count bits.  The position is (value + delta) * scale + the
 *              base vertex.
 *
 * A record with less than 2 frames has no tags and no delta counts at all,
 * just the raw values.
 *
 * The normals are not bit packed: every record has a byte array of palette
 * indices, V2 normals x keyframes bytes, that follows the position bit
 * stream (after four bytes of padding).  The number of keyframes is 1 for a
 * record of 1 frame, 2 for 2 to 4 frames and 3 for 5 frames or more.
 * ========================================================================== */

class BitReader {
	constructor(buf, start) { this.b = buf; this.p = 0; this.start = start; }
	read(n) {
		if (n <= 0) return 0;
		const o = this.start + (this.p >> 3);
		const sh = this.p & 7;
		let w = 0;
		for (let i = 3; i >= 0; i--) { const q = o + i; w = (w * 256) + (q < this.b.length ? this.b[q] : 0); }
		const v = Math.floor(w / Math.pow(2, sh)) & ((1 << n) - 1);
		this.p += n;
		return v;
	}
}

function normalKeyframes(frames) {
	if (frames < 2) return 1;
	if (frames < 5) return 2;
	return 3;
}

/* the Comp subdata: the animation record table (FUN_200b8ad0) */
function parseAnimation(buf, comp) {
	const dv = new DataView(buf.buffer, buf.byteOffset, buf.byteLength);
	const i32 = (o) => dv.getInt32(o, true);
	const f32 = (o) => dv.getFloat32(o, true);
	if (!comp.hasSubdata) return null;
	let p = comp.headerOffset + 0xa7;
	const V = i32(p); p += 4;
	const V2 = i32(p); p += 4;
	const nFrames = i32(p); p += 4;
	const list = [];
	for (let i = 0; i < nFrames; i++) { list.push(i32(p)); p += 4; }
	const off = i32(p); p += 4;
	const base = i32(p); p += 4;
	const nRec = i32(p); p += 4;
	const recs = [];
	for (let i = 0; i < nRec; i++) {
		const o = p + i * 43;
		recs.push({
			first: i32(o),
			frames: i32(o + 4),
			scale: [f32(o + 8), f32(o + 12), f32(o + 16)],
			offset: [f32(o + 20), f32(o + 24), f32(o + 28)],
			bits: [buf[o + 32], buf[o + 33], buf[o + 34]],
			off1: i32(o + 35),
			off2: i32(o + 39)
		});
	}
	return { V: V, V2: V2, frames: nFrames, list: list, off: off, base: base,
		recs: recs, end: p + nRec * 43 };
}

/* decode one record's positions into out[v * rec.frames * 3 + f * 3 + k] */
function decodeRecordPositions(buf, comp, sub, rec, out) {
	const V = sub.V;
	const br = new BitReader(buf, comp.block2Offset + sub.base + rec.off1);
	let param3 = 1;
	for (let v = 0; v < V; v++) {
		if (rec.frames < 2) {
			const raw = [0, 0, 0];
			for (let k = 0; k < 3; k++) raw[k] = br.read(rec.bits[k]);
			for (let f = 0; f < rec.frames; f++) {
				const o = (v * rec.frames + f) * 3;
				for (let k = 0; k < 3; k++) out[o + k] = raw[k] * rec.scale[k] + rec.offset[k];
			}
			continue;
		}
		if ((1 << param3) <= v - 1) param3++;
		const tag = br.read(2);
		if (tag === 0) {
			const raw = [0, 0, 0], cnt = [0, 0, 0];
			for (let k = 0; k < 3; k++) { raw[k] = br.read(rec.bits[k]); cnt[k] = br.read(4); }
			for (let f = 0; f < rec.frames; f++) {
				const o = (v * rec.frames + f) * 3;
				for (let k = 0; k < 3; k++) out[o + k] = raw[k] * rec.scale[k] + rec.offset[k];
				if (f === rec.frames - 1) break;
				for (let k = 0; k < 3; k++) {
					if (cnt[k] !== 0) {
						const d = br.read(cnt[k] + 1) - (1 << cnt[k]);
						raw[k] += d;
					}
				}
			}
		} else {
			const idx = br.read(param3);
			const vw = br.read(4);
			const abs = [0, 0, 0], dcnt = [0, 0, 0];
			for (let k = 0; k < 3; k++) {
				dcnt[k] = br.read(4);
				if (vw === 0) { abs[k] = 0; }
				else {
					abs[k] = br.read(vw);
					if (br.read(1)) abs[k] = -abs[k];
				}
			}
			for (let f = 0; f < rec.frames; f++) {
				const o = (v * rec.frames + f) * 3;
				for (let k = 0; k < 3; k++) {
					let d = 0;
					if (dcnt[k] !== 0) d = br.read(dcnt[k]);
					const q = abs[k] + d;
					out[o + k] = q * rec.scale[k] + out[(idx * rec.frames + f) * 3 + k];
				}
			}
		}
	}
	return br.p;
}

/*
 * The normal palette of the Ghoul models.
 *
 * SoF.exe keeps 256 unit directions in a table at 0x20404C90 (the zero
 * filled tail of its .data section).  The .ghb files store only the INDEX
 * of a direction, so the table is needed to rebuild the normals.
 *
 * The table is filled at run time by the initialiser at 0x200BB600: the
 * first entries are stored with "movl $imm32,0x20404cXX" and the rest with
 * three pushes and a call to the vec3 setter FUN_20079330.
 *
 * analysis/ghb/extractpalette.js rebuilds it from the disassembly and
 * analysis/ghb/validatepalette.js proves it against the models.
 */
const NORMAL_PALETTE_B64 =
	"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";;

function decodeNormalPalette() {
	let bin;
	if (typeof Buffer !== "undefined") bin = Buffer.from(NORMAL_PALETTE_B64, "base64");
	else {
		const s = atob(NORMAL_PALETTE_B64);
		bin = new Uint8Array(s.length);
		for (let i = 0; i < s.length; i++) bin[i] = s.charCodeAt(i);
	}
	const f = new Float32Array(bin.buffer, bin.byteOffset, bin.byteLength / 4);
	return f;
}
const NORMAL_PALETTE = decodeNormalPalette();

/*
 * Decode the whole animation.
 *
 *   anim.pos     Float32Array(V * frames * 3)  the animated positions
 *   anim.nrmK    Uint8Array(V2 * frames * 3)   the normal palette indices
 *                (the three keyframes; the unused ones repeat k0)
 *   anim.nrmT    Float32Array(V2 * frames)     the blend factor
 *   anim.nrmMode Uint8Array(frames)            how to blend, per frame:
 *                  0 constant, 1 two keyframes, 2 three keyframes (the
 *                  first half), 3 three keyframes (the second half)
 *   anim.nrmHalf Uint16Array(frames)           the half point of a three
 *                                              keyframe record
 */
function decodeAnimation(buf, comp) {
	const sub = parseAnimation(buf, comp);
	if (!sub) return null;
	const anim = {
		sub: sub,
		frames: sub.frames,
		verts: sub.V,
		norms: sub.V2,
		pos: new Float32Array(sub.V * sub.frames * 3),
		nrmK: new Uint8Array(sub.V2 * sub.frames * 3),
		nrmT: new Float32Array(sub.V2 * sub.frames),
		nrmMode: new Uint8Array(sub.frames),
		nrmHalf: new Uint16Array(sub.frames),
		records: []
	};
	for (const rec of sub.recs) {
		const out = new Float32Array(sub.V * rec.frames * 3);
		const used = decodeRecordPositions(buf, comp, sub, rec, out);
		const kf = normalKeyframes(rec.frames);
		const half = rec.frames >> 1;
		const den = (rec.frames - half) - 1;
		/* the normal palette indices: they follow the position bit stream */
		const nstart = comp.block2Offset + sub.base + rec.off2;
		for (let n = 0; n < sub.V2; n++) {
			const k0 = buf[nstart + n * kf];
			const k1 = kf > 1 ? buf[nstart + n * kf + 1] : k0;
			const k2 = kf > 2 ? buf[nstart + n * kf + 2] : k1;
			for (let f = 0; f < rec.frames; f++) {
				const gf = rec.first + f;
				if (gf >= sub.frames) continue;
				const o = (n * sub.frames + gf);
				anim.nrmK[o * 3] = k0;
				anim.nrmK[o * 3 + 1] = k1;
				anim.nrmK[o * 3 + 2] = k2;
				if (kf === 1) {
					anim.nrmMode[gf] = 0;
					anim.nrmT[o] = 0;
				} else if (kf === 2) {
					anim.nrmMode[gf] = 1;
					anim.nrmT[o] = rec.frames > 1 ? f / (rec.frames - 1) : 0;
				} else if (f <= half) {
					anim.nrmMode[gf] = 2;
					anim.nrmHalf[gf] = half;
					anim.nrmT[o] = half ? f / half : 0;
				} else {
					anim.nrmMode[gf] = 3;
					anim.nrmHalf[gf] = half;
					anim.nrmT[o] = den ? (f - half - 1) / den : 0;
				}
			}
		}
		for (let v = 0; v < sub.V; v++) {
			for (let f = 0; f < rec.frames; f++) {
				const gf = rec.first + f;
				if (gf >= sub.frames) continue;
				for (let k = 0; k < 3; k++) anim.pos[(v * sub.frames + gf) * 3 + k] = out[(v * rec.frames + f) * 3 + k];
			}
		}
		anim.records.push({ rec: rec, bitsUsed: used, keyframes: kf });
	}
	return anim;
}

/*
 * The animated normal of one normal index at one frame, using the palette.
 * The engine (0x200b8210) blends the palette vectors, not the indices, and
 * it carries the running value of the first half into the second half, so
 * the second half starts at k1 + (k1 - k0) / half.  That is reproduced here.
 */
function animatedNormal(anim, palette, n, frame, out) {
	const P = palette || NORMAL_PALETTE;
	const o = (n * anim.frames + frame) * 3;
	const k = anim.nrmK;
	const k0 = k[o], k1 = k[o + 1], k2 = k[o + 2];
	const t = anim.nrmT[n * anim.frames + frame];
	const mode = anim.nrmMode[frame];
	const a = P[k0 * 3], b = P[k0 * 3 + 1], c = P[k0 * 3 + 2];
	let ax = a, ay = b, az = c, bx = a, by = b, bz = c;
	if (mode === 1 || mode === 2) {
		bx = P[k1 * 3]; by = P[k1 * 3 + 1]; bz = P[k1 * 3 + 2];
	} else if (mode === 3) {
		bx = P[k2 * 3]; by = P[k2 * 3 + 1]; bz = P[k2 * 3 + 2];
	}
	out[0] = ax + (bx - ax) * t;
	out[1] = ay + (by - ay) * t;
	out[2] = az + (bz - az) * t;
	if (mode === 3) {
		/* the engine carries the running value of the first half into the
		 * second half: the second half starts at B + (B - A) / half */
		const half = anim.nrmHalf[frame] || 1;
		const d = 1 / half;
		out[0] += (P[k1 * 3] - P[k0 * 3]) * d;
		out[1] += (P[k1 * 3 + 1] - P[k0 * 3 + 1]) * d;
		out[2] += (P[k1 * 3 + 2] - P[k0 * 3 + 2]) * d;
	}
	return out;
}

/* the animated normal of one normal index at one frame, as a new array */
function normalVector(anim, n, frame) {
	return animatedNormal(anim, NORMAL_PALETTE, n, frame, [0, 0, 0]);
}

/* ------------------------------------------------------------------
 * The Ghoul side files.
 *
 * .gsq - the sequence list: the animation names a model supports.  It is
 *        a plain text file, CRLF, one lowercased name per line.
 * .gpm - the player model script: a line oriented text format with
 *        { ... } blocks for the attach points and the bolt-ons.
 * ------------------------------------------------------------------ */
function parseGsq(buf) {
	const text = typeof buf === "string" ? buf : Buffer.from(buf).toString("latin1");
	const names = [];
	for (const line of text.split(/\r?\n/)) {
		const s = line.trim();
		if (s.length) names.push(s.toLowerCase());
	}
	return names;
}

function parseGpm(buf) {
	const text = typeof buf === "string" ? buf : Buffer.from(buf).toString("latin1");
	const out = { models: [], blocks: [] };
	let block = null;
	for (let raw of text.split(/\r?\n/)) {
		const line = raw.trim();
		if (!line) continue;
		if (line === "{") { block = []; out.blocks.push(block); continue; }
		if (line === "}") { block = null; continue; }
		if (line.startsWith('"')) continue;            /* a quoted comment */
		if (block) { block.push(line.split(/\s+/)); continue; }
		out.models.push(line);
	}
	return out;
}

/* the lowercased clip names of a .ghb model, so they can be matched
 * against a .gsq sequence list */
function clipNames(model) {
	return model.clips.map(c => c.name.toLowerCase());
}

const API = { parseGhoul, parseGeometry, parseAnimation, decodeAnimation, animatedNormal,
	normalVector, normalKeyframes, parseGsq, parseGpm, clipNames,
	BitReader, Reader, SECTION_NAMES, GHB_MAGIC, GHB_MODEL_MAGIC,
	NORMAL_PALETTE };
if (typeof module !== "undefined" && module.exports) module.exports = API;
/* the browser loads the same file as a plain script */
if (typeof window !== "undefined") window.sofghb = API;