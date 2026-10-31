/* Brute force the SoF v46 BSP face record layout.
 *
 * A Quake II face is:
 *   u16 planenum, u16 side, i32 firstedge, i16 numedges, i16 texinfo
 * SoF's face is bigger, so we search every plausible stride and every
 * 4 byte aligned field offset for a pair of fields that behave like
 * (firstedge, numedges):
 *   firstedge  - non decreasing, starts near 0
 *   numedges   - small and positive
 */
const fs = require("fs");

const path = process.argv[2] || "C:/Users/User/Soldier of Fortune/User/maps/dm/beta17.bsp";
const b = fs.readFileSync(path);
const NL = 22;
const lumps = [];
for (let i = 0; i < NL; i++) {
	const off = b.readInt32LE(8 + i * 8), len = b.readInt32LE(8 + i * 8 + 4);
	lumps.push({ i, off, len });
}
const planes = lumps[1].len / 20;
const verts = lumps[2].len / 12;
console.log("planes", planes, "vertexes", verts);

for (const L of lumps) {
	if (L.len <= 0 || L.off <= 0 || L.off + L.len > b.length) continue;
	for (const stride of [16, 20, 24, 28, 32, 36, 40, 44, 48]) {
		if (L.len % stride) continue;
		const n = L.len / stride;
		if (n < 50) continue;
		/* look for a (firstedge, numedges) pair at any offsets */
		for (let feOff = 4; feOff + 4 <= stride; feOff += 2) {
			for (let neOff = feOff + 4; neOff + 2 <= stride; neOff += 2) {
				let mono = true, prev = -1, neOk = 0, neSum = 0, neMin = 1e9, neMax = -1;
				for (let k = 0; k < n; k++) {
					const o = L.off + k * stride;
					const fe = b.readInt32LE(o + feOff);
					const ne = b.readInt16LE(o + neOff);
					if (fe < prev) { mono = false; break; }
					prev = fe;
					if (ne > 0 && ne < 64) { neOk++; neSum += ne; if (ne < neMin) neMin = ne; if (ne > neMax) neMax = ne; }
				}
				if (mono && neOk > n * 0.9) {
					console.log("lump", L.i, "stride", stride, "n", n,
						"firstedge@" + feOff, "numedges@" + neOff,
						"numedges ok", neOk + "/" + n,
						"min", neMin, "max", neMax, "avg", (neSum / neOk).toFixed(2),
						"lastEnd", prev);
				}
			}
		}
	}
}
