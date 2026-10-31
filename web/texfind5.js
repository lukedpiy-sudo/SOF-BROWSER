/* The face's u16 at +0x0A may be the MATERIAL index directly (lump 5, 64
 * byte entries).  Find the UV axes inside the material header using the
 * perpendicularity test. */
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
		mat: b.readUInt16LE(o + 10),
		plane: b.readUInt16LE(o),
		firstedge: b.readInt32LE(o + 4),
		numedges: b.readInt16LE(o + 8)
	});
}
const matCount = Math.floor(L(5).len / 64);
console.log("materials:", matCount, "faces:", faces.length, "max material:",
	Math.max.apply(null, faces.map(f => f.mat)));

function score(vecOff, kind, stride, scale) {
	let ok = 0, tried = 0;
	for (const f of faces.slice(0, 500)) {
		if (f.mat >= matCount) continue;
		const o = L(5).off + f.mat * 64;
		if (o + vecOff + stride * 4 + 8 > L(5).off + L(5).len) continue;
		const get = (k) => kind === "f"
			? b.readFloatLE(o + vecOff + k * 4) * scale
			: b.readInt16LE(o + vecOff + k * 2) * scale;
		const s = [get(0), get(1), get(2)];
		const t = [get(stride), get(stride + 1), get(stride + 2)];
		const pl = m.planes[f.plane];
		if (!pl) continue;
		const ns = Math.hypot(s[0], s[1], s[2]);
		const nt = Math.hypot(t[0], t[1], t[2]);
		if (ns < 1e-9 || nt < 1e-9) continue;
		const dotS = Math.abs((s[0] * pl.nx + s[1] * pl.ny + s[2] * pl.nz) / ns);
		const dotT = Math.abs((t[0] * pl.nx + t[1] * pl.ny + t[2] * pl.nz) / nt);
		tried++;
		if (dotS < 0.06 && dotT < 0.06) ok++;
	}
	return { ok, tried };
}

const out = [];
for (let vecOff = 0; vecOff + 24 <= 40; vecOff += 2) {
	for (const kind of ["f", "s"]) {
		for (const stride of [3, 4]) {
			for (const scale of kind === "s" ? [1, 1 / 16, 1 / 64, 1 / 256, 1 / 1024, 1 / 4096] : [1, 1 / 16, 1 / 64]) {
				const r = score(vecOff, kind, stride, scale);
				if (r.tried > 100 && r.ok / r.tried > 0.4) out.push({ vecOff, kind, stride, scale, ...r });
			}
		}
	}
}
out.sort((a, b) => b.ok - a.ok);
console.log("candidates:", out.length);
for (const r of out.slice(0, 10)) {
	console.log("  vecOff", r.vecOff, r.kind, "stride", r.stride, "scale 1/" + Math.round(1 / r.scale),
		"-> perpendicular in", r.ok + "/" + r.tried);
}
