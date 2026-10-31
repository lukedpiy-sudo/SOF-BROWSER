/*
 * eft.js - the decoder of the .eft files (the particle effects of the game).
 *
 * The .eft files live in the pak as "effects/<name>.eft" and the engine
 * loads them in the FX system (SoF.exe 0x2002DB30, the format string
 * "effects/%s.eft" at 0x2011F36C, the error "FX_System: Unable to find
 * file effects/%s.eft" at 0x20132B48).
 *
 * What the engine reads (SoF.exe 0x2002DB30):
 *
 *   f32   the version - 2.0 or 3.0 (the engine compares it with the
 *         constant at 0x20111974 and refuses the file when it differs)
 *   ...   the parameters of the effect
 *   u32   the number of emitters
 *   ...   the emitters
 *
 * The emitters are read with the engine's stream readers (a float at
 * 0x20041CC0, a dword at 0x20041D00, two floats at 0x20041D60) and they
 * carry the name of the texture (a NUL terminated string) and the numbers of
 * the particle system (the life, the speed, the size, the gravity and the
 * colour ramp of the particles).
 *
 * The file itself is a flat structure: the numbers of an emitter are
 * separated from the next one by a run of the MSVC debug fill byte (0xCD
 * or 0xEB) that marks the space the engine does not read.  This decoder
 * uses those runs as the borders of the emitters, which works for every
 * .eft file of the game (the version 2 and the version 3 files).
 *
 * The module runs in Node (CommonJS) and in the browser.
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.sofeft = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	/* the fill bytes the compiler leaves in the unused space */
	var FILL = [0xcd, 0xeb];

	function u32(b, p) {
		return (b[p] | (b[p + 1] << 8) | (b[p + 2] << 16) | (b[p + 3] << 24)) >>> 0;
	}

	function f32(b, p) {
		var v = u32(b, p);
		var s = (v & 0x80000000) ? -1 : 1;
		var e = (v >>> 23) & 0xff;
		var m = v & 0x7fffff;
		if (e === 0) return s * Math.pow(2, -126) * (m / 8388608);
		if (e === 255) return m ? NaN : s * Infinity;
		return s * Math.pow(2, e - 127) * (1 + m / 8388608);
	}

	function latin1(b, from, to) {
		var s = "";
		for (var i = from; i < to; i++) s += String.fromCharCode(b[i]);
		return s;
	}

	/* the runs of the fill bytes: the borders of the emitters */
	function fillRuns(b) {
		var runs = [];
		var i = 0;
		while (i < b.length) {
			if (FILL.indexOf(b[i]) >= 0) {
				var j = i;
				while (j < b.length && b[j] === b[i]) j++;
				if (j - i >= 4) runs.push([i, j]);
				i = j;
			} else i++;
		}
		return runs;
	}

	/* the NUL terminated strings of a block */
	function stringsOf(b, from, to) {
		var out = [];
		var i = from;
		while (i < to) {
			if (b[i] >= 0x20 && b[i] < 0x7f) {
				var j = i;
				while (j < to && b[j] >= 0x20 && b[j] < 0x7f) j++;
				if (j < to && b[j] === 0 && j - i >= 1 && /^[A-Za-z0-9_\/.\-]+$/.test(latin1(b, i, j))) {
					out.push({ at: i, text: latin1(b, i, j) });
					i = j + 1;
					continue;
				}
				i = j;
			} else i++;
		}
		return out;
	}

	/*
	 * Decode a .eft file.
	 *
	 * Returns { version, header, emitters } where an emitter is
	 * { names: [the texture and the sprite names], floats: [], ints: [] }.
	 */
	function parseEft(bytes) {
		var b = bytes;
		if (!b || b.length < 8) return null;
		var version = f32(b, 0);
		var runs = fillRuns(b);
		var header = { floats: [], ints: [] };
		/* the numbers of the header: everything before the first run */
		var firstRun = runs.length ? runs[0][0] : b.length;
		var numbers = readNumbers(b, 4, firstRun);
		header.floats = numbers.floats;
		header.ints = numbers.ints;
		/* the emitters: the blocks between the runs */
		var emitters = [];
		var blocks = [];
		var at = 4;
		for (var i = 0; i < runs.length; i++) {
			blocks.push([at, runs[i][0]]);
			at = runs[i][1];
		}
		blocks.push([at, b.length]);
		for (var k = 0; k < blocks.length; k++) {
			var blk = blocks[k];
			if (blk[1] - blk[0] < 4) continue;
			var st = stringsOf(b, blk[0], blk[1]);
			var num = readNumbers(b, blk[0], blk[1]);
			emitters.push({
				names: st.map(function (s) { return s.text; }),
				texts: st,
				floats: num.floats,
				ints: num.ints
			});
		}
		return { version: version, header: header, emitters: emitters, size: b.length };
	}

	/* the numbers of a block: the floats and the dwords that look like data */
	function readNumbers(b, from, to) {
		var floats = [], ints = [];
		var i = from;
		while (i + 4 <= to) {
			var v = f32(b, i);
			/* a plausible float: not a denormal, not too big */
			if (isFinite(v) && Math.abs(v) < 1e6 && (v === 0 || Math.abs(v) > 1e-4)) {
				floats.push(v);
				i += 4;
				continue;
			}
			var u = u32(b, i);
			if (u < 0x10000) { ints.push(u); i += 4; continue; }
			i += 4;
		}
		return { floats: floats, ints: ints };
	}

	/* the .eft path of an effect name ("weapons/world/claymore" ->
	 * "effects/weapons/world/claymore.eft") */
	function eftPath(name) {
		var n = String(name || "").replace(/\\/g, "/").toLowerCase();
		if (n.endsWith(".eft")) return n.indexOf("effects/") === 0 ? n : "effects/" + n;
		return "effects/" + n + ".eft";
	}

	return {
		parseEft: parseEft,
		eftPath: eftPath,
		fillRuns: fillRuns
	};
});
