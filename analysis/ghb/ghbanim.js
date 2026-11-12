/*
 * ghbanim.js - the Ghoul animation decoder.
 *
 * This is the node-side companion of the decoder that lives in web/ghb.js.
 * It was written from the engine's own code:
 *
 *   SoF.exe 0x200b8ad0  reads the Comp subdata (the animation record table)
 *   SoF.exe 0x200b8210  decodes the bit packed vertex positions
 *
 * and it is kept here because analysis/ghb/ghbparse.js and the ground truth
 * tests use it.
 */
"use strict";

/* the Comp subdata, between the Comp header and the blob descriptor:
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
 */
function parseSubdata(buf, comp) {
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

/* an LSB first bit reader over the file */
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

/* the number of normal keyframes of a record (SoF.exe 0x200b8210) */
function normalKeyframes(frames) {
	if (frames < 2) return 1;
	if (frames < 5) return 2;
	return 3;
}

/*
 * Decode one record's positions into out[v * rec.frames * 3 + f * 3 + k].
 *
 * The bit stream is LSB first.  Every vertex starts with a 2 bit tag:
 *
 *   tag == 0  the absolute path: three values of the record's bit widths,
 *              three 4 bit delta counts, then the per frame deltas.  The
 *              deltas are signed (count + 1 bits, biased by 1 << count) and
 *              they accumulate.  The position is value * scale + offset.
 *
 *   tag != 0  the delta path: the index of an already written vertex (the
 *              number of bits is the number of bits needed for v - 1), a
 *              4 bit value width, then per component a 4 bit delta count
 *              and a signed value (the width bits plus a sign bit).  Then
 *              per frame an unsigned delta of the delta count bits.  The
 *              position is (value + delta) * scale + the base vertex.
 *
 * A record with less than 2 frames has no tags and no delta counts at all:
 * just the raw values.
 */
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
		/* SoF.exe 200b83e5: the base vertex index is in [0, v-1] */
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
 * The normal index bytes of a record: the palette indices of the normal
 * keyframes, V2 normals x keyframes bytes.  They follow the position bit
 * stream (plus four bytes of padding).
 */
function readNormalIndices(buf, comp, sub, rec) {
	const kf = normalKeyframes(rec.frames);
	const start = comp.block2Offset + sub.base + rec.off2;
	const idx = new Uint8Array(sub.V2 * kf);
	for (let i = 0; i < idx.length; i++) idx[i] = buf[start + i];
	return idx;
}

/*
 * Decode the whole animation.
 *
 *   anim.pos     Float32Array(V * frames * 3)  the animated positions
 *   anim.nrmA    Uint8Array(V2 * frames)       the first normal palette index
 *   anim.nrmB    Uint8Array(V2 * frames)       the second normal palette index
 *   anim.nrmT    Float32Array(V2 * frames)     the blend factor between them
 *
 * The blend is done on the palette vectors (not on the indices), so the
 * vectors are produced by applyNormalPalette() once the palette is known.
 */
function decodeAnimation(buf, comp) {
	const sub = parseSubdata(buf, comp);
	if (!sub) return null;
	const anim = {
		sub: sub,
		frames: sub.frames,
		verts: sub.V,
		norms: sub.V2,
		pos: new Float32Array(sub.V * sub.frames * 3),
		nrmA: new Uint8Array(sub.V2 * sub.frames),
		nrmB: new Uint8Array(sub.V2 * sub.frames),
		nrmT: new Float32Array(sub.V2 * sub.frames),
		records: []
	};
	for (const rec of sub.recs) {
		const out = new Float32Array(sub.V * rec.frames * 3);
		const used = decodeRecordPositions(buf, comp, sub, rec, out);
		const kf = normalKeyframes(rec.frames);
		const nidx = readNormalIndices(buf, comp, sub, rec);
		for (let n = 0; n < sub.V2; n++) {
			const k0 = nidx[n * kf];
			const k1 = kf > 1 ? nidx[n * kf + 1] : k0;
			const k2 = kf > 2 ? nidx[n * kf + 2] : k1;
			for (let f = 0; f < rec.frames; f++) {
				let a = k0, b = k0, t = 0;
				if (kf === 2) {
					a = k0; b = k1;
					t = rec.frames > 1 ? f / (rec.frames - 1) : 0;
				} else if (kf === 3) {
					const half = rec.frames >> 1;
					if (f <= half) {
						a = k0; b = k1;
						t = half ? f / half : 0;
					} else {
						/* the engine carries the running value over from the
						 * first half, so it is k1 + (k1-k0)/half here */
						a = k1; b = k2;
						const den = (rec.frames - half) - 1;
						const step = (b - a) / (den || 1);
						const cur = a + step * (f - half - 1) + (half ? (a - k0) / half : 0);
						a = k1; b = k2;
						t = 0;
						anim._carry = anim._carry || null;
						/* store the corrected blend directly below */
						const gf = rec.first + f;
						if (gf < sub.frames) {
							anim.nrmA[n * sub.frames + gf] = a;
							anim.nrmB[n * sub.frames + gf] = b;
							anim.nrmT[n * sub.frames + gf] = den ? (f - half - 1) / den : 0;
						}
						void cur;
						continue;
					}
				}
				const gf = rec.first + f;
				if (gf >= sub.frames) continue;
				anim.nrmA[n * sub.frames + gf] = a;
				anim.nrmB[n * sub.frames + gf] = b;
				anim.nrmT[n * sub.frames + gf] = t;
			}
		}
		for (let v = 0; v < sub.V; v++) {
			for (let f = 0; f < rec.frames; f++) {
				const gf = rec.first + f;
				if (gf >= sub.frames) continue;
				for (let k = 0; k < 3; k++) anim.pos[(v * sub.frames + gf) * 3 + k] = out[(v * rec.frames + f) * 3 + k];
			}
		}
		anim.records.push({ rec: rec, bitsUsed: used, normalIndices: nidx, keyframes: kf });
	}
	return anim;
}

module.exports = { parseSubdata, decodeRecordPositions, decodeAnimation, normalKeyframes, BitReader };
