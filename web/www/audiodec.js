/*
 * audiodec.js - the decoders for the two binary sound formats the game uses.
 *
 *   .adp   the compressed audio (music, speech, cinematics, impacts).  It is
 *          a u32 little endian sample rate followed by one continuous
 *          IMA/DVI ADPCM nibble stream (high nibble first, no block
 *          headers).  The decoder is the game's own: SoF's sound driver
 *          (A3Dsnd.dll / Defsnd.dll / EAXSnd.dll) decodes it in
 *          FUN_60001000 with the step and index tables that live at
 *          Defsnd.dll file offset 65696 and 65632.
 *
 *   .dms   the "music set": the list of the music tracks of one level.  The
 *          engine reads it in SoF.exe FUN_2000ff70 (0x2000ff70) from
 *          "sound/music/<set>.dms".
 *
 *   .os    the compiled level script of the game module (gamex86.dll loads
 *          "ds/<name>.os").  It is not a sound script: it is the compiled
 *          form of the level's trigger script.  The decoder below reads the
 *          file header and the symbol tables and pulls the sound files the
 *          script plays out of the code section.
 *
 *   .ams   the ambient sound set ("sound/sound.ams"): the list of the
 *          ambient loops of the game.
 *
 * The module runs in Node (CommonJS) and in the browser (window.sofaudiodec).
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.sofaudiodec = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	/* ---------------------------------------------------------------------
	 * The IMA ADPCM tables.  These are the engine's own tables, copied out of
	 * Defsnd.dll (the index table at file offset 65632, the step table at
	 * 65696); A3Dsnd.dll and EAXSnd.dll carry the same values.
	 * ------------------------------------------------------------------- */
	var ADPCM_INDEX = [-1, -1, -1, -1, 2, 4, 6, 8, -1, -1, -1, -1, 2, 4, 6, 8];
	var ADPCM_STEP = [
		7, 8, 9, 10, 11, 12, 13, 14, 16, 17,
		19, 21, 23, 25, 28, 31, 34, 37, 41, 45,
		50, 55, 60, 66, 73, 80, 88, 97, 107, 118,
		130, 143, 157, 173, 190, 209, 230, 253, 279, 307,
		337, 371, 408, 449, 494, 544, 598, 658, 724, 796,
		876, 963, 1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066,
		2272, 2499, 2749, 3024, 3327, 3660, 4026, 4428, 4871, 5358,
		5894, 6484, 7132, 7845, 8630, 9493, 10442, 11487, 12635, 13899,
		15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794, 32767
	];

	function u8(b, p) { return b[p]; }
	function u16(b, p) { return b[p] | (b[p + 1] << 8); }
	function u32(b, p) { return (b[p] | (b[p + 1] << 8) | (b[p + 2] << 16) | (b[p + 3] << 24)) >>> 0; }
	/* a float out of four little endian bytes (the browser's Buffer shim has
	 * no DataView friendly buffer, so this is done by hand) */
	function f32(b, p) {
		var v = u32(b, p);
		var s = (v & 0x80000000) ? -1 : 1;
		var e = (v >>> 23) & 0xff;
		var m = v & 0x7fffff;
		if (e === 255) return m ? NaN : s * Infinity;
		if (e === 0) return Math.fround(s * m * Math.pow(2, -149));
		return Math.fround(s * (m + 0x800000) * Math.pow(2, e - 150));
	}
	function cstr(b, p) {
		let e = p;
		while (e < b.length && b[e] !== 0) e++;
		return { text: latin1(b, p, e), next: e + 1 };
	}
	function latin1(b, p, e) {
		if (typeof Buffer !== "undefined" && typeof Buffer.isBuffer === "function" && Buffer.isBuffer(b)) {
			return b.toString("latin1", p, e);
		}
		var s = "";
		for (var i = p; i < e; i++) s += String.fromCharCode(b[i]);
		return s;
	}

	/* ---------------------------------------------------------------------
	 * .adp - IMA ADPCM
	 *
	 * The engine's loader (A3Dsnd.dll FUN_60005490, 0x60005490) reads the
	 * rate from the first four bytes, copies the rest of the file and
	 * tells the sound system that the sample is 16 bit mono ADPCM at that
	 * rate.  Its mixer (Defsnd.dll FUN_60004250) then calls the nibble
	 * decoder (FUN_60001000) with the current sample position, so the
	 * predictor and the step index run continuously over the whole file -
	 * there are no per block headers.
	 *
	 * The engine reserves 2 * fileLength - 46 samples (the loader stores
	 * that as the sample count), so that is what we decode.
	 * ------------------------------------------------------------------- */
	function decodeAdp(bytes) {
		var b = bytes;
		var rate = u32(b, 0);
		var data = b.subarray ? b.subarray(4) : b.slice(4);
		var avail = data.length * 2;
		var want = b.length * 2 - 46;
		if (want < 0) want = 0;
		var n = Math.min(want, avail);
		var out = new Int16Array(n);
		var step = ADPCM_STEP, index = ADPCM_INDEX;
		var pred = 0, si = 0;
		for (var s = 0; s < n; s++) {
			var byte = data[s >> 1];
			var nib = (s & 1) ? (byte & 0xf) : (byte >> 4);
			var st = step[si];
			var diff = st >> 3;
			if (nib & 4) diff += st;
			if (nib & 2) diff += st >> 1;
			if (nib & 1) diff += st >> 2;
			if (nib & 8) diff = -diff;
			si += index[nib];
			if (si < 0) si = 0; else if (si > 88) si = 88;
			pred += diff;
			if (pred > 32767) pred = 32767; else if (pred < -32768) pred = -32768;
			out[s] = pred;
		}
		return { rate: rate, channels: 1, samples: out, length: n };
	}

	/* ---------------------------------------------------------------------
	 * .dms - the music set
	 *
	 *   +0x00 u8    the version (11)
	 *   +0x01 u8    the number of tracks
	 *   +0x02 ..    7 header bytes the engine does not use
	 *   +0x09       the tracks, each of them
	 *                 char leftPath[]   NUL terminated
	 *                 char rightPath[]  NUL terminated
	 *                 byte params[12]
	 *
	 * SoF.exe FUN_2000ff70 (0x2000ff70) reads it; the paths are relative to
	 * the game root ("sound/music/DM1/lDM1.adp").
	 * ------------------------------------------------------------------- */
	function decodeDms(bytes) {
		var b = bytes;
		var version = u8(b, 0);
		var count = u8(b, 1);
		var p = 9;
		var tracks = [];
		for (var i = 0; i < count; i++) {
			var l = cstr(b, p); p = l.next;
			var r = cstr(b, p); p = r.next;
			var params = b.subarray ? b.subarray(p, p + 12) : b.slice(p, p + 12);
			p += 12;
			tracks.push({
				index: i,
				left: l.text,
				right: r.text,
				params: params,
				/* the first parameter byte selects the track inside the set
				 * and the fourth one is the volume (0..255) */
				state: params.length > 0 ? params[0] : 0,
				volume: params.length > 3 ? params[3] : 255
			});
		}
		return { version: version, tracks: tracks, header: b.subarray ? b.subarray(2, 9) : b.slice(2, 9) };
	}

	/* ---------------------------------------------------------------------
	 * .ams - the ambient sound set
	 *
	 *   +0x00 u8    the version (11)
	 *   +0x01 u32   the number of ambient sounds (the paths)
	 *   +0x05 u32   the number of entries of the first named table
	 *   +0x09 u32   the number of entries of the second named table
	 *   +0x0D u32   the number of entries of the third named table
	 *   +0x11       the sound paths, NUL terminated, relative to "sound/"
	 *   then the three named tables.  Every entry of them is
	 *
	 *                char name[]  NUL terminated   (the "soundName" of the
	 *                                                func_ambientset and the
	 *                                                environ_soundgen
	 *                                                entities of the maps)
	 *                u8   1
	 *                u8   3
	 *                f32  the minimum distance
	 *                f32  the maximum distance
	 *                u16  the path index of the sound (0xffff = none)
	 *                u16  the number of the extra path indices
	 *                u16  the extra path indices
	 *                byte 6 bytes that the engine does not use
	 *
	 * SoF.exe FUN_2000feb0 (0x2000feb0) reads the paths; the three named
	 * tables are the engine's named ambiences.
	 * ------------------------------------------------------------------- */
	/* The ambient set (sound/sound.ams).  The driver reads the entries in
	 * A3Dsnd.dll 0x60002670 (the same code in Defsnd.dll and EAXSnd.dll):
	 *
	 *   the name, NUL terminated
	 *   1 byte   (1 in every entry of the game)
	 *   1 byte   (3 in every entry of the game)
	 *   f32      the minimum distance
	 *   f32      the maximum distance (the driver stores max - min)
	 *   u16      the index of the first path
	 *   u8       the number of the paths
	 *   u16[]    the path indices
	 *   f32      a third distance (0 in most of the entries)
	 *   u8       the volume of the ambience
	 *   u8       the range of the volume (the driver stores it as the
	 *           difference to the volume)
	 */
	function parseAms(bytes) {
		var b = bytes;
		var version = u8(b, 0);
		var count = u32(b, 1);
		var counts = [u32(b, 5), u32(b, 9), u32(b, 13)];
		var p = 0x11;
		var sounds = [];
		for (var i = 0; i < count; i++) {
			var s = cstr(b, p); p = s.next;
			sounds.push("sound/" + s.text);
		}
		var tables = [];
		for (var t = 0; t < 3; t++) {
			var entries = [];
			for (var e = 0; e < counts[t]; e++) {
				var n = cstr(b, p); p = n.next;
				p++; p++;
				var min = f32(b, p); p += 4;
				var max = f32(b, p); p += 4;
				var first = u16(b, p); p += 2;
				var extra = u16(b, p); p += 2;
				var idx = [];
				if (extra !== 0xffff) {
					for (var k = 0; k < extra; k++) { idx.push(u16(b, p)); p += 2; }
				}
				var far = f32(b, p); p += 4;
				var vol = u8(b, p); p += 1;
				var volTop = u8(b, p); p += 1;
				var paths = [];
				if (first !== 0xffff) paths.push(sounds[first] || null);
				for (var k2 = 0; k2 < idx.length; k2++) paths.push(sounds[idx[k2]] || null);
				entries.push({
					name: n.text, min: min, max: max, paths: paths,
					volume: vol / 255, volumeTop: volTop / 255, far: far
				});
			}
			tables.push(entries);
		}
		return { version: version, sounds: sounds, tables: tables, dataOffset: p };
	}

	/* ---------------------------------------------------------------------
	 * .os - the compiled level script of the game module
	 *
	 * The file is a flat opcode stream:
	 *
	 *   +0x00 u32   the version (3).  gamex86.dll FUN_5007adc0 (0x5007adc0)
	 *                reads it and refuses anything else ("LoadScripts():
	 *                Expecting version %d, found version %d").
	 *
	 * The VM is the script interpreter of gamex86.dll: the dispatcher is at
	 * 0x500819a6 and its jump table is at 0x50081f74 (54 opcodes, 0x00-0x35).
	 * The opcodes that are known:
	 *
	 *   0x00-0x06, 0x22  a declaration: a NUL terminated name, then the
	 *                    value type (1 byte), the index (1 byte) and three
	 *                    more bytes (the symbol reader 0x5007b2e0)
	 *   0x07 0x08 0x09 0x0a          Add, Subtract, Multiply, Divide
	 *   0x0b 0x0c 0x0d 0x0e          Add/Subtract/Multiply/Divide assignment
	 *   0x11           push a literal: the type byte and the payload
	 *   0x13           If
	 *   0x14, 0x1a     HandleWait
	 *   0x16           TimeWait
	 *   0x1d, 0x34     Print
	 *   0x1e           PlaySound  (the operand is a bit mask: the bit 0x10
	 *                             means that the volume is on the stack)
	 *   0x1f, 0x20     HandleCacheSound
	 *   0x21           (four bytes)
	 *   0x23           HandleCacheStringPackage
	 *   0x2c           HandleUnloadSound
	 *   0x2f           HandleCacheROFF
	 *   0x30           HandleUnloadROFF
	 *
	 * The literal types of a push:
	 *
	 *   0    four bytes (an integer)
	 *   1    four bytes (a float)
	 *   2    twelve bytes (a vector)
	 *   3    four bytes
	 *   4    a NUL terminated string
	 *   5    four bytes
	 *   6    eight bytes
	 *   7    one byte (the type of a nested value) and its payload
	 *
	 * The parse is verified by the fact that the whole file is consumed; a
	 * few opcodes have a size that the engine reads from the stream, so the
	 * parser repairs itself if it meets an opcode that does not fit.
	 * ------------------------------------------------------------------- */
	var OS_VERSION = 3;

	/* the operand size of the opcodes that read one from the stream */
	var OS_OPS = {
		0x07: 0, 0x08: 0, 0x09: 0, 0x0a: 2, 0x0b: 0, 0x0c: 0, 0x0d: 2, 0x0e: 2, 0x0f: 0,
		0x10: 4, 0x12: 0, 0x13: 5, 0x14: 0, 0x15: 0, 0x16: 0, 0x17: 1, 0x18: 1, 0x19: 1,
		0x1a: 0, 0x1b: 0, 0x1c: 1, 0x1d: 1, 0x1e: 1, 0x1f: 1, 0x20: 1, 0x21: 4, 0x23: 0,
		0x24: 0, 0x25: 0, 0x26: 0, 0x27: 0, 0x28: 1, 0x29: 1, 0x2a: 0, 0x2b: 0, 0x2c: 0,
		0x2d: 1, 0x2e: 0, 0x2f: 0, 0x30: 0, 0x31: 0, 0x32: 0, 0x33: 4, 0x34: 1, 0x35: 0
	};
	/* the size of the block behind a declaration.  A declaration is a NUL
	 * terminated name and a block of bytes: the value type (1 byte), the
	 * index (1 byte) and three more bytes.  The declaration of a location
	 * (the opcode 0x03) only has the two bytes - the file
	 * ds/irq3a/beamcrane2.os only fits with that size (the walk ends on
	 * the last byte of the file with it). */
	var OS_DECL = { 0x00: 5, 0x01: 5, 0x02: 5, 0x03: 2, 0x04: 5, 0x05: 5, 0x06: 5, 0x22: 5 };
	var OS_LIT = { 0: 4, 1: 4, 2: 12, 3: 4, 4: -1, 5: 4, 6: 8, 7: 1 };
	var OS_ALT = [0, 1, 2, 4, 5, 6, 8, 12];

	function osValue(t, raw) {
		if (t === 1) return f32(raw, 0);
		if (t === 4) return latin1(raw, 0, raw.length);
		if (t === 0 || t === 3 || t === 5) return u32(raw, 0);
		if (t === 7) return u8(raw, 0);
		return raw;
	}

	/* walk the opcode stream; `ops` is the (possibly repaired) size table.
	 *
	 * The engine runs a script with a position in the code section (the
	 * dispatcher of gamex86.dll is at 0x500819a6, its jump table at
	 * 0x50081f74) and two opcodes move that position:
	 *
	 *   0x10  a jump.  The four bytes that follow are the target position:
	 *         the handler 0x5007b260 reads them out of the stream and the
	 *         stub at 0x50081d1f writes them into the position register.
	 *
	 *   0x13  the if.  A sub opcode and the four bytes of the target.  The
	 *         handler 0x5007c5a0 takes the two values of the test off the
	 *         stack, calls the method of the sub opcode and jumps to the
	 *         target when the test comes out false; when the test is true
	 *         the script continues with the next statement.
	 *
	 * The positions are file offsets: the code section starts behind the
	 * four bytes of the version, so the target 506 is the statement at 502
	 * of the code section.
	 *
	 * The test of an if reads the state of the game, which a static reader
	 * does not know, so the branch that follows the statement is the one
	 * that is taken.  A script that waits for an event is a loop around
	 * such an if: when the walk runs into the loop a second time, the if
	 * inside the loop takes its jump and the script continues behind the
	 * loop.
	 */
	function osRun(code, ops, flow) {
		var i = 0;
		var stack = [];
		var decls = [];
		var sounds = [];
		var strings = [];
		var time = 0;
		var repairs = 0;
		var path = [];
		var ifs = [];
		var soundsAt = [];
		var steps = 0;
		while (i < code.length) {
			if (steps++ > 20000) break;
			if (flow) {
				/* a position that the walk has been at already is a loop */
				if (path.indexOf(i) >= 0) {
					/* the loop starts at this position: the sounds that the
					 * loop plays are played once and the walk stops, a loop
					 * that waits for something is left behind */
					var loopSounds = sounds.length - soundsAt[path.indexOf(i)];
					var pick = -1;
					for (var d = ifs.length - 1; d >= 0; d--) {
						if (ifs[d].at > i) { pick = d; break; }
					}
					if (pick < 0 || loopSounds > 0) break;
					var dec = ifs[pick];
					ifs.length = pick;
					stack.length = dec.stackLen;
					time = dec.time;
					sounds.length = dec.soundLen;
					strings.length = dec.stringLen;
					path.length = dec.pathLen;
					soundsAt.length = dec.pathLen;
					i = dec.target;
					continue;
				}
				path.push(i);
				soundsAt.push(sounds.length);
			}
			var at = i;
			var op = code[i++];
			if (op === 0x11) {
				if (i >= code.length) return null;
				var t = code[i++];
				var sz = OS_LIT[t];
				if (sz === undefined) return null;
				var raw;
				if (sz < 0) {
					var e = i;
					while (e < code.length && code[e] !== 0) e++;
					if (e >= code.length) return null;
					raw = code.subarray ? code.subarray(i, e) : code.slice(i, e);
					i = e + 1;
				} else {
					if (i + sz > code.length) return null;
					raw = code.subarray ? code.subarray(i, i + sz) : code.slice(i, i + sz);
					i += sz;
				}
				var v = osValue(t, raw);
				if (t === 4) strings.push({ offset: at, text: String(v) });
				stack.push({ type: t, value: v });
				continue;
			}
			if (OS_DECL[op]) {
				var dsz = OS_DECL[op];
				var z = i;
				while (z < code.length && code[z] !== 0) z++;
				if (z >= code.length) return null;
				var name = latin1(code, i, z);
				i = z + 1;
				if (i + dsz > code.length) return null;
				decls.push({ op: op, name: name, type: u8(code, i), index: u8(code, i + 1) });
				i += dsz;
				continue;
			}
			var size = ops[op];
			if (size === undefined || i + size > code.length) {
				/* the opcode does not fit: try the other sizes */
				var fixed = false;
				for (var a = 0; a < OS_ALT.length; a++) {
					if (i + OS_ALT[a] > code.length) continue;
					if (size !== undefined && OS_ALT[a] === size) continue;
					size = OS_ALT[a];
					ops[op] = size;
					repairs++;
					fixed = true;
					break;
				}
				if (!fixed) return null;
			}
			var operand = size ? (code.subarray ? code.subarray(i, i + size) : code.slice(i, i + size)) : null;
			i += size;
			/* the statements */
			if (op === 0x1e) {
				/* PlaySound: the name is on the top of the stack; the volume
				 * is the float that the script pushed in front of it (the
				 * operand has the bit 0x08 when there is one) */
				var name2 = stack.length ? stack.pop() : null;
				var vol = 1.0;
				if (operand && (operand[0] & 0x08)) {
					for (var q = stack.length - 1; q >= 0; q--) {
						if (stack[q].type === 1) { vol = stack[q].value; break; }
					}
				}
				if (name2 && name2.type === 4) {
					sounds.push({
						path: String(name2.value).replace(/\\/g, "/"),
						volume: vol,
						delay: time,
						offset: at
					});
				}
			} else if (op === 0x14 || op === 0x1a || op === 0x16) {
				/* the waits: the time comes from the stack */
				var w = stack.length ? stack.pop() : null;
				if (w && typeof w.value === "number") time += w.value;
			} else if (op >= 0x07 && op <= 0x0f) {
				/* the arithmetic: two values in, one out */
				stack.pop(); stack.pop();
				stack.push({ type: 1, value: 0 });
			} else if (op === 0x12) {
				stack.pop();
			} else if (op === 0x10 && flow) {
				/* the jump: the target is a file offset */
				var jt = u32(operand, 0) - 4;
				if (jt < 0 || jt >= code.length) break;
				i = jt;
			} else if (op === 0x13 && flow) {
				/* the if: the test is unknown, so the statement behind it is
				 * the one that runs; the if takes its two values off the
				 * stack either way */
				var tgt = u32(operand, 1) - 4;
				stack.pop(); stack.pop();
				if (tgt >= 0 && tgt < code.length) {
					ifs.push({
						at: at, target: tgt, stackLen: stack.length, time: time,
						soundLen: sounds.length, stringLen: strings.length,
						pathLen: path.length
					});
				}
			}
		}
		return { decls: decls, sounds: sounds, strings: strings, end: i, repairs: repairs, ifs: ifs.length };
	}

	/* the parser walks the stream; when an opcode does not fit it is
	 * repaired and the walk continues from there.  The walk follows the
	 * jumps of the script (the `linear` flag turns that off and reads the
	 * statements in the order of the file). */
	function parseOs(bytes, linear) {
		var b = bytes;
		var version = u32(b, 0);
		var code = b.subarray ? b.subarray(4) : b.slice(4);
		var ops = {};
		for (var k in OS_OPS) ops[k] = OS_OPS[k];
		var r = osRun(code, ops, !linear);
		if (!linear) {
			/* the walk that follows the jumps of the script does not know
			 * which branch an if takes, so the walk in the order of the
			 * file is the one that keeps every sound of the script; the
			 * walk with the jumps is the one that has the right time */
			var ops2 = {};
			for (var k2 in OS_OPS) ops2[k2] = OS_OPS[k2];
			var lin = osRun(code, ops2, false);
			if (lin && (!r || lin.sounds.length > r.sounds.length)) r = lin;
		}
		if (!r) {
			/* the stream could not be walked: fall back to the literals */
			var strings = osStrings(code);
			var sounds = [];
			for (var i = 0; i < strings.length; i++) {
				var t = strings[i].text.replace(/\\/g, "/");
				if (!/\.(wav|adp|os)$/i.test(t)) continue;
				sounds.push({ path: t, volume: null, delay: null, offset: strings[i].offset });
			}
			return { version: version, decls: [], fields: [], vars: [], code: code, sounds: sounds, strings: strings, ok: false };
		}
		var fields = [], vars = [];
		for (var d = 0; d < r.decls.length; d++) {
			if (r.decls[d].op === 0x06) fields.push(r.decls[d]);
			else vars.push(r.decls[d]);
		}
		return {
			version: version,
			decls: r.decls,
			fields: fields,
			vars: vars,
			code: code,
			sounds: r.sounds,
			strings: r.strings,
			ok: true
		};
	}

	/* every pushed string literal of the code section */
	function osStrings(code) {
		var out = [];
		for (var i = 0; i + 1 < code.length; i++) {
			if (code[i] !== 0x11 || code[i + 1] !== 4) continue;
			var s = cstr(code, i + 2);
			out.push({ offset: i, text: s.text });
			i = s.next - 1;
		}
		return out;
	}

	/* the sound files the script plays, in order (the VM walk) */
	function osSounds(code, linear) {
		var ops = {};
		for (var k in OS_OPS) ops[k] = OS_OPS[k];
		var r = osRun(code, ops, !linear);
		if (!linear) {
			var ops2 = {};
			for (var k2 in OS_OPS) ops2[k2] = OS_OPS[k2];
			var lin = osRun(code, ops2, false);
			if (lin && (!r || lin.sounds.length > r.sounds.length)) r = lin;
		}
		if (r) return r.sounds;
		/* the stream could not be walked: fall back to the literals */
		var strings = osStrings(code);
		var out = [];
		for (var i = 0; i < strings.length; i++) {
			var t = strings[i].text.replace(/\\/g, "/");
			if (!/\.(wav|adp|os)$/i.test(t)) continue;
			out.push({ path: t, volume: null, delay: null, offset: strings[i].offset });
		}
		return out;
	}

	/* ---------------------------------------------------------------------
	 * helpers
	 * ------------------------------------------------------------------- */
	/* the worldspawn of a .bsp: the keys the engine reads from it */
	function bspWorldspawn(bsp) {
		var lumps = [];
		for (var i = 0; i < 22; i++) lumps.push({ off: u32(bsp, 8 + i * 8), len: u32(bsp, 12 + i * 8) });
		var text = latin1(bsp, lumps[0].off, lumps[0].off + lumps[0].len);
		var blocks = text.split(/\}\s*\{/);
		for (var b = 0; b < blocks.length; b++) {
			if (/"classname"\s+"worldspawn"/.test(blocks[b])) return bspKeys(blocks[b]);
		}
		return null;
	}

	function bspKeys(block) {
		var keys = {};
		var re = /"([^"]+)"\s+"([^"]*)"/g, m;
		while ((m = re.exec(block))) keys[m[1].toLowerCase()] = m[2];
		return keys;
	}

	/* the ambience entities of a .bsp: the "func_ambientset" and the
	 * "environ_soundgen" ones, with the name of the ambient they use */
	function bspAmbientEntities(bsp) {
		var lumps = [];
		for (var i = 0; i < 22; i++) lumps.push({ off: u32(bsp, 8 + i * 8), len: u32(bsp, 12 + i * 8) });
		var text = latin1(bsp, lumps[0].off, lumps[0].off + lumps[0].len);
		var blocks = text.split(/\}\s*\{/);
		var out = [];
		for (var b = 0; b < blocks.length; b++) {
			var k = bspKeys(blocks[b]);
			if (k.classname !== "func_ambientset" && k.classname !== "environ_soundgen") continue;
			if (!k.soundname) continue;
			var o = (k.origin || "0 0 0").split(/\s+/);
			out.push({
				classname: k.classname,
				name: k.soundname,
				origin: { x: parseFloat(o[0]) || 0, y: parseFloat(o[1]) || 0, z: parseFloat(o[2]) || 0 },
				targetname: k.targetname || ""
			});
		}
		return out;
	}

	return {
		ADPCM_STEP: ADPCM_STEP,
		ADPCM_INDEX: ADPCM_INDEX,
		decodeAdp: decodeAdp,
		decodeDms: decodeDms,
		parseAms: parseAms,
		parseOs: parseOs,
		osStrings: osStrings,
		osSounds: osSounds,
		bspWorldspawn: bspWorldspawn,
		bspKeys: bspKeys,
		bspAmbientEntities: bspAmbientEntities
	};
});
