/* mapents.js - dump the map's entity list (lump 0) with the class names and
 * the origins.  This is where the weapon/armor pickups live.
 */
"use strict";
const fs = require("fs");
const { readBsp } = require("./bspgeo.js");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(path);
const L = lumps[0];
const text = b.toString("latin1", L.off, L.off + L.len);
const out = [];
for (const block of text.split(/}\s*\{/)) {
	const cls = /"classname"\s+"([^"]+)"/.exec(block);
	const org = /"origin"\s+"([^"]+)"/.exec(block);
	const model = /"model"\s+"([^"]+)"/.exec(block);
	if (!cls) continue;
	out.push({
		classname: cls[1],
		origin: org ? org[1].split(" ").map(Number) : null,
		model: model ? model[1] : null
	});
}
console.log("entities:", out.length);
const counts = {};
out.forEach(e => { counts[e.classname] = (counts[e.classname] || 0) + 1; });
console.log("-- classes:");
Object.keys(counts).sort().forEach(k => console.log("   " + k + "  x" + counts[k]));
console.log("-- items:");
out.filter(e => /item|weapon|ammo|armor|health|flag|grenade|c4|medkit|goggles/i.test(e.classname))
	.forEach(e => console.log("   " + e.classname.padEnd(28) + (e.origin ? e.origin.join(", ") : "")));
fs.writeFileSync("www/map_entities.json", JSON.stringify(out, null, 1));
console.log("wrote www/map_entities.json");
