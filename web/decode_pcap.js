/*
 * decode_pcap.js - decode SoF usercmd bitstreams from a tcpdump capture.
 * Usage: node web/decode_pcap.js <pcap>
 * Prints candidate (msec, buttons, forward, side, up) triples found in
 * client->server UDP payloads.
 */
"use strict";
const fs = require("fs");
const buf = fs.readFileSync(process.argv[2]);
if (buf.readUInt32LE(0) !== 0xa1b2c3d4) throw new Error("not pcap");
let o = 24;
const packets = [];
while (o + 16 <= buf.length) {
  const tsS = buf.readUInt32LE(o), tsU = buf.readUInt32LE(o + 4);
  const caplen = buf.readUInt32LE(o + 8), wirelen = buf.readUInt32LE(o + 12);
  o += 16;
  if (caplen > buf.length - o) break;
  packets.push({ t: tsS + tsU / 1e6, data: buf.slice(o, o + caplen) });
  o += caplen;
}
console.log("packets", packets.length);

// extract UDP payloads from client (src port != 29000, dst port 29000)
const payloads = [];
for (const p of packets) {
  const d = p.data;
  if (d.length < 42) continue;
  // Ethernet: 14, IPv4: 20, UDP: 8
  if (d[12] !== 0x08 || d[13] !== 0x00) continue;
  const ihl = (d[14] & 0xf) * 4;
  const ip = 14, u = ip + ihl;
  if (d[ip + 9] !== 17) continue;
  const sport = d.readUInt16BE(u), dport = d.readUInt16BE(u + 2);
  const ulen = d.readUInt16BE(u + 4);
  if (dport !== 29000 || sport === 29000) continue;
  const pay = d.slice(u + 8, u + ulen);
  if (pay.length > 8) payloads.push({ t: p.t, pay });
}
console.log("client payloads", payloads.length);

function reader(bytes, bit0) {
  let bit = bit0;
  return {
    get(n) {
      let v = 0;
      for (let i = 0; i < n; i++, bit++) {
        const b = bytes[bit >> 3];
        if (b === undefined) return null;
        if ((b >> (bit & 7)) & 1) v |= 1 << i;
      }
      return v;
    },
    pos() { return bit; }
  };
}
function decodeCmd(r) {
  const c = { angles: [], moves: [] };
  for (let i = 0; i < 3; i++) {
    const ch = r.get(1); if (ch === null) return null;
    c.angles.push(ch ? (r.get(12) << 4) : 0);
  }
  for (let i = 0; i < 3; i++) {
    const ch = r.get(1); if (ch === null) return null;
    const raw = ch ? r.get(10) : 0x1fe;
    if (raw === null) return null;
    c.moves.push(raw - 0x1fe);
  }
  const bch = r.get(1); if (bch === null) return null;
  c.buttons = bch ? r.get(8) : 0;
  const f3 = r.get(1); if (f3 === null) return null;
  c.flags3 = f3 ? (r.get(1) ? -1 : 1) : 0;
  const f2 = r.get(1); if (f2 === null) return null;
  c.flags2 = f2 ? r.get(5) : 0;
  c.msec = r.get(8);
  if (c.msec === null) return null;
  for (let i = 0; i < 2; i++) {
    const ch = r.get(1); if (ch === null) return null;
    if (ch) r.get(32);
  }
  return c;
}

// For each payload, try every bit offset and decode 3 commands; keep the
// decode whose msecs are plausible (1..100) and whose moves are in range.
let results = [];
for (const { t, pay } of payloads) {
  let best = null;
  for (let bit = 0; bit < Math.min(pay.length * 8, 400); bit++) {
    const r = reader(pay, bit);
    const cs = [];
    let ok = true;
    for (let i = 0; i < 3; i++) {
      const c = decodeCmd(r);
      if (!c || c.msec < 1 || c.msec > 100) { ok = false; break; }
      cs.push(c);
    }
    if (!ok) continue;
    // prefer decodes where the last command has sizable movement
    const score = Math.abs(cs[2].moves[0]) + Math.abs(cs[2].moves[1]) + Math.abs(cs[2].moves[2]);
    if (!best || score > best.score) best = { bit, cs, score };
  }
  if (best) results.push({ t, bit: best.bit, cs: best.cs });
}
console.log("decoded", results.length);
// print last 25
for (const r of results.slice(-25)) {
  console.log(r.t.toFixed(2), "bit", r.bit, r.cs.map(c =>
    `msec=${c.msec} btn=${c.buttons} fwd=${c.moves[0]} side=${c.moves[1]} up=${c.moves[2]}`).join(" | "));
}
