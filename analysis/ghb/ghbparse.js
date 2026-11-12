"use strict";
// Ghoul .ghb (binary Comp) decoder — fully RE'd from SoF.exe
//
// File layout (validated on FEM_ARM.ghb, ACC_BOX_HIP.ghb, FEMALE.ghb):
//   [0x00] u32 magic 0x198237FE
//   [0x04] u32 block2Offset (absolute file offset)
//   [0x08] u32 block2Size
//   [0x0c] model stream  (magic 0x033FB1A3, version 0x4A, path, object arrays, Comp header)
//   [block2Offset] block2 (animation subdata blob + Comp blob)
//
// Comp header (found in the model stream, NOT 4-byte aligned):
//   +0x00 u32 0xFFFFFFFF marker
//   +0x04 u32 Comp+0x110
//   +0x08 u32 Comp+0x04
//   +0x0c u32 Comp+0x08  numMatBlocks
//   +0x10 u32 Comp+0x0c
//   +0x14 u32 Comp+0x10  numTexCoords
//   +0x18 u32 Comp+0x14
//   +0x1c u32 Comp+0x18  numFaceGroups
//   +0x20 u32 Comp+0x1c  numElements
//   +0x24 u32 Comp+0x20  numCorners
//   +0x28 u32 Comp+0x24  aPosStride
//   +0x2c u32 Comp+0x28
//   +0x30 u32 Comp+0x2c  aNormStride
//   +0x34..+0x58  10 u32 blob cursors (Comp+0x30..Comp+0x54)
//   +0x5c u8 Comp+0x70, +0x5d u8 Comp+0x71
//   +0x5e vec3 bboxMin, +0x6a vec3 bboxMax
//   +0x76 vec3 scale, +0x82 vec3 invScale
//   +0x8e vec3 centre, +0x9a vec3 (0.375)
//   +0xa6 u8  subdata-present flag
//   +0xa7 subdata (if flag), then:
// model stream tail: [modelEnd-16] u32 blobSize, [modelEnd-12] u32 blobOffset(rel block2)
//
// Comp blob sections (offsets relative to blobBase = block2Offset + blobOffset):
//   [c0,c1) MatBlocks  N x u32 (matIndex, faceGroupStart, faceGroupCount)
//   [c1,c2) cPos       N x vec3 float  (shared/static vertex positions)
//   [c2,c3) cTex       N x vec2 float  (shared texture coords)
//   [c3,c4) cNorm      N x vec3 float  (shared normals)
//   [c4,c5) Mesh       N x {u16 A, u16 elemStart, u16 elemCount}
//   [c5,c6) Elem       N x u16         (topology stream, see decodeTopology)
//   [c6,c7) Corn       N x {i16 posIdx, i16 normIdx, i16 texIdx}
//   [c7,c8) aPos, [c8,c9) aTex, [c9,blobSize) aNorm  (animated per-object data)
//
// Corner record (runtime, 0x4c bytes):
//   +0x00 u32 flags, +0x04 i32 posIdx, +0x08 vec3 pos,
//   +0x14 i32 normIdx, +0x18 vec3 normal, +0x24 i32 texIdx, +0x28 vec2 uv
//
// Topology (FUN_200b09e0 in SoF.exe): the Elem stream is a sequence of
//   header > 0  -> GL_TRIANGLE_STRIP, n = header vertices follow
//   header = 0  -> GL_TRIANGLES, next u16 = n vertices follow (n/3 triangles)
//   header < 0  -> GL_TRIANGLE_FAN, n = -header vertices follow
// followed by n u16 corner indices.

const fs = require("fs");

