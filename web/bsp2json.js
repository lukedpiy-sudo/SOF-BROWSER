/* Convert a SoF v46 .bsp into the geometry + textures the browser needs.
 *
 *   node bsp2json.js <map.bsp> <out.json> [pak]
 *
 * The textures are the game's .m32 material files (in Base\pak0.pak):
 *   +0    u32 version (4)
 *   +4    char name[128]
 *   +132  char name2[384]
 *   +516  the mip level sizes (64,32,16,8,4,2,1)
 *   +580  the same
 *   +644  the offset of the pixel data
 *   +648  the offsets of the mip levels
 *   the pixels: w*h texels of (R, G, B, 0xFF)
 */
const fs = require("fs");
const { extract } = require("./bspgeo.js");

const src = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const dst = process.argv[3] || "web/map.json";
const pakPath = process.argv[4] || "C:/Users/User/Soldier of Fortune/Base/pak0.pak";

/* the pak directory */
const pak = {};
try {
	const fd = fs.openSync(pakPath, "r");
	const head = Buffer.alloc(12);
	fs.readSync(fd, head, 0, 12, 0);
	const dir = Buffer.alloc(head.readInt32LE(8));
	fs.readSync(fd, dir, 0, dir.length, head.readInt32LE(4));
	for (let o = 0; o + 64 <= dir.length; o += 64) {
		let z = 0;
		while (z < 56 && dir[o + z] !== 0) z++;
		const name = dir.toString("latin1", o, o + z);
		pak[name.toLowerCase()] = [dir.readInt32LE(o + 56), dir.readInt32LE(o + 60)];
	}
	global.__pakFd = fd;
} catch (e) { console.log("no pak:", e.message); }

function readPak(name) {
	const e = pak[name.toLowerCase()];
	if (!e) return null;
	const fd = global.__pakFd;
	const buf = Buffer.alloc(e[1]);
	fs.readSync(fd, buf, 0, e[1], e[0]);
	return buf;
}

/* a .m32 material: the base level's RGB pixels
 *
 * The pixel format is not fixed: most materials store the base level as
 * uncompressed RGBA (4 bytes per texel), but some store it as RGB565
 * (2 bytes per texel).  The offset of the first mip level (at +648) tells
 * which one it is: it is the offset of the base level plus the size of the
 * base level.  (The 12 materials of nycdm1 that no tool could read before -
 * subway/1_beam1, subway/barbwire, subway/tire1, ... - are the 16 bit ones.)
 */
function decodeM32(buf) {
	if (!buf || buf.length < 700) return null;
	const sizes = [];
	for (let i = 0; i < 7; i++) sizes.push(buf.readInt32LE(516 + i * 4));
	const dataOff = buf.readInt32LE(644);
	const mipOff = buf.readInt32LE(648);
	const w = sizes[0], h = sizes[0];
	if (!w || !h) return null;
	let bpp = 4;
	if (mipOff > dataOff) {
		const per = (mipOff - dataOff) / (w * h);
		if (per === 2) bpp = 2;
		else if (per !== 4) return null;
	}
	if (dataOff + w * h * bpp > buf.length) return null;
	const px = buf.subarray(dataOff, dataOff + w * h * bpp);
	if (bpp === 4) return { w: w, h: h, rgb: Buffer.from(px) };
	/* RGB565 -> RGBA */
	const rgb = Buffer.alloc(w * h * 4);
	for (let i = 0; i < w * h; i++) {
		const v = px.readUInt16LE(i * 2);
		rgb[i * 4] = Math.round(((v >> 11) & 31) * 255 / 31);
		rgb[i * 4 + 1] = Math.round(((v >> 5) & 63) * 255 / 63);
		rgb[i * 4 + 2] = Math.round((v & 31) * 255 / 31);
		rgb[i * 4 + 3] = 255;
	}
	return { w: w, h: h, rgb: rgb };
}

const m = extract(src);

/* the faces with their material and UVs */
const faces = [];
for (const f of m.faces) {
	if (!f.verts.length) continue;
	faces.push({
		n: [f.state ? 0 : 0, 0, 0], /* placeholder, replaced below */
		mat: f.material,
		v: f.verts.map(v => v.index),
		uv: f.uv.map(u => [u[0], u[1]])
	});
}
/* the plane normals (per face) */
let fi = 0;
for (const f of m.faces) {
	if (!f.verts.length) continue;
	const pl = m.planes[f.planenum];
	const s = f.side ? -1 : 1;
	faces[fi].n = [pl.nx * s, pl.ny * s, pl.nz * s];
	fi++;
}

/* the textures of the materials the map uses */
const used = new Set(faces.map(f => f.mat).filter(Boolean));
const textures = {};
for (const name of used) {
	const buf = readPak("textures/" + name + ".m32");
	const t = decodeM32(buf);
	if (t) textures[name] = { w: t.w, h: t.h, data: t.rgb.toString("base64") };
}
console.log("materials used:", used.size, "| textures found:", Object.keys(textures).length);

const out = {
	source: src,
	version: m.version,
	counts: {
		vertices: m.vertCount, planes: m.planeCount, edges: m.edgeCount,
		surfedges: m.surfCount, faces: m.faceCount, entities: m.entities ? m.entities.length : 0
	},
	check: m.check,
	vertices: m.vertexes.map(v => [v.x, v.y, v.z]),
	faces: faces,
	textures: textures
};

fs.writeFileSync(dst, JSON.stringify(out));
console.log("wrote", dst, (fs.statSync(dst).size / 1024).toFixed(1) + " KB |", faces.length, "faces |",
	Object.keys(textures).length, "textures | coplanarity bad:", m.check.bad);
