/* bspface7.js - the remaining fields of the SoF v46 face record and a first
 * validation of the decoded lightmaps against the map's light entities.
 *
 *   node bspface7.js <map.bsp> [map_entities.json]
 *
 * The face record (44 bytes) is now known:
 *
 *   +0  u16 planenum
 *   +2  u16 side
 *   +4  i32 firstedge
 *   +8  u16 numedges
 *   +10 u16 texinfo
 *   +12 u16 flags        (0xffff for every face of nycdm1)
 *   +14 u16 (0)
 *   +16 u16 (0xffff)  +18 u16 (0xffff)
 *   +20 u8  surface flag (0xff)   +21 u8 (0)  +22 u8 (0)  +23 u8 (0)
 *   +24 u16 (0xffff)  +25 u8 (0xff)  +26 u16 (0)
 *   +28 i32 lightofs      <- byte offset into the LIGHTING lump
 *   +32 u8  lightmap width  (luxels)
 *   +33 u8  lightmap height (luxels)
 *   +34 u8  ?              +35 u8 ?
 *   +36 i16 lightmap mins[0] (texture space, snapped to 16)
 *   +38 i16 lightmap mins[1]
 *   +40 u16 lightmap extent[0] (texture units)
 *   +42 u16 lightmap extent[1]
 */
"use strict";
const fs = require("fs");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const entFile = process.argv[3] || "C:/Users/User/q2work/sof2/web/www/map_entities.json";
const b = fs.readFileSync(file);
const NL = 22;
const L = [];
for (let i = 0; i < NL; i++) L.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
const faceCount = L[6].len / 44;
const light = b.subarray(L[7].off, L[7].off + L[7].len);

/* --- survey the two unknown bytes and the "special" faces ---------------- */
const h34 = new Map(), h35 = new Map(), h20 = new Map(), h24 = new Map();
const special = [];
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	h34.set(b[o + 34], (h34.get(b[o + 34]) || 0) + 1);
	h35.set(b[o + 35], (h35.get(b[o + 35]) || 0) + 1);
	h20.set(b[o + 20], (h20.get(b[o + 20]) || 0) + 1);
	h24.set(b[o + 24] | (b[o + 25] << 8), (h24.get(b[o + 24] | (b[o + 25] << 8)) || 0) + 1);
	if (b[o + 34] === 0 && b[o + 35] === 0) special.push(i);
}
const show = (n, m) => console.log(n + ": " + [...m.entries()].sort((a, c) => c[1] - a[1])
	.map(e => "0x" + e[0].toString(16) + "=x" + e[1]).join("  "));
show("face[+34]", h34); show("face[+35]", h35);
show("face[+20]", h20); show("face[+24..25]", h24);
console.log("faces with +34 == 0 and +35 == 0:", special.length);
console.log("  first 10:", special.slice(0, 10).join(", "));

/* --- decode every lightmap and describe it ------------------------------- */
let totalPx = 0, maxR = 0, sumR = 0, sumG = 0, sumB = 0, n = 0;
const faceInfo = [];
for (let i = 0; i < faceCount; i++) {
	const o = L[6].off + i * 44;
	const w = b[o + 32], h = b[o + 33];
	if (!w || !h) continue;
	const ofs = b.readInt32LE(o + 28);
	if (ofs < 0 || ofs + w * h * 3 > light.length) continue;
	totalPx += w * h;
	let mr = 0, mg = 0, mb = 0;
	for (let k = 0; k < w * h; k++) {
		const r = light[ofs + k * 3], g = light[ofs + k * 3 + 1], bb = light[ofs + k * 3 + 2];
		if (r > mr) mr = r; if (g > mg) mg = g; if (bb > mb) mb = bb;
		sumR += r; sumG += g; sumB += bb; n++;
	}
	faceInfo.push({ i, ofs, w, h, mr, mg, mb, r: light[ofs], g: light[ofs + 1], b: light[ofs + 2] });
}
console.log("\nlightmaps decoded:", faceInfo.length, " luxels:", totalPx, " bytes:", totalPx * 3);
console.log("mean luxel colour: r=" + (sumR / n).toFixed(1) + " g=" + (sumG / n).toFixed(1) + " b=" + (sumB / n).toFixed(1));
console.log("brightest luxel r =", Math.max.apply(null, faceInfo.map(f => f.mr)));
const sorted = faceInfo.slice().sort((a, c) => a.mr - c.mr);
console.log("darkest 5 faces:", sorted.slice(0, 5).map(f => "#" + f.i + "(" + f.mr + "," + f.mg + "," + f.mb + ")").join(" "));
console.log("brightest 5 faces:", sorted.slice(-5).map(f => "#" + f.i + "(" + f.mr + "," + f.mg + "," + f.mb + ")").join(" "));

/* the first face's luxel grid, printed as a heat map (row = t) */
{
	const f = faceInfo[0];
	console.log("\nface " + f.i + " lightmap " + f.w + "x" + f.h + " at offset " + f.ofs + " (rows = t increasing):");
	for (let r = 0; r < f.h; r++) {
		let line = "  ";
		for (let c = 0; c < f.w; c++) {
			const p = (f.ofs + (r * f.w + c) * 3);
			line += String(light[p]).padStart(4) + "," + String(light[p + 1]).padStart(4) + "," + String(light[p + 2]).padStart(4) + " ";
		}
		console.log(line);
	}
}

/* --- compare with the map's light entities ------------------------------- */
if (fs.existsSync(entFile)) {
	const ents = JSON.parse(fs.readFileSync(entFile, "utf8"));
	const lights = (ents.entities || ents).filter(e => (e.classname || "").indexOf("light") === 0);
	console.log("\nlight entities in " + entFile + ":", lights.length);
	const styles = new Map();
	for (const l of lights) {
		const s = l.style !== undefined ? l.style : (l._style !== undefined ? l._style : 0);
		styles.set(s, (styles.get(s) || 0) + 1);
	}
	console.log("  style histogram:", [...styles.entries()].sort((a, c) => c[1] - a[1]).map(e => e[0] + ":x" + e[1]).join(" "));
}
