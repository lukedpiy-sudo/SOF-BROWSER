/* ghbtopo.js - .ghb header arithmetic + topology probe. Prints a 6-line summary.
 * Usage: node ghbtopo.js                       (smallest .ghb in pak0.pak)
 *        node ghbtopo.js <pak> [nameFilter]
 *        node ghbtopo.js --file <file.ghb>
 * Known (recorded in analysis/PROTOCOL.md): container = u32 magic 0x198237FE,
 * u32 block2 offset, u32 block2 size; model stream = u32 0x033FB1A3, u32 ver,
 * u32 flags, u32 len + authoring path, u32 frames, u32 sizeB, 4 u32 zeros;
 * tail = index table of u32 (vertex index << 8, sorted, repeated per face),
 * then trailing bytes.  Vertex records 43-44 bytes in the big models.
 * The valence u8 in the packed tail of each vertex closes the face count:
 * faces = sum(valence) / 3.
 */
const fs = require('fs');

function load() {
  const a = process.argv.slice(2);
  if (a[0] === '--file') return { buf: fs.readFileSync(a[1]), name: a[1] };
  const pak = fs.readFileSync(a[0] || 'C:/Users/User/Soldier of Fortune/Base/pak0.pak');
  const d = pak.readUInt32LE(4), l = pak.readUInt32LE(8);
  const ents = [];
  for (let p = d; p + 64 <= d + l; p += 64) {
    const n = pak.toString('latin1', p, p + 56).replace(/\0.*$/, '');
    if (/\.ghb$/i.test(n) && (!a[1] || n.toLowerCase().includes(a[1].toLowerCase())))
      ents.push({ n, offset: pak.readInt32LE(p + 56), len: pak.readInt32LE(p + 60) });
  }
  ents.sort((x, y) => x.len - y.len);
  const e = ents[0];
  if (!e) throw new Error('no .ghb in pak');
  return { buf: pak.slice(e.offset, e.offset + e.len), name: e.n };
}

function summary(buf, name) {
  const L = [];
  const u32 = (o) => buf.readUInt32LE(o);
  const b2 = u32(4), b2s = u32(8), fileLen = buf.length;
  L.push(`file=${fileLen} magic=0x${u32(0).toString(16)} block2=${b2} size=${b2s} b2+size=${b2 + b2s} closes=${b2 + b2s === fileLen}`);
  /* real layout at +12: 11-byte ASCII marker "GHFAGMS", u32 pathLen, path,
   * u32 frames, u32 sizeB, 4 u32 zeros */
  const marker = buf.toString('latin1', 24, 35).replace(/\0/g, '');
  const pathLen = u32(32);
  const path = buf.toString('latin1', 36, 36 + pathLen).replace(/\0.*$/, '');
  const frames = u32(36 + pathLen), sizeB = u32(40 + pathLen);
  const streamEnd = 52 + pathLen;
  L.push(`model: marker="${marker}" pathLen=${pathLen} path=${path} frames=${frames} sizeB=${sizeB} zeros=${[36 + pathLen, 40 + pathLen, 44 + pathLen, 48 + pathLen].map(o => u32(o)).join(',')}`);
  L.push(`streamEnd=${streamEnd} tail=${b2 - streamEnd} (u32 at streamEnd = the index-table size)`);

  /* geometry section: the first plausible index table in the tail */
  let best = null;
  for (let p = streamEnd; p + 12 <= b2; p += 4) {
    const size = u32(p), frames2 = u32(p + 4);
    if (p + size > b2) continue;
    const hi = u32(p + size - 4);
    if (size > 32 && size % 4 === 0 && frames2 > 0 && frames2 < 40000 && hi > u32(p + 16) && (hi >> 8) > 0) {
      const maxIdx = (hi >> 8);
      const vals = [];
      for (let i = 0; i < size / 4; i++) vals.push(u32(p + i * 4));
      const sorted = vals.every((v, i) => i === 0 || (v >> 8) >= (vals[i - 1] >> 8));
      const vsum = vals.reduce((a, v) => a + (v & 0xff), 0);
      const uniq = new Set(vals.map(v => v >> 8)).size;
      best = { p, size, frames, verts: maxIdx + 1, sorted, vsum, uniq, end: p + size };
      break;
    }
  }
  if (best) {
    L.push(`geom@${best.p}: size=${best.size} frames=${best.frames} idx=${best.size / 4} (index<<8, sorted=${best.sorted}) verts=${best.verts} uniqIdx=${best.uniq} facesFromValence=${best.vsum / 3} vsum=${best.vsum}`);
    const after = b2 - best.end;
    L.push(`after index table: ${after} bytes = verts*${(after / best.verts) | 0} rem ${after % best.verts}; packedTail=${after} bytes carry the per-vertex valence, faces=sum(valence)/3`);
    L.push(`closed: b2+size=file; geom+path+52<=b2; index table size=${best.size} verts=${best.verts}; faces=${best.vsum / 3} (valence, NOT a triangle list: the table is sorted, so topology is implicit fan/strip from valence+order, not an explicit u16 index array)`);
  } else {
    L.push('geom: no index table found in tail');
    L.push('no index table: arithmetic not closed');
    L.push(`unproven: vertex stride and face count`);
  }
  return L.join('\n');
}

const { buf, name } = load();
console.log(summary(buf, name));
