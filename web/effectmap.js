/*
 * effectmap.js - the effect table of the client (SoF.exe 0x201343E0).
 *
 * The svc_temp_entity service (the wire byte 1, the handler SoF.exe
 * 0x200308C0) carries a u8: the index of the client's effect function.  The
 * table at 0x201343E0 has 256 entries, 92 of them are live; the function of
 * the index reads the rest of the message out of the stream and spawns the
 * effect (the muzzle flash, the blood, the sparks, the shells) and plays its
 * sound.
 *
 * The "read" field is the sequence of values the function of the index takes
 * out of the message, read with the engine's stream readers:
 *
 *   u8    a byte            (0x2001E260)
 *   u16   a short           (0x2001E290)
 *   u32   a dword           (0x2001E3E0)
 *   f32   a float           (0x2001E400)
 *   str   a NUL terminated string (0x2001E3B0 / 0x2001E690)
 *   vec3  three floats      (0x2001E4C0, the origin scale x1/8)
 *
 * The first value of the message is always the origin (the "vec3"), except
 * for the few effects that read a byte or a short first.  The names are the
 * strings the function of the index refers to.
 *
 * The module runs in Node (CommonJS) and in the browser.
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.sofeffectmap = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	/* the effect table: the index -> the function and the message layout */
	var EFFECTS = [
	{ index: 0, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 1, fn: 0x20028eb0, read: "vec3", names: [] },
	{ index: 2, fn: 0x20028ed0, read: "vec3 u8 u8 u8 u8", names: [] },
	{ index: 3, fn: 0x200291e0, read: "", names: [] },
	{ index: 4, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 5, fn: 0x2008a990, read: "", names: [] },
	{ index: 6, fn: 0x20040eb0, read: "vec3 u8 u8 u8", names: [] },
	{ index: 7, fn: 0x20040eb0, read: "vec3 u8 u8 u8", names: [] },
	{ index: 8, fn: 0x20029520, read: "vec3 u8 str", names: [] },
	{ index: 9, fn: 0x200439e0, read: "u8 vec3 vec3 u8 u8", names: [] },
	{ index: 10, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 11, fn: 0x200295b0, read: "vec3 u16 u8", names: [] },
	{ index: 12, fn: 0x200296e0, read: "vec3", names: [] },
	{ index: 13, fn: 0x200299c0, read: "", names: [] },
	{ index: 14, fn: 0x20028900, read: "vec3 str", names: [] },
	{ index: 15, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 16, fn: 0x20029b10, read: "", names: [] },
	{ index: 17, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 18, fn: 0x20029e70, read: "vec3 str u8 u8 u8 u8 u8 u8 u8", names: [] },
	{ index: 19, fn: 0x20044010, read: "", names: [] },
	{ index: 20, fn: 0x20044770, read: "vec3", names: [] },
	{ index: 21, fn: 0x20044ac0, read: "vec3", names: [] },
	{ index: 22, fn: 0x2008a990, read: "", names: [] },
	{ index: 23, fn: 0x20041220, read: "vec3 u8", names: [] },
	{ index: 24, fn: 0x20044bc0, read: "vec3 vec3 u8 u16 u8", names: [] },
	{ index: 25, fn: 0x20044f40, read: "vec3 vec3", names: [] },
	{ index: 26, fn: 0x2002a6e0, read: "vec3 u8", names: [] },
	{ index: 27, fn: 0x2002a800, read: "vec3 vec3", names: [] },
	{ index: 28, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 29, fn: 0x20029440, read: "", names: [] },
	{ index: 30, fn: 0x20029440, read: "", names: [] },
	{ index: 31, fn: 0x20028cc0, read: "vec3 str", names: [] },
	{ index: 32, fn: 0x20045550, read: "vec3 str u8", names: [] },
	{ index: 33, fn: 0x200450f0, read: "vec3 u8", names: [] },
	{ index: 34, fn: 0x20044d70, read: "vec3 vec3", names: [] },
	{ index: 35, fn: 0x20045910, read: "u16 u16 u16 u8", names: [] },
	{ index: 36, fn: 0x20045d00, read: "u16 u16 u16 u16 u16", names: [] },
	{ index: 37, fn: 0x20045f80, read: "u16 u16", names: [] },
	{ index: 38, fn: 0x20046740, read: "vec3", names: [] },
	{ index: 39, fn: 0x20047130, read: "u16", names: [] },
	{ index: 40, fn: 0x2002ae80, read: "vec3 u8", names: [] },
	{ index: 41, fn: 0x20045910, read: "u16 u16 u16 u8", names: [] },
	{ index: 42, fn: 0x20045b00, read: "u16 u16 u16", names: [] },
	{ index: 43, fn: 0x20045b80, read: "vec3 vec3", names: [] },
	{ index: 44, fn: 0x2002b8b0, read: "vec3 u8", names: [] },
	{ index: 45, fn: 0x2002c340, read: "vec3 u8 u8 u8 u8", names: [] },
	{ index: 46, fn: 0x2002b410, read: "vec3 u8 u8", names: [] },
	{ index: 47, fn: 0x2002c4a0, read: "vec3 u16", names: [] },
	{ index: 48, fn: 0x2002c5a0, read: "vec3 u16", names: [] },
	{ index: 49, fn: 0x2002c5d0, read: "vec3 str", names: [] },
	{ index: 50, fn: 0x2002c610, read: "vec3 vec3 u16 u16", names: [] },
	{ index: 51, fn: 0x20028eb0, read: "vec3", names: [] },
	{ index: 52, fn: 0x2002c670, read: "vec3 u16", names: [] },
	{ index: 53, fn: 0x200294f0, read: "vec3", names: [] },
	{ index: 54, fn: 0x20043af0, read: "vec3", names: [] },
	{ index: 55, fn: 0x2002b460, read: "vec3 u8 u8", names: [] },
	{ index: 56, fn: 0x2002b680, read: "vec3 u8 u8", names: [] },
	{ index: 57, fn: 0x2002c7a0, read: "vec3 vec3", names: [] },
	{ index: 58, fn: 0x2002c850, read: "vec3", names: [] },
	{ index: 59, fn: 0x2002c890, read: "vec3", names: [] },
	{ index: 60, fn: 0x2002ca20, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 61, fn: 0x2002cbd0, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 62, fn: 0x2002ce70, read: "u8 u8 u8 vec3 vec3", names: [] },
	{ index: 63, fn: 0x2002d110, read: "u8 u8 vec3 vec3", names: [] },
	{ index: 64, fn: 0x2002d2f0, read: "vec3 vec3 u8 u8 u8", names: [] },
	{ index: 67, fn: 0x2008a990, read: "", names: [] },
	{ index: 68, fn: 0x2008a990, read: "", names: [] },
	{ index: 69, fn: 0x20041530, read: "", names: [] },
	{ index: 70, fn: 0x20041530, read: "", names: [] },
	{ index: 71, fn: 0x20041530, read: "", names: [] },
	{ index: 72, fn: 0x20041530, read: "", names: [] },
	{ index: 73, fn: 0x20041530, read: "", names: [] },
	{ index: 74, fn: 0x20041530, read: "", names: [] },
	{ index: 75, fn: 0x20041530, read: "", names: [] },
	{ index: 76, fn: 0x20041530, read: "", names: [] },
	{ index: 77, fn: 0x20041530, read: "", names: [] },
	{ index: 78, fn: 0x20041530, read: "", names: [] },
	{ index: 79, fn: 0x20041530, read: "", names: [] },
	{ index: 80, fn: 0x20041530, read: "", names: [] },
	{ index: 81, fn: 0x2008a990, read: "", names: [] },
	{ index: 82, fn: 0x20027fe0, read: "", names: [] },
	{ index: 83, fn: 0x20027fe0, read: "", names: [] },
	{ index: 84, fn: 0x20027fe0, read: "", names: [] },
	{ index: 85, fn: 0x20027fe0, read: "", names: [] },
	{ index: 86, fn: 0x20027fe0, read: "", names: [] },
	{ index: 87, fn: 0x20027f90, read: "", names: [] },
	{ index: 88, fn: 0x20028050, read: "", names: [] },
	{ index: 90, fn: 0x2002f520, read: "", names: [] },
	{ index: 100, fn: 0x2002f220, read: "", names: [] },
	{ index: 101, fn: 0x2002f310, read: "", names: [] },
	{ index: 105, fn: 0x2002f420, read: "", names: [] },
	{ index: 189, fn: 0x2002d2b0, read: "", names: [] },
	];

	/* the number of bytes of a value of a layout */
	var SIZE = { "u8": 1, "u16": 2, "u32": 4, "f32": 4, "f64": 8, "str": -1, "vec3": 6 };

	/*
	 * Parse the payload of a temp entity after the effect index: the fields
	 * of the function of the index, in the order the function reads them.
	 * Returns { index, fields, end }.
	 */
	function parseTempEntityBody(buf, off, index) {
		var b = buf;
		var p = off || 0;
		var e = effect(index);
		var out = { index: index, fields: [] };
		if (!e) { out.end = p; return out; }
		var kinds = e.read.length ? e.read.split(" ") : [];
		for (var i = 0; i < kinds.length; i++) {
			var k = kinds[i];
			if (k === "str") {
				var z = p;
				while (z < b.length && b[z] !== 0) z++;
				if (z >= b.length) break;
				out.fields.push(b.toString("latin1", p, z));
				p = z + 1;
			} else if (k === "vec3") {
				if (p + 6 > b.length) break;
				out.fields.push([b.readInt16LE(p) / 8, b.readInt16LE(p + 2) / 8, b.readInt16LE(p + 4) / 8]);
				p += 6;
			} else if (k === "u8") {
				if (p >= b.length) break;
				out.fields.push(b[p]); p += 1;
			} else if (k === "u16") {
				if (p + 2 > b.length) break;
				out.fields.push(b.readUInt16LE(p)); p += 2;
			} else if (k === "u32") {
				if (p + 4 > b.length) break;
				out.fields.push(b.readUInt32LE(p)); p += 4;
			} else if (k === "f32") {
				if (p + 4 > b.length) break;
				out.fields.push(b.readFloatLE(p)); p += 4;
			}
		}
		out.end = p;
		return out;
	}

	/* the entry of the table */
	function effect(index) {
		for (var i = 0; i < EFFECTS.length; i++) {
			if (EFFECTS[i].index === index) return EFFECTS[i];
		}
		return null;
	}

	/* the names the engine knows for an effect (the .eft paths) */
	function effectNames(index) {
		var e = effect(index);
		return e ? (e.names || []) : [];
	}

	return {
		EFFECTS: EFFECTS,
		effect: effect,
		effectNames: effectNames,
		parseTempEntityBody: parseTempEntityBody
	};
});
