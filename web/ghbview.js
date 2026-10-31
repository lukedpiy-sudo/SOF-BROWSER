/*
 * ghbview.js - fetch the INVIEW models from the relay and parse them with
 * web/ghb.js: the vertex count, the bounding box and the attributes.
 */
"use strict";
const fs = require("fs");
const ghb = require("./ghb.js");
const RELAY = "http://127.0.0.1:8080";
const names = ["SNIPERRIFLE", "ASSAULTRIFLE", "PISTOL1", "PISTOL2", "KNIFE", "SHOTGUN", "MACHINEGUN", "MPG", "MPISTOL", "ROCKET", "FLAMEGUN", "AUTOSHOTGUN", "HURTHAND", "THROWHAND"];
(async function () {
	for (const n of names) {
		const url = RELAY + "/pak/GHOUL/WEAPON/INVIEW/" + n + "/" + n + ".GHB";
		try {
			const r = await fetch(url);
			if (!r.ok) { console.log(n + ": the HTTP " + r.status); continue; }
			const buf = Buffer.from(await r.arrayBuffer());
			const m = ghb.parseGhoul ? ghb.parseGhoul(buf) : null;
			const g = ghb.parseGeometry ? ghb.parseGeometry(buf, m) : null;
			let line = n + ": " + buf.length + " bytes";
			if (g && g.vertices) {
				let mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
				for (const v of g.vertices) for (let i = 0; i < 3; i++) {
					if (v.position[i] < mn[i]) mn[i] = v.position[i];
					if (v.position[i] > mx[i]) mx[i] = v.position[i];
				}
				line += " the vertices " + g.vertices.length + " the corners " + g.cornerCount +
					" the bbox " + mn.map(x => x.toFixed(1)).join(",") + " .. " + mx.map(x => x.toFixed(1)).join(",");
			} else if (m) {
				line += " the model: " + JSON.stringify(m).slice(0, 200);
			}
			console.log(line);
		} catch (e) {
			console.log(n + ": the error " + e.message);
		}
	}
})();
