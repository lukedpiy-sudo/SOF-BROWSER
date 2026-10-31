/*
 * ghbinview7.js - find the client code that references the INVIEW model
 * string table indices (the view model selection).
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/Soldier of Fortune/SoF.exe");
const pe = b.readUInt32LE(0x3c);
const nsec = b.readUInt16LE(pe + 6);
const opt = pe + 24;
const imgbase = b.readUInt32LE(opt + 28);
const secoff = opt + b.readUInt16LE(pe + 20);
const secs = [];
for (let i = 0; i < nsec; i++) {
	const o = secoff + i * 40;
	secs.push({ name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""), vaddr: b.readUInt32LE(o + 12), vsize: b.readUInt32LE(o + 8), rsize: b.readUInt32LE(o + 16), rptr: b.readUInt32LE(o + 20) });
}
function toRva(fo) {
	for (const s of secs) if (fo >= s.rptr && fo < s.rptr + s.rsize) return imgbase + s.vaddr + (fo - s.rptr);
	return 0;
}
const text = secs.find(s => s.name === ".text");
const table = JSON.parse(fs.readFileSync("C:/Users/User/q2work/sof2/web/www/sofstringtable.json", "utf8")).names;
const targets = [];
for (let i = 0; i < table.length; i++) {
	const p = table[i] || "";
	if (/INVIEW\/.*\.GHB$/i.test(p)) targets.push({ i: i, path: p });
}
console.log("the INVIEW model entries: " + targets.map(t => t.i + ":" + t.path.split("/").pop()).join(", "));
/* search the text for the u32 immediates */
const hits = new Map();
for (const t of targets) {
	const p = Buffer.alloc(4);
	p.writeUInt32LE(t.i);
	let o = text.rptr;
	while (true) {
		const i = b.indexOf(p, o);
		if (i < 0 || i >= text.rptr + text.rsize) break;
		const op = b[i - 1];
		/* push imm32 = 0x68, mov r32,imm32 = 0xB8..0xBF, mov [mem],imm32 = 0xC7 */
		hits.set(toRva(i), { idx: t.i, op: op });
		o = i + 1;
	}
}
console.log("the code hits: " + hits.size);
const addrs = [...hits.keys()].sort((a, b) => a - b);
for (const a of addrs) {
	const h = hits.get(a);
	console.log("  0x" + a.toString(16) + "  the opcode 0x" + h.op.toString(16) + "  the index " + h.idx + " " + table[h.idx]);
}
