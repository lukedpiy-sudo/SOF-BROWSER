
(function (global) {
	if (typeof global.Buffer === "undefined") {
		/* a tiny Buffer shim: the shared protocol code uses the LE accessors
		 * and index access, so it is a real Uint8Array subclass */
		class B extends Uint8Array {
			/* the standard TypedArray signature has to be supported, because
			 * subarray/slice construct the result through Symbol.species:
			 * new B(buffer, byteOffset, length).  Without it a subarray
			 * silently covers the whole underlying buffer. */
			constructor(a, byteOffset, length) {
				if (a instanceof ArrayBuffer) {
					super(a, byteOffset, length);
				} else if (a instanceof Uint8Array) {
					super(a.buffer, a.byteOffset, a.byteLength);
				} else {
					super(a || 0);
				}
			}
			static get [Symbol.species]() { return B; }
			static alloc(n, fill) { const u = new Uint8Array(n); if (fill) u.fill(fill); return new B(u); }
			/* the slice helpers have to keep the byte offset, otherwise the
			 * accessors read from the wrong place */
			subarray(begin, end) {
				const s = super.subarray(begin, end);
				return new B(s.buffer, s.byteOffset, s.byteLength);
			}
			slice(begin, end) {
				const s = super.slice(begin, end);
				return new B(s);
			}
			static from(a, enc) {
				if (typeof a === "string") {
					if (enc === "base64") {
						const bin = atob(a); const u = new Uint8Array(bin.length);
						for (let i = 0; i < bin.length; i++) u[i] = bin.charCodeAt(i);
						return new B(u);
					}
					const u = new Uint8Array(a.length);
					for (let i = 0; i < a.length; i++) u[i] = a.charCodeAt(i) & 0xff;
					return new B(u);
				}
				if (a instanceof Uint8Array) return new B(a);
				return new B(new Uint8Array(a));
			}
			static concat(list) {
				const parts = []; let n = 0;
				for (const p of list) { const u = (p && p.buf) ? p.buf : p; parts.push(u); n += u.length; }
				const out = new Uint8Array(n); let o = 0;
				for (const u of parts) { out.set(u, o); o += u.length; }
				return new B(out);
			}
			copy(dst, off) { const d = (dst && dst.buf) ? dst.buf : dst; d.set(this, off || 0); return this.length; }
			readUInt8(o) { return this[o]; }
			readInt8(o) { const v = this[o]; return v > 127 ? v - 256 : v; }
			readUInt16LE(o) { return this[o] | (this[o + 1] << 8); }
			readInt16LE(o) { const v = this.readUInt16LE(o); return v > 32767 ? v - 65536 : v; }
			readUInt32LE(o) { return (this[o] | (this[o+1] << 8) | (this[o+2] << 16) | (this[o+3] << 24)) >>> 0; }
			readInt32LE(o) { return this.readUInt32LE(o) | 0; }
			readFloatLE(o) { const dv = new DataView(this.buffer, this.byteOffset, this.byteLength); return dv.getFloat32(o, true); }
			writeUInt8(v, o) { this[o] = v & 0xff; return 1; }
			writeUInt16LE(v, o) { this[o] = v & 0xff; this[o+1] = (v >>> 8) & 0xff; return 2; }
			writeInt16LE(v, o) { return this.writeUInt16LE(v < 0 ? v + 65536 : v, o); }
			writeUInt32LE(v, o) { this[o] = v & 0xff; this[o+1] = (v >>> 8) & 0xff; this[o+2] = (v >>> 16) & 0xff; this[o+3] = (v >>> 24) & 0xff; return 4; }
			writeInt32LE(v, o) { return this.writeUInt32LE(v >>> 0, o); }
			writeFloatLE(v, o) { const dv = new DataView(this.buffer, this.byteOffset, this.byteLength); dv.setFloat32(o, v, true); return 4; }
			toString(enc, a, b) {
				if (enc === "utf-8" || enc === "utf8") return new TextDecoder("utf-8").decode(this);
				let s = ""; const e = b === undefined ? this.length : b, s0 = a || 0;
				for (let i = s0; i < e; i++) s += String.fromCharCode(this[i]);
				return s;
			}
		}
		global.Buffer = B;
	}
	var __defs = {}, __cache = {};
	function __resolve(name, from) {
		if (name.charAt(0) !== ".") return name;
		var base = from.split("/").slice(0, -1);
		var parts = name.split("/");
		for (var i = 0; i < parts.length; i++) {
			if (parts[i] === "." || parts[i] === "") continue;
			if (parts[i] === "..") base.pop();
			else base.push(parts[i]);
		}
		var p = base.join("/");
		if (!/.js$/.test(p)) p += ".js";
		return p;
	}
	function __require(name, from) {
		var id = __resolve(name, from || "./index.js");
		if (__cache[id]) return __cache[id].exports;
		if (!__defs[id]) throw new Error("module not bundled: " + id);
		var m = { exports: {} };
		__cache[id] = m;
		__defs[id](m, m.exports, function (n) { return __require(n, id); });
		return m.exports;
	}
	global.__sofRequire = __require;
	global.__sofDefs = __defs;
})(window);

window.__sofDefs["./sofkey.js"] = function (module, exports, require) {
/*
 * sofkey.js - the 3000 byte checksum key table (SoF.exe file offset
 * 0x120648), embedded so the protocol works in a browser too.
 */
"use strict";
const KEY_B64 = "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";
const KEY = (typeof Buffer !== "undefined")
	? Buffer.from(KEY_B64, "base64")
	: Uint8Array.from(atob(KEY_B64), c => c.charCodeAt(0));
module.exports = { KEY, KEY_B64 };

};

window.__sofDefs["./sofmd4.js"] = function (module, exports, require) {
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



};