function parseGhb(buf) {
  const u32 = (o) => buf.readUInt32LE(o);
  const i16 = (o) => buf.readInt16LE(o);
  const f32 = (o) => buf.readFloatLE(o);

  if (u32(0) !== 0x198237fe) throw new Error("not a .ghb (magic 0x198237FE)");
  const block2Off = u32(4), block2Size = u32(8);
  const modelEnd = block2Off;

  // blob descriptor lives in the last 16 bytes of the model stream
  const blobSize = u32(modelEnd - 16);
  const blobOffset = u32(modelEnd - 12);
  if (blobOffset + blobSize !== block2Size)
    throw new Error(`bad blob descriptor: off 0x${blobOffset.toString(16)} + size 0x${blobSize.toString(16)} != block2 0x${block2Size.toString(16)}`);
  const blobBase = block2Off + blobOffset;

  // locate the Comp header inside the model stream
  let H = -1;
  for (let o = 0x0c; o + 0xa7 <= modelEnd; o++) {
    if (u32(o) !== 0xffffffff) continue;
    const c = [];
    for (let k = 0; k < 10; k++) c.push(u32(o + 0x34 + k * 4));
    if (c[0] !== 0) continue;
    let mono = true;
    for (let k = 1; k < 10; k++) if (c[k] < c[k - 1]) mono = false;
    if (!mono) continue;
    const numMatBlocks = u32(o + 0x0c), numTex = u32(o + 0x14);
    const numFG = u32(o + 0x1c), numElem = u32(o + 0x20), numCorn = u32(o + 0x24);
    if (c[1] - c[0] !== numMatBlocks * 12) continue;
    if (c[3] - c[2] !== numTex * 8) continue;
    if (c[5] - c[4] !== numFG * 6) continue;
    if (c[6] - c[5] !== numElem * 2) continue;
    if (c[7] - c[6] !== numCorn * 6) continue;
    if (c[9] > blobSize) continue;
    H = o; break;
  }
  if (H < 0) throw new Error("Comp header not found");

  const comp = {
    headerOffset: H,
    numMatBlocks: u32(H + 0x0c), numTex: u32(H + 0x14), numFG: u32(H + 0x1c),
    numElem: u32(H + 0x20), numCorn: u32(H + 0x24),
    aPosStride: u32(H + 0x28), aNormStride: u32(H + 0x30),
    bboxMin: [f32(H + 0x5e), f32(H + 0x62), f32(H + 0x66)],
    bboxMax: [f32(H + 0x6a), f32(H + 0x6e), f32(H + 0x72)],
    scale: [f32(H + 0x76), f32(H + 0x7a), f32(H + 0x7e)],
    invScale: [f32(H + 0x82), f32(H + 0x86), f32(H + 0x8a)],
    centre: [f32(H + 0x8e), f32(H + 0x92), f32(H + 0x96)],
    hasSubdata: buf[H + 0xa6] !== 0,
    subdataOffset: H + 0xa7,
    subdataSize: modelEnd - 16 - (H + 0xa7),
    blobBase, blobSize,
  };

  const curs = [];
  for (let k = 0; k < 10; k++) curs.push(u32(H + 0x34 + k * 4));
  const NAMES = ["matBlocks", "cPos", "cTex", "cNorm", "mesh", "elem", "corn", "aPos", "aTex", "aNorm"];
  const sec = {};
  for (let i = 0; i < 10; i++) {
    const s = curs[i], e = (i === 9) ? blobSize : curs[i + 1];
    sec[NAMES[i]] = { start: s, size: e - s, base: blobBase + s };
  }
  comp.sec = sec;

  // MatBlocks
  const matBlocks = [];
  for (let i = 0; i < sec.matBlocks.size / 12; i++) {
    const o = sec.matBlocks.base + i * 12;
    matBlocks.push({ mat: u32(o), fgStart: u32(o + 4), fgCount: u32(o + 8) });
  }
  // Mesh records
  const mesh = [];
  for (let i = 0; i < sec.mesh.size / 6; i++) {
    const o = sec.mesh.base + i * 6;
    mesh.push({ A: buf.readUInt16LE(o), start: buf.readUInt16LE(o + 2), count: buf.readUInt16LE(o + 4) });
  }
  // Elem stream
  const elem = [];
  for (let i = 0; i < sec.elem.size / 2; i++) elem.push(buf.readUInt16LE(sec.elem.base + i * 2));
  // Corn
  const corn = [];
  for (let i = 0; i < sec.corn.size / 6; i++) {
    const o = sec.corn.base + i * 6;
    corn.push({ pos: i16(o), nrm: i16(o + 2), tex: i16(o + 4) });
  }
  // shared arrays
  const cPos = [], cTex = [], cNorm = [];
  for (let i = 0; i < sec.cPos.size / 12; i++) { const o = sec.cPos.base + i * 12; cPos.push([f32(o), f32(o + 4), f32(o + 8)]); }
  for (let i = 0; i < sec.cTex.size / 8; i++) { const o = sec.cTex.base + i * 8; cTex.push([f32(o), f32(o + 4)]); }
  for (let i = 0; i < sec.cNorm.size / 12; i++) { const o = sec.cNorm.base + i * 12; cNorm.push([f32(o), f32(o + 4), f32(o + 8)]); }

  // ---- topology decode (FUN_200b09e0) ----
  const groups = [];
  let triTotal = 0, malformed = 0;
  for (let g = 0; g < mesh.length; g++) {
    const r = mesh[g];
    let p = r.start;
    const end = r.start + r.count;
    const prims = [];
    while (p < end) {
      const h = elem[p];
      let mode, n;
      if (h & 0x8000) { mode = "fan"; n = (-h) & 0xffff; p += 1; }
      else if (h === 0) { mode = "tris"; n = elem[p + 1]; p += 2; }
      else { mode = "strip"; n = h; p += 1; }
      if (p + n > end) { malformed++; break; }
      const idx = [];
      for (let k = 0; k < n; k++) { const v = elem[p + k]; idx.push(v & 0x8000 ? v - 0x10000 : v); }
      p += n;
      const tris = mode === "tris" ? Math.floor(n / 3) : Math.max(0, n - 2);
      triTotal += tris;
      prims.push({ mode, n, idx, tris });
    }
    if (p !== end) malformed++;
    groups.push({ group: g, A: r.A, start: r.start, count: r.count, prims });
  }

  // ---- expand to a triangle index list ----
  const tris = [];   // {i0,i1,i2, group, A}
  for (const g of groups) {
    for (const pr of g.prims) {
      if (pr.mode === "tris") {
        for (let k = 0; k + 2 < pr.n; k += 3) tris.push({ i: [pr.idx[k], pr.idx[k + 1], pr.idx[k + 2]], group: g.group, A: g.A });
      } else if (pr.mode === "strip") {
        for (let k = 0; k + 2 < pr.n; k++) tris.push({ i: [pr.idx[k], pr.idx[k + 1], pr.idx[k + 2]], group: g.group, A: g.A });
      } else { // fan
        for (let k = 1; k + 1 < pr.n; k++) tris.push({ i: [pr.idx[0], pr.idx[k], pr.idx[k + 1]], group: g.group, A: g.A });
      }
    }
  }

  // ---- resolve corner attributes ----
  const corners = [];
  for (let i = 0; i < corn.length; i++) {
    const c = corn[i];
    const pos = c.pos < 0 ? (cPos[-c.pos - 1] || null) : null;
    const nrm = c.nrm < 0 ? (cNorm[-c.nrm - 1] || null) : null;
    const uv = c.tex < 0 ? (cTex[-c.tex - 1] || null) : null;
    corners.push({ posIndex: c.pos, nrmIndex: c.nrm, texIndex: c.tex, pos, nrm, uv });
  }

  comp.matBlocks = matBlocks; comp.mesh = mesh; comp.elem = elem; comp.corn = corn;
  comp.cPos = cPos; comp.cTex = cTex; comp.cNorm = cNorm;
  comp.groups = groups; comp.tris = tris; comp.corners = corners;
  comp.triTotal = triTotal; comp.malformed = malformed;
  comp.staticPos = cPos.length > 0 && corn.every(c => c.pos < 0);
  return comp;
}

