const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp");
const n = b.readInt32LE(4);
function L(i) { const o = 8 + i * 8; return { off: b.readInt32LE(o), len: b.readInt32LE(o + 4) }; }
console.log("the lumps:", n);
for (let i = 0; i < n; i++) console.log("  " + i + ": off " + L(i).off + " len " + L(i).len);
const lf = L(8);
console.log("the leaf count:", lf.len / 32);
for (const idx of [0, 1, 2, 5, 100, 2000]) {
	const o = lf.off + idx * 32;
	const d = b.subarray(o, o + 32);
	console.log("the leaf " + idx + ": " + d.toString("hex").replace(/(..)/g, "$1 ") +
		"  contents=" + d.readUInt16LE(0) + " area=" + d.readUInt16LE(6) +
		" brush=" + d.readUInt16LE(24) + "/" + d.readUInt16LE(26) +
		" +28=" + d.readUInt16LE(28) + "/" + d.readUInt16LE(30) +
		" +8=" + d.readUInt32LE(8));
}
const ms = L(9);
console.log("the marksurfaces:", ms.len / 2, "the first 20:", Array.from(b.subarray(ms.off, ms.off + 40)).reduce((a, v, i) => i % 2 ? a : a.concat(b.readUInt16LE(ms.off + i)), []));
