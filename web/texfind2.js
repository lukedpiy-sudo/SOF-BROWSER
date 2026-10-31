/* The texinfo table: each record must contain a material index (an int
 * < the material count) and the UV axes.  Find the table by looking for a
 * field that is always a valid material index. */
const fs = require("fs");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(path);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const matCount = Math.floor(L(5).len / 64);
const fl = L(6);
let maxTex = 0;
for (let k = 0; k < fl.len / 44; k++) {
	const t = b.readUInt16LE(fl.off + k * 44 + 10);
	if (t > maxTex) maxTex = t;
}
console.log("max texinfo", maxTex, "material count", matCount);

const out = [];
for (let li = 0; li < 22; li++) {
	const l = L(li);
	if (l.len <= 0) continue;
	for (let size = 16; size <= 72; size += 2) {
		if (l.len % size) continue;
		const n = l.len / size;
		if (n < maxTex + 1) continue;
		for (let texOff = 0; texOff + 4 <= size; texOff += 2) {
			let good = 0, total = 0;
			const limit = Math.min(n, maxTex + 1);
			for (let k = 0; k < limit; k++) {
				const v = b.readInt32LE(l.off + k * size + texOff);
				total++;
				if (v >= 0 && v < matCount) good++;
			}
			if (total && good / total > 0.98) {
				out.push({ li, size, n, texOff, good, total });
			}
		}
	}
}
out.sort((a, b) => b.good - a.good);
console.log("candidates:", out.length);
for (const r of out.slice(0, 12)) {
	console.log("  lump", r.li, "size", r.size, "records", r.n, "materialIndex@" + r.texOff, "->", r.good + "/" + r.total);
}
