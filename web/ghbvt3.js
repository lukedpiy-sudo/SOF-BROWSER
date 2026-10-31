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
	secs.push({
		name: b.toString("latin1", o, o + 8).replace(/\0.*$/, ""),
		vaddr: b.readUInt32LE(o + 12),
		vsize: b.readUInt32LE(o + 8),
		rsize: b.readUInt32LE(o + 16),
		rptr: b.readUInt32LE(o + 20)
	});
}
const LO = 0x2008f000, HI = 0x200ea000;
for (const s of secs) {
	if (s.name !== ".rdata" && s.name !== ".data") continue;
	console.log("the section " + s.name);
	for (let o = s.rptr; o + 0x60 < s.rptr + s.rsize; o += 4) {
		let all = 0, n = 0;
		for (let k = 0; k < 24; k++) {
			const e = b.readUInt32LE(o + k * 4);
			if (e >= LO && e <= HI) n++; else all++;
		}
		if (all) continue;
		const va = imgbase + s.vaddr + (o - s.rptr);
		console.log("  the vtable at 0x" + va.toString(16) + "  +0x40 = 0x" + b.readUInt32LE(o + 0x40).toString(16));
		for (let k = 0; k < 24; k += 4) {
			const line = [];
			for (let j = 0; j < 4; j++) line.push("0x" + b.readUInt32LE(o + (k + j) * 4).toString(16));
			console.log("      +0x" + (k * 4).toString(16) + "  " + line.join(" "));
		}
	}
}
