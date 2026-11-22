#!/usr/bin/env python3
"""Annotate a module function's stack-argument references.

    python3 analysis/esp_annot.py 0x50100b10 0x50100e40

For every `0xNN(%esp)` read/write in the range it works out which
*stack argument* of the function that offset refers to, by tracking
`sub $imm,%esp`, `push`, `pop`, `add $imm,%esp` and `leave` through the
instruction stream.

Argument numbering follows the x86 convention used by the module:
    [entry_esp]      = return address
    [entry_esp+4]    = arg 1
    [entry_esp+4*N]  = arg N
so a read of `[esp+X]` is arg (X - esp_delta) / 4, where esp_delta is the
current esp minus the entry esp.  A negative result means a local.

The address used is the module corpus (analysis/rea/game_disasm.txt,
gamex86.dll, image base 0x50000000); the script verifies nothing about the
binary itself -- it only reads the disassembly.
"""
import re
import sys

DIS = 'analysis/rea/game_disasm.txt'
LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')

MEM = re.compile(r'(-?0x[0-9a-f]+)?\(%esp\)')
IMM = re.compile(r'\$(-?0x[0-9a-f]+|\d+)')
NUM = re.compile(r'^-?(0x[0-9a-f]+|\d+)$')


def val(tok):
    if tok is None:
        return None
    if NUM.match(tok):
        return int(tok, 16) if tok.startswith('0x') else int(tok)
    return None


def load(lo, hi):
    rows = []
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if not m:
                continue
            a = int(m.group(1), 16)
            if lo <= a < hi:
                rows.append((a, m.group(2).strip()))
            elif a >= hi:
                break
    return rows


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    lo = int(argv[1], 16)
    hi = int(argv[2], 16)
    rows = load(lo, hi)
    delta = 0          # current esp minus entry esp
    for a, t in rows:
        note = []
        # ---- describe the stack slots the instruction touches -------------
        for mm in MEM.finditer(t):
            off = val(mm.group(1))
            if off is None:
                continue
            abs_off = delta + off          # relative to the entry esp
            if abs_off >= 0 and abs_off % 4 == 0:
                n = abs_off // 4
                if n == 0:
                    note.append('[esp+0x%x]=retaddr' % off)
                else:
                    note.append('[esp+0x%x]=arg%d' % (off, n))
            else:
                note.append('[esp+0x%x]=local(%+d)' % (off, abs_off))
        # ---- keep esp in sync --------------------------------------------
        mn = t.split()[0] if t.split() else ''
        ops = t[len(mn):].strip()
        if mn in ('sub', 'add') and ops.startswith('$'):
            parts = ops.replace(',', ' ').split()
            imm = val(parts[0].lstrip('$')) if parts else None
            if imm is not None:
                if mn == 'sub':
                    delta -= imm
                else:
                    delta += imm
        elif mn == 'push':
            delta -= 4
        elif mn == 'pop':
            delta += 4
        elif mn == 'leave':
            delta = 0
        print('%08x: %-46s%s' % (a, t, ('   ; ' + ' '.join(note)) if note else ''))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
