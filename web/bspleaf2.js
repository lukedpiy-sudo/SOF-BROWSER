const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp");
function L(i) { const o = 8 + i * 8; return { off: b.readInt32LE(o), len: b.readInt32LE(o + 4) }; }
const lf = L(8);
const n = lf.len / 32;
const rows = [];
for (let i = 0; i < n; i++) {
	const o = lf.off + i * 32;
	rows.push({
		i: i,
		contents: b.readUInt16LE(o),
		cluster: b.readUInt16LE(o + 2),
		area: b.readUInt16LE(o + 4),
		a6: b.readUInt16LE(o + 6),
		a8: b.readUInt16LE(o + 8),
		a10: b.readUInt16LE(o + 10),
		a11: b.readUInt8(o + 11),
		brush: b.readUInt16LE(o + 24),
		nbrush: b.readUInt16LE(o + 26)
	});
}
console.log("the leaf count:", n);
for (const key of ["a6", "a8", "a10", "a11"]) {
	const vals = rows.map(r => r[key]);
	const uniq = Array.from(new Set(vals)).sort((a, b) => a - b);
	let mono = true;
	for (let i = 1; i < vals.length; i++) if (vals[i] < vals[i - 1]) { mono = false; break; }
	console.log(key + ": the min " + Math.min(...vals) + " the max " + Math.max(...vals) +
		" the unique " + uniq.length + " the monotone " + mono +
		" the first 12: " + vals.slice(0, 12).join(","));
}
/* the hypothesis: a6 = the first face, and the count comes from the next leaf */
let ok = 0, bad = 0;
for (let i = 0; i + 1 < n; i++) {
	const a = rows[i].a6, b2 = rows[i + 1].a6;
	if (rows[i].contents === 1) continue;
	if (b2 >= a && b2 - a < 40) ok++; else bad++;
}
console.log("the hypothesis (a6 = the first face, the count = the next leaf's a6): " + ok + " plausible, " + bad + " odd");
console.log("the rows 95..110:", JSON.stringify(rows.slice(95, 106).map(r => [r.i, r.contents, r.cluster, r.area, r.a6, r.a8, r.a10, r.a11])));
