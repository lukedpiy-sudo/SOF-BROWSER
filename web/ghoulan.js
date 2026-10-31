/*
 * ghoulan.js - look at the structure of the captured svc 0x1A payloads.
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin";
const b = fs.readFileSync(file);
console.log("the capture: " + b.length + " bytes");

/* the datagram boundaries are lost in the file, so re-read them from the
 * capture: the probe wrote them concatenated.  Let me just look for
 * structure. */
console.log("the first 128 bytes:");
for (let i = 0; i < 128; i += 16) {
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " + b.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
}
/* the byte histogram */
const h = new Array(256).fill(0);
for (const x of b) h[x]++;
let used = 0, max = 0;
for (const c of h) { if (c) used++; if (c > max) max = c; }
const ent = -h.reduce((a, c) => a + (c ? (c / b.length) * Math.log2(c / b.length) : 0), 0);
console.log("the bytes: " + used + " distinct, the max " + max + " (" + (100 * max / b.length).toFixed(1) + "%), the entropy " + ent.toFixed(2) + " bits");
/* the strings in there */
let s = "";
const strings = [];
for (let i = 0; i < b.length; i++) {
	const c = b[i];
	if (c >= 32 && c < 127) s += String.fromCharCode(c);
	else {
		if (s.length >= 5) strings.push([i - s.length, s]);
		s = "";
	}
}
console.log("the printable runs (>= 5): " + strings.length);
for (const [o, t] of strings.slice(0, 25)) console.log("  0x" + o.toString(16) + "  " + t);
