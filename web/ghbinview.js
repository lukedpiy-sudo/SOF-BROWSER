/*
 * ghbinview.js - find the INVIEW model paths in the game module and the
 * engine, and look for the table that maps a weapon to its view model.
 */
"use strict";
const fs = require("fs");
function scan(file, needles) {
	const b = fs.readFileSync(file);
	console.log("=== " + file + " (" + b.length + " bytes)");
	for (const n of needles) {
		const pat = Buffer.from(n, "latin1");
		let o = 0, hits = [];
		while (true) {
			const i = b.indexOf(pat, o);
			if (i < 0) break;
			hits.push(i);
			o = i + 1;
		}
		console.log("  the needle \"" + n + "\": " + hits.length + " hits " +
			hits.slice(0, 12).map(h => "0x" + h.toString(16)).join(" "));
	}
}
scan("C:/Users/User/Soldier of Fortune/Base/gamex86.dll", ["INVIEW", "GHOUL/WEAPON", "sniperrifle", "SNIPERRIFLE", "ASSASSINATE", "ghoulreliable"]);
scan("C:/Users/User/Soldier of Fortune/SoF.exe", ["INVIEW", "GHOUL/WEAPON", "viewmodel", "view_model", "gunmodel", "gun_model"]);
