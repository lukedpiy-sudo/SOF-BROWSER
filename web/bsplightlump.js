const fs = require("fs");
const b = fs.readFileSync("C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp");
function L(i) { const o = 8 + i * 8; return { off: b.readInt32LE(o), len: b.readInt32LE(o + 4) }; }
const ll = L(20);
console.log("the light lump:", ll.off, ll.len, "entries:", ll.len / 36);
const byType = {};
for (let i = 0; i < ll.len / 36; i++) {
	const o = ll.off + i * 36;
	const t = b.readInt32LE(o + 28);
	const sp = b.readFloatLE(o + 32);
	if (!byType[t]) byType[t] = [];
	byType[t].push({
		i: i,
		o: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)],
		c: [b.readFloatLE(o + 12), b.readFloatLE(o + 16), b.readFloatLE(o + 20)],
		inten: b.readFloatLE(o + 24), t: t, spare: sp
	});
}
for (const t of Object.keys(byType)) {
	const a = byType[t];
	console.log("the type " + t + ": " + a.length + " entries, the first 3:");
	for (const e of a.slice(0, 3)) console.log("   " + JSON.stringify(e));
}
