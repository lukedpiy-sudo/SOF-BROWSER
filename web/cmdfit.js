"use strict";
const fs = require("fs");
const { encodeCmd } = require("./cmdenc.js");
function toBits(buf) { let s = ""; for (let i = 0; i < buf.length; i++) for (let b = 0; b < 8; b++) s += ((buf[i] >> b) & 1); return s; }
function mkcmd(v) {
  const c = Buffer.alloc(24);
  c[0] = v[0]; c[1] = v[1];
  c.writeUInt16LE(v[2] & 0xffff, 4); c.writeUInt16LE(v[3] & 0xffff, 6); c.writeUInt16LE(v[4] & 0xffff, 8);
  c.writeInt16LE(v[5], 0x0a); c.writeInt16LE(v[6], 0x0c); c.writeInt16LE(v[7], 0x0e);
  return c;
}
const lines = fs.readFileSync("cmdvectors.txt", "latin1").split(/\r?\n/).filter(x => x.length);
let bad = 0;
for (const line of lines) {
  const i = line.lastIndexOf("=");
  const v = line.slice(0, i).split(",").map(Number);
  const o = line.slice(i + 1);
  const mine = toBits(encodeCmd(mkcmd(v), Buffer.alloc(24))).slice(0, o.length);
  const ok = mine === o;
  if (!ok) bad++;
  console.log((ok ? "OK   " : "DIFF ") + line.slice(0, i));
  if (!ok) { console.log("  engine: " + o); console.log("  mine  : " + mine); }
}
console.log(bad + " / " + lines.length + " differ");
