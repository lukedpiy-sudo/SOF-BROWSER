/*
 * ghoulan2.js - the structure of one svc 0x1A payload.
 */
"use strict";
const fs = require("fs");
const list = JSON.parse(fs.readFileSync(process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin.json", "utf8"));
const b = Buffer.from(list[0], "hex");
console.log("the first payload: " + b.length + " bytes");
console.log("the head:");
for (let i = 0; i < 96; i += 16) {
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " + b.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
}
console.log("the u16s:");
const u = [];
for (let i = 0; i < 48; i++) u.push(b.readUInt16LE(i * 2));
for (let i = 0; i < 48; i += 12) console.log("  " + u.slice(i, i + 12).map(x => String(x).padStart(6)).join(""));
/* the tail: the command */
const s = b.toString("latin1");
const k = s.indexOf("cmd ");
console.log("the command at " + k + ": " + JSON.stringify(s.slice(k, k + 40)));
console.log("the bytes before it: " + b.subarray(k - 32, k).toString("hex").replace(/(.{32})/g, "$1 "));
/* the second payload (no command) */
const c = Buffer.from(list[2], "hex");
console.log("the third payload: " + c.length + " bytes, the head:");
for (let i = 0; i < 48; i += 16) {
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " + c.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
}
console.log("  the u16s: " + Array.from({ length: 12 }, (_, i) => c.readUInt16LE(i * 2)).join(" "));
/* the last payload */
const d = Buffer.from(list[list.length - 1], "hex");
console.log("the last payload: " + d.length + " bytes:");
for (let i = 0; i < 48; i += 16) {
	console.log("  +" + i.toString(16).padStart(4, "0") + "  " + d.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
}