window.__sofDefs["./cmdenc.js"] = function (module, exports, require) {
/*
 * cmdenc.js - the SoF usercmd wire encoder.
 *
 * Authority: the server decoder, SoF.exe 0x20005AA0, called three times per
 * movement message by SV_ReadClientMessage case 2 (0x200636C0), each time
 * against the previous command (the first against a zero baseline).  The
 * stock client writer is 0x20005D70.
 *
 * The 24 byte command record, as the decoder writes it and as the game
 * module reads it (gamex86.dll ClientThink 0x500F53A0):
 *
 *   +0x00 u8  msec            (always read, no "changed" bit)
 *   +0x01 u8  buttons
 *   +0x02 u8  flags2          (5 bit field, stored << 3)
 *   +0x03 u8  flags3          (0 / 1 / -1)
 *   +0x04 u16 angle 0  pitch  (12 bit field, stored << 4)
 *   +0x06 u16 angle 1  yaw
 *   +0x08 u16 angle 2  roll
 *   +0x0A i16 movement 0 forward (10 bit field, value + 0x1fe, clamped +-200)
 *   +0x0C i16 movement 1 side    (clamped +-160)
 *   +0x0E i16 movement 2 up      (clamped +-200)
 *   +0x10 u32 extra 0
 *   +0x14 u32 extra 1
 *
 * Wire order per command - the "changed" bit decides whether the value
 * follows, and msec has no such bit:
 *
 *   angle0 (12), angle1 (12), angle2 (12),
 *   move0 (10),  move1 (10),  move2 (10),
 *   buttons (8), flags3 (1 + 1), flags2 (5), msec (8 unconditional),
 *   extra0 (32), extra1 (32)
 *
 * Bits are packed LSB first inside each byte: the reader (0x200BE390) does
 * `byte >> bitInByte` and masks the last byte with 0xff >> (8 - lastBits),
 * so the writer sets bit (bitpos & 7) of the current byte.
 *
 * Earlier versions of this file put the 12 bit fields at +0x0A and the 10
 * bit fields at +0x04, which is the opposite of the decoder; that is why no
 * movement ever reached the game module.
 */
"use strict";

class BitWriter {
	constructor() { this.bytes = []; this.bit = 0; }
	put(value, nbits) {
		for (let i = 0; i < nbits; i++) {
			const byteIndex = this.bit >> 3;
			while (this.bytes.length <= byteIndex) this.bytes.push(0);
			if ((value >> i) & 1) this.bytes[byteIndex] |= (1 << (this.bit & 7));
			this.bit++;
		}
	}
	finish() {
		const byteIndex = (this.bit + 7) >> 3;
		while (this.bytes.length < byteIndex) this.bytes.push(0);
		return Buffer.from(this.bytes);
	}
	get bitLength() { return this.bit; }
}

/* Encode `cmd` (a 24 byte Buffer) relative to `prev` (also 24 bytes). */
function encodeCmd(cmd, prev) {
	return encodeCmds([[cmd, prev]]);
}

/* Encode several commands into ONE continuous bit stream: the server reads
 * the three commands of a movement message as a single uninterrupted stream,
 * so they must not be byte aligned in between.  `pairs` is a list of
 * [cmd, baseline] pairs, oldest first, the first baseline being all zeros. */
function encodeCmds(pairs) {
	const w = new BitWriter();
	const u16 = (b, o) => b.readUInt16LE(o);
	const i16 = (b, o) => b.readInt16LE(o);
	const f32 = (b, o) => b.readFloatLE(o);

	for (const [cmd, prev] of pairs) {
		/* the three 12 bit angle fields -> record offsets 4, 6, 8 */
		for (const off of [4, 6, 8]) {
			const v = u16(cmd, off);
			if (v === u16(prev, off)) w.put(0, 1);
			else { w.put(1, 1); w.put((v >> 4) & 0xfff, 12); }
		}

		/* the three 10 bit movement fields -> offsets 0x0A, 0x0C, 0x0E */
		for (const off of [0x0a, 0x0c, 0x0e]) {
			const v = i16(cmd, off) + 0x1fe;
			if (v === i16(prev, off) + 0x1fe) w.put(0, 1);
			else { w.put(1, 1); w.put(v & 0x3ff, 10); }
		}

		/* buttons */
		if (cmd[1] === prev[1]) w.put(0, 1);
		else { w.put(1, 1); w.put(cmd[1], 8); }

		/* flags3: 0, or 1, or -1 */
		if (cmd[3] === 0) w.put(0, 1);
		else { w.put(1, 1); w.put(cmd[3] === -1 || cmd[3] === 0xff ? 1 : 0, 1); }

		/* flags2, only the upper 5 bits travel */
		if ((cmd[2] >> 3) === (prev[2] >> 3)) w.put(0, 1);
		else { w.put(1, 1); w.put((cmd[2] >> 3) & 0x1f, 5); }

		/* msec, unconditional */
		w.put(cmd[0], 8);

		/* the two 32 bit extras */
		for (const off of [0x10, 0x14]) {
			if (f32(cmd, off) === f32(prev, off)) w.put(0, 1);
			else { w.put(1, 1); w.put(cmd.readUInt32LE(off) >>> 0, 32); }
		}
	}
	return w.finish();
}

module.exports = { encodeCmd, encodeCmds, BitWriter };

};

window.__sofDefs["./playerstate.js"] = function (module, exports, require) {
/*
 * playerstate.js - the SoF client state block (the bit packed 0x14 payload).
 *
 * Everything here was recovered from the stock SoF engine (SoF.exe, image base
 * 0x20000000) and validated byte-exactly against a live dedicated server.
 *
 * The block is parsed by FUN_200028B0.  It starts with a u32 presence mask and
 * then a fixed sequence of fields.  A field is on the wire only when its mask
 * bit is set; the fields appear in CODE ORDER, not in bit order, so the
 * bit packed layout moves from frame to frame.
 *
 * EVERY multi byte value is LITTLE ENDIAN.  The engine's read primitives:
 *
 *   FUN_2001e230  1 byte   signed char
 *   FUN_2001e260  1 byte   unsigned char
 *   FUN_2001e290  2 bytes  signed short   (LE)
 *   FUN_2001e2d0  2 bytes  unsigned short (LE)
 *   FUN_2001e310  4 bytes  uint32         (LE)
 *   FUN_2001e360  4 bytes  float32        (LE)
 *   FUN_2001e5f0  2 bytes  signed short   (LE), scaled by 360/65536 -> degrees
 *
 * After the fields comes a second u32 "stat mask" (only the low 16 bits are
 * used) and then one little endian s16 per set bit, in ascending bit order.
 * Five more gated fields follow the stats.
 *
 * The client state struct lives at 0x201e7e60 (0x104 bytes) and is zeroed by
 * CL_ParseFrame before every parse, so a field that is not on the wire reads
 * back as zero.  The 16 stats are at struct+0xd8 (0x201e7f38 + 2*i).
 */
"use strict";

const PS_ORIGIN_SCALE = 1 / 8;          /* the engine constant at 0x201113A8 */
const PS_ANGLE_SCALE = 360 / 65536;     /* the engine constant at 0x201113D8 */
const PS_QUARTER = 0.25;                /* at 0x201113A0 */
const PS_UNIT = 1 / 255;                /* at 0x20111388 */

/* The stat indices, recovered from the engine's HUD code:
 *
 *   0x201e7f38 + 2*i  ->  stats[i]
 *
 *   stats[1]  0x201e7f3a  health, 0..100   (read at 0x20008cc0, drawn with
 *                                         "pics/interface2/health")
 *   stats[2]  0x201e7f3c  the ammunition in the magazine (the HUD prints it
 *                         as a 2 digit field)
 *   stats[3]  0x201e7f3e  the second ammunition counter (the HUD prints it as
 *                         a 3 digit field and flashes it at <= 1)
 *   stats[4]  0x201e7f40  transmitted but never referenced by the engine
 *   stats[5]  0x201e7f42  armor, 0..100    (read at 0x20008c75, drawn with
 *                                         "pics/interface2/armor")
 *   stats[6]  0x201e7f44  the carried item id, 1..7
 *   stats[7]  0x201e7f46  copied into another object's +0x54
 *   stats[8]  0x201e7f48  flags word; bit 0 = dead (the health and armor bars
 *                         are suppressed), bit 9 = the stealth frame is drawn
 *   stats[9]  0x201e7f4a  the upper half of the flags word
 *   stats[10] 0x201e7f4c  a third HUD integer
 *   stats[11] 0x201e7f4e  the stealth percentage, 0..100
 */
const PS_STAT = {
	CARRIED: 6,
	HEALTH: 1,
	ARMOR: 5,
	AMMO: 2,
	AMMO2: 3,
	AMMO3: 4,
	FLAGS: 8,
	FLAGS2: 9,
	MONEY: 10,
	STEALTH: 11
};

/* the carried item ids, from the HUD's item icon jump table at 0x20008a3c */
const PS_ITEM = {
	1: "item_c4",
	2: "item_flash",
	3: "item_nightvision",
	4: "item_claymore",
	5: "item_medkit",
	6: "item_h_grenade",
	7: "item_flag"
};

class Reader {
	constructor(buf, off) { this.b = buf; this.p = off || 0; }
	get left() { return this.b.length - this.p; }
	u8() { return this.b[this.p++]; }
	i8() { const v = this.b.readInt8(this.p); this.p += 1; return v; }
	u16() { const v = this.b.readUInt16LE(this.p); this.p += 2; return v; }
	i16() { const v = this.b.readInt16LE(this.p); this.p += 2; return v; }
	u32() { const v = this.b.readUInt32LE(this.p); this.p += 4; return v; }
	f32() { const v = this.b.readFloatLE(this.p); this.p += 4; return v; }
	/* FUN_2001e5f0: a signed short scaled into degrees */
	angle() { return this.i16() * PS_ANGLE_SCALE; }
}

function emptyState() {
	return {
		modelIndex: 0, skin: 0, byteA8: 0, shortAA: 0,
		byteAC: 0, byteAD: 0, byteAE: 0, modelIndex2: 0,
		viewMode: 0,
		origin: null, velocity: null,
		byte45: 0, byte44: 0, short46: 0, triple40: null, byte4E: 0,
		offset: null, viewAngles: null, angles2: null, u16x3: null,
		byte9C: 0, byte98: 0, quarter3: null, quarter1: 0, norm4: null,
		stealth: 0, byteCC: 0,
		stats: new Array(16).fill(0),
		statMask: 0, mask: 0,
		byteFB: 0, byteD2: 0, shortD0: 0, byteF8: 0, byteF9: 0, byteFA: 0,
		consumed: 0
	};
}

/* Decode the block that starts at `off`.  Returns the state.
 *
 * The engine zeroes the client state before every parse, so a field that is
 * not on the wire is zero, NOT the value of the previous frame. */
function decodePlayerState(buf, off) {
	const out = emptyState();
	const r = new Reader(buf, off);
	const mask = r.u32();
	out.mask = mask;
	const has = (b) => (mask & (b >>> 0)) !== 0;

	/* the fields arrive in code order, not in bit order */
	if (has(0x00010000)) { out.modelIndex = r.i16(); out.skin = r.u8(); }
	if (has(0x00020000)) out.byteA8 = r.u8();
	if (has(0x00040000)) out.shortAA = r.i16();
	if (has(0x40000000)) out.byteAC = r.u8();
	if (has(0x10000000)) out.byteAD = r.u8();
	if (has(0x20000000)) out.byteAE = r.u8();
	if (has(0x00100000)) out.modelIndex2 = r.i16();
	if (has(0x00000001)) out.viewMode = r.u8();
	if (has(0x00000002)) {
		out.origin = [
			r.i16() * PS_ORIGIN_SCALE,
			r.i16() * PS_ORIGIN_SCALE,
			r.i16() * PS_ORIGIN_SCALE
		];
	}
	if (has(0x00000004)) out.velocity = [r.i16(), r.i16(), r.i16()];
	if (has(0x00000008)) out.byte45 = r.u8();
	if (has(0x00000010)) out.byte44 = r.u8();
	if (has(0x00000020)) out.short46 = r.i16();
	if (has(0x00000040)) out.triple40 = [r.i16(), r.i16(), r.i16()];
	if (has(0x08000000)) out.byte4E = r.u8();
	if (has(0x00000080)) {
		out.offset = [
			r.i8() * PS_QUARTER,
			r.i8() * PS_QUARTER,
			r.i8() * PS_QUARTER
		];
	}
	if (has(0x00000100)) {
		out.viewAngles = [r.angle(), r.angle(), r.angle()];
	}
	if (has(0x00008000)) {
		out.angles2 = [r.angle(), r.angle(), r.angle()];
	}
	if (has(0x00001000)) out.u16x3 = [r.i16(), r.i16(), r.i16()];
	if (has(0x00002000)) { out.byte9C = r.u8(); out.byte98 = r.u8(); }
	if (has(0x00000200)) {
		out.quarter3 = [r.i8() * PS_QUARTER, r.i8() * PS_QUARTER, r.i8() * PS_QUARTER];
	}
	if (has(0x00080000)) out.quarter1 = r.i8() * PS_QUARTER;
	if (has(0x00000400)) {
		out.norm4 = [r.u8() * PS_UNIT, r.u8() * PS_UNIT, r.u8() * PS_UNIT, r.u8() * PS_UNIT];
	}
	if (has(0x00000800)) out.stealth = r.u8();
	if (has(0x00004000)) out.byteCC = r.u8();

	/* the stats have their own mask, read unconditionally after the fields */
	const statMask = r.u32();
	out.statMask = statMask;
	for (let i = 0; i < 16; i++) {
		if (statMask & (1 << i)) out.stats[i] = r.i16();
	}

	/* five more gated fields follow the stats */
	if (has(0x00400000)) out.byteFB = r.u8();
	if (has(0x00800000)) out.byteD2 = r.u8();
	if (has(0x01000000)) out.shortD0 = r.i16();
	if (has(0x02000000)) { out.byteF8 = r.u8(); out.byteF9 = r.u8(); }
	if (has(0x04000000)) out.byteFA = r.u8();

	out.consumed = r.p - off;
	return out;
}

/* the engine's HUD numbers, ready to display */
function hudFromState(st) {
	if (!st) return null;
	const s = st.stats;
	return {
		health: s[PS_STAT.HEALTH] || 0,
		armor: s[PS_STAT.ARMOR] || 0,
		ammo: s[PS_STAT.AMMO] || 0,
		ammo2: s[PS_STAT.AMMO2] || 0,
		ammo3: s[PS_STAT.AMMO3] || 0,
		carried: s[PS_STAT.CARRIED] || 0,
		item: PS_ITEM[s[PS_STAT.CARRIED]] || null,
		money: s[PS_STAT.MONEY] || 0,
		stealth: s[PS_STAT.STEALTH] || 0,
		dead: !!(s[PS_STAT.FLAGS] & 1),
		origin: st.origin,
		viewAngles: st.viewAngles
	};
}

module.exports = {
	decodePlayerState, hudFromState, emptyState, PS_STAT, PS_ITEM,
	PS_ORIGIN_SCALE, PS_ANGLE_SCALE
};

};

