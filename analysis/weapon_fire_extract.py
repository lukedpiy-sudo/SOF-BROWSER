#!/usr/bin/env python3
"""Extract the 31 weapon-table registrations (calls to 0x50065470) from
analysis/rea/game_disasm.txt and print them as a table.

Row layout proven from the registration function at 0x50065470 (see
analysis/weapon_fire.md section 1):

  arg1  -> row+0x14   string
  arg2  -> row+0x54   string
  arg3  -> row+0x94   string
  arg4  -> row+0x114
  arg5  -> row+0x04
  arg6  -> row+0x08
  arg7  -> row+0x0C
  arg8  -> row+0x118  primary fire delay
  arg9  -> row+0x11C  alternate fire delay
  arg10 -> row+0x10
  arg11 -> row+0x128  primary fire handler
  arg12 -> row+0x120
  arg13 -> row+0x124
  arg14 -> row+0x12C  alternate fire handler
  arg15 -> row+0x130
  arg16 -> row+0xD4   string
  arg17 -> row+0x144
  arg18 -> row+0x148
"""
import re
import sys

DIS = 'analysis/rea/game_disasm.txt'
REGN = '0x50065470'

push_re = re.compile(r'^([0-9a-f]+):\s+push\s+\$?(0x[0-9a-f]+|\d+)\s*$')
mov_re = re.compile(r'^([0-9a-f]+):\s+mov\s+\$(0x[0-9a-f]+),%ecx\s*$')
call_re = re.compile(r'^([0-9a-f]+):\s+call\s+0x([0-9a-f]+)\s*$')

lines = []
with open(DIS) as f:
    for line in f:
        lines.append(line.rstrip('\n'))

regs = []
for i, line in enumerate(lines):
    m = call_re.match(line)
    if not m or ('0x' + m.group(2)) != REGN:
        continue
    pushes = []          # in push order (first pushed first)
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
    if len(pushes) != 18:
        print('WARN: only %d pushes before %s' % (len(pushes), line), file=sys.stderr)
        continue
    # we scanned backwards, so pushes[0] is the LAST push == arg1
    args = [p[1] for p in pushes]
    regs.append((rowbase[0], rowbase[1], args, m.group(1)))

# reverse register order so arg1..arg18
def as_int(s):
    return int(s, 16) if s.startswith('0x') else int(s)

def f32(v):
    import struct
    return struct.unpack('<f', struct.pack('<I', v & 0xFFFFFFFF))[0]

ROWFIELDS = [
    ('a1', 0x14), ('a2', 0x54), ('a3', 0x94), ('a4', 0x114),
    ('a5', 0x04), ('a6', 0x08), ('a7', 0x0C),
    ('a8', 0x118), ('a9', 0x11C), ('a10', 0x10),
    ('a11', 0x128), ('a12', 0x120), ('a13', 0x124), ('a14', 0x12C),
    ('a15', 0x130), ('a16', 0xD4), ('a17', 0x144), ('a18', 0x148),
]

for idx, (insn, base, args, calladdr) in enumerate(regs):
    basei = as_int(base)
    print('=== row %d  base=%s (0x%08X)  call@%s' % (idx, base, basei, calladdr))
    for (nm, off), v in zip(ROWFIELDS, args):
        vi = as_int(v)
        extra = ''
        if 0x50159000 <= vi <= 0x5015C000 or 0x50140000 <= vi <= 0x5014FFFF:
            extra = '  (likely string ptr)'
        elif vi in (0x50000000,):
            pass
        elif vi > 0x50000000 and vi < 0x50200000:
            extra = '  (likely code ptr)'
        else:
            try:
                extra = '  float=%g' % f32(vi)
            except Exception:
                pass
        print('   %-4s -> +0x%03X : %-12s%s' % (nm, off, v, extra))
