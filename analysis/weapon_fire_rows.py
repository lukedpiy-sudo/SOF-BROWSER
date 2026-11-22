#!/usr/bin/env python3
"""Dump the 31 weapon-table rows in readable form (see analysis/weapon_fire.md)."""
import re
import struct
import sys

sys.path.insert(0, 'analysis')
from weapon_fire_str import getstr, BIN, BASE

DIS = 'analysis/rea/game_disasm.txt'
REGN = '0x50065470'

push_re = re.compile(r'^([0-9a-f]+):\s+push\s+\$?(0x[0-9a-f]+|\d+)\s*$')
mov_re = re.compile(r'^([0-9a-f]+):\s+mov\s+\$(0x[0-9a-f]+),%ecx\s*$')
call_re = re.compile(r'^([0-9a-f]+):\s+call\s+0x([0-9a-f]+)\s*$')

lines = [l.rstrip('\n') for l in open(DIS)]

regs = []
for i, line in enumerate(lines):
    m = call_re.match(line)
    if not m or ('0x' + m.group(2)) != REGN:
        continue
    pushes = []
    rowbase = None
    j = i - 1
    while j >= 0 and len(pushes) < 18:
        l = lines[j]
        pm = push_re.match(l)
        if pm:
            pushes.append((pm.group(1), pm.group(2)))
            j -= 1
            continue
        mm = mov_re.match(l)
        if mm and rowbase is None:
            rowbase = (mm.group(1), mm.group(2))
            j -= 1
            continue
        break
    assert len(pushes) == 18, line
    regs.append((rowbase[0], rowbase[1], [p[1] for p in pushes], m.group(1)))

def ai(s):
    return int(s, 16) if s.startswith('0x') else int(s)

def f32(v):
    return struct.unpack('<f', struct.pack('<I', v & 0xFFFFFFFF))[0]

ROWFIELDS = [
    ('a1', 0x14), ('a2', 0x54), ('a3', 0x94), ('a4', 0x114),
    ('a5', 0x04), ('a6', 0x08), ('a7', 0x0C),
    ('a8', 0x118), ('a9', 0x11C), ('a10', 0x10),
    ('a11', 0x128), ('a12', 0x120), ('a13', 0x124), ('a14', 0x12C),
    ('a15', 0x130), ('a16', 0xD4), ('a17', 0x144), ('a18', 0x148),
]

# weapon class-name table at 0x5014F3C0
NAMES = []
f = open(BIN, 'rb')
for i in range(14):
    f.seek(0x5014F3C0 - BASE + i * 4)
    v = struct.unpack('<I', f.read(4))[0]
    NAMES.append(getstr(v) if v else '(NULL)')

def clsname(idx):
    if 0 <= idx < len(NAMES):
        return NAMES[idx]
    return '?'

def fmt(v):
    i = ai(v)
    if 0x50100000 <= i <= 0x501A0000:
        return '%s "%s"' % (v, getstr(i))
    if 0x50000000 <= i < 0x50200000:
        return v
    fl = f32(i)
    if fl == int(fl) and abs(fl) < 1e6:
        return '%s (%g)' % (v, fl)
    return '%s (%g)' % (v, fl)

for idx, (insn, base, args, calladdr) in enumerate(regs):
    basei = ai(base)
    d = dict((nm, args[k]) for k, (nm, off) in enumerate(ROWFIELDS))
    off = dict((nm, o) for nm, o in ROWFIELDS)
    print('=== row %-2d  base=0x%08X  reg@%s  call@%s' % (idx, basei, insn, calladdr))
    for nm, o in ROWFIELDS:
        print('    %-4s +0x%03X : %s' % (nm, o, fmt(d[nm])))
    print('    typeidx(a18)=%s -> class %r' % (d['a18'], clsname(ai(d['a18']))))
    print()