window.__sofDefs["./snapshot.js"] = function (module, exports, require) {
/*
 * snapshot.js - decoder for the SoF server->client snapshot stream.
 *
 * Everything here was derived from the stock SoF engine (SoF.exe, base
 * 0x20000000, decompiled with Ghidra via REA) and validated against a live
 * dedicated server.
 *
 * Frame layout (svc_frame = 0x17, CL_ParseFrame at 0x20002E90):
 *
 *   u32  frameNumber            little endian
 *   u32  deltaFrom              -1 = a full frame
 *   f32  time                   the server/level time
 *   u8   len                    the length of the command string
 *   ..   command string
 *   u8   0x14                   the "playerinfo" marker
 *   ..   player state           (the game module's player_state_t)
 *   u8   0x15                   the "packetentities" marker
 *   ..   entity list
 *
 * Entity list (CL_ParsePacketEntities, 0x200025A0):
 *
 *   bits = readByte()
 *   if ((char)bits < 0)      bits |= readByte() << 8
 *   if ((char)(bits >> 8) < 0) bits |= readByte() << 16
 *   if (bits & 0x800000)     bits |= readByte() << 24
 *   number = (bits & 0x1000000) ? readShort() : readByte()
 *   if (number == 0) -> the end of the list
 *   if (bits & 0x800) -> the entity is removed
 *   else -> the entity's fields are updated according to `bits`
 *
 * An entity state is 116 bytes (0x74, 29 dwords).  It starts as a copy of
 * the baseline and the fields selected by `bits` are overwritten
 * (CL_ParseEntityFields, 0x20002120).  The order of the reads matters:
 *
 *   +0x20  mask 0x100000             u8
 *   +0x24  mask 0x200                u8
 *   +0x28  mask 0x20000 (u8) | 0x1000 (i16)
 *   +0x2C  mask 0x80000 & 0x2000000 (i32) | 0x80000 (u8) | 0x2000000 (i16)
 *   +0x30  mask 0x10000 & 0x4000 (i32) | 0x10000 (u8) | 0x4000 (i16)
 *   +0x34  mask 0x500 (both, i32) | 0x400 (u8) | 0x100 (i16)
 *   +0x04  mask 0x0001   origin x    i16 * 1/8
 *   +0x08  mask 0x0002   origin y    i16 * 1/8
 *   +0x0C  mask 0x0020   origin z    i16 * 1/8
 *   +0x10  mask 0x0010   angle       u8  * ANGLE_SCALE
 *   +0x14  mask 0x0004   angle       u8  * ANGLE_SCALE
 *   +0x1C  mask 0x4000000 angle      u8  * ANGLE_SCALE
 *   +0x18  mask 0x0008   angle       u8  * ANGLE_SCALE
 *   +0x3C  mask 0x200000 (u8, +0x100 if mask 0x400000)
 *   +0x40  mask 0x200000              u8
 *   +0x44  mask 0x40                 u8
 *   +0x50  mask 0x40                 u8
 */

"use strict";

const { decodePlayerState, hudFromState } = require("./playerstate.js");

const ENTITY_STATE_SIZE = 116;
const MAX_EDICTS = 1024;
const ORIGIN_SCALE = 1 / 8;      // the engine constant at 0x201113A8
const ANGLE_SCALE = 1 / 255;     // the engine constant at 0x20111388

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
}

