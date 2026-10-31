/*
 * bspvis.js - the SoF v46 VISIBILITY lump (lump 3): the PVS.
 *
 *   node bspvis.js <map.bsp> [outdir]
 *
 * The layout, confirmed against the engine (SoF.exe 0x2001bd00 CM_LeafCluster
 * and 0x2001bc70 the unpacker):
 *
 *   +0    u16   the number of PVS entries (the clusters 1..n)
 *   +2    u16   0
 *   +4    n x 8 bytes:  u16 the byte offset of the entry's data, u16 0
 *         (the offsets are relative to the start of the lump, and the first
 *          one is 4 + n*8 - the end of the table)
 *   ...   the data: one run length encoded block per entry
 *
 * The data blocks are unpacked by the engine's unpacker: a byte that is not
 * zero is a literal, a zero byte is followed by a length byte and means
 * "that many zero bytes".  The engine stops when the destination (the PVS
 * of one cluster) is full, so the last block has no explicit end.
 *
 * The result is a bitmask with one bit per cluster, LSB first (cluster 0 is
 * the least significant bit of byte 0).
 *
 * The output (map_pvs.json) has:
 *   clusters   the number of PVS entries
 *   pvs        the bitmask of every cluster, base64, LSB first
 *   leaves     the leaf table: the bbox, the cluster, the area
 *   leaffaces  the leaf -> face list
 */
"use strict";
const fs = require("fs");
const path = require("path");
const { readBsp } = require("./bspmap.js");

const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const outdir = process.argv[3] || "C:/Users/User/q2work/sof2/web/www";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];
const vis = b.subarray(L(3).off, L(3).off + L(3).len);

const n = vis.readUInt16LE(0);
const tableOff = 4;
const offs = [];
for (let i = 0; i < n; i++) offs.push(vis.readUInt16LE(tableOff + i * 8));
console.log("the visibility lump:", vis.length, "bytes,", n, "PVS entries");
console.log("  the table ends at", tableOff + n * 8, "and the first offset is", offs[0],
	(tableOff + n * 8 === offs[0] ? "(EXACT)" : "(MISMATCH)"));

/* the cluster count from the leafs: the PVS needs one bit per cluster */
const leafCount = L(8).len / 32;
let maxCluster = -1;
const leafCluster = [];
for (let i = 0; i < leafCount; i++) {
	const c = b.readUInt16LE(L(8).off + i * 32 + 4);
	leafCluster.push(c === 0xffff ? -1 : c);
	if (c !== 0xffff && c > maxCluster) maxCluster = c;
}
const pvsBytes = Math.ceil((maxCluster + 1) / 8);
console.log("  the leafs use the clusters 0.." + maxCluster + " -> the PVS is " + pvsBytes +
	" bytes per cluster (" + leafCluster.filter(c => c < 0).length + " leafs have no cluster)");

/* the unpacker: a literal byte, or a zero byte + a length = that many zeros */
function unpack(start, limit) {
	const out = Buffer.alloc(limit);
	let n = 0, i = start;
	while (i < vis.length && n < limit) {
		const c = vis[i];
		if (c !== 0) { out[n++] = c; i++; }
		else {
			if (i + 1 >= vis.length) { out[n++] = 0; i++; break; }
			const len = vis[i + 1];
			for (let k = 0; k < len && n < limit; k++) out[n++] = 0;
			i += 2;
		}
	}
	return out;
}

const pvs = [];
let dataEnd = 0;
for (let i = 0; i < n; i++) {
	const p = unpack(offs[i], pvsBytes);
	pvs.push(p);
	/* where the block really ends: the next offset, or the end of the data */
	dataEnd = (i + 1 < n) ? offs[i + 1] : dataEnd;
}
console.log("  the PVS data:", tableOff + n * 8, "..", offs[n - 1] + " (the last block ends there)");

/* the proof: the self bit and the symmetry */
const bit = (p, i) => (p[i >> 3] >> (i & 7)) & 1;
let self = 0;
for (let i = 0; i < n; i++) if (bit(pvs[i], i)) self++;
let sym = 0, tot = 0;
for (let i = 0; i < 120; i++) for (let j = 0; j < 120; j++) { tot++; if (bit(pvs[i], j) === bit(pvs[j], i)) sym++; }
console.log("  the proof: the self bit is set in " + self + " of " + n + " entries, the PVS is symmetric in " +
	sym + " of " + tot + " pairs (" + (100 * sym / tot).toFixed(1) + "%)");

/* the leafs */
const leaves = [];
for (let i = 0; i < leafCount; i++) {
	const o = L(8).off + i * 32;
	leaves.push({
		contents: b.readUInt16LE(o),
		cluster: leafCluster[i],
		area: b.readUInt16LE(o + 6),
		mins: [b.readInt16LE(o + 12), b.readInt16LE(o + 14), b.readInt16LE(o + 16)],
		maxs: [b.readInt16LE(o + 18), b.readInt16LE(o + 20), b.readInt16LE(o + 22)],
		firstleafbrush: b.readUInt16LE(o + 24),
		numleafbrushes: b.readUInt16LE(o + 26),
		/* the leaf -> face range: the marksurfaces lump (the leaf lumps 9) */
		firstleafface: b.readUInt16LE(o + 28),
		numleaffaces: b.readUInt16LE(o + 30)
	});
}

/* the leaf -> face lists */
const lfCount = L(9).len / 2;
const leaffaces = [];
for (let i = 0; i < lfCount; i++) leaffaces.push(b.readUInt16LE(L(9).off + i * 2));

const out = {
	map: (file.match(/([^\\/]+)\.bsp$/i) || [, "map"])[1].toLowerCase(),
	clusters: n,
	pvsBytes: pvsBytes,
	bits: "lsb",
	pvs: Buffer.concat(pvs).toString("base64"),
	leaves: leaves,
	leaffaces: leaffaces,
	note: "pvs: the bitmask of every cluster, base64, one pvsBytes bytes per cluster, LSB first"
};
fs.mkdirSync(outdir, { recursive: true });
const dst = path.join(outdir, "map_pvs.json");
fs.writeFileSync(dst, JSON.stringify(out));
console.log("wrote", dst, (fs.statSync(dst).size / 1024).toFixed(1) + " KB",
	"(" + leaves.length + " leafs, " + leaffaces.length + " leaf faces)");
