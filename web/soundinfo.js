/*
 * soundinfo.js - the sound info service of the server (svc 0x04).
 *
 * The service tells the client what the game is doing with the sound: which
 * music state it is in, which ambience set is playing and how the sounds are
 * processed.  The client handler is SoF.exe 0x2000EB60 (the case of the
 * service byte 4 in the dispatch table at 0x2000F6F8, which is indexed with
 * the service byte minus one):
 *
 *   u8      the mask: one bit per field that follows
 *   bit 0   u8   the music intensity - the music state.  The client calls
 *                S_SetMusicIntensity with it (SoF.exe 0x2000EB8C) and the
 *                driver picks the track of the .dms whose first parameter
 *                byte is that state.
 *   bit 1   u8   the music designer info -> S_SetMusicDesignerInfo
 *   bit 2   u8   the general ambient set -> S_SetGeneralAmbientSet
 *   bit 3   u8   the sound proc type    -> S_SetSoundProcType
 *
 * The fields come in the order of the bits and only the bits that are set are
 * in the message.  A mask with a bit that the client does not know is an
 * error ("Bad sound info", SoF.exe 0x2011EF58).
 *
 * The module runs in Node (CommonJS) and in the browser.
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.sofsoundinfo = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	var SVC_SOUND_INFO = 0x04;

	/* the fields of the service, in the order of the bits */
	var FIELDS = [
		{ bit: 0x01, name: "musicIntensity" },   /* the music state */
		{ bit: 0x02, name: "musicDesigner" },
		{ bit: 0x04, name: "generalAmbient" },
		{ bit: 0x08, name: "soundProcType" }
	];

	function u8(b, p) { return b[p]; }

	/*
	 * Parse the payload of the service (the bytes AFTER the service byte).
	 * Returns { mask, musicIntensity, musicDesigner, generalAmbient,
	 * soundProcType, error, end }.
	 */
	function parseSoundInfo(buf, off) {
		var b = buf;
		var p = off || 0;
		if (!b || p >= b.length) return null;
		var mask = u8(b, p++);
		var out = { mask: mask, end: p };
		for (var i = 0; i < FIELDS.length; i++) {
			var f = FIELDS[i];
			if (!(mask & f.bit)) continue;
			if (p >= b.length) { out.error = "the service is truncated"; return out; }
			out[f.name] = u8(b, p++);
			out.end = p;
		}
		if (mask & ~0x0f) out.error = "unknown bits in the mask";
		return out;
	}

	/* the music state of the service (the value of the first parameter byte
	 * of the track of the .dms) */
	function musicState(info) {
		if (!info || info.musicIntensity === undefined) return null;
		return info.musicIntensity;
	}

	return {
		SVC_SOUND_INFO: SVC_SOUND_INFO,
		parseSoundInfo: parseSoundInfo,
		musicState: musicState
	};
});
