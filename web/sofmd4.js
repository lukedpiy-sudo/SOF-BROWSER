/*
 * sofmd4.js - the checksum SoF.exe uses for client commands.
 *
 * The engine's hash (SoF.exe 0x2004D150) is standard MD4 (RFC 1320);
 * it returns the XOR of the four 32-bit state words, and the command
 * channel uses the LOW BYTE of that value:
 *
 *   checksum = ( MD4(text || keybytes)[A] ^ [B] ^ [C] ^ [D] ) & 0xFF
 *
 *   k          = sequence % 3000
 *   keybytes[0]= KEY[k+0] ^ (sequence & 0xFF)
 *   keybytes[1]= KEY[k+1]
 *   keybytes[2]= KEY[k+2] ^ ((sequence >> 8) & 0xFF)
 *   keybytes[3]= KEY[k+3]
 *
 * KEY = 3000 static bytes at SoF.exe file offset 0x120648.
 */

"use strict";

const KEY = require("./sofkey.js").KEY;

function md4(buf) {
	const M = 0xffffffff;
	const rot = (x, n) => ((x << n) | (x >>> (32 - n))) >>> 0;
	const F = (x, y, z) => (((x & y) | (~x & z)) >>> 0);
	const G = (x, y, z) => (((x & y) | (x & z) | (y & z)) >>> 0);
	const H = (x, y, z) => ((x ^ y ^ z) >>> 0);

	const len = buf.length;
	const total = Math.ceil((len + 9) / 64) * 64;
	const m = Buffer.alloc(total);
	buf.copy(m);
	m[len] = 0x80;
	// 64-bit little-endian bit length
	m.writeUInt32LE((len * 8) >>> 0, total - 8);
	m.writeUInt32LE(Math.floor((len * 8) / 4294967296), total - 4);

	const O2 = [0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15];
	const O3 = [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15];
	const C2 = 0x5a827999, C3 = 0x6ed9eba1;

	let a0 = 0x67452301, b0 = 0xefcdab89, c0 = 0x98badcfe, d0 = 0x10325476;
	for (let off = 0; off < total; off += 64) {
		const X = new Array(16);
		for (let i = 0; i < 16; i++) X[i] = m.readUInt32LE(off + i * 4);
		let a = a0, b = b0, c = c0, d = d0;
		for (let i = 0; i < 16; i++) {
			if (i % 4 === 0) a = rot((a + F(b, c, d) + X[i]) >>> 0, 3);
			else if (i % 4 === 1) d = rot((d + F(a, b, c) + X[i]) >>> 0, 7);
			else if (i % 4 === 2) c = rot((c + F(d, a, b) + X[i]) >>> 0, 11);
			else b = rot((b + F(c, d, a) + X[i]) >>> 0, 19);
		}
		for (let i = 0; i < 16; i++) {
			const k = O2[i];
			if (i % 4 === 0) a = rot((a + G(b, c, d) + X[k] + C2) >>> 0, 3);
			else if (i % 4 === 1) d = rot((d + G(a, b, c) + X[k] + C2) >>> 0, 5);
			else if (i % 4 === 2) c = rot((c + G(d, a, b) + X[k] + C2) >>> 0, 9);
			else b = rot((b + G(c, d, a) + X[k] + C2) >>> 0, 13);
		}
		for (let i = 0; i < 16; i++) {
			const k = O3[i];
			if (i % 4 === 0) a = rot((a + H(b, c, d) + X[k] + C3) >>> 0, 3);
			else if (i % 4 === 1) d = rot((d + H(a, b, c) + X[k] + C3) >>> 0, 9);
			else if (i % 4 === 2) c = rot((c + H(d, a, b) + X[k] + C3) >>> 0, 11);
			else b = rot((b + H(c, d, a) + X[k] + C3) >>> 0, 15);
		}
		a0 = (a0 + a) >>> 0; b0 = (b0 + b) >>> 0;
		c0 = (c0 + c) >>> 0; d0 = (d0 + d) >>> 0;
	}
	return [a0, b0, c0, d0];
}

function keyBytes(seq) {
	const k = seq % 3000;
	return Buffer.from([
		(KEY[k + 0] ^ (seq & 0xff)) & 0xff,
		KEY[k + 1],
		(KEY[k + 2] ^ ((seq >> 8) & 0xff)) & 0xff,
		KEY[k + 3]
	]);
}

/** the command checksum for a text + sequence */
function checksum(text, seq) {
	const body = Buffer.from(text, "latin1");
	const st = md4(Buffer.concat([body, keyBytes(seq)]));
	const folded = (st[0] ^ st[1] ^ st[2] ^ st[3]) >>> 0;
	return folded & 0xff;
}

/** the engine's full 32-bit folded value (for verification) */
function folded(text, seq) {
	const body = Buffer.from(text, "latin1");
	const st = md4(Buffer.concat([body, keyBytes(seq)]));
	return (st[0] ^ st[1] ^ st[2] ^ st[3]) >>> 0;
}

module.exports = { md4, checksum, folded, keyBytes, KEY };

if (require.main === module) {
	const vectors = [["new", 0, 0xc111e38c], ["info", 1, 0xfb0a3588],
		["configstrings 42 0", 7, 0x16fafbd9], ["begin 0", 3, 0x18054340]];
	let ok = true;
	for (const [t, s, want] of vectors) {
		const got = folded(t, s);
		const m = got === want;
		ok = ok && m;
		console.log(`${m ? "OK  " : "FAIL"}  "${t}" seq=${s}  got 0x${got.toString(16)}  want 0x${want.toString(16)}  cksum=0x${(got & 0xff).toString(16)}`);
	}
	console.log(ok ? "ALL VECTORS MATCH THE ENGINE" : "MISMATCH");
}


