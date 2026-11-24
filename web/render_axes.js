/*
 * render_axes.js - software-render the PISTOL1.GHB triangles from 6
 * orthogonal directions so the model's true orientation can be inspected
 * without the browser renderer.  Writes shots/axes.png
 */
"use strict";
const fs = require("fs"), GH = require("./ghb.js");
const b = fs.readFileSync("Soldier of Fortune/Base/pak0.pak");
const model = process.argv[2] || "pistol";
const m = model === "box"
  ? b.slice(51784824, 51784824 + 1998)
  : b.slice(19145984, 19145984 + 257912);
const g = GH.parseGeometry(m, GH.parseGhoul(m));
const a = GH.decodeAnimation(m, g.comp);
const FR = parseInt(process.argv[3] || "120", 10), F = a ? a.frames : 1;
const pos = [];
if (g.staticPositions) {
  for (const c of g.corners) pos.push(c.pos || [0, 0, 0]);
} else {
  for (let i = 0; i < a.verts; i++) {
    const o = (i * F + FR) * 3;
    pos.push([a.pos[o], a.pos[o + 1], a.pos[o + 2]]);
  }
}
// triangles index the CORNER array; for static models corner -> shared pos
const cornerPos = g.staticPositions
  ? g.corners.map(c => c.pos || [0, 0, 0])
  : g.corners.map(c => c.posIndex < 0 ? (c.pos || [0, 0, 0]) : pos[c.posIndex]);
const W = 240, H = 240, views = [
  { n: "+X (look -X)", d: [1, 0, 0], u: [0, 0, 1] },
  { n: "-X (look +X)", d: [-1, 0, 0], u: [0, 0, 1] },
  { n: "+Y (look -Y)", d: [0, 1, 0], u: [0, 0, 1] },
  { n: "-Y (look +Y)", d: [0, -1, 0], u: [0, 0, 1] },
  { n: "+Z (look -Z)", d: [0, 0, 1], u: [0, 1, 0] },
  { n: "-Z (look +Z)", d: [0, 0, -1], u: [0, 1, 0] }
];
// simple PPM canvas per view
const images = views.map(() => ({ buf: Buffer.alloc(W * H * 3), z: new Float32Array(W * H).fill(1e9) }));
for (let vi = 0; vi < views.length; vi++) {
  const v = views[vi], im = images[vi];
  for (let y = 0; y < H; y++) for (let x = 0; x < W; x++) {
    const o = (y * W + x) * 3; im.buf[o] = 20; im.buf[o + 1] = 20; im.buf[o + 2] = 24;
  }
  // camera basis
  const d = v.d, u = v.u;
  const r = [u[1] * d[2] - u[2] * d[1], u[2] * d[0] - u[0] * d[2], u[0] * d[1] - u[1] * d[0]];
  // scale so a 40-unit extent fits
  const S = W / 44;
  const proj = p => {
    const x = p[0] * r[0] + p[1] * r[1] + p[2] * r[2];
    const y = p[0] * u[0] + p[1] * u[1] + p[2] * u[2];
    const z = p[0] * d[0] + p[1] * d[1] + p[2] * d[2];
    return { x: W / 2 + x * S, y: H / 2 - y * S, z };
  };
  const pts = (cornerPos || pos).map(proj);
  // triangles
  const gfilter = process.argv[4] ? process.argv[4].split(",").map(Number) : null;
  for (const t of g.tris) {
    if (gfilter && gfilter.indexOf(t.group) < 0) continue;
    const A = pts[t.i[0]], B = pts[t.i[1]], C = pts[t.i[2]];
    if (!A || !B || !C) continue;
    const minx = Math.max(0, Math.floor(Math.min(A.x, B.x, C.x)));
    const maxx = Math.min(W - 1, Math.ceil(Math.max(A.x, B.x, C.x)));
    const miny = Math.max(0, Math.floor(Math.min(A.y, B.y, C.y)));
    const maxy = Math.min(H - 1, Math.ceil(Math.max(A.y, B.y, C.y)));
    const area = (B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x);
    if (Math.abs(area) < 1e-6) continue;
    const shade = Math.min(255, 90 + Math.abs(area) * 2);
    for (let y = miny; y <= maxy; y++) for (let x = minx; x <= maxx; x++) {
      const w0 = ((B.x - A.x) * (y + 0.5 - A.y) - (B.y - A.y) * (x + 0.5 - A.x)) / area;
      const w1 = ((C.x - B.x) * (y + 0.5 - B.y) - (C.y - B.y) * (x + 0.5 - B.x)) / area;
      const w2 = 1 - w0 - w1;
      if (w0 < -0.001 || w1 < -0.001 || w2 < -0.001) continue;
      const z = w1 * A.z + w2 * B.z + w0 * C.z;
      const o = y * W + x;
      if (z < im.z[o]) { im.z[o] = z; const q = o * 3; im.buf[q] = shade; im.buf[q + 1] = shade; im.buf[q + 2] = shade; }
    }
  }
}
// combine into a 3x2 PPM
const outW = W * 3, outH = H * 2;
const head = Buffer.from("P6\n" + outW + " " + outH + "\n255\n");
const out = Buffer.alloc(outW * outH * 3);
for (let vi = 0; vi < 6; vi++) {
  const ox = (vi % 3) * W, oy = Math.floor(vi / 3) * H;
  for (let y = 0; y < H; y++) for (let x = 0; x < W; x++) {
    const s = (y * W + x) * 3, t = ((y + oy) * outW + (x + ox)) * 3;
    out[t] = images[vi].buf[s]; out[t + 1] = images[vi].buf[s + 1]; out[t + 2] = images[vi].buf[s + 2];
  }
}
fs.writeFileSync("shots/axes.ppm", Buffer.concat([head, out]));
console.log(views.map((v, i) => i + " " + v.n).join(" | "));
