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