/* The variable length entity number + the field mask (CL_ParsePacketEntities). */
function readEntityNumber(r) {
	let bits = r.u8();
	if ((bits & 0x80) !== 0) bits |= r.u8() << 8;
	if ((bits & 0x8000) !== 0) bits |= r.u8() << 16;
	if ((bits & 0x800000) !== 0) bits |= r.u8() << 24;
	const number = (bits & 0x1000000) ? r.u16() : r.u8();
	return { bits, number };
}

/* Apply the masked fields of `bits` to the entity state `st` (116 bytes).
 * The order of the reads matters - it is the order the engine uses. */
function applyEntityFields(r, st, bits) {
	const u8 = (off) => { st.writeUInt8(r.u8(), off); };
	const i16 = (off) => { st.writeInt16LE(r.i16(), off); };
	const i32 = (off) => { st.writeInt32LE(r.i32(), off); };
	const fshort = (off) => { st.writeFloatLE(r.i16() * ORIGIN_SCALE, off); };
	const fbyte = (off) => { st.writeFloatLE(r.u8() * ANGLE_SCALE, off); };

	if (bits & 0x00100000) u8(0x20);
	if (bits & 0x00000200) u8(0x24);
	if (bits & 0x00020000) u8(0x28);
	if (bits & 0x00001000) i16(0x28);
	if ((bits & 0x00080000) && (bits & 0x02000000)) i32(0x2c);
	else if (bits & 0x00080000) u8(0x2c);
	else if (bits & 0x02000000) i16(0x2c);
	if ((bits & 0x00010000) && (bits & 0x00004000)) i32(0x30);
	else if (bits & 0x00010000) u8(0x30);
	else if (bits & 0x00004000) i16(0x30);
	if ((bits & 0x00000500) === 0x00000500) i32(0x34);
	else if (bits & 0x00000400) u8(0x34);
	else if (bits & 0x00000100) i16(0x34);
	if (bits & 0x00000001) fshort(0x04);
	if (bits & 0x00000002) fshort(0x08);
	if (bits & 0x00000020) fshort(0x0c);
	if (bits & 0x00000010) fbyte(0x10);
	if (bits & 0x00000004) fbyte(0x14);
	if (bits & 0x04000000) fbyte(0x1c);
	if (bits & 0x00000008) fbyte(0x18);
	if (bits & 0x00200000) {
		let v = r.u8();
		if (bits & 0x00400000) v += 0x100;
		st.writeUInt8(v, 0x3c);
		u8(0x40);
	}
	if ((bits & 0x00000040) === 0) {
		st.writeUInt8(0, 0x44);
		st.writeUInt8(0, 0x48);
	} else {
		u8(0x44);
		u8(0x50);
		if (st.readInt8(0x44) >= 0) {
			st.writeUInt8(0, 0x48);
		} else {
			u8(0x48);
			u8(0x54);
			if (st.readInt8(0x48) < 0) { u8(0x4c); u8(0x58); }
			else st.writeUInt8(0, 0x4c);
		}
	}
	if (bits & 0x00040000) i32(0x38);
	if (bits & 0x00002000) {
		/* four groups of three shorts, selected by mask bits 0..11 */
		for (let g = 0; g < 4; g++) {
			const b = g * 3 + 2;
			const base = 0x5c + g * 6;
			if (bits & (1 << (b - 2))) i16(base);
			if (bits & (1 << (b - 1))) i16(base + 2);
			if (bits & (1 << b)) i16(base + 4);
		}
	}
	return st;
}

class Frame {
	constructor() {
		this.number = 0;
		this.deltaFrom = -1;
		this.time = 0;
		this.command = "";
		this.playerState = null;
		this.entities = new Map();
	}
}

/* Parse the entity list that starts at `off`; returns {entities, end}.
 *
 * The list is a **delta**: only the entities that changed are sent, and the
 * terminator is the entity number 0.  The entities that did not change keep
 * their state from the previous frame, so the result is the full set. */
function parseEntityList(buf, off, prevFrame) {
	const r = new Reader(buf, off);
	const entities = new Map();
	if (prevFrame) for (const [n, e] of prevFrame.entities) entities.set(n, e);
	let prevNumber = -1;
	for (;;) {
		if (r.left <= 0) break;
		const { bits, number } = readEntityNumber(r);
		if (number === 0) break;
		if (number >= MAX_EDICTS) break;
		if (number < prevNumber) break;          // not a sane list
		prevNumber = number;
		if (bits & 0x800) {
			entities.set(number, { number, removed: true });
			continue;
		}
		let base = Buffer.alloc(ENTITY_STATE_SIZE);
		if (prevFrame && prevFrame.entities.has(number)) {
			const p = prevFrame.entities.get(number);
			if (p.state) base = Buffer.from(p.state);
		}
		applyEntityFields(r, base, bits);
		base.writeInt32LE(number, 0x00);
		entities.set(number, { number, state: base, removed: false });
	}
	return { entities, end: r.p };
}

/* Parse one svc_frame payload (the bytes AFTER the svc byte). */
function parseFrame(buf, off, prevFrame) {
	const r = new Reader(buf, off || 0);
	const f = new Frame();
	f.number = r.u32();
	f.deltaFrom = r.i32();
	f.time = r.f32();

	/* the command string */
	const slen = r.u8();
	f.command = r.b.toString("latin1", r.p, r.p + slen);
	r.p += slen;

	/* The player state runs from the 0x14 marker to the 0x15 "packet entities"
	 * marker.  The player state is the game module's, so the end marker is
	 * found by trying each candidate and keeping the one whose entity list
	 * parses cleanly to the end of the packet. */
	const psStart = r.p;
	let best = null;
	for (let k = psStart; k < buf.length; k++) {
		if (buf[k] !== 0x15) continue;
		const res = parseEntityList(buf, k + 1, prevFrame);
		res.marker = k;
		/* the entity list is the last thing in the packet, so a candidate
		 * whose list ends exactly at the end of the packet is the right one */
		if (res.end === buf.length) { best = res; break; }
		if (!best || res.entities.size > best.entities.size) best = res;
	}
	if (best) {
		/* The block between the 0x14 and the 0x15 markers is the bit packed
		 * client state.  `decodePlayerState` needs the previous state, because
		 * a field that is not on the wire keeps the base frame's value. */
		const from = (buf[psStart] === 0x14) ? psStart + 1 : psStart;
		try {
			f.playerStateDecoded = decodePlayerState(buf, from, prevFrame && prevFrame.playerStateDecoded);
			f.hud = hudFromState(f.playerStateDecoded);
		} catch (e) {
			f.playerStateDecoded = null;
			f.hud = null;
		}
		f.playerState = buf.subarray(from, Math.max(from, best.marker));
		f.entities = best.entities;
		f.entityStart = best.marker;
		f.playerStateStart = from;
		f.playerStateEnd = best.marker;
		f.rawFrame = buf;
		/* The player state block is the game module's player_state_t.  It is
		 * **bit packed**: a leading bit mask says which fields are present, so
		 * the fields shift from frame to frame and no field has a fixed
		 * offset.  The one field that is easy to find is the authoritative
		 * origin - three shorts with the 1/8 scale - but only in the frames
		 * where the mask includes it.  `findPlayerOrigin` searches for it. */
	}
	f.consumed = best ? best.end - (off || 0) : (r.p - (off || 0));
	return f;
}

/* Human readable entity dump. */
function describeEntity(e) {
	if (e.removed) return "#" + e.number + " (removed)";
	const s = e.state;
	/* the origin is three floats at +0x04 (SoF is Z up) */
	const ox = s.readFloatLE(0x04), oy = s.readFloatLE(0x08), oz = s.readFloatLE(0x0c);
	const a0 = s.readUInt8(0x10) * ANGLE_SCALE;
	const a1 = s.readUInt8(0x14) * ANGLE_SCALE;
	const a2 = s.readUInt8(0x18) * ANGLE_SCALE;
	return "#" + e.number + " origin=(" + ox.toFixed(1) + "," + oy.toFixed(1) + "," + oz.toFixed(1) + ")"
		+ " angles=(" + a0.toFixed(3) + "," + a1.toFixed(3) + "," + a2.toFixed(3) + ")"
		+ " f20=" + s.readUInt8(0x20) + " f24=" + s.readUInt8(0x24);
}

