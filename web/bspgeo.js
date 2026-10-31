/* Read the SoF v46 BSP and extract the map geometry.
 *
 * The lump layout of beta17.bsp (v46, 22 lumps, 184 byte header):
 *   0  entities   (a text blob)
 *   1  planes     (468 x 20 bytes: 3 floats, a float, an int)
 *   2  vertexes   (1895 x 12 bytes: 3 floats)
 *   5  shaders   (a text blob)
 *   6  faces     (1453 x 44 bytes: u16 planenum, u16 side, i32 firstedge,
 *                            i16 numedges, ...)
 *  11  edges     (3378 x 4 bytes: 2 x u16 vertex indices)
 *  12  surfedges (6754 x 4 bytes: an int, the Q2 encoding)
 *
 * The face and surfedge layouts were found by brute forcing the record
 * layout against the live data (web/bspface.js) and verified with a
 * coplanarity test (every face vertex has to lie on the face plane).
 */
const fs = require("fs");

function readBsp(path) {
	const b = fs.readFileSync(path);
	if (b.toString("latin1", 0, 4) !== "IBSP") throw new Error("not a BSP");
	const version = b.readInt32LE(4);
	const NL = 22;
	const lumps = [];
	for (let i = 0; i < NL; i++) {
		lumps.push({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
	}
	return { b, version, lumps };
}

function extract(path) {
	const { b, version, lumps } = readBsp(path);
	const L = (i) => lumps[i];

	/* planes: 3 floats (the normal), a float (the distance), an int (the type) */
	const planeCount = L(1).len / 20;
	const planes = [];
	for (let i = 0; i < planeCount; i++) {
		const o = L(1).off + i * 20;
		planes.push({
			nx: b.readFloatLE(o), ny: b.readFloatLE(o + 4), nz: b.readFloatLE(o + 8),
			d: b.readFloatLE(o + 12), type: b.readInt32LE(o + 16)
		});
	}

	/* vertexes: 3 floats */
	const vertCount = L(2).len / 12;
	const vertexes = [];
	for (let i = 0; i < vertCount; i++) {
		const o = L(2).off + i * 12;
		vertexes.push({ x: b.readFloatLE(o), y: b.readFloatLE(o + 4), z: b.readFloatLE(o + 8) });
	}

	/* edges: 2 x u16 vertex indices */
	const edgeCount = L(11).len / 4;
	const edges = [];
	for (let i = 0; i < edgeCount; i++) {
		const o = L(11).off + i * 4;
		edges.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]);
	}

	/* surfedges: an int.  The absolute value is a 1 based edge index, the
	 * sign is the direction: positive = the edge's first vertex, negative =
	 * the edge's second vertex (reversed).
	 */
	const surfCount = L(12).len / 4;
	const surfedges = [];
	for (let i = 0; i < surfCount; i++) surfedges.push(b.readInt32LE(L(12).off + i * 4));

	function surfVertex(se) {
		const ei = Math.abs(se);
		if (ei < 0 || ei >= edgeCount) return { index: -1, flip: false };
		const e = edges[ei];
		return { index: se < 0 ? e[1] : e[0], flip: se < 0 };
	}

	/* faces: 44 bytes each */
	const faceCount = L(6).len / 44;
	const faces = [];
	for (let i = 0; i < faceCount; i++) {
		const o = L(6).off + i * 44;
		const planenum = b.readUInt16LE(o);
		const side = b.readUInt16LE(o + 2);
		const firstedge = b.readInt32LE(o + 4);
		const numedges = b.readInt16LE(o + 8);
		const texinfo = b.readInt16LE(o + 10);
		const verts = [];
		for (let k = 0; k < numedges; k++) {
			const se = surfedges[firstedge + k];
			if (se === undefined) break;
			const v = surfVertex(se);
			if (v.index < 0) continue;
			verts.push({ index: v.index, flip: v.flip, p: vertexes[v.index] });
		}
		faces.push({ planenum, side, firstedge, numedges, texinfo, verts });
	}

	/* the texinfo table (lump 5): 76 bytes per entry
	 *   [0..31]  8 floats: the S and T axes (the 4th = the offset)
	 *   [32..35] the flags
	 *   [36..39] the value
	 *   [40..71] the texture name
	 *   [72..75] the value
	 */
	const texCount = Math.floor(L(5).len / 76);
	const texinfos = [];
	for (let i = 0; i < texCount; i++) {
		const o = L(5).off + i * 76;
		let z = o + 40;
		while (z < o + 72 && b[z] !== 0) z++;
		texinfos.push({
			name: b.toString("latin1", o + 40, z),
			s: [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)],
			t: [b.readFloatLE(o + 16), b.readFloatLE(o + 20), b.readFloatLE(o + 24), b.readFloatLE(o + 28)]
		});
	}

	/* the faces: add the material and the UVs */
	for (const f of faces) {
		const ti = texinfos[f.texinfo];
		f.material = ti ? ti.name : null;
		f.uv = [];
		if (ti) {
			for (const v of f.verts) {
				const p = v.p;
				f.uv.push([
					ti.s[0] * p.x + ti.s[1] * p.y + ti.s[2] * p.z + ti.s[3],
					ti.t[0] * p.x + ti.t[1] * p.y + ti.t[2] * p.z + ti.t[3]
				]);
			}
		}
	}

	/* verification: every vertex of a face has to lie on the face plane */
	let checked = 0, bad = 0, worst = 0;
	for (const f of faces) {
		const pl = planes[f.planenum];
		if (!pl) continue;
		for (const v of f.verts) {
			const d = pl.nx * v.p.x + pl.ny * v.p.y + pl.nz * v.p.z - pl.d;
			const e = Math.abs(d);
			if (e > worst) worst = e;
			if (e > 1.0) bad++;
			checked++;
		}
	}
	return { version, planeCount, vertCount, edgeCount, surfCount, faceCount, planes, vertexes, edges, surfedges, faces, texinfos, check: { checked, bad, worst } };
}

module.exports = { readBsp, extract };

if (require.main === module) {
	const path = process.argv[2] || "C:/Users/User/Soldier of Fortune/User/maps/dm/beta17.bsp";
	const m = extract(path);
	console.log("BSP version", m.version);
	console.log("planes", m.planeCount, "vertexes", m.vertCount, "edges", m.edgeCount,
		"surfedges", m.surfCount, "faces", m.faceCount);
	console.log("coplanarity check:", m.check.checked, "vertices,", m.check.bad, "off plane, worst", m.check.worst.toFixed(4));
	const f = m.faces[0];
	console.log("face 0: plane", f.planenum, "side", f.side, "edges", f.numedges, "texinfo", f.texinfo);
	console.log("  verts:", f.verts.map(v => "(" + v.p.x.toFixed(1) + "," + v.p.y.toFixed(1) + "," + v.p.z.toFixed(1) + ")").join(" "));
	const withVerts = m.faces.filter(x => x.verts.length > 2).length;
	console.log("faces with >2 vertices:", withVerts, "/", m.faceCount);
}