module.exports = { parseGhb };

if (require.main === module) {
  const c = parseGhb(fs.readFileSync(process.argv[2]));
  console.log(`Comp @0x${c.headerOffset.toString(16)}  matBlocks=${c.numMatBlocks} tex=${c.numTex} faceGroups=${c.numFG} elems=${c.numElem} corners=${c.numCorn}`);
  console.log(`sections: ` + Object.entries(c.sec).map(([k, v]) => `${k}=${v.size}`).join(" "));
  console.log(`bbox ${c.bboxMin.map(v => v.toFixed(2))} .. ${c.bboxMax.map(v => v.toFixed(2))}`);
  console.log(`scale=${c.scale[0].toFixed(2)} invScale=${c.invScale[0].toFixed(6)} centre=${c.centre.map(v => v.toFixed(2))}`);
  console.log(`shared: cPos=${c.cPos.length} cTex=${c.cTex.length} cNorm=${c.cNorm.length}  subdata=${c.hasSubdata}(${c.subdataSize}B)`);
  console.log(`matBlocks: ${c.matBlocks.map(m => `mat${m.mat}[fg ${m.fgStart}..${m.fgStart + m.fgCount})`).join(" ")}`);
  console.log(`\nface groups:`);
  for (const g of c.groups)
    console.log(`  A=${String(g.A).padStart(2)} [${g.start}..${g.start + g.count}) : ` + g.prims.map(p => `${p.mode}(${p.n})`).join(" "));
  console.log(`\nTOTAL triangles=${c.triTotal} (expanded ${c.tris.length}) malformed=${c.malformed}`);
  let mn = 1e9, mx = -1e9;
  for (const t of c.tris) for (const v of t.i) { if (v < mn) mn = v; if (v > mx) mx = v; }
  console.log(`corner index range ${mn}..${mx} (corners=${c.numCorn})`);
  const negP = c.corn.filter(x => x.pos < 0).length, negN = c.corn.filter(x => x.nrm < 0).length, negT = c.corn.filter(x => x.tex < 0).length;
  console.log(`corn shared-index usage: pos=${negP} nrm=${negN} tex=${negT} of ${c.corn.length}`);
  console.log(`staticPos=${c.staticPos}`);
  if (process.argv[3]) {
    const g = c.groups[parseInt(process.argv[3], 10)];
    console.log(`\ngroup ${g.group} prims:`);
    for (const p of g.prims) console.log(`  ${p.mode}(${p.n}) tris=${p.tris} idx=[${p.idx.join(",")}]`);
  }
}
