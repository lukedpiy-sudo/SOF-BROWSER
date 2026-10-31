/*
 * ghbcmd.js - find the "ghoulstrings" command and its handler in the
 * engine.
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
const s = b.toString("latin1");
for (const n of ["ghoulstrings", "ghoulreliable", "ghoulunreliable", "baselines", "ghoul"]) {
	const re = new RegExp("[\\x20-\\x7e]{0,40}" + n + "[\\x20-\\x7e]{0,40}", "gi");
	let m, hits = [];
	while ((m = re.exec(s)) !== null) hits.push("0x" + m.index.toString(16) + " " + m[0]);
	console.log("=== " + n + ": " + hits.length);
	for (const h of hits.slice(0, 12)) console.log("   " + h);
}
