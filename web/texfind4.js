/* Find the UV axes in the BSP texinfo.  In a BSP the texture axes of a face
 * are (almost) perpendicular to the face's plane, so we score every layout by
 * how many faces have both axes perpendicular to their normal. */
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
	faces.push({
		tex: b.readUInt16LE(o + 10),
		plane: b.readUInt16LE(o),
		firstedge: b.readInt32LE(o + 4),
		numedges: b.readInt16LE(o + 8)
	});
}

function score(li, size, vecOff, kind, stride, scale) {
	const l = L(li);
	let ok = 0, tried = 0;
	for (const f of faces.slice(0, 500)) {
		if (f.tex * size + size > l.len) continue;
		const o = l.off + f.tex * size;
		const get = (k) => kind === "f" ? b.readFloatLE(o + vecOff + k * 4) * scale : b.readInt16LE(o + vecOff + k * 2) * scale;
		const s = [get(0), get(1), get(2)];
		const t = [get(stride), get(stride + 1), get(stride + 2)];
		const pl = m.planes[f.plane];
		if (!pl) continue;
		const ns = Math.hypot(s[0], s[1], s[2]);
		const nt = Math.hypot(t[0], t[1], t[2]);
		if (ns < 1e-6 || nt < 1e-6) continue;
		const dotS = Math.abs((s[0] * pl.nx + s[1] * pl.ny + s[2] * pl.nz) / ns);
		const dotT = Math.abs((t[0] * pl.nx + t[1] * pl.ny + t[2] * pl.nz) / nt);
		tried++;
		if (dotS < 0.05 && dotT < 0.05) ok++;
	}
	return { ok, tried };
}

const out = [];
for (const [li, size] of [[4, 28], [8, 32]]) {
	for (let vecOff = 0; vecOff + 24 <= size; vecOff += 2) {
		for (const kind of ["f", "s"]) {
			for (const stride of [3, 4]) {
				for (const scale of kind === "s" ? [1, 1 / 16, 1 / 64, 1 / 256, 1 / 4096] : [1, 1 / 16, 1 / 64]) {
					const r = score(li, size, vecOff, kind, stride, scale);
					if (r.tried > 100 && r.ok / r.tried > 0.5) {
						out.push({ li, size, vecOff, kind, stride, scale, ...r });
					}
				}
			}
		}
	}
}
out.sort((a, b) => b.ok - a.ok);
console.log("candidates:", out.length);
for (const r of out.slice(0, 12)) {
	console.log("  lump", r.li, "size", r.size, "vecOff", r.vecOff, r.kind, "stride", r.stride,
		"scale 1/" + Math.round(1 / r.scale), "-> perpendicular in", r.ok + "/" + r.tried);
}
