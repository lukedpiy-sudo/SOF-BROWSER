/*
 * psrt.js - round trip: encode a usercmd the way the browser client does and
 * decode it the way the ENGINE's decoder (SoF.exe 0x20005AA0) does.
 *
 * The engine's decoder is delta coded per field: a "changed" bit, and only if
 * it is set the new value.  The inheritance root of every packet is a ZEROED
 * buffer, so a field that is never marked changed reads back as zero.
 *
 * This finds any mismatch between our encoder and the engine's decoder.
 */
"use strict";
const { encodeCmds } = require("./cmdenc.js");

/* the engine's decoder, mirrored from 0x20005AA0 */
function decodeCmd(bits, baseline) {
	const cmd = Buffer.from(baseline);
	let p = 0;
	const bit = () => {
		const v = (bits[p >> 3] >> (p & 7)) & 1;
		p++;
		return v;
	};
	const take = (n) => {
		let v = 0;
		for (let i = 0; i < n; i++) v |= bit() << i;
		return v;
	};
	/* the three view fields: 1 changed bit + 12 bits, shifted left by 4 */
	for (const off of [4, 6, 8]) {
		if (bit()) cmd.writeInt16LE((take(12) << 4) << 16 >> 16, off);
	}
	/* the three movement fields: 1 changed bit + 10 bits, bias 0x1FE */
	for (const off of [0x0a, 0x0c, 0x0e]) {
		if (bit()) cmd.writeInt16LE((take(10) - 0x1fe), off);
	}
	/* the buttons: 1 changed bit + 8 bits */
	if (bit()) cmd[1] = take(8);
	/* flags3: 1 changed bit + 1 bit (0 -> 1, 1 -> 0xFF) */
	if (bit()) cmd[3] = bit() ? 0xff : 1;
	/* flags2: 1 changed bit + 5 bits, shifted left by 3 */
	if (bit()) cmd[2] = take(5) << 3;
	/* msec: 8 bits, unconditional */
	cmd[0] = take(8);
	/* the two extras: 1 changed bit + 32 bits */
	if (bit()) cmd.writeFloatLE(take(32) >>> 0, 0x10);
	if (bit()) cmd.writeFloatLE(take(32) >>> 0, 0x14);
	return { cmd, bits: p };
}

const ZERO = Buffer.alloc(24);

function mkCmd(o) {
	const c = Buffer.alloc(24);
	c[0] = o.msec || 0;
	c[1] = o.buttons || 0;
	c[2] = o.impulse || 0;
	c.writeInt16LE(o.pitch || 0, 4);
	c.writeInt16LE(o.yaw || 0, 6);
	c.writeInt16LE(o.roll || 0, 8);
	c.writeInt16LE(o.fwd || 0, 0x0a);
	c.writeInt16LE(o.side || 0, 0x0c);
	c.writeInt16LE(o.up || 0, 0x0e);
	c.writeFloatLE(o.e0 || 0, 0x10);
	c.writeFloatLE(o.e1 || 0, 0x14);
	return c;
}

const tests = [
	{ name: "buttons=0x01", o: { buttons: 1, msec: 50 } },
	{ name: "buttons=0x02", o: { buttons: 2, msec: 50 } },
	{ name: "buttons=0x21", o: { buttons: 0x21, msec: 50 } },
	{ name: "yaw=16384 (90 deg)", o: { yaw: 16384, msec: 50 } },
	{ name: "fwd=200", o: { fwd: 200, msec: 50 } }
];

let bad = 0;
for (const t of tests) {
	const c = mkCmd(t.o);
	/* encode three commands, as the browser client does */
	const ring = [c, c, c];
	const body = encodeCmds([[ring[0], ZERO], [ring[1], ring[0]], [ring[2], ring[1]]]);
	/* decode three commands, as the engine does */
	let base = Buffer.alloc(24);
	const outs = [];
	for (let i = 0; i < 3; i++) {
		const r = decodeCmd(body, base);
		outs.push(r.cmd);
		base = r.cmd;
	}
	const last = outs[2];
	const same = c.every((v, i) => v === last[i]);
	if (!same) bad++;
	console.log((same ? "OK  " : "FAIL") + "  " + t.name + "  body=" + body.length + " bytes");
	if (!same) {
		console.log("   sent : " + Array.from(c).map(x => x.toString(16).padStart(2, "0")).join(" "));
		console.log("   got  : " + Array.from(last).map(x => x.toString(16).padStart(2, "0")).join(" "));
	}
}
console.log(bad ? bad + " MISMATCHES" : "all round trips match");
