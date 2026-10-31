/* Search the BSP for the texinfo table: the record that maps a face to a
 * texture and a UV mapping.  We try every lump, every record size, every
 * texture index field and both float and short UV vectors, and keep the
 * combinations that produce plausible texture coordinates. */
const fs = require("fs");
const { extract } = require("./bspgeo.js");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(path);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const m = extract(path);

/* the texture name table: lump 5, 64 byte entries, the name at +40 */
const texNames = [];
{
	const l = L(5);
	for (let o = l.off; o + 64 <= l.off + l.len; o += 64) {
		let z = o + 40;
		while (z < o + 64 && b[z] !== 0) z++;
		texNames.push(b.toString("latin1", o + 40, z));
	}
}
console.log("texture names:", texNames.length);

/* the faces and their candidate texinfo index */
const fl = L(6);
const faces = [];
for (let k = 0; k < fl.len / 44; k++) {
	const o = fl.off + k * 44;
	faces.push({ tex: b.readUInt16LE(o + 10), firstedge: b.readInt32LE(o + 4), numedges: b.readInt16LE(o + 8) });
}
console.log("faces:", faces.length, "max texinfo:", Math.max.apply(null, faces.map(f => f.tex)));

const results = [];
for (let li = 0; li < 22; li++) {
	const l = L(li);
	if (l.len <= 0) continue;
	for (let size = 16; size <= 64; size += 2) {
		if (l.len % size) continue;
		const n = l.len / size;
		if (n < Math.max.apply(null, faces.map(f => f.tex)) + 1) continue;
		for (let texOff = 0; texOff + 4 <= size; texOff += 4) {
			for (let vecOff = 0; vecOff + 16 <= size; vecOff += 4) {
				for (const kind of ["f", "s"]) {
					let ok = 0, tried = 0, minUv = 1e9, maxUv = -1e9, texOk = 0;
					for (const f of faces.slice(0, 400)) {
						if (f.tex >= n) continue;
						const o = l.off + f.tex * size;
						const ti = b.readInt32LE(o + texOff);
						if (ti < 0 || ti >= texNames.length) continue;
						texOk++;
						const c = [];
						for (let k = 0; k < 8; k++) {
							c.push(kind === "f" ? b.readFloatLE(o + vecOff + k * 4) : b.readInt16LE(o + vecOff + k * 2));
						}
						for (let k = 0; k < f.numedges; k++) {
							const se = m.surfedges[f.firstedge + k];
							if (se === undefined) break;
							const e = m.edges[Math.abs(se)];
							const vi = se < 0 ? e[1] : e[0];
							const v = m.vertexes[vi];
							if (!v) break;
							const u = c[0] * v.x + c[1] * v.y + c[2] * v.z + c[3];
							const w = c[4] * v.x + c[5] * v.y + c[6] * v.z + c[7];
							tried++;
							if (u < minUv) minUv = u;
							if (u > maxUv) maxUv = u;
							if (w < minUv) minUv = w;
							if (w > maxUv) maxUv = w;
						}
						if (tried) ok++;
					}
					if (ok > 50) {
						results.push({ li, size, texOff, vecOff, kind, ok, texOk, minUv, maxUv });
					}
				}
			}
		}
	}
}
results.sort((a, b) => b.ok - a.ok);
console.log("candidates:", results.length);
for (const r of results.slice(0, 10)) {
	console.log("  lump", r.li, "size", r.size, "texOff", r.texOff, "vecOff", r.vecOff, r.kind,
		"-> faces", r.ok, "texOk", r.texOk, "uv", r.minUv.toFixed(0), r.maxUv.toFixed(0));
}
