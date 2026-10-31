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
