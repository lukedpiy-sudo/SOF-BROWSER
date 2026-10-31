/*
 * sof.js - the browser side helpers: the game sounds and the asset loader.
 *
 * The game's audio is plain 16 bit mono PCM WAV at 22050 Hz and lives in
 * Base\pak0.pak, so the relay serves it straight out of the pak at
 * /pak/<path>.  The sounds are fetched on demand and cached.
 */
"use strict";

(function (global) {
	"use strict";

	const cache = new Map();
	let ctx = null;
	let enabled = true;
	const volume = { master: 0.6 };

	function audio() {
		if (!ctx) {
			const AC = global.AudioContext || global.webkitAudioContext;
			if (!AC) return null;
			ctx = new AC();
		}
		if (ctx.state === "suspended") ctx.resume();
		return ctx;
	}

	/* fetch a sound from the pak and decode it */
	function load(path) {
		if (cache.has(path)) return cache.get(path);
		const p = fetch("/pak/" + path).then(function (r) {
			if (!r.ok) throw new Error("http " + r.status + " for " + path);
			return r.arrayBuffer();
		}).then(function (b) {
			return audio().decodeAudioData(b);
		});
		cache.set(path, p);
		return p;
	}

	/* play a sound; the volume and the rate can be varied the way the engine
	 * varies them (a bit of random pitch) */
	function play(path, opts) {
		if (!enabled) return Promise.resolve();
		const o = opts || {};
		const c = audio();
		if (!c) return Promise.resolve();
		return load(path).then(function (buf) {
			const src = c.createBufferSource();
			src.buffer = buf;
			const g = c.createGain();
			g.gain.value = (o.volume === undefined ? 1 : o.volume) * volume.master;
			src.playbackRate.value = o.rate || 1;
			src.connect(g);
			g.connect(c.destination);
			src.start(0);
		}).catch(function (e) {
			/* a missing sound must not break the game */
			if (!global.__sofSoundErrors) global.__sofSoundErrors = [];
			global.__sofSoundErrors.push(path + ": " + e.message);
		});
	}

	/* the same sound again, but with a bit of pitch variation */
	function playVaried(path, spread, vol) {
		const s = spread || 0.08;
		return play(path, {
			rate: 1 + (Math.random() - 0.5) * 2 * s,
			volume: vol === undefined ? 1 : vol * (0.9 + Math.random() * 0.2)
		});
	}

	global.sofsound = {
		play: play,
		playVaried: playVaried,
		load: load,
		/* one AudioContext for the whole page: sofmusic.js must not make a second */
		context: function () { return audio(); },
		setVolume: function (v) { volume.master = v; },
		enable: function (on) { enabled = !!on; },
		isEnabled: function () { return enabled; },
		cached: function () { return cache.size; }
	};
})(window);
