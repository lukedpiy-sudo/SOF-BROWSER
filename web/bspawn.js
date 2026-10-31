/* bspawn.js - the map's spawn points.
 *   node bspawn.js <map.bsp>
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(file);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(12 + i * 8) });
const t = b.toString("latin1", L(0).off, L(0).off + L(0).len);
const re = /\{([^{}]*)\}/g;
let m;
while ((m = re.exec(t)) !== null) {
	const kv = {};
	const kre = /"([^"]*)"\s*"([^"]*)"/g;
	let k;
	while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
	if (kv.classname === "info_player_deathmatch" || kv.classname === "info_player_intermission")
		console.log(kv.classname, kv.origin, "angle=" + (kv.angle || "0"));
}
