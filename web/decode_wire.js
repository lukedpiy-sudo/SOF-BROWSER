/*
 * decode_wire.js - decode stock SoF user commands from a tcpdump pcap.
 * usage: node web/decode_wire.js <pcap>
 */
"use strict";
const fs = require("fs");
const b = fs.readFileSync(process.argv[2]);
if (b.readUInt32LE(0) !== 0xa1b2c3d4) throw new Error("not pcap");
let o = 24; const ps = [];
while (o + 16 <= b.length) {
  const cl = b.readUInt32LE(o + 8); o += 16;
  if (cl > b.length - o) break;
  ps.push({ t: b.readUInt32LE(o - 16) + b.readUInt32LE(o - 12) / 1e6, d: b.slice(o, o + cl) });
  o += cl;
}
function bits(buf) {
  let bit = 0;
  return {
    get(n) {
      let v = 0;
      for (let i = 0; i < n; i++, bit++) {
        const by = buf[bit >> 3];
        if (by === undefined) throw new Error("past end");
        if ((by >> (bit & 7)) & 1) v |= 1 << i;
      }
      return v;
    },
    at() { return bit; }
  };
}
function decodeCmd(r) {
  const angles = [], moves = [];
  for (let i = 0; i < 3; i++) angles.push(r.get(1) ? (r.get(12) << 4) : 0);
  for (let i = 0; i < 3; i++) moves.push(r.get(1) ? r.get(10) - 0x1fe : 0);
  const buttons = r.get(1) ? r.get(8) : 0;
  const f3 = r.get(1) ? (r.get(1) ? -1 : 1) : 0;
  const flags2 = r.get(1) ? r.get(5) : 0;
  const msec = r.get(8);
  const extra = [];
  for (let i = 0; i < 2; i++) extra.push(r.get(1) ? r.get(32) : 0);
  return { angles, moves, buttons, f3, flags2, msec, extra };
}
const out = [];
for (const { t, d } of ps) {
  if (d.length < 42 || d[12] !== 8 || d[13] !== 0) continue;
  const u = 14 + (d[14] & 15) * 4;
  if (d[23] !== 17) continue;
  const sp = d.readUInt16BE(u), dp = d.readUInt16BE(u + 2), ul = d.readUInt16BE(u + 4);
  if (dp !== 29000 || sp === 29000) continue;
  const pay = d.slice(u + 8, u + ul);
  // netchan(4) + ack(4) + seed(2) + type(1) + ck(1) + u32seq(4) = 16
  if (pay.length < 20 || pay[10] !== 2) continue;
  const seq = pay.readUInt32LE(12);
  const body = pay.slice(16);
  try {
    const r = bits(body);
    const cmds = [decodeCmd(r), decodeCmd(r), decodeCmd(r)];
    if (cmds.every(c => c.msec > 0 && c.msec <= 100)) {
      out.push({ t, seq, cmds, end: r.at() });
    }
  } catch (e) { }
}
console.log("decoded move messages", out.length);
for (const m of out) {
  console.log(m.t.toFixed(2), "seq", m.seq, "bits", m.end,
    m.cmds.map(c => `msec=${c.msec} btn=${c.buttons} fwd=${c.moves[0]} side=${c.moves[1]} up=${c.moves[2]} yaw=${(c.angles[1] >> 4)}`).join(" | "));
}
