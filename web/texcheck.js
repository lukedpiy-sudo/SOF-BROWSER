/* Verify the SoF v46 texinfo layout (from the engine's own lump list):
 *   lump 5 = TEXINFO, 2072 entries, 76 bytes each
 *     [0..31]  float vecs[2][4]   (the S and T axes, the 4th = the offset)
 *     [32..35] int flags
 *     [36..39] int value
 *     [40..71] char name[32]
 *     [72..75] int (extra)
 */
const fs = require("fs");
const { extract } = require("./bspgeo.js");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(path);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const m = extract(path);

const tl = L(5);
console.log("texinfo lump: offset", tl.off, "len", tl.len, "-> entries", tl.len / 76);
const fl = L(6);
const faces = [];
for (let k = 0; k < fl.len / 44; k++) {
	const o = fl.off + k * 44;
	faces.push({ tex: b.readUInt16LE(o + 10), firstedge: b.readInt32LE(o + 4), numedges: b.readInt16LE(o + 8) });
}

function nameAt(i) {
	const o = tl.off + i * 76;
	let z = o + 40;
	while (z < o + 72 && b[z] !== 0) z++;
	return b.toString("latin1", o + 40, z);
}
console.log("texinfo 0:", JSON.stringify(nameAt(0)), "| 1:", JSON.stringify(nameAt(1)), "| 100:", JSON.stringify(nameAt(100)));

/* check the UV axes against the faces */
let good = 0, minU = 1e9, maxU = -1e9;
const used = new Set();
for (const f of faces.slice(0, 800)) {
	const o = tl.off + f.tex * 76;
	const s = [0, 1, 2, 3].map(k => b.readFloatLE(o + k * 4));
	const t = [0, 1, 2, 3].map(k => b.readFloatLE(o + 16 + k * 4));
	used.add(nameAt(f.tex));
	for (let k = 0; k < f.numedges; k++) {
		const se = m.surfedges[f.firstedge + k];
		if (se === undefined) break;
		const e = m.edges[Math.abs(se)];
		const vi = se < 0 ? e[1] : e[0];
		const v = m.vertexes[vi];
		if (!v) break;
		const u = s[0] * v.x + s[1] * v.y + s[2] * v.z + s[3];
		const w = t[0] * v.x + t[1] * v.y + t[2] * v.z + t[3];
		if (u < minU) minU = u;
		if (u > maxU) maxU = u;
		if (w < minU) minU = w;
		if (w > maxU) maxU = w;
	}
	good++;
}
console.log("faces checked:", good, "| uv range", minU.toFixed(2), maxU.toFixed(2));
console.log("distinct textures used:", used.size, "|", Array.from(used).slice(0, 6).join(", "));
