/*
 * mkmusic.js - build web/www/map_music.json.
 *
 * The engine reads the music of a level from the worldspawn's "musicset" key
 * (SoF.exe FUN_200106d0, 0x200106d0, builds "sound/music/%s.dms"), so the
 * browser client has to know which music set belongs to which map.  This
 * script reads every .bsp out of the paks, takes the worldspawn out of the
 * entity lump and writes the map name -> music set table.
 *
 *   node web/mkmusic.js
 */
"use strict";
const fs = require("fs");
const path = require("path");
const dec = require(path.join(__dirname, "audiodec.js"));

const BASE = "C:\\Users\\User\\Soldier of Fortune\\Base";
const PAKS = ["pak0.pak", "pak1.pak", "pak2.pak", "pak3.pak", "basicpack2015v2.pak", "sofplus.pak"];

function readPak(pak) {
	const fd = fs.openSync(pak, "r");
	const head = Buffer.alloc(16);
	fs.readSync(fd, head, 0, 16, 0);
	const dirLen = head.readUInt32LE(8), dirOff = head.readUInt32LE(4);
	const dir = Buffer.alloc(dirLen);
	fs.readSync(fd, dir, 0, dirLen, dirOff);
	const out = [];
	for (let i = 0; i < dirLen; i += 64) {
		let nm = dir.toString("latin1", i, i + 56);
		const z = nm.indexOf("\0");
		if (z >= 0) nm = nm.slice(0, z);
		out.push({ nm, off: dir.readUInt32LE(i + 56), len: dir.readUInt32LE(i + 60) });
	}
	return { fd, files: out };
}

const maps = {};
for (const p of PAKS) {
	const pak = path.join(BASE, p);
	if (!fs.existsSync(pak)) continue;
	const pk = readPak(pak);
	for (const f of pk.files) {
		if (!/\.bsp$/i.test(f.nm)) continue;
		const b = Buffer.alloc(f.len);
		fs.readSync(pk.fd, b, 0, f.len, f.off);
		if (b.toString("latin1", 0, 4) !== "IBSP") continue;
		let keys = null;
		try { keys = dec.bspWorldspawn(b); } catch (e) { keys = null; }
		if (!keys) continue;
		const name = path.basename(f.nm, ".bsp");
		const rec = { bsp: f.nm };
		if (keys.musicset) rec.musicset = keys.musicset;
		if (keys.startmusic) rec.startmusic = keys.startmusic;
		if (keys.ambient) rec.ambient = keys.ambient;
		if (keys.ambientset) rec.ambientset = keys.ambientset;
		if (keys.message) rec.message = keys.message;
		maps[name.toLowerCase()] = rec;
	}
	fs.closeSync(pk.fd);
}
const dst = path.join(__dirname, "www", "map_music.json");
fs.writeFileSync(dst, JSON.stringify(maps, null, 1));
console.log("wrote " + dst + " with " + Object.keys(maps).length + " maps");
Object.keys(maps).sort().forEach(k => {
	const m = maps[k];
	console.log("   " + k.padEnd(16) + " musicset=" + (m.musicset || "-") + " start=" + (m.startmusic || "-"));
});
