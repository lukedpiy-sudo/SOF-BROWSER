/* bspcall.js - find the call sites of a function in a PE and dump the bytes
 * around them.
 *
 *   node bspcall.js <exe> <targetVA> [count]
 *
 * The target address is given as a VA (the image base is added).
 */
"use strict";
const fs = require("fs");
const file = process.argv[2];
const target = Number(process.argv[3]);
const want = parseInt(process.argv[4] || "10", 10);
const b = fs.readFileSync(file);

/* the sections */
const e_lfanew = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(e_lfanew + 6);
const optsz = b.readUInt16LE(e_lfanew + 20);
const imageBase = b.readUInt32LE(e_lfanew + 0x34);
const secoff = e_lfanew + 24 + optsz;
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({
		name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""),
		vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8),
		rawptr: b.readUInt32LE(o + 20), rawsize: b.readUInt32LE(o + 16)
	});
}
function vaOf(fo) {
	for (const s of secs) {
		if (fo >= s.rawptr && fo < s.rawptr + s.rawsize)
			return imageBase + s.vaddr + (fo - s.rawptr);
	}
	return null;
}
function foOf(va) {
	for (const s of secs) {
		if (va >= imageBase + s.vaddr && va < imageBase + s.vaddr + Math.max(s.vsize, s.rawsize))
			return s.rawptr + (va - (imageBase + s.vaddr));
	}
	return null;
}
function hex(from, n) {
	const out = [];
	for (let i = 0; i < n; i += 16) {
		const h = [], a = [];
		for (let k = 0; k < Math.min(16, n - i); k++) {
			const c = b[from + i + k];
			h.push(c.toString(16).padStart(2, "0"));
			a.push(c >= 0x20 && c < 0x7f ? String.fromCharCode(c) : ".");
		}
		out.push("  " + vaOf(from + i).toString(16) + "  " + h.join(" ").padEnd(47) + " |" + a.join("") + "|");
	}
	return out.join("\n");
}

const hits = [];
for (const s of secs) {
	if (s.name !== ".text") continue;
	for (let fo = s.rawptr; fo < s.rawptr + s.rawsize - 5; fo++) {
		if (b[fo] !== 0xe8) continue;
		const rel = b.readInt32LE(fo + 1);
		const va = vaOf(fo) + 5 + rel;
		if (va === target) hits.push(fo);
	}
}
console.log("the call sites of 0x" + target.toString(16) + ": " + hits.length);
for (const h of hits.slice(0, want)) {
	console.log("\n--- at VA 0x" + vaOf(h).toString(16) + " ---");
	console.log(hex(h - 48, 96));
}
