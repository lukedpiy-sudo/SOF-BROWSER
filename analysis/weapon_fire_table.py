#!/usr/bin/env python3
"""Print the 31 weapon-table rows as a markdown table with the decoded fields.

    python3 analysis/weapon_fire_table.py

Field meanings are proved in analysis/weapon_fire.md; the values come from the
31 unrolled row-constructor calls (0x50064B38 .. 0x5006545F) of the builder
that starts at 0x50064B00.
"""
import struct
import sys

sys.path.insert(0, 'analysis')
from weapon_fire_str import getstr, BIN, BASE

DIS = 'analysis/rea/game_disasm.txt'
REGN = '0x50065470'

import re

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


# arg index (0 based) -> row offset
ARG2OFF = {
    0: 0x14,   # name / view model
    1: 0x54,   # world model
    2: 0x94,   # alt world model
    3: 0x114,  # (vestigial)
    4: 0x04,   # damage
    5: 0x08,   # pellets
    6: 0x0C,   # damage flags
    7: 0x118,  # heat rate (primary)
    8: 0x11C,  # heat rate (alt)
    9: 0x10,   # damage mod
    10: 0x128,  # fire handler
    11: 0x120,  # damage float 1
    12: 0x124,  # damage float 2
    13: 0x12C,  # precache callback
    14: 0x130,  # range
    15: 0xD4,   # tracer model
    16: 0x144,  # impact variant
    17: 0x148,  # weapon class index
}

NAMES = []
f = open(BIN, 'rb')
for i in range(14):
    f.seek(0x5014F3C0 - BASE + i * 4)
    v = struct.unpack('<I', f.read(4))[0]
    NAMES.append(getstr(v) if v else '(NULL)')


def clsname(idx):
    return NAMES[idx] if 0 <= idx < len(NAMES) else '?'


def sarg(v):
    i = ai(v)
    if 0x50100000 <= i <= 0x501A0000:
        t = getstr(i)
        return t if t else '""'
    return '0x%x' % i


def farg(v):
    return '%g' % f32(ai(v))


print('| # | class | view model (+0x14) | world model (+0x54) | dmg (+0x04) | pellets (+0x08) '
      '| flags (+0x0C) | mod (+0x10) | heat (+0x118/+0x11C) | range (+0x130) | d1 (+0x120) '
      '| d2 (+0x124) | tracer (+0xD4) | fire (+0x128) | precache (+0x12C) |')
print('|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|')
for idx, (insn, base, args, calladdr) in enumerate(regs):
    a = list(args)
    def f(k):
        return farg(a[k])
    def s(k):
        return sarg(a[k])
    def i(k):
        return '0x%x' % ai(a[k])
    print('| %d | %s | %s | %s | %s | %s | %s | %s | %s/%s | %s | %s | %s | %s | %s | %s |' % (
        idx, clsname(ai(a[17])), s(0), s(1), f(4), f(5), i(6), i(9), f(7), f(8), f(14),
        f(11), f(12), s(15), i(10), i(13)))
