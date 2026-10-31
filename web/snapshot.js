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

