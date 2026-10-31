/* nearest.js - find the map items that are close to a player spawn point.
 *
 * The map has 16 deathmatch spawn points; the items near a spawn are the
 * ones the player can actually reach.
 */
"use strict";
const fs = require("fs");
const list = JSON.parse(fs.readFileSync("www/map_entities.json", "utf8"));
const spawns = list.filter(e => /info_player_deathmatch/.test(e.classname) && e.origin);
const items = list.filter(e => /item_/.test(e.classname) && e.origin);
console.log("spawns: " + spawns.length + ", items: " + items.length);
spawns.forEach(function (s, i) {
	const near = items.map(it => ({
		c: it.classname.replace("item_", ""),
		d: Math.round(Math.hypot(it.origin[0] - s.origin[0], it.origin[1] - s.origin[1])),
		p: it.origin.join(",")
	})).filter(x => x.d < 200).sort((a, b) => a.d - b.d);
	console.log("spawn " + i + " at " + s.origin.join(",") + ": " +
		near.slice(0, 5).map(x => x.c + "@" + x.d).join(", "));
});
