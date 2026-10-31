/* The face's u16 at +0x0A is most likely the MATERIAL index (lump 5, 64
 * byte entries).  Find the UV axes inside the 40 byte material header. */
const fs = require("fs");
const { extract } = require("./bspgeo.js");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(path);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const m = extract(path);

const matCount = Math.floor(L(5).len / 64);
console.log("material entries:", matCount);

/* the faces with their material index */
const fl = L(6);
const faces = [];
for (let k = 0; k < fl.len / 44; k++) {
	const o = fl.off + k * 44;
	faces.push({
		mat: b.readUInt16LE(o + 10),
		firstedge: b.readInt32LE(o + 4),
		numedges: b.readInt16LE(o + 8)
	});
}
console.log("faces:", faces.length, "max material:", Math.max.apply(null, faces.map(f => f.mat)));

const results = [];
for (let vecOff = 0; vecOff + 32 <= 40; vecOff += 4) {
	for (const kind of ["f", "s"]) {
		let ok = 0, minUv = 1e9, maxUv = -1e9, texOk = 0;
		for (const f of faces.slice(0, 500)) {
			if (f.mat >= matCount) continue;
			const o = L(5).off + f.mat * 64;
			texOk++;
			const c = [];
			for (let k = 0; k < 8; k++) {
				c.push(kind === "f" ? b.readFloatLE(o + vecOff + k * 4) : b.readInt16LE(o + vecOff + k * 2));
			}
			let good = true;
			for (let k = 0; k < f.numedges; k++) {
				const se = m.surfedges[f.firstedge + k];
				if (se === undefined) { good = false; break; }
				const e = m.edges[Math.abs(se)];
				const vi = se < 0 ? e[1] : e[0];
				const v = m.vertexes[vi];
				if (!v) { good = false; break; }
				const u = c[0] * v.x + c[1] * v.y + c[2] * v.z + c[3];
				const w = c[4] * v.x + c[5] * v.y + c[6] * v.z + c[7];
				if (u < minUv) minUv = u;
				if (u > maxUv) maxUv = u;
				if (w < minUv) minUv = w;
				if (w > maxUv) maxUv = w;
			}
			if (good) ok++;
		}
		results.push({ vecOff, kind, ok, texOk, minUv, maxUv });
	}
}
results.sort((a, b) => b.ok - a.ok);
for (const r of results.slice(0, 8)) {
	console.log("  vecOff", r.vecOff, r.kind, "-> faces", r.ok, "uv range", r.minUv.toFixed(1), r.maxUv.toFixed(1));
}
