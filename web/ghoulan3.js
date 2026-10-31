/*
 * ghoulan3.js - the structure of the svc 0x1A payloads.
 */
"use strict";
const fs = require("fs");
const list = JSON.parse(fs.readFileSync(process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
const parts = [];
let total = 0;
list.forEach((h, i) => {
	const b = Buffer.from(h, "hex");
	const len = b.readUInt16LE(0);
	/* the command text is at the end of the payload */
	let cmd = -1;
	for (let o = 2; o < b.length - 4; o++) {
		if (b[o] === 0x63 && b[o + 1] === 0x6d && b[o + 2] === 0x64 && b[o + 3] === 0x20) { cmd = o; break; }
	}
	const dataLen = cmd >= 0 ? cmd - 2 : b.length - 2;
	parts.push(b.subarray(2, 2 + dataLen));
	total += dataLen;
	console.log("#" + i + " the payload " + b.length + " the u16 " + len + " the data " + dataLen +
		" the command at " + cmd + (cmd >= 0 ? " " + JSON.stringify(b.toString("latin1", cmd, cmd + 26)) : ""));
});
const all = Buffer.concat(parts);
console.log("the total data: " + all.length + " bytes");
/* the repetition structure: how many 4 byte units repeat */
const h4 = new Map();
for (let i = 0; i + 4 <= all.length; i += 4) {
	const k = all.readUInt32LE(i);
	h4.set(k, (h4.get(k) || 0) + 1);
}
let rep = 0, max = 0;
for (const [, c] of h4) { if (c > 1) rep += c - 1; if (c > max) max = c; }
console.log("the 4 byte units: " + h4.size + " distinct, " + rep + " repeats, the max " + max);
const top = [...h4.entries()].sort((a, b) => b[1] - a[1]).slice(0, 5);
for (const [k, c] of top) console.log("  0x" + k.toString(16).padStart(8, "0") + " x" + c);
/* the first 96 bytes of the total */
console.log("the head:");
for (let i = 0; i < 96; i += 16) {
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " + all.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
}
/* the u16s of the head */
console.log("the u16s: " + Array.from({ length: 24 }, (_, i) => all.readUInt16LE(i * 2)).join(" "));
/* the u32s */
console.log("the u32s: " + Array.from({ length: 12 }, (_, i) => all.readUInt32LE(i * 4)).join(" "));
