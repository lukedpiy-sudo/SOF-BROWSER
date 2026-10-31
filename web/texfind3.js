/* The texinfo candidates: lump 4 @ 28 and lump 8 @ 32.  Try every layout of
 * the two UV axes (as floats or shorts) and report the one that produces
 * sane texture coordinates. */
const fs = require("fs");
const { extract } = require("./bspgeo.js");

const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const b = fs.readFileSync(path);
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const m = extract(path);

const fl = L(6);
const faces = [];
for (let k = 0; k < fl.len / 44; k++) {
	const o = fl.off + k * 44;
	faces.push({ tex: b.readUInt16LE(o + 10), firstedge: b.readInt32LE(o + 4), numedges: b.readInt16LE(o + 8) });
}

function tryLayout(li, size, vecOff, kind, stride) {
	const l = L(li);
	let ok = 0, minUv = 1e9, maxUv = -1e9, mats = new Set();
	const get = (o, k) => kind === "f" ? b.readFloatLE(o + vecOff + k * 4) : b.readInt16LE(o + vecOff + k * 2);
	for (const f of faces.slice(0, 600)) {
		if (f.tex * size >= l.len) continue;
		const o = l.off + f.tex * size;
		mats.add(b.readInt32LE(o + (li === 4 ? 0 : 28)));
		let good = true;
		for (let k = 0; k < f.numedges; k++) {
			const se = m.surfedges[f.firstedge + k];
			if (se === undefined) { good = false; break; }
			const e = m.edges[Math.abs(se)];
			const vi = se < 0 ? e[1] : e[0];
			const v = m.vertexes[vi];
			if (!v) { good = false; break; }
			const u = get(o, 0) * v.x + get(o, 1) * v.y + get(o, 2) * v.z + get(o, 3);
			const w = get(o, stride) * v.x + get(o, stride + 1) * v.y + get(o, stride + 2) * v.z + get(o, stride + 3);
			if (u < minUv) minUv = u;
			if (u > maxUv) maxUv = u;
			if (w < minUv) minUv = w;
			if (w > maxUv) maxUv = w;
		}
		if (good) ok++;
	}
	return { ok, minUv, maxUv, mats: mats.size };
}

const out = [];
for (const [li, size, matOff] of [[4, 28, 0], [8, 32, 28]]) {
	for (let vecOff = 0; vecOff + 32 <= size; vecOff += 4) {
		for (const kind of ["f", "s"]) {
			for (const stride of [4, 3]) {
				const r = tryLayout(li, size, vecOff, kind, stride);
				if (r.ok > 200 && r.maxUv < 20000 && r.minUv > -20000) {
					out.push({ li, size, vecOff, kind, stride, ...r });
				}
			}
		}
	}
}
out.sort((a, b) => (b.ok - a.ok) || (Math.abs(a.maxUv - a.minUv) - Math.abs(b.maxUv - b.minUv)));
console.log("plausible layouts:", out.length);
for (const r of out.slice(0, 10)) {
	console.log("  lump", r.li, "size", r.size, "vecOff", r.vecOff, r.kind, "stride", r.stride,
		"-> faces", r.ok, "uv", r.minUv.toFixed(1), r.maxUv.toFixed(1), "mats", r.mats);
}
