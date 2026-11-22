#!/usr/bin/env python3
"""The module's vtable map, with each slot's *calling convention*.

    python3 analysis/vtable_map.py [slot]      # slot defaults to 0x9c

A virtual's argument count is its stack purge: `ret $0x30` means 12
stack dwords (12 arguments), `ret $0x1c` means 7.  The map therefore has
to answer two questions for every vtable:

* which function sits in the slot, and
* how many arguments that function takes.

Function extents come from `analysis/func_ranges.py` (Ghidra's own extents,
read out of the REA corpus).  For a function the corpus does not cover, the
extent is bounded by the next known function start, and the `ret` forms
inside it are collected -- a function may contain several exits, so the
*set* of ret forms is what matters.
"""
import bisect
import collections
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from func_ranges import ranges as corpus_ranges

DIS = 'analysis/rea/game_disasm.txt'
LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')
STORE = re.compile(r'movl\s+\$0x(501[0-9a-f]{5}),\(%e[a-z][a-z]\)')
CALL = re.compile(r'\b(call|jmp)\s+\*?0x([0-9a-f]+)')
BASE = 0x50000000
TEXT_LO, TEXT_HI = 0x50001000, 0x50116000
RAW_LO, RAW_HI = 0x116000, 0x15A000


def load_rows():
    rows = []
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if m:
                rows.append((int(m.group(1), 16), m.group(2).strip()))
    return rows


def main(argv):
    slot = int(argv[1], 16) if len(argv) > 1 else 0x9c
    rows = load_rows()
    text = dict(rows)
    addrs = [a for a, _ in rows]
    d = open('sof_target/gamex86.dll', 'rb').read()

    installed = collections.defaultdict(list)
    for a, t in rows:
        m = STORE.search(t)
        if m:
            installed[int(m.group(1), 16)].append(a)

    # --- known function starts -------------------------------------------
    starts = set()
    for a, t in rows:
        m = CALL.search(t)
        if m:
            v = int(m.group(2), 16)
            if TEXT_LO <= v < TEXT_HI:
                starts.add(v)
    for off in range(RAW_LO, RAW_HI, 4):
        p = struct.unpack_from('<I', d, off)[0]
        if TEXT_LO <= p < TEXT_HI:
            starts.add(p)
    rs = corpus_ranges()
    for lo, hi, _ in rs:
        starts.add(lo)
    for i, (a, t) in enumerate(rows):
        if t.startswith('ret'):
            j = i + 1
            while j < len(rows) and text[rows[j][0]].startswith('nop'):
                j += 1
            if j < len(rows):
                starts.add(rows[j][0])
    S = sorted(starts)

    corpus = {lo: (lo, hi) for lo, hi, _ in rs}

    def extent(t):
        """(start, end) of the function containing t."""
        i = bisect.bisect_right(S, t) - 1
        if i < 0:
            return None, None
        start = S[i]
        nxt = S[i + 1] if i + 1 < len(S) else addrs[-1] + 1
        if start in corpus:
            lo, hi = corpus[start]
            if lo <= t <= hi:
                return lo, hi
        return start, nxt

    def ret_forms(t):
        lo, hi = extent(t)
        if lo is None:
            return '?'
        forms = []
        for a, txt in rows:
            if a < lo:
                continue
            if a > hi:
                break
            if txt.startswith('ret') and txt not in forms:
                forms.append(txt)
        return '/'.join(forms) if forms else '?'

    def fn_start(t):
        lo, hi = extent(t)
        return lo

    print('%-12s %-4s %-11s %-11s %s' % ('vtable', 'inst', 'slot', 'target', 'fn / ret'))
    for vt in sorted(installed):
        off = vt - BASE
        if off + slot + 4 > len(d):
            continue
        p = struct.unpack_from('<I', d, off + slot)[0]
        if not (TEXT_LO <= p < TEXT_HI):
            continue
        print('0x%08x %-4d +0x%03x     0x%08x   fn=0x%08x ret=%s'
              % (vt, len(installed[vt]), slot, p, fn_start(p) or 0, ret_forms(p)))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