/* Find the authoritative player origin inside a bit packed player state block.
 *
 * The origin is three shorts with the 1/8 scale, but the bit packed layout
 * moves it around, so the block is searched for the six byte pattern of a
 * known position.  Returns the offset or -1.
 */
function findPlayerOrigin(ps, x, y, z) {
	if (!ps || ps.length < 6) return -1;
	const q = Math.round(x * 8), r = Math.round(y * 8), s = Math.round(z * 8);
	const lo = (v) => v & 0xff, hi = (v) => (v >> 8) & 0xff;
	const b = [lo(q), hi(q), lo(r), hi(r), lo(s), hi(s)];
	for (let i = 0; i + 6 <= ps.length; i++) {
		if (ps[i] === b[0] && ps[i + 1] === b[1] && ps[i + 2] === b[2] &&
			ps[i + 3] === b[3] && ps[i + 4] === b[4] && ps[i + 5] === b[5]) return i;
	}
	return -1;
}

module.exports = {
	Reader, parseFrame, parseEntityList, describeEntity, findPlayerOrigin,
	decodePlayerState, hudFromState,
	ENTITY_STATE_SIZE, MAX_EDICTS, ORIGIN_SCALE, ANGLE_SCALE
};


};

window.__sofDefs["./sofproto.js"] = function (module, exports, require) {
/*
 * sofproto.js - the SoF client protocol, transport agnostic.
 *
 * The same code drives the Node UDP client (sofclient.js) and the browser
 * client (www/app.js over a WebSocket relay), so the protocol only exists
 * once.
 *
 * Protocol summary (see PROTOCOL.md for the full detail):
 *
 *   out of band:  0xFFFFFFFF + "getchallenge n"   ->  0xFFFFFFFF + "challenge m"
 *                 0xFFFFFFFF + "connect 33 <seed> <m> <ts> 3.14 \"<userinfo>\"\n"
 *                 -> 0xFFFFFFFF + "client_connect"
 *
 *   in band:      [netchan word 1 u32 LE][netchan word 2 u32 LE]
 *                 [seed u16 LE][u8 type][payload]
 *
 *                 netchan word 1 = the outgoing sequence | (fragment flag << 31)
 *                 netchan word 2 = the acknowledged sequence | (reliable toggle << 31)
 *
 *                 type 4 = a string command ("new", "configstrings N V",
 *                         "baselines N V", "ghoulstrings N V", "begin N")
 *                 type 2 = a usercmd ([checksum][u32 seq][the bit packed cmd])
 *
 * The seed is the connect's field 2 and must be < 65536.
 */
"use strict";

const { checksum } = require("./sofmd4.js");
const { encodeCmd, encodeCmds } = require("./cmdenc.js");
const { parseFrame, describeEntity } = require("./snapshot.js");

/* The usercmd button bits, from the engine's own builder (SoF.exe 0x20005240)
 * and the frame assembler (0x200060C0).  The movement is NOT a bit: it goes
 * into the three i16 fields at +0x0A/+0x0C/+0x0E.
 *   0x01 attack (MOUSE1 / LCTRL)   0x02 use (SPACE)      0x04 alt attack
 *   0x08 +weaponExtra1             0x10 +weaponExtra2    0x20 run/sprint
 *   0x40 lean                      0x80 engine internal
 * The game module (gamex86.dll ClientEndFrame) tests 0x01 for the fire,
 * 0x02 for the item pickup and 0x20 to double the movement. */
const BTN = { ATTACK: 0x01, USE: 0x02, ALT: 0x04, EXTRA1: 0x08, EXTRA2: 0x10, RUN: 0x20, LEAN: 0x40 };

/* One full turn is 65536 binary angle units (the engine's constant at
 * 0x201114A0 is 182.0444f = 65536/360 and the game module converts back with
 * 0.005493164 = 360/65536).  The angles are sent as a 12 bit two's complement
 * field of the value divided by 16, so the resolution is 16 units =
 * 0.088 deg.
 *
 * The 12 bit field is SIGNED on the wire (the engine's reader sign extends
 * bit 11), so the 16 bit value has to be a SIGNED binary angle in
 * -32768..32767, i.e. the angle has to be normalised to -180..+180 degrees.
 * An unsigned angle above 180 degrees is read back as a completely
 * different angle (270 degrees becomes -90), and the game module then
 * misbehaves badly enough that it stops writing the player state. */
const DEG_TO_BIN = 65536 / 360;
function toBinaryAngle(deg) {
	let v = Math.round(deg * DEG_TO_BIN);
	/* normalise to (-180, +180] */
	v = ((v + 0x8000) & 0xffff) - 0x8000;
	return v & 0xffff;
}

/* the server clamps the movement fields (the decoder at 0x20005AA0) */
function clampMove(v, lim) {
	return v < -lim ? -lim : (v > lim ? lim : v);
}

const DEFAULT_USERINFO =
	"\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

/* a latin1 decode that works with a Buffer, a Uint8Array or the browser shim */
function latin1(buf, from, to) {
	let s = "";
	const end = to === undefined ? buf.length : to;
	for (let i = from || 0; i < end; i++) s += String.fromCharCode(buf[i]);
	return s;
}

function createClient(opts) {
	const o = opts || {};
	const send = o.send || function () { };
	const onEvent = o.onEvent || function () { };
	const userinfo = o.userinfo || DEFAULT_USERINFO;
	const seedDefault = (o.seed === undefined ? 3 : o.seed) & 0xffff;

	let seq = 1;            // our outgoing netchan sequence
	let srvSeq = 0;         // the server's last sequence (we acknowledge it)
	let srvReliableToggle = 0; // server's reliable toggle bit (echoed in our word 2)
	let relToggle = true;   // the reliable message toggle bit
	let fragFlag = (o.fragFlag === undefined ? true : o.fragFlag);
	let keepAlive = null;   // the keep alive timer (see startKeepAlive)
	let beginSent = false;
	let baselinesSent = false;
	let seed = seedDefault; // echoed in every frame
	let msec = 0;
	let prevCmd = Buffer.alloc(24);
	let curCmd = Buffer.alloc(24);
	let prevPitch = 0;
	let lastFrame = null;
	let spawnDone = false;
	const configstrings = {};
	let connected = false;
	let entities = new Map();
	let serverTime = 0;
	let frameNumber = 0;
	let userId = -1;
	let playerState = null;
	const view = { pitch: 0, yaw: 0, roll: 0, buttons: 0, forwardmove: 0, sidemove: 0, upmove: 0, weapon: 0 };
	let moveSpeed = 200;
	let lookSpeed = 0.25;
	const keys = Object.create(null);
	const ZERO_CMD = Buffer.alloc(24);
	const cmdRing = [];
	const ghoulPackets = [];
	const soundPackets = [];
	/* fragment reassembly buffer */
	const fragBuf = new Map(); // unused: kept for reference
	var fragPending = Buffer.alloc(0);
	let myToggle = 0; /* the client's own reliable toggle: it flips with every reliable message we send and stays put in unreliable packets */
	/* the fragment flag marks "more follows": fragments accumulate until a
	 * packet arrives WITHOUT the flag, which carries the last piece. */

	/* ------------------------------------------------------------ output */

	function oob(text) {
		const body = Buffer.from(text, "latin1");
		const pkt = Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), body]);
		send(pkt);
		onEvent("oob", text);
	}

	/* The netchan header is two 32 bit words:
	 *   word 1 = the outgoing sequence | (fragment flag << 31)
	 *   word 2 = the acknowledged sequence | (reliable toggle << 31)
	 * Every client message is a reliable message, so the toggle in word 2
	 * has to alternate with every packet we send - a constant toggle makes
	 * the server's reliable message queue stall. */
	function netchanHdr(flag) {
		const f = (flag === undefined ? fragFlag : flag);
		const h = Buffer.alloc(4);
		h.writeUInt32LE(((seq++) | (f ? 0x80000000 : 0)) >>> 0, 0);
		return h;
	}
	function reliableHdr() {
		const h = Buffer.alloc(4);
		h.writeUInt32LE(((srvSeq + (o.ackPlusOne ? 1 : 0)) | ((myToggle = (myToggle + 1) & 1) ? 0x80000000 : 0)) >>> 0, 0);
		if (relToggle) console.log("[NET] Sending reliableHdr with relToggle=1 ack=" + (srvSeq + (o.ackPlusOne ? 1 : 0)));
		relToggle = !relToggle;
		return h;
	}

