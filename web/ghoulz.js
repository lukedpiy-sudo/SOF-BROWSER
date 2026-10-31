/*
 * ghoulz.js - brute force the LZ variant of the svc 0x1A payload and of the
 * .ghb block 2 chunks.
 *
 * The marker 0x81 introduces a back reference.  The layout of the back
 * reference (the offset and the length, their sizes and their order) is
 * unknown, so every combination is tried and the result is validated by
 * looking for readable text (the model names) in the output.
 */
"use strict";
const fs = require("fs");

function lzDecode(src, opt) {
	const out = [];
	let i = 0;
	const limit = opt.limit || 1 << 24;
	while (i < src.length) {
		const b = src[i];
		if (b === opt.marker) {
			i++;
			if (i + opt.offSize + opt.lenSize > src.length) return null;
			let off = 0;
			for (let k = 0; k < opt.offSize; k++) off |= src[i + k] << (8 * k);
			i += opt.offSize;
			let len = 0;
			for (let k = 0; k < opt.lenSize; k++) len |= src[i + k] << (8 * k);
			i += opt.lenSize;
			len += opt.lenBase;
			if (opt.offRel) off = out.length - off;
			if (off < 0 || off > out.length) return null;
			for (let k = 0; k < len; k++) out.push(out[out.length - off]);
			if (out.length > limit) return null;
		} else {
			out.push(b);
			i++;
		}
	}
	return Buffer.from(out);
}

function readable(buf) {
	let text = 0, letters = 0;
	for (const c of buf) {
		if (c >= 32 && c < 127) { text++; if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) letters++; }
	}
	return { text: text / Math.max(1, buf.length), letters: letters / Math.max(1, buf.length) };
}

function tryAll(src, label) {
	const results = [];
	for (const marker of [0x81, 0x80, 0xff, 0xfe]) {
		for (const offSize of [1, 2, 3]) {
			for (const lenSize of [1, 2]) {
				for (const offFirst of [true, false]) {
					for (const offRel of [true, false]) {
						for (const lenBase of [0, 1, 2, 3]) {
							const opt = { marker, offSize, lenSize, offRel, lenBase, offFirst };
							let out;
							if (offFirst) out = lzDecode(src, opt);
							else out = lzDecode(src, { marker, offSize: lenSize, lenSize: offSize, offRel, lenBase, offFirst });
							if (!out) continue;
							const r = readable(out);
							if (r.letters > 0.5) results.push({ opt, len: out.length, r });
						}
					}
				}
			}
		}
	}
	console.log("=== " + label + " (" + src.length + " bytes): " + results.length + " candidates");
	for (const x of results.slice(0, 10)) {
		console.log("   " + JSON.stringify(x.opt) + " -> " + x.len + " bytes, the letters " + x.r.letters.toFixed(3));
	}
	return results;
}

/* the svc 0x1A payload */
const list = JSON.parse(fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
const p = Buffer.from(list[2], "hex");
const L = p.readUInt16LE(0);
const body = p.subarray(2, 2 + L);
console.log("the payload 2: " + p.length + " bytes, the u16 " + L);
tryAll(body, "the body of the payload 2");
tryAll(p.subarray(2, p.length), "the payload 2 without the header");
