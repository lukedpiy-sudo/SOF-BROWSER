/*
 * sofmusic.js - the music and ambience layer of the browser client.
 *
 * The game plays its music from the ".adp" files of a ".dms" music set, and
 * the level says which set it wants in the worldspawn of its .bsp:
 *
 *   "classname" "worldspawn" ... "startmusic" "1" "musicset" "dm2"
 *
 * The engine then loads "sound/music/dm2.dms" (SoF.exe 0x200106d0) and the
 * .dms names the tracks - the left and the right channel of every track:
 *
 *   sound/music/DM2/lDM2.adp   sound/music/DM2/rDM2.adp
 *
 * The .adp files are IMA ADPCM (see web/audiodec.js) and they are served
 * straight out of the pak by the relay at /pak/<path in the pak>.
 *
 * The ambience is the "sound/sound.ams" set: it names the ambient loops and
 * the maps put them into the world with "func_ambientset" and
 * "environ_soundgen" entities that carry a "soundName".
 *
 * The layer degrades gracefully: a missing map, a missing music set or a
 * missing .adp only means that no music plays.
 */
(function (global) {
	"use strict";

	const state = {
		enabled: true,
		volume: 0.45,
		map: null,
		musicSet: null,
		musicState: null,
		trackVolume: 1,
		tracks: [],
		track: -1,
		playing: null,
		rate: 0,
		seconds: 0,
		peak: 0,
		ctxState: "",
		status: "idle",
		errors: [],
		ambientSet: null,
		ambients: [],
		ambientList: []
	};

	let dec = null;
	let ctx = null;
	let source = null;
	let musicGain = null;
	let musicTable = null;
	let amsTables = null;
	let started = false;
	const loops = [];

	function note(msg) {
		state.errors.push(String(msg));
		if (state.errors.length > 12) state.errors.shift();
		try { console.log("[sofmusic] " + msg); } catch (e) { }
	}

	/* ------------------------------------------------------------- the 3D model
	 * The sound driver mixes a sound like this (Defsnd.dll 0x60002480, the
	 * same code in A3Dsnd.dll and EAXSnd.dll):
	 *
	 *   - the relative position = the sound - the listener
	 *   - the distance = the length of the relative position
	 *   - the gain = max(distance - 80, 0) * rolloff
	 *     80 units is the reference distance (the constant 80.0 in the
	 *     driver at 0x6000f158), the rolloff is the attenuation of the
	 *     sound (the entity's attenuation byte, 0 = audible everywhere)
	 *   - the volume = 1 - gain, clamped at 0
	 *   - the pan = the dot product of the normalised direction with the
	 *     listener's right vector
	 *   - left  = volume + (1 - volume) * (pan + 1) / 2
	 *     right = volume + (1 - volume) * (1 - pan) / 2
	 *
	 * The driver keeps the volumes as bytes (0-255), the browser uses 0-1.
	 */
	const ENGINE_REF_DISTANCE = 80;
	/* the rolloff of a sound without an attenuation of its own: the driver
	 * loses the whole volume 255 units behind the listener */
	const DEFAULT_ROLLOFF = 1 / 255;

	function listenerRight() {
		const yaw = (global.sofstate && global.sofstate.yaw ? global.sofstate.yaw : 0) * Math.PI / 180;
		/* the engine's right vector is (-sin(yaw), cos(yaw)) */
		return { x: -Math.sin(yaw), y: Math.cos(yaw) };
	}

	function engineMix(origin, rolloff) {
		const p = playerPos();
		if (!p || !origin) return { volume: 1, pan: 0, distance: 0 };
		const dx = origin.x - p.x, dy = origin.y - p.y, dz = origin.z - p.z;
		const distance = Math.sqrt(dx * dx + dy * dy + dz * dz);
		const r = (rolloff === undefined || rolloff === null) ? DEFAULT_ROLLOFF : rolloff;
		/* the driver subtracts the reference distance from the distance
		 * FIRST and then applies the rolloff: the gain is the part of the
		 * volume that is lost, the volume is 1 - gain */
		const gain = Math.max(0, distance - ENGINE_REF_DISTANCE) * r;
		let volume = 1 - gain;
		if (volume < 0) volume = 0;
		if (volume > 1) volume = 1;
		const right = listenerRight();
		const flat = Math.sqrt(dx * dx + dy * dy) || 1;
		let pan = (dx * right.x + dy * right.y) / flat;
		if (pan < -1) pan = -1;
		if (pan > 1) pan = 1;
		return { volume: volume, gain: gain, pan: pan, distance: distance };
	}

	/* the left and the right volume of a mix (the driver's law) */
	function engineStereo(mix) {
		const v = mix.volume;
		return {
			left: v + (1 - v) * (mix.pan + 1) / 2,
			right: v + (1 - v) * (1 - mix.pan) / 2
		};
	}

	/* ------------------------------------------------------------- audio */
	function audio() {
		if (!ctx) {
			const AC = global.AudioContext || global.webkitAudioContext;
			if (!AC) return null;
			ctx = new AC();
		}
		if (ctx.state === "suspended" && ctx.resume) ctx.resume();
		return ctx;
	}

	/* use the audio context of the page (web/www/sof.js owns one) */
	function useContext(c) {
		if (!c) return;
		ctx = c;
	}

	function fetchPak(path) {
		return fetch("/pak/" + path).then(function (r) {
			if (!r.ok) throw new Error("http " + r.status + " for " + path);
			return r.arrayBuffer();
		});
	}

	function fetchText(url) {
		return fetch(url).then(function (r) {
			if (!r.ok) throw new Error("http " + r.status + " for " + url);
			return r.json();
		});
	}

	/* ------------------------------------------------------------- the map */
	function currentMap() {
		const s = global.sofstate;
		if (!s || !s.cs) return null;
		const m = s.cs[0];
		return m ? String(m) : null;
	}

	function mapRecord(map) {
		const key = String(map).toLowerCase();
		return (musicTable && musicTable[key]) || null;
	}

	/* the music set of a map: the table that mkmusic.js built, and if the map
	 * is not in it, the worldspawn of the .bsp itself */
	function musicSetOf(map) {
		const rec = mapRecord(map);
		if (rec && rec.musicset) return Promise.resolve(rec);
		const key = String(map).toLowerCase();
		const cands = [
			"maps/dm/" + key + ".bsp", "maps/single/" + key + ".bsp",
			"maps/" + key + ".bsp", "maps/multi/" + key + ".bsp"
		];
		return cands.reduce(function (chain, c) {
			return chain.catch(function () {
				return fetchPak(c).then(function (b) {
					const keys = dec.bspWorldspawn(new Uint8Array(b));
					if (!keys || !keys.musicset) throw new Error("no music set in " + c);
					return { bsp: c, musicset: keys.musicset, startmusic: keys.startmusic };
				});
			});
		}, Promise.reject());
	}

	/* ------------------------------------------------------------- the music */
	function stopMusic() {
		if (source) {
			try { source.stop(); } catch (e) { }
			try { source.disconnect(); } catch (e) { }
			source = null;
		}
		musicGain = null;
		state.playing = null;
		state.track = -1;
	}

	function playTrack(track) {
		const c = audio();
		if (!c) { state.status = "no audio"; return Promise.resolve(); }
		return Promise.all([
			fetchPak(track.left).then(function (b) { return dec.decodeAdp(new Uint8Array(b)); }),
			fetchPak(track.right).then(function (b) { return dec.decodeAdp(new Uint8Array(b)); })
		]).then(function (ch) {
			const L = ch[0], R = ch[1];
			const n = Math.min(L.samples.length, R.samples.length);
			const buf = c.createBuffer(2, n, L.rate);
			const dl = buf.getChannelData(0), dr = buf.getChannelData(1);
			let peak = 0;
			for (let i = 0; i < n; i++) {
				const a = L.samples[i] / 32768, b = R.samples[i] / 32768;
				dl[i] = a; dr[i] = b;
				if (Math.abs(a) > peak) peak = Math.abs(a);
			}
			state.peak = peak;
			state.ctxState = c.state;
			stopMusic();
			const g = c.createGain();
			g.gain.value = state.volume * (state.trackVolume || 1);
			musicGain = g;
			source = c.createBufferSource();
			source.buffer = buf;
			source.loop = true;
			source.connect(g);
			g.connect(c.destination);
			source.start(0);
			state.playing = track.left;
			state.track = track.index;
			state.rate = L.rate;
			state.seconds = n / L.rate;
			state.status = "playing";
			update();
			return true;
		});
	}

	function startMusic(map) {
		if (!dec) { state.status = "no decoder"; return Promise.resolve(); }
		state.map = map;
		state.status = "loading";
		update();
		return musicSetOf(map).then(function (rec) {
			state.musicSet = rec.musicset;
			const setPath = "sound/music/" + rec.musicset + ".dms";
			return fetchPak(setPath).then(function (b) {
				const set = dec.decodeDms(new Uint8Array(b));
				state.tracks = set.tracks;
				if (!set.tracks.length) throw new Error("the music set " + setPath + " is empty");
				return playTrack(trackForState(state.musicState));
			});
		}).catch(function (e) {
			state.status = "no music";
			note("the music of " + map + ": " + (e && e.message ? e.message : e));
			update();
		});
	}

	/* ------------------------------------------------------------- the music state
	 * A .dms holds one track per music state.  The twelve parameter bytes of
	 * a track hold (all 30 music sets of the game agree):
	 *
	 *   byte 0  the state: 1 = Tension, 3 = Action, 0 = the normal track
	 *           and the tracks of the special sequences (the intro, the
	 *           count down, the final boss, the train)
	 *   byte 1  the kind of the track: 0 = an action track (the Tension
	 *           and the Action music), 1 = a normal track, 2 = the final
	 *           boss / inside / train action, 3 = the tunnel / train
	 *           tension, 4 = the train explosion
	 *   byte 2  a flag (0 or 1)
	 *   byte 3  the volume of the track (0-255)
	 *   bytes 4-11  always zero in every music set of the game
	 *
	 * The server tells the client which state it is in with the music
	 * intensity of its sound info service (SoF.exe 0x2000eb60 reads it and
	 * calls S_SetMusicIntensity with it).
	 */
	function trackForState(id, kind) {
		const tracks = state.tracks || [];
		if (!tracks.length) return null;
		if (id === null || id === undefined) return tracks[0];
		let fallback = null;
		for (let i = 0; i < tracks.length; i++) {
			const p = tracks[i].params || {};
			if (p["0"] !== id) continue;
			if (kind === null || kind === undefined) {
				if (!fallback) fallback = tracks[i];
				continue;
			}
			if (p["1"] === kind) return tracks[i];
		}
		return fallback;
	}

	/* the volume of a track: the fourth parameter byte */
	function trackVolume(track) {
		if (!track || !track.params) return 1;
		const v = track.params["3"];
		if (v === undefined || v === null) return 1;
		return Math.min(1, Math.max(0, v / 255));
	}

	/* switch to the track of the state the server is in; the engine fades
	 * the old track out and the new one in */
	function setMusicState(id, kind) {
		if (id === state.musicState && kind === state.musicKind) return Promise.resolve();
		state.musicState = id;
		state.musicKind = kind === undefined ? null : kind;
		const track = trackForState(id, state.musicKind);
		if (!track) return Promise.resolve();
		const c = audio();
		const vol = trackVolume(track);
		if (!c) return Promise.resolve();
		const fade = 1.0;             /* the driver's cross fade is a second */
		const old = source;
		const oldGain = musicGain;
		if (old && oldGain) {
			/* fade the old track out and stop it when it is silent */
			const t0 = c.currentTime;
			oldGain.gain.cancelScheduledValues(t0);
			oldGain.gain.setValueAtTime(oldGain.gain.value, t0);
			oldGain.gain.linearRampToValueAtTime(0.0001, t0 + fade);
			setTimeout(function () {
				try { old.stop(); } catch (e) { }
				try { old.disconnect(); } catch (e) { }
			}, fade * 1000 + 60);
		}
		state.trackVolume = vol;
		return playTrack(track).then(function () {
			if (musicGain) {
				const t0 = c.currentTime;
				musicGain.gain.cancelScheduledValues(t0);
				musicGain.gain.setValueAtTime(0.0001, t0);
				musicGain.gain.linearRampToValueAtTime(state.volume * vol, t0 + fade);
			}
			update();
		});
	}

	/* load a music set by its path ("sound/music/<set>.dms") and play the
	 * track of the state the server is in */
	function loadMusicSet(path) {
		if (!dec) return Promise.resolve();
		state.status = "loading";
		return fetchPak(path).then(function (b) {
			const set = dec.decodeDms(new Uint8Array(b));
			state.tracks = set.tracks;
			state.musicSet = path.replace(/^sound\/music\//i, "").replace(/\.dms$/i, "");
			if (!set.tracks.length) throw new Error("the music set " + path + " is empty");
			return playTrack(trackForState(state.musicState, state.musicKind));
		}).then(function () { update(); }).catch(function (e) {
			state.status = "no music";
			note("the music set " + path + ": " + (e && e.message ? e.message : e));
			update();
		});
	}

	/* ------------------------------------------------------------- ambience */
	function loadAmbients() {
		if (!dec) return Promise.resolve();
		if (amsTables) return Promise.resolve();
		return fetchPak("sound/sound.ams").then(function (b) {
			const ams = dec.parseAms(new Uint8Array(b));
			state.ambientSet = "sound/sound.ams";
			state.ambients = ams.sounds;
			amsTables = ams.tables;
			update();
		}).catch(function (e) {
			note("the ambient sound set: " + (e && e.message ? e.message : e));
		});
	}

	function stopAmbience() {
		for (let i = 0; i < loops.length; i++) {
			try { loops[i].src.stop(); } catch (e) { }
			try { loops[i].src.disconnect(); } catch (e) { }
			try { loops[i].gain.disconnect(); } catch (e) { }
		}
		loops.length = 0;
		state.ambientList = [];
	}

	/* one ambient loop, played over and over */
	function playLoop(path, entry) {
		const c = audio();
		if (!c) return Promise.resolve();
		return fetchPak(path).then(function (b) { return c.decodeAudioData(b); }).then(function (buf) {
			const s = c.createBufferSource();
			s.buffer = buf;
			s.loop = true;
			const g = c.createGain();
			g.gain.value = 0;
			let node = g;
			let pan = null;
			if (c.createStereoPanner) {
				pan = c.createStereoPanner();
				pan.pan.value = 0;
				g.connect(pan);
				node = pan;
			}
			s.connect(g);
			node.connect(c.destination);
			s.start(0);
			loops.push({ src: s, gain: g, pan: pan, path: path, entry: entry });
		}).catch(function (e) {
			note("the ambient " + path + ": " + (e && e.message ? e.message : e));
		});
	}

	/* the ambience entities of the map, with the sounds they use */
	function ambienceOf(map) {
		const rec = mapRecord(map);
		const bspPath = rec && rec.bsp;
		if (!bspPath) return Promise.resolve([]);
		return fetchPak(bspPath).then(function (b) {
			const ents = dec.bspAmbientEntities(new Uint8Array(b));
			return loadAmbients().then(function () {
				const byName = {};
				amsTables.forEach(function (t) {
					t.forEach(function (e) { byName[e.name.toLowerCase()] = e; });
				});
				const out = [];
				ents.forEach(function (e) {
					const a = byName[e.name.toLowerCase()];
					if (!a) return;
					out.push({
						name: e.name, classname: e.classname, origin: e.origin,
						min: a.min, max: a.max, paths: a.paths,
						volume: a.volume, volumeTop: a.volumeTop, far: a.far
					});
				});
				return out;
			});
		});
	}

	/* the ambience entities of the map */
	function startAmbience(map) {
		stopAmbience();
		if (!dec) return Promise.resolve();
		return ambienceOf(map).then(function (list) {
			const jobs = [];
			list.forEach(function (e) {
				e.gain = 0;
				state.ambientList.push(e);
				/* the engine picks one of the variants of the ambient set at
				 * random and a volume out of the range of the entry */
				const paths = e.paths.filter(function (p) { return !!p; });
				if (!paths.length) return;
				const pick = paths[Math.floor(Math.random() * paths.length)];
				e.pick = pick;
				const v = (e.volume || 0) + Math.random() * Math.max(0, (e.volumeTop || 0) - (e.volume || 0));
				e.volume = v;
				jobs.push(playLoop(pick, e));
			});
			return Promise.all(jobs);
		}).then(function () {
			updateAmbience();
		}).catch(function (e) {
			note("the ambience of " + map + ": " + (e && e.message ? e.message : e));
		});
	}

	/* the player, so that the ambience can be mixed by the distance */
	function playerPos() {
		try {
			if (typeof global.sofdebug === "function") {
				const d = global.sofdebug();
				if (d && d.playerOrigin) return d.playerOrigin;
			}
		} catch (e) { }
		const s = global.sofstate;
		if (s && s.entities && typeof s.entities.forEach === "function") {
			let best = null;
			s.entities.forEach(function (e) {
				if (!e || !e.origin) return;
				if (!best || (e.self && !best.self)) best = e;
			});
			if (best) return best.origin;
		}
		return null;
	}

	/* the engine mixes an ambience by the distance: full inside the minimum
	 * distance, nothing at the maximum, and it pans it like a sound */
	function updateAmbience() {
		const p = playerPos();
		for (let i = 0; i < loops.length; i++) {
			const l = loops[i];
			const e = l.entry;
			let g = 0;
			if (p && e) {
				const dx = p.x - e.origin.x, dy = p.y - e.origin.y, dz = p.z - e.origin.z;
				const d = Math.sqrt(dx * dx + dy * dy + dz * dz);
				/* the third distance of the entry is the distance at which
				 * the ambience is not mixed in at all any more */
				if (!e.far || d <= e.far) {
					if (d <= e.max) {
						g = (e.max > e.min) ? 1 - Math.min(1, Math.max(0, (d - e.min) / (e.max - e.min))) : 1;
					}
				}
			}
			l.gain.gain.value = g * state.volume * 0.7 * (e && e.volume !== undefined ? e.volume : 1);
			if (l.pan && p && e) {
				/* the pan of the driver: the dot product of the direction
				 * with the listener's right vector */
				const dx = e.origin.x - p.x, dy = e.origin.y - p.y;
				const right = listenerRight();
				const flat = Math.sqrt(dx * dx + dy * dy) || 1;
				let pan = (dx * right.x + dy * right.y) / flat;
				if (pan < -1) pan = -1;
				if (pan > 1) pan = 1;
				l.pan.pan.value = pan;
			}
			if (e) e.gain = g;
		}
		update();
	}

	/* play one ambient loop by its path ("sound/Ambient/...") */
	function playAmbient(path, vol) {
		const c = audio();
		if (!c) return Promise.resolve();
		return fetchPak(path).then(function (b) { return c.decodeAudioData(b); }).then(function (buf) {
			const s = c.createBufferSource();
			s.buffer = buf;
			s.loop = true;
			const g = c.createGain();
			g.gain.value = (vol === undefined ? 0.4 : vol) * state.volume;
			s.connect(g);
			g.connect(c.destination);
			s.start(0);
			return s;
		}).catch(function (e) {
			note("the ambient " + path + ": " + (e && e.message ? e.message : e));
		});
	}

	/* ------------------------------------------------------------- the scripts */
	/* play the sound events of a compiled level script (.os): the script
	 * names the files and the delay of every sound */
	function playScript(path, opts) {
		const c = audio();
		if (!c) return Promise.resolve([]);
		const o = opts || {};
		return fetchPak(path).then(function (b) {
			const s = dec.parseOs(new Uint8Array(b));
			state.script = { path: path, sounds: s.sounds };
			s.sounds.forEach(function (ev) {
				const at = o.now ? 0 : (ev.delay || 0) * 1000;
				setTimeout(function () { playOne(ev.path, ev.volume); }, at);
			});
			update();
			return s.sounds;
		}).catch(function (e) {
			note("the script " + path + ": " + (e && e.message ? e.message : e));
			return [];
		});
	}

	/* one sound of a script: the .adp files are mono, the .wav files are mono
	 * too (the paths of the scripts are relative to "sound/") */
	function playOne(path, vol) {
		const c = audio();
		if (!c) return Promise.resolve();
		const full = path.charAt(0) === "/" ? path.slice(1) : path;
		const p = full.indexOf("sound/") === 0 ? full : "sound/" + full;
		const gain = c.createGain();
		gain.gain.value = (vol === undefined || vol === null ? 1 : vol) * state.volume;
		gain.connect(c.destination);
		return fetchPak(p).then(function (b) {
			if (/\.adp$/i.test(p)) {
				const d = dec.decodeAdp(new Uint8Array(b));
				const buf = c.createBuffer(1, d.samples.length, d.rate);
				const ch = buf.getChannelData(0);
				for (let i = 0; i < d.samples.length; i++) ch[i] = d.samples[i] / 32768;
				const s = c.createBufferSource();
				s.buffer = buf;
				s.connect(gain);
				s.start(0);
				return true;
			}
			return c.decodeAudioData(b).then(function (buf) {
				const s = c.createBufferSource();
				s.buffer = buf;
				s.connect(gain);
				s.start(0);
				return true;
			});
		}).catch(function (e) {
			note("the sound " + p + ": " + (e && e.message ? e.message : e));
		});
	}

	/* ------------------------------------------------------------- the entity sounds
	 * The server does not send the voice lines and the cinematics as
	 * commands: it spawns an entity whose "model" is the sound.  The model
	 * index of an entity (the state at +0x28) is the index of the name in
	 * the ghoul string table, the table of the models and the sounds that
	 * the server sends in its service 0x1A (web/www/ghoulstrings.json).
	 * A name that ends in .adp or .wav is a sound, a name that ends in .ghb
	 * is a model.
	 *
	 * While the ghoul string table is not there yet, the engine's global
	 * string table (web/www/sofstringtable.json) is used instead: it has the
	 * same shape, but it holds the configstrings of the server and not the
	 * names of the ghoul models and sounds.
	 */
	let stringTable = null;
	let ghoulTable = null;
	let ghoulTries = 0;
	const playedEntities = new Set();

	function loadStringTable() {
		if (stringTable) return Promise.resolve(stringTable);
		return fetch("sofstringtable.json").then(function (r) { return r.json(); }).then(function (j) {
			stringTable = j.names || j;
			return stringTable;
		}).catch(function () { return null; });
	}

	/* ------------------------------------------------------------- the sound
	 * events of the server (svc 0x0A) and the sound info service (svc 0x04)
	 *
	 * The client handler of the sound service is SoF.exe 0x2000EA20
	 * ("CL_ParseStartSoundPacket"):
	 *
	 *   u8    the flags: one bit per field that follows
	 *   u8    the entity number (the low byte; the bit 0x20 adds 256)
	 *   bit 0x01  u8  the angle of the sound (x 1/255)
	 *   bit 0x02  u8  the rolloff of the sound (x 1/64)
	 *   bit 0x10  u8  the volume of the sound (x 0.001)
	 *   bit 0x08  u8  the kind of the sound (0-3)
	 *   bit 0x04  the name of the sound, a NUL terminated string
	 *
	 * The sound is played at the position of the entity, so the browser
	 * takes the origin out of the entity list.
	 *
	 * The sound info service (svc 0x04, the handler at SoF.exe 0x2000EB60)
	 * tells the client which music state the game is in:
	 *
	 *   u8    the mask
	 *   bit 0x01  u8  the music intensity (the music state)
	 *   bit 0x02  u8  the music designer info
	 *   bit 0x04  u8  the general ambient set
	 *   bit 0x08  u8  the sound proc type
	 */
	function parseStartSound(b, off) {
		var p = off || 0;
		if (!b || p + 2 > b.length) return null;
		var flags = b[p++];
		var entity = b[p++];
		if (flags & 0x20) entity += 256;
		var out = { flags: flags, entity: entity };
		if (flags & 0x01) { out.angle = b[p] / 255; p++; }
		if (flags & 0x02) { out.rolloff = b[p] / 64; p++; }
		if (flags & 0x10) { out.volume = b[p] * 0.001; p++; }
		if (flags & 0x08) { out.kind = b[p] & 3; p++; }
		if (flags & 0x04) {
			let e = p;
			while (e < b.length && b[e] !== 0) e++;
			out.name = latin1(b, p, e);
			p = e + 1;
		}
		out.end = p;
		return out;
	}

	function parseSoundInfo(b, off) {
		var p = off || 0;
		if (!b || p >= b.length) return null;
		var mask = b[p++];
		var out = { mask: mask };
		if (mask & 0x01) { out.musicIntensity = b[p++]; }
		if (mask & 0x02) { out.musicDesigner = b[p++]; }
		if (mask & 0x04) { out.generalAmbient = b[p++]; }
		if (mask & 0x08) { out.soundProcType = b[p++]; }
		out.end = p;
		return out;
	}

	function latin1(b, from, to) {
		let s = "";
		for (let i = from; i < to; i++) s += String.fromCharCode(b[i]);
		return s;
	}

	/* the origin of an entity of the entity list */
	function entityOriginByNumber(n) {
		const s = global.sofstate;
		if (!s || !s.entities || !s.entities.forEach) return null;
		let found = null;
		s.entities.forEach(function (e, number) {
			if (found || number !== n) return;
			if (!e || !e.state) return;
			const rd = (o) => (e.state.readFloatLE ? e.state.readFloatLE(o) : 0);
			found = { x: rd(0x04), y: rd(0x08), z: rd(0x0c) };
		});
		return found;
	}

	function onSound(data) {
		const b = data && data.body;
		if (!b) return;
		state.soundEvents = (state.soundEvents || 0) + 1;
		const ev = parseStartSound(b, 0);
		if (!ev || !ev.name) return;
		const origin = entityOriginByNumber(ev.entity);
		const vol = ev.volume === undefined ? 1 : ev.volume / 0.255;
		playEntitySound(ev.name, origin, ev.rolloff === undefined ? 1 / 255 : ev.rolloff, vol);
	}

	/* the music intensity service: the state the game is in */
	function onSoundInfo(data) {
		const b = data && data.body;
		if (!b) return;
		const info = parseSoundInfo(b, 0);
		if (!info || info.musicIntensity === undefined) return;
		state.musicState = info.musicIntensity;
		setMusicState(info.musicIntensity);
	}

	/* the effect system of the page: the temp entities of the server spawn
	 * the effects (web/www/effects.js) */
	let fx = null;

	function effectSystem() {
		if (fx) return fx;
		const E = global.sofeffects;
		if (!E || !E.Effects) return null;
		fx = new E.Effects({
			eft: global.sofeft || null,
			fetchPak: function (p) { return fetch("/pak/" + p).then(function (r) { return r.arrayBuffer(); }); }
		});
		return fx;
	}

	/* a temp entity of the server (svc 0x01): the index of the effect
	 * function and the values it reads.  The engine spawns the effect at
	 * the position of the entity that sent it, or at the viewer's. */
	function onTempEntity(data) {
		const b = data && data.body;
		if (!b || b.length < 1) return;
		const index = b[0];
		const sys = effectSystem();
		if (!sys) { state.tempEntities = (state.tempEntities || 0) + 1; return; }
		const origin = viewerOrigin() || { x: 0, y: 0, z: 0 };
		state.tempEntities = (state.tempEntities || 0) + 1;
		sys.spawn(index, origin);
		update();
	}

	/* where the viewer is: the camera of the page or the player entity */
	function viewerOrigin() {
		try {
			if (global.sofdebug) {
				const d = global.sofdebug();
				if (d && d.cam) return { x: d.cam.x, y: d.cam.y, z: d.cam.z };
			}
		} catch (e) { }
		return playerOrigin();
	}

	/* the ghoul string table of the server (its service 0x1A) */
	function loadGhoulStrings() {
		if (ghoulTable) return Promise.resolve(ghoulTable);
		return fetch("ghoulstrings.json").then(function (r) {
			if (!r.ok) throw new Error("no ghoul string table");
			return r.json();
		}).then(function (j) {
			ghoulTable = j.names || j;
			note("the ghoul string table: " + Object.keys(ghoulTable).length + " names");
			return ghoulTable;
		}).catch(function () { return null; });
	}

	/* the sound an entity names, if any */
	function entitySoundName(e) {
		if (!e || !e.state) return null;
		const s = e.state;
		const cands = [s[0x28]];
		/* the engine writes the model index as an u8 when it fits and as
		 * an i16 otherwise, so both have to be tried */
		const wide = s[0x28] | ((s[0x29] || 0) << 8);
		if (wide !== cands[0]) cands.push(wide);
		for (let i = 0; i < cands.length; i++) {
			/* the ghoul string table first, the global one as the fallback */
			for (let pass = 0; pass < 2; pass++) {
				const tab = pass === 0 ? ghoulTable : stringTable;
				if (!tab) continue;
				const n = tab[cands[i]];
				if (!n) continue;
				if (/\.(adp|wav)$/i.test(n)) return n.replace(/\\/g, "/");
			}
		}
		return null;
	}

	function entityOrigin(e) {
		if (!e || !e.state) return null;
		const s = e.state;
		const rd = (o) => (s.readFloatLE ? s.readFloatLE(o) : 0);
		return { x: rd(0x04), y: rd(0x08), z: rd(0x0c) };
	}

	function playerOrigin() {
		try {
			if (typeof global.sofdebug === "function") {
				const d = global.sofdebug();
				if (d && d.playerOrigin) return d.playerOrigin;
			}
		} catch (e) { }
		return null;
	}

	/* fetch a sound and decode it: the .adp files are IMA ADPCM, the .wav
	 * files are plain PCM */
	function fetchSound(name) {
		const p = /^sound\//i.test(name) ? name : "sound/" + name;
		if (/\.adp$/i.test(name)) {
			return fetchPak(p).then(function (b) {
				const d = dec.decodeAdp(new Uint8Array(b));
				const c = audio();
				const buf = c.createBuffer(1, d.samples.length, d.rate);
				const ch = buf.getChannelData(0);
				for (let i = 0; i < d.samples.length; i++) ch[i] = d.samples[i] / 32768;
				return buf;
			});
		}
		return fetchPak(p).then(function (b) { return audio().decodeAudioData(b); });
	}

	/* play a sound of an entity: the driver's mix (the reference distance,
	 * the rolloff and the pan law) */
	function playEntitySound(name, origin, rolloff, volume) {
		const c = audio();
		if (!c) return;
		const mix = engineMix(origin, rolloff);
		const st = engineStereo(mix);
		const vol = (volume === undefined || volume === null) ? 1 : volume;
		fetchSound(name).then(function (buf) {
			const g = c.createGain();
			/* the driver plays a mono sound in both channels, so the sum of
			 * the two volumes is the loudness of the sound */
			g.gain.value = state.volume * vol * Math.min(1, (st.left + st.right) / 2);
			let node = g;
			if (c.createStereoPanner) {
				const sp = c.createStereoPanner();
				/* the pan law of the driver: the difference of the two
				 * volumes over their sum */
				const sum = st.left + st.right;
				sp.pan.value = sum > 0 ? (st.right - st.left) / sum : 0;
				g.connect(sp);
				node = sp;
			}
			const s = c.createBufferSource();
			s.buffer = buf;
			s.connect(g);
			node.connect(c.destination);
			s.start(0);
			state.playedSounds = (state.playedSounds || 0) + 1;
			update();
		}).catch(function (e) {
			note("the entity sound " + name + ": " + (e && e.message ? e.message : e));
		});
	}

	function watchEntities() {
		const s = global.sofstate;
		if (!s || !s.entities) return;
		s.entities.forEach(function (e, number) {
			if (!e || e.removed) return;
			const name = entitySoundName(e);
			if (!name) return;
			const key = number + ":" + name;
			if (playedEntities.has(key)) return;
			playedEntities.add(key);
			playEntitySound(name, entityOrigin(e));
		});
	}

	/* ------------------------------------------------------------- the hud */
	let overlay = null;
	function update() {
		if (!overlay) {
			overlay = document.createElement("div");
			overlay.style.cssText = "position:absolute;right:8px;top:8px;pointer-events:none;" +
				"font:11px monospace;color:#9fe8a0;background:rgba(0,0,0,0.55);padding:3px 6px;white-space:pre;text-align:right";
			document.body.appendChild(overlay);
		}
		const lines = [];
		lines.push("music: " + (state.playing ? state.playing : state.status) +
			(state.musicSet ? "  [" + state.musicSet + "]" : ""));
		if (state.playing) {
			lines.push("  " + state.rate + " Hz  " + state.seconds.toFixed(1) + " s  stereo  peak " +
				state.peak.toFixed(3) + "  ctx " + state.ctxState +
				(state.tracks.length > 1 ? "  track " + (state.track + 1) + "/" + state.tracks.length : ""));
		}
		if (state.ambientList.length) {
			const near = state.ambientList.filter(function (a) { return a.gain > 0.01; }).length;
			lines.push("ambience: " + state.ambientList.length + " sets, " + near + " audible");
		} else if (state.ambients.length) {
			lines.push("ambience: " + state.ambients.length + " loops");
		}
		if (state.playedSounds) {
			lines.push("entity sounds: " + state.playedSounds);
		}
		overlay.textContent = lines.join("\n");
	}

	/* ------------------------------------------------------------- the loop */
	let ticks = 0;
	function tick() {
		ticks++;
		const map = currentMap();
		if (map && map !== state.map) {
			const first = !state.map;
			state.map = null;
			state.musicSet = null;
			state.tracks = [];
			startMusic(map);
			startAmbience(map);
			if (first) loadAmbients();
		}
		if (state.ambientList.length) updateAmbience();
		/* the ghoul string table of the server may come late: it is asked
		 * for every ten seconds */
		if (!ghoulTable && ghoulTries < 60 && (ticks % 20) === 0) {
			ghoulTries++;
			loadGhoulStrings().then(function (t) { if (t) tick(); });
		}
		watchEntities();
	}

	function boot() {
		if (started) return;
		started = true;
		const use = function () {
			if (!dec) { note("the decoder did not load"); return; }
			fetchText("map_music.json").then(function (t) {
				musicTable = t;
				tick();
			}).catch(function (e) {
				note("map_music.json: " + (e && e.message ? e.message : e));
				tick();
			});
			loadAmbients();
			loadStringTable().then(function () { tick(); });
			loadGhoulStrings().then(function () { tick(); });
		};
		if (global.sofaudiodec) { dec = global.sofaudiodec; use(); return; }
		/* the decoder lives in web/audiodec.js; the copy in web/www is what
		 * the browser can load (the relay only serves web/www) */
		const s = document.createElement("script");
		s.src = "audiodec.js";
		s.onload = function () { dec = global.sofaudiodec; use(); };
		s.onerror = function () { note("audiodec.js did not load"); };
		document.head.appendChild(s);
		/* the browser wants a gesture before it lets the audio run */
		const resume = function () {
			const c = audio();
			if (c && c.state === "suspended") c.resume();
		};
		global.addEventListener("pointerdown", resume, true);
		global.addEventListener("keydown", resume, true);
		setInterval(tick, 500);
	}

	global.sofmusic = {
		state: state,
		boot: boot,
		startMap: function (m) {
			state.map = null;
			startMusic(m);
			startAmbience(m);
			return Promise.resolve();
		},
		stop: stopMusic,
		playAmbient: playAmbient,
		ambienceOf: ambienceOf,
		playScript: playScript,
		loadAmbients: loadAmbients,
		loadGhoulStrings: loadGhoulStrings,
		ghoulTable: function () { return ghoulTable; },
		stringTable: function () { return stringTable; },
		entitySoundName: entitySoundName,
		playEntitySound: playEntitySound,
		onSound: onSound,
		onSoundInfo: onSoundInfo,
		onTempEntity: onTempEntity,
		fx: function () { return effectSystem(); },
		parseStartSound: parseStartSound,
		parseSoundInfo: parseSoundInfo,
		useContext: useContext,
		setMusicState: setMusicState,
		trackForState: trackForState,
		loadMusicSet: loadMusicSet,
		setVolume: function (v) {
			state.volume = v;
			updateAmbience();
		},
		enable: function (on) {
			state.enabled = !!on;
			if (!on) { stopMusic(); stopAmbience(); }
		},
		isEnabled: function () { return state.enabled; },
		status: function () {
			return state.playing
				? "music " + state.playing + " (" + state.rate + " Hz, " + state.seconds.toFixed(1) + " s)"
				: "music " + state.status;
		}
	};

	if (document.readyState === "loading") document.addEventListener("DOMContentLoaded", boot);
	else boot();
})(window);
