"use strict";
/* list the engine string table entries of some directories */
const j = require("./sofstringtable.json");
const names = (j.names || j).filter((n) => typeof n === "string");
console.log("the string table has " + names.length + " names");
const dirs = {};
for (const n of names) {
	const p = n.replace(/\\/g, "/");
	const d = p.split("/").slice(0, -1).join("/").toLowerCase();
	dirs[d] = (dirs[d] || 0) + 1;
}
const want = process.argv.slice(2).map((s) => s.toLowerCase());
if (!want.length) {
	console.log(Object.entries(dirs).filter(([d]) => d.indexOf("ghoul") >= 0).map(([d, c]) => d + " x" + c).join("\n"));
} else {
	for (const w of want) {
		const a = names.filter((n) => n.replace(/\\/g, "/").toLowerCase().indexOf(w) >= 0);
		console.log("--- " + w + " (" + a.length + ")");
		for (const n of a) console.log("   " + n);
	}
}
