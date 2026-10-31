// Dump SoF.exe's svc-name pointer table at 0x2011e7a0 (GhidRA-mapped base).
const fs = require('fs');
const p = process.argv[2] || 'C:\\Users\\User\\q2work\\sof2\\sof_target\\SoF.exe';
const b = fs.readFileSync(p);
const peOff = b.readUInt32LE(0x3c);
const numSec = b.readUInt16LE(peOff + 6);
const optOff = peOff + 24;
const imageBase = b.readUInt32LE(optOff + 28);
const secOff = optOff + b.readUInt16LE(peOff + 20);
const secs = [];
for (let i = 0; i < numSec; i++) {
  const o = secOff + i * 40;
  secs.push({
    name: b.toString('utf8', o, o + 8).replace(/\0+$/, ''),
    vsize: b.readUInt32LE(o + 8),
    vaddr: b.readUInt32LE(o + 12),
    rawsize: b.readUInt32LE(o + 16),
    rawptr: b.readUInt32LE(o + 20)
  });
}
function rvaFromAddr(a) { return a - imageBase; }
function offFromRva(r) {
  for (const s of secs)
    if (r >= s.vaddr && r < s.vaddr + Math.max(s.vsize, s.rawsize))
      return s.rawptr + (r - s.vaddr);
  return -1;
}
function strAt(a) {
  const off = offFromRva(a - imageBase);
  if (off < 0) return null;
  let s = '';
  let i = off;
  while (b[i] && s.length < 64) { s += String.fromCharCode(b[i]); i++; }
  return s;
}
console.log('imageBase=0x' + imageBase.toString(16));
const TBL = 0x2011e7a0;
const base = 0x20000000; // GhidRA mapping address used by the decompiles
for (let i = 0; i <= 40; i++) {
  // table entry stored at mapping addr TBL + i*4 -> same file bytes as RVA (TBL+i*4-0x20000000)
  const o = offFromRva(TBL + i * 4 - base);
  if (o < 0) { console.log(i + ' <unmapped>'); continue; }
  const ptr = b.readUInt32LE(o);
  console.log('0x' + i.toString(16) + ' -> ' + JSON.stringify(strAt(ptr)) + ' (ptr 0x' + ptr.toString(16) + ')');
}
