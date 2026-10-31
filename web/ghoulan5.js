/*
 * ghoulan5.js - the bytes around the record boundary of the svc 0x1A payloads.
 */
"use strict";
const fs = require("fs");
const list = JSON.parse(fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
function dump(b, from, to, tag) {
	console.log(tag);
	for (let i = from; i < to; i += 16) {
		const s = b.subarray(i, Math.min(i + 16, to));
		const hex = [...s].map(x => x.toString(16).padStart(2, "0")).join(" ");
		const asc = [...s].map(x => (x >= 32 && x < 127) ? String.fromCharCode(x) : ".").join("");
		console.log("  +" + i.toString(16).padStart(4, "0") + "  " + hex.padEnd(47) + "  " + asc);
	}
}
[0, 2, 25].forEach(i => {
	const b = Buffer.from(list[i], "hex");
	const L = b.readUInt16LE(0);
	console.log("=== the payload #" + i + " the length " + b.length + " the u16 " + L);
	dump(b, 0, 48, " the head");
	dump(b, L - 8, Math.min(L + 48, b.length), " the boundary");
	dump(b, Math.max(0, b.length - 48), b.length, " the tail");
});