/* The same header but with the server's reliable toggle bit echoed back:
 * the stock client sends user commands as unreliable data, but still
 * acknowledges the server's reliable messages by echoing the server's
 * reliable toggle bit in word 2. */
function unrelHdr() {
	const h = Buffer.alloc(4);
	const ack = (srvSeq + (o.ackPlusOne ? 1 : 0)) >>> 0;
	h.writeUInt32LE(((ack & 0x7fffffff) | (myToggle << 31)) >>> 0, 0);
	if (srvReliableToggle) console.log("[NET] Sending unrelHdr with srvReliableToggle=" + srvReliableToggle + " ack=" + ack);
	return h;
}
	function seedHdr() {
		const h = Buffer.alloc(2);
		h.writeUInt16LE(seed & 0xffff, 0);
		return h;
	}

	function sendStringCmd(text) {
		const t = Buffer.from(text, "latin1");
		const body = Buffer.alloc(3 + t.length + 1);
		body.writeUInt16LE(seed & 0xffff, 0);
		body.writeUInt8(4, 2);
		t.copy(body, 3);
		body.writeUInt8(0, 3 + t.length);
		/* String commands in response to server's reliable messages must
		 * acknowledge the server's reliable toggle. Use unrelHdr() which
		 * echoes srvReliableToggle in word 2. */
		send(Buffer.concat([netchanHdr(), reliableHdr(), body]));
		onEvent("cmd", text);
	}

	/* The type-3 message is the USERINFO.  The engine stores it and forwards it
	 * to the game module's ClientUserinfoChanged, which is where the "spectator",
	 * "bestweap", "name", "teamname" and "skin" keys are parsed. */
	function sendUserinfo(info) {
		const t = Buffer.from(info, "latin1");
		const body = Buffer.alloc(3 + t.length + 1);
		body.writeUInt16LE(seed & 0xffff, 0);
		body.writeUInt8(3, 2);
		t.copy(body, 3);
		body.writeUInt8(0, 3 + t.length);
		send(Buffer.concat([netchanHdr(), reliableHdr(), body]));
		onEvent("userinfo", info);
	}

	/* The engine hands the userinfo to the game module whenever it changes.
	 * A client that only sends it once can leave the module with a stale
	 * player, so the userinfo can be refreshed periodically. */
	function startUserinfoRefresh() {
		const every = o.userinfoInterval || 0;
		if (!every) return;
		setInterval(() => {
			try { sendUserinfo(userinfo); } catch (e) { /* not connected */ }
		}, every);
	}

	function sendUserCmd() {
		/* The msec byte is the number of MILLISECONDS elapsed since the
		 * previous command - not a cumulative counter.
		 *
		 * The engine keeps a per-client msec budget (cl+0x220) and DROPS a
		 * command whose msec makes that budget go negative ("commandMsec
		 * underflow" in SV_ExecuteClientMessage, SoF.exe 0x200635F0), and
		 * the game module uses msec/10 as the number of 10 ms frames it
		 * simulates for that command.
		 *
		 * The server decodes THREE commands out of every movement message
		 * and calls the game module once for each of them, so the three
		 * msec values of one message have to add up to the real time that
		 * passed between two messages.  The server runs at sv_fps (default 10,
		 * 100ms frames).  We send one message per server frame with 3 commands
		 * of ~33ms each = ~99ms total. */
		msec = 33;
		curCmd = Buffer.alloc(24);
		curCmd[0] = msec;
		curCmd[1] = view.buttons;
		/* CONFIRMED LAYOUT (server decoder SoF.exe 0x20005AA0, verified live by
		 * web/moveprobe5.js: the movement direction rotates with the yaw):
		 *   +0x00 u8  msec
		 *   +0x01 u8  buttons      (bit 0x20 = run, doubles the movement shorts
		 *                            in ClientThink 0x500F53A0 line 138154)
		 *   +0x02 u8  flags2
		 *   +0x03 u8  flags3
		 *   +0x04 u16 pitch        (12 bit wire field, << 4)
		 *   +0x06 u16 yaw          (12 bit wire field, << 4)
		 *   +0x08 u16 roll         (12 bit wire field, << 4)
		 *   +0x0A i16 forwardmove  (10 bit wire field, value + 0x1fe)
		 *   +0x0C i16 sidemove
		 *   +0x0E i16 upmove
		 *   +0x10 f32 extra0
		 *   +0x14 f32 extra1
		 * So the encoder writes angles at 4/6/8 and movement at 0x0A/0x0C/0x0E.
		 * SoF's yaw convention measured from the wire: forward = (sin yaw,
		 * -cos yaw, sin pitch), i.e. yaw 0 points along -Y. */
		curCmd.writeUInt16LE(toBinaryAngle(view.pitch), 4);
		curCmd.writeUInt16LE(toBinaryAngle(view.yaw), 6);
		curCmd.writeUInt16LE(toBinaryAngle(view.roll), 8);
		curCmd.writeInt16LE(clampMove(view.forwardmove, 200), 0x0a);
		curCmd.writeInt16LE(clampMove(view.sidemove, 160), 0x0c);
		curCmd.writeInt16LE(clampMove(view.upmove, 200), 0x0e);
		if (o.cmdPatch) o.cmdPatch(curCmd);
		/* The server decodes THREE commands out of every movement message
		 * (SV_ReadClientMessage, SoF.exe 0x200636C0) with the baseline chain
		 * [zero, cmd1, cmd2]:
		 *
		 *   cmd1 is decoded against a ZERO baseline,
		 *   cmd2 against cmd1,
		 *   cmd3 against cmd2.
		 *
		 * The stock client (0x200060C0) therefore writes three commands per
		 * message: the three most recent ones, the oldest encoded against a
		 * zero baseline and each following one against its predecessor.
		 * The server then calls the game module once per decoded command, so
		 * the button's rising edge (which the game module derives from the
		 * previous command) is only seen when the three commands are there.
		 *
		 * The ring holds the three most recent commands, oldest first. */
		if (cmdRing.length === 0) {
			/* the first three commands are all the same, so the chain
			 * [zero, cmd, cmd] resolves consistently */
			cmdRing.push(Buffer.from(curCmd), Buffer.from(curCmd), Buffer.from(curCmd));
		} else {
			cmdRing.push(Buffer.from(curCmd));
			if (cmdRing.length > 3) cmdRing.shift();
		}
		while (cmdRing.length < 3) cmdRing.unshift(Buffer.alloc(24));
		/* a hook to probe the server's command ordering */
		if (o.cmdPatchRing) {
			for (let i = 0; i < cmdRing.length; i++) o.cmdPatchRing(cmdRing[i], i);
		}
		const body = encodeCmds([
			[cmdRing[0], ZERO_CMD],
			[cmdRing[1], cmdRing[0]],
			[cmdRing[2], cmdRing[1]]
		]);
		prevCmd = curCmd;
		const mode = o.moveMode || "rel";
		const mySeq = seq;
		const h = netchanHdr(mode.indexOf("unrel") < 0);
		const inner = Buffer.alloc(4 + body.length);
		/* The sequence the command carries.  The engine compares it with the
		 * sequence of the message in its "fakelag" check (SV_UserMove:
		 * `outgoing_sequence - lastcmd.netchan.outgoing_sequence > 2`), so
		 * the command has to carry the sequence of the message it is sent
		 * in.  With the sequence one too high the difference underflows into
		 * a huge unsigned value, the fakelag check is always true, the
		 * server stops executing the commands and the game module stops
		 * writing the player state - the world freezes a few seconds after
		 * the spawn.  Measured: 6 s of player state with the wrong
		 * sequence, 54 s with the right one. */
		const seqMode = o.seqMode || "same";
		const cmdSeq = (seqMode === "plus1" ? mySeq + 1 : (seqMode === "minus1" ? mySeq - 1 : mySeq)) & 0xffff;
		inner.writeUInt32LE(cmdSeq >>> 0, 0);
		body.copy(inner, 4);
		/* The checksum key is the netchan field the engine uses as the command
		 * ring index, i.e. the outgoing sequence of THIS message (the value in
		 * word 1 of the header), verified against four live vectors: seq 0, 1,
		 * 7 and 3.  The checksum covers the u32 sequence plus the payload. */
		const ckKey = o.ckKey === "plus1" ? (mySeq + 1) & 0xffff
			: (o.ckKey === "minus1" ? (mySeq - 1) & 0xffff : cmdSeq);
		const ck = checksum(inner, ckKey >>> 0);
		/* The user command message.
		 *
		 * `moveMode` selects how the message is framed:
		 *   "rel"    : the reliable toggle alternates (the message is a new
		 *              reliable message - what the string commands use)
		 *   "unrel"  : the reliable toggle bit stays clear, so the message
		 *              is unreliable data like the stock client's user
		 *              command.  Sending every user command as a reliable
		 *              message fills the server's reliable queue, and the
		 *              server drops the client when it overflows.
		 *   "nock"   : no checksum byte
		 *   "unrel_nock": both
		 */
		const rel = mode.indexOf("unrel") >= 0 ? unrelHdr() : reliableHdr();
		/* The type 2 message layout.  The engine's dispatch table
		 * (0x20063A64) is entered with a command char that can be preceded by
		 * a prefix of 0, 2, 4, 8 or 10 bytes, so the user command message
		 * must use one of those prefix lengths. */
		const fmt = o.moveFmt || "ck_seq";
		/* The server verifies the checksum over [u32 sequence][payload] with
		 * the key = this message's outgoing sequence, so the sequence written
		 * into the head has to be the same value that was inside `inner`. */
		let head;
		switch (fmt) {
			case "seq": head = Buffer.from([2]); break;                    // 0
			case "u32seq": head = Buffer.alloc(5); head[0] = 2;           // 4
				head.writeUInt32LE(cmdSeq >>> 0, 1); break;
			case "len": head = Buffer.alloc(2); head[0] = 2;              // 2
				head[1] = body.length; break;
			case "u32seq_len": head = Buffer.alloc(6); head[0] = 2;      // 5
				head.writeUInt32LE(cmdSeq >>> 0, 1); head[5] = body.length; break;
			case "ck_seq": head = Buffer.alloc(6); head[0] = 2;          // 5
				head[1] = ck; head.writeUInt32LE(cmdSeq >>> 0, 2); break;
			case "ck_seq_len": head = Buffer.alloc(7); head[0] = 2;      // 6
				head[1] = ck; head.writeUInt32LE(cmdSeq >>> 0, 2); head[6] = body.length; break;
			case "len_seq": head = Buffer.alloc(7); head[0] = 2;          // 6
				head[1] = body.length; head.writeUInt32LE(cmdSeq >>> 0, 2); break;
			case "u32seq_u32len": head = Buffer.alloc(9); head[0] = 2;   // 8
				head.writeUInt32LE(cmdSeq >>> 0, 1); head.writeUInt32LE(body.length, 5); break;
			case "u32seq_u32len_raw": head = Buffer.alloc(9); head[0] = 2;
				head.writeUInt32LE(cmdSeq >>> 0, 1); head.writeUInt32LE(body.length, 5); break;
			case "raw": head = Buffer.from([2]); break;
			default: head = Buffer.from([2, ck]);
		}
		const payload = Buffer.concat([head, body]);
		send(Buffer.concat([h, rel, seedHdr(), payload]));
	}

	/* ------------------------------------------------------------- input */

	function onDatagram(msg) {
		if (msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff) {
			const t = latin1(msg, 4);
			onEvent("oob", t);
			if (t.startsWith("challenge ")) {
				const challenge = t.slice(10).trim();
				const now = Math.floor(Date.now() / 1000);
				oob("connect 33 " + seed + " " + challenge + " " + now +
					' 3.14 "' + userinfo + '"\n');
			} else if (t.startsWith("client_connect")) {
				connected = true;
				onEvent("connected");
				sendStringCmd("new");
				startKeepAlive();
				startUserinfoRefresh();
			}
			return;
		}
		if (msg.length < 8) {
			console.log("[NET] RECV SHORT: len=" + msg.length);
			return;
		}
		const word1 = msg.readUInt32LE(0);
		const word2 = msg.readUInt32LE(4);
		const srvOutSeq = word1 & 0x7fffffff;
		const isFragment = (word1 & 0x80000000) !== 0;
		srvSeq = srvOutSeq;
		srvReliableToggle = (word2 >> 31) & 1;

		console.log("[NET] RECV: len=" + msg.length + " srvSeq=" + srvOutSeq + " frag=" + isFragment + " srvRelToggle=" + srvReliableToggle + (msg.length > 8 ? " svc=" + msg[8].toString(16) : ""));

		/* the fragment bit on server packets marks a reliable-message carrier,
		 * not a message split - SoF keeps messages inside one datagram. Process
		 * every packet directly. */
		if (isFragment) { processPacket(msg); return; }
		if (fragPending.length) {
			const full = Buffer.concat([Buffer.from([0, 0, 0, 0, 0, 0, 0, 0]), fragPending, msg.slice(8)]);
			fragPending = Buffer.alloc(0);
			processPacket(full);
			return;
		}

		/* non-fragment packet - process directly */
		processPacket(msg);
	}

		/* process a complete (reassembled) packet */

	/* The server keeps its outgoing reliable message in a queue until the
	 * client acknowledges it, and the acknowledgement only advances when the
	 * client sends a packet.  A client that stays silent between the
	 * server's requests therefore deadlocks the gamestate handshake, so we
	 * send a packet every 50 ms from the moment we are connected. */
	function startKeepAlive() {
		if (keepAlive) return;
		/* The cadence matters: three commands of msec=33 per message add up to
		 * 99 ms, so one message per 100 ms is exactly one sv_fps frame.  A
		 * faster cadence makes the engine's per-client msec budget go negative
		 * (the "commandMsec underflow" drop in SV_ExecuteClientMessage).
		 * `keepAliveInterval` lets a probe pick its own cadence; 0 disables it
		 * so a probe can be the only sender. */
		const every = o.keepAliveInterval === undefined ? 50 : o.keepAliveInterval;
		if (!every) return;
		keepAlive = setInterval(() => {
			try { sendUserCmd(); } catch (e) { /* not connected yet */ }
		}, every);
	}

	function processPacket(msg) {
		if (msg.length < 8) return;
		const word1 = msg.readUInt32LE(0);
		const word2 = msg.readUInt32LE(4);
		const srvOutSeq = word1 & 0x7fffffff;
		srvSeq = srvOutSeq;
		srvReliableToggle = (word2 >> 31) & 1;

		/* svc 0x0f: a stream of configstring records.
		 *   [0x0f][u16 index][u16 value][data]
		 * value 0xffff means "a NUL terminated string follows", any other
		 * value is a numeric configstring (SoF sends the model/sound table
		 * index instead of the name, the client resolves it locally). */
		/* The service byte table (SoF.exe 0x2011E7A0, indexed by the service
		 * byte): 1 = svc_temp_entity, 10 = svc_sound, 15 = svc_configstring,
		 * 21 = svc_packetentities, 23 = svc_frame, 26 (0x1A) = svc_ghoulreliable
		 * and 27 = svc_ghoulunreliable.
		 *
		 * svc_ghoulreliable carries the GHOUL STRING TABLE - the table that
		 * names the Ghoul models and the sounds, and that the game module
		 * (gamex86.dll) decodes; the client only hands the packet to the
		 * module.  The entity state's +0x28 is an index into that table, so
		 * without it no entity can be named.  svc_sound carries the positional
		 * sound events.  Both payloads are captured raw here so that they can
		 * be decoded. */
		if (msg.length > 9 && (msg[8] === 0x01 || msg[8] === 0x04)) {
			/* svc_temp_entity (0x01) and svc_sound_info (0x04) */
			const body = Buffer.from(msg.slice(9));
			onEvent(msg[8] === 0x01 ? "temp" : "soundinfo", { svc: msg[8], body: body });
		}
		if (msg.length > 9 && (msg[8] === 0x1a || msg[8] === 0x1b || msg[8] === 0x0a)) {
			const body = Buffer.from(msg.slice(9));
			if (msg[8] === 0x1a || msg[8] === 0x1b) {
				ghoulPackets.push(body);
				if (ghoulPackets.length > 512) ghoulPackets.shift();
			} else {
				soundPackets.push(body);
				if (soundPackets.length > 256) soundPackets.shift();
			}
			onEvent("ghoul" === "x" ? "" : (msg[8] === 0x0a ? "sound" : "ghoul"), { svc: msg[8], body: body });
		}
		if (msg.length > 9 && msg[8] === 0x0f) {
			const cs = parseConfigStrings(msg, 8);
			for (const k of Object.keys(cs)) {
				if (configstrings[k] === undefined) configstrings[k] = cs[k];
			}
			onEvent("configstrings", cs);
			/* the "cmd ..." request can follow the records in the same
			 * packet, so fall through to the command scan */
		}
		if (msg.length > 9 && msg[8] === 0x1d) {
			/* svc_restart_predn (analysis/svc_1d.md): SoF's own svc name table at
			 * 0x2011E7A0 calls index 29 "svc_restart_predn".  The engine's handler
			 * (FUN_20012600) reads ONE bit-packed byte - the mode - and rebuilds the
			 * client prediction state; the client prints "Waiting for prediction
			 * resynch" while this disagrees with its own counter.  We do not run the
			 * engine's prediction module, so the only useful thing to do is to snap
			 * the local prediction to the authoritative player state. */
			onEvent("predresync", { svc: 0x1d, mode: msg[9] });
		}
		if (msg.length > 9 && msg[8] === 0x17) {
			try {
				const f = parseFrame(msg, 9, lastFrame);
				lastFrame = f;
				frameNumber = f.number;
				serverTime = f.time;
				playerState = f.playerState;
				entities = f.entities;
				onEvent("frame", { frame: f, entities: f.entities });
			} catch (e) { onEvent("frameError", e); }
			return;
		}

		function answer(text) {
			const d = o.answerDelay || 0;
			if (d) setTimeout(() => sendStringCmd(text), d);
			else sendStringCmd(text);
		}

		/* The server keeps its outgoing reliable message in a queue until the
		 * client acknowledges it, and the acknowledgement only advances when the
		 * client sends a packet.  A client that stays silent between the
		 * server's requests therefore deadlocks the gamestate handshake, so we
		 * send a packet every 50 ms from the moment we are connected. */

		/* The server drives the whole gamestate handshake:
		 *   "cmd configstrings <tok> <cursor>"  -> answer with the same
		 *   "cmd ghoulstrings <tok> <cursor>"   -> answer with the same
		 *   "cmd baselines <tok> <cursor>"      -> answer with the same
		 *   "precache <tok>"                    -> answer "precache <tok>"
		 *   "cmd begin <tok>"                   -> answer "begin <tok>"
		 * The server refuses every one of those once the client has
		 * spawned, so nothing may be sent out of order. */
		for (const cmd of findCommands(msg)) {
			let m = cmd.match(/^cmd\s+(configstrings|baselines|ghoulstrings)\s+(\S+)\s*(\S*)/);
			if (m) {
				const verb = m[1], a = m[2], b = m[3] || "0";
				onEvent("ask", verb + " " + a + " " + b);
				answer(verb + " " + a + " " + b);
				/* The gamestate chain is
				 *   configstrings -> ghoulstrings -> baselines -> precache
				 *   -> begin
				 * and the CLIENT drives the last three steps: the server only
				 * asks for the baselines once the client has asked for them,
				 * and it only asks for the begin once the precache step is
				 * done.  A client that sends "begin" too early leaves the
				 * server's gamestate machine half finished and the server
				 * drops the client a few seconds later. */
				if (verb === "ghoulstrings" && !baselinesSent) {
					baselinesSent = true;
					setTimeout(() => sendStringCmd("baselines " + a + " 0"), 60);
				}
				continue;
			}
			m = cmd.match(/^precache\s+(\S+)/);
			if (m) {
				onEvent("ask", "precache " + m[1]);
				answer("precache " + m[1]);
				if (!beginSent) {
					beginSent = true;
					setTimeout(() => {
						sendStringCmd("begin " + m[1]);
						spawnDone = true;
						onEvent("spawned");
					}, 60);
				}
				continue;
			}
			m = cmd.match(/^cmd\s+begin\s+(\S+)/);
			if (m) {
				onEvent("ask", "begin " + m[1]);
				answer("begin " + m[1]);
				spawnDone = true;
				onEvent("spawned");
				continue;
			}
		}
	}

	/* Parse the configstring record stream that starts at "off". */
	function parseConfigStrings(buf, off) {
		const out = {};
		let p = off;
		while (p + 5 <= buf.length && buf[p] === 0x0f) {
			const index = buf.readUInt16LE(p + 1);
			const value = buf.readUInt16LE(p + 3);
			p += 5;
			if (value === 0xffff) {
				let z = p;
				while (z < buf.length && buf[z] !== 0) z++;
				out[index] = buf.toString("latin1", p, z);
				p = z + 1;
			} else {
				out[index] = value;
			}
		}
		return out;
	}

	function findCommands(buf) {
		const out = [];
		let i = 0;
		while (i < buf.length) {
			if (buf[i] === 0x0d) {
				let j = i + 1;
				while (j < buf.length && buf[j] !== 0x00 && buf[j] !== 0x0a) j++;
				out.push(latin1(buf, i + 1, j));
				i = j + 1;
				continue;
			}
			i++;
		}
		return out;
	}

	/* ------------------------------------------------------------- input */

	function setKey(code, down) {
		keys[code] = down;
		let b = 0;
		/* attack: left mouse (Mouse0) OR left ctrl (ControlLeft) */
		if (keys["Mouse0"] || keys["ControlLeft"]) b |= BTN.ATTACK;
		/* alt attack: right mouse (Mouse2) */
		if (keys["Mouse2"]) b |= BTN.ALT;
		/* use: E or Enter */
		if (keys["KeyE"] || keys["Enter"]) b |= BTN.USE;
		/* run: shift */
		if (keys["ShiftLeft"] || keys["ShiftRight"]) b |= BTN.RUN;
		view.buttons = b;
		/* the movement goes into the three i16 fields; the engine's scale is
		 * 400 for a normal run and the 0x20 run bit doubles it server side */
		const speed = moveSpeed;
		view.forwardmove = (keys["KeyW"] || keys["ArrowUp"] ? speed : 0) - (keys["KeyS"] || keys["ArrowDown"] ? speed : 0);
		view.sidemove = (keys["KeyD"] ? speed : 0) - (keys["KeyA"] ? speed : 0);
		view.upmove = (keys["Space"] ? speed : 0) - (keys["KeyC"] || keys["ControlLeft"] ? speed : 0);
	}
	function look(dx, dy) {
		view.yaw = (view.yaw + dx * lookSpeed) % 360;
		view.pitch = Math.max(-89, Math.min(89, view.pitch + dy * lookSpeed));
	}

	function start() { oob("getchallenge 1\n"); }

	return {
		start, onDatagram, sendStringCmd, sendUserinfo, sendUserCmd, setKey, look,
		view: view,
		setMoveSpeed: function (v) { moveSpeed = v; },
		setLookSpeed: function (v) { lookSpeed = v; },
		get entities() { return entities; },
		get ghoulPackets() { return ghoulPackets; },
		get soundPackets() { return soundPackets; },
		get frameNumber() { return frameNumber; },
		get serverTime() { return serverTime; },
		get playerState() { return playerState; },
		get configstrings() { return configstrings; },
		get spawnDone() { return spawnDone; },
		get seq() { return seq; },
		get srvSeq() { return srvSeq; },
		get seed() { return seed; },
		describeEntity, BTN
	};
}

module.exports = { createClient, BTN, DEFAULT_USERINFO };
};

window.sofproto = window.__sofRequire('./sofproto.js');
window.sofsnapshot = window.__sofRequire('./snapshot.js');
window.sofplayerstate = window.__sofRequire('./playerstate.js');
