/*
 * ghoulz2.js - brute force the LZ variant of the svc 0x1A payload:
 * the classic LZSS (a control byte with eight flags) and the bit stream
 * variants.  The output is validated by looking for readable text.
 */
"use strict";
const fs = require("fs");

function readable(buf) {
	let letters = 0;
	for (const c of buf) if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c === 32 || c === 47 || c === 46) letters++;
	return letters / Math.max(1, buf.length);
}

/* the classic LZSS: a control byte with eight flags */
function lzss(src, o) {
	const out = [];
	let i = 0;
	while (i < src.length) {
		const ctl = src[i++];
		for (let bit = 0; bit < 8 && i < src.length; bit++) {
			const flag = o.msbFirst ? (ctl >> (7 - bit)) & 1 : (ctl >> bit) & 1;
			const isLit = o.litIsOne ? flag === 1 : flag === 0;
			if (isLit) {
				out.push(src[i++]);
			} else {
				if (i + o.matchSize > src.length) return null;
				let off = 0, len = 0;
				if (o.offFirst) {
					for (let k = 0; k < o.offSize; k++) off |= src[i + k] << (8 * k);
					for (let k = 0; k < o.lenSize; k++) len |= src[i + o.offSize + k] << (8 * k);
				} else {
					for (let k = 0; k < o.lenSize; k++) len |= src[i + k] << (8 * k);
					for (let k = 0; k < o.offSize; k++) off |= src[i + o.lenSize + k] << (8 * k);
				}
				i += o.matchSize;
				len += o.lenBase;
				if (o.offRel) off = out.length - off;
				if (off <= 0 || off > out.length) return null;
				for (let k = 0; k < len; k++) out.push(out[out.length - off]);
			}
			if (out.length > (1 << 22)) return null;
		}
	}
	return Buffer.from(out);
}

/* the bit stream: one control bit per item */
function bitlz(src, o) {
	const out = [];
	let bitpos = 0;
	const nbits = src.length * 8;
	const getBit = () => {
		if (bitpos >= nbits) return -1;
		const byte = src[bitpos >> 3];
		const bit = o.msbFirst ? (byte >> (7 - (bitpos & 7))) & 1 : (byte >> (bitpos & 7)) & 1;
		bitpos++;
		return bit;
	};
	const getBits = (n) => {
		let v = 0;
		for (let i = 0; i < n; i++) {
			const b = getBit();
			if (b < 0) return -1;
			v = (v << 1) | b;
		}
		return v;
	};
	while (bitpos < nbits) {
		const flag = getBit();
		if (flag < 0) break;
		const isLit = o.litIsOne ? flag === 1 : flag === 0;
		if (isLit) {
			const b = getBits(8);
			if (b < 0) break;
			out.push(b);
		} else {
			const len = getBits(o.lenBits);
			if (len < 0) break;
			const off = getBits(o.offBits);
			if (off < 0) break;
			const l = len + o.lenBase;
			const d = o.offRel ? out.length - off : off;
			if (d <= 0 || d > out.length) return null;
			for (let k = 0; k < l; k++) out.push(out[out.length - d]);
		}
		if (out.length > (1 << 22)) return null;
	}
	return Buffer.from(out);
}

function tryAll(src, label) {
	const hits = [];
	for (const msbFirst of [true, false]) {
		for (const litIsOne of [true, false]) {
			for (const offSize of [1, 2]) {
				for (const lenSize of [1, 2]) {
					for (const offFirst of [true, false]) {
						for (const offRel of [true, false]) {
							for (const lenBase of [0, 1, 2, 3]) {
								const o = { msbFirst, litIsOne, offSize, lenSize, offFirst, offRel, lenBase, matchSize: offSize + lenSize };
								const out = lzss(src, o);
								if (!out) continue;
								const r = readable(out);
								if (r > 0.6) hits.push({ kind: "lzss", o, len: out.length, r });
							}
						}
					}
				}
			}
			for (const offBits of [4, 8, 12, 16]) {
				for (const lenBits of [2, 3, 4, 5, 6, 7, 8]) {
					for (const offRel of [true, false]) {
						for (const lenBase of [0, 1, 2, 3]) {
							const o = { msbFirst, litIsOne, offBits, lenBits, offRel, lenBase };
							const out = bitlz(src, o);
							if (!out) continue;
							const r = readable(out);
							if (r > 0.6) hits.push({ kind: "bitlz", o, len: out.length, r });
						}
					}
				}
			}
		}
	}
	console.log("=== " + label + " (" + src.length + " bytes): " + hits.length + " candidates");
	for (const h of hits.slice(0, 12)) {
		console.log("   " + h.kind + " " + JSON.stringify(h.o) + " -> " + h.len + " bytes, the readable " + h.r.toFixed(3));
		if (h.r > 0.9) {
			const b = hits.find(x => x === h);
		}
	}
	return hits;
}

const list = JSON.parse(fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
const p = Buffer.from(list[2], "hex");
const L = p.readUInt16LE(0);
tryAll(p.subarray(2, 2 + L), "the body of the payload 2");
tryAll(p.subarray(2, p.length), "the payload 2 without the header");
tryAll(Buffer.from(list[25], "hex").subarray(2), "the payload 25 without the header");
