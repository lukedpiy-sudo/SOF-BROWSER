/*
 * tempents.js - the temporary entities of the server (svc 0x01).
 *
 * The service is the effect service of the engine: the client handler is
 * SoF.exe 0x200308C0 (the case of the service byte 1 in the dispatch table
 * at 0x2000F6F8, which is indexed with the service byte minus one):
 *
 *   u8   the effect: an index into the table of the client's effect
 *        functions at 0x201343E0 (256 entries).  The function of the index
 *        spawns the effect (the muzzle flash, the blood, the sparks, the
 *        shells) and plays its sound.
 *
 * The message carries no position: the effect function uses the position of
 * the entity that sent it (the entity number is in the entity state) or the
 * position of the viewer.
 *
 * The engine keeps the spawned effects in the array at 0x2032F760 (844
 * bytes per record, 256 records) and the "in use" flags in the array at
 * 0x2032FAA8; the client frees a record when its lifetime is over and
 * reuses it for the next effect.
 *
 * The sounds of the effects (the weapon fire, the shells) do NOT come with
 * this service: they are ordinary entities whose model index (+0x28 of the
 * entity state) is an index into the ghoul string table, so the browser
 * plays them with its entity watcher.
 *
 * The module runs in Node (CommonJS) and in the browser.
 */
(function (root, factory) {
	if (typeof module === "object" && module.exports) module.exports = factory();
	else root.softempents = factory();
})(typeof self !== "undefined" ? self : this, function () {
	"use strict";

	var SVC_TEMP_ENTITY = 0x01;

	/* the effect table of the client (SoF.exe 0x201343E0) - 256 entries of
	 * a function pointer.  The engine spawns the effect with the function of
	 * the index; the browser cannot call it, so it only reports the index
	 * and lets the caller decide what to draw. */
	var EFFECT_COUNT = 256;

	/*
	 * Parse the payload of the service (the bytes AFTER the service byte).
	 * Returns { effect, end } or null when the payload is empty.
	 */
	function parseTempEntity(buf, off) {
		var b = buf;
		var p = off || 0;
		if (!b || p >= b.length) return null;
		return { effect: b[p], end: p + 1 };
	}

	/*
	 * The lifetime of an effect: the engine frees the record when the
	 * effect is done.  The client does not tell the browser how long an
	 * effect lives (the effect function decides), so the browser uses this
	 * as the default.
	 */
	var DEFAULT_LIFETIME_MS = 1000;

	/* a small record of the effects that are alive, so that the browser can
	 * draw them and drop them when they expire */
	function TempEntityList() {
		this.items = [];
		this.next = 1;
	}

	TempEntityList.prototype.add = function (effect, origin, lifeMs) {
		var item = {
			id: this.next++,
			effect: effect,
			origin: origin || null,
			born: Date.now(),
			life: lifeMs || DEFAULT_LIFETIME_MS
		};
		this.items.push(item);
		return item;
	};

	/* drop the effects that are over */
	TempEntityList.prototype.expire = function () {
		var now = Date.now();
		this.items = this.items.filter(function (i) { return (now - i.born) < i.life; });
		return this.items;
	};

	return {
		SVC_TEMP_ENTITY: SVC_TEMP_ENTITY,
		EFFECT_COUNT: EFFECT_COUNT,
		parseTempEntity: parseTempEntity,
		TempEntityList: TempEntityList,
		DEFAULT_LIFETIME_MS: DEFAULT_LIFETIME_MS
	};
});
