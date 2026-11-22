#!/usr/bin/env python3
"""Find the module's vtables and report what sits in each slot.

    python3 analysis/vtable_scan.py [slot]      # slot defaults to 0x9c

The module (gamex86.dll) keeps C++-style vtables in .rdata/.data: an array
of .text addresses.  This script finds every such array and reports, for
each entry, the function it points at and that function's `ret` form, so a
virtual's calling convention (and hence its argument count) can be read
straight off the binary.

Function boundaries are derived from the `ret` instructions themselves, not
from the call-target map: a vtable entry is usually never called directly,
so it would be invisible to a call-target based map.

The address used is the module corpus (analysis/rea/game_disasm.txt,
gamex86.dll, image base 0x50000000).
"""
import bisect
import re
import struct
import sys

DIS = 'analysis/rea/game_disasm.txt'
LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')
BASE = 0x50000000
TEXT_LO, TEXT_HI = 0x50001000, 0x50116000
RAW_LO, RAW_HI = 0x116000, 0x15A000       # .rdata + .data (raw)


def load():
    rows = []
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if m:
                rows.append((int(m.group(1), 16), m.group(2).strip()))
    return rows


def main(argv):
    slot = int(argv[1], 16) if len(argv) > 1 else 0x9c
    rows = load()
    addrs = [a for a, _ in rows]
    text = dict(rows)
    rets = [a for a, t in rows if t.startswith('ret')]

    def func_of(a):
        """Return (start, ret_form) of the function containing a."""
        i = bisect.bisect_right(rets, a) - 1
        if i < 0:
            return None, '?'
        end = rets[i]
        # the function starts after the previous ret (skip the nop padding)
        j = bisect.bisect_left(addrs, end) + 1
        while j < len(rows) and text[rows[j][0]] in ('nop', 'xchg %ax,%ax'):
            j += 1
        start = rows[j][0] if j < len(rows) else None
        if start is None or a < start:
            return None, '?'
        k = bisect.bisect_left(addrs, a)
        while k < len(rows):
            aa, t = rows[k]
            if t.startswith('ret'):
                return start, t
            k += 1
        return start, '?'

    d = open('sof_target/gamex86.dll', 'rb').read()

    def is_text(p):
        return TEXT_LO <= p < TEXT_HI

    runs = []
    i = RAW_LO
    while i < RAW_HI:
        p = struct.unpack_from('<I', d, i)[0]
        if is_text(p):
            j = i
            n = 0
            while j < RAW_HI and is_text(struct.unpack_from('<I', d, j)[0]):
                j += 4
                n += 1
            if n * 4 > slot:
                runs.append((i, n))
            i = j
        else:
            i += 4
    for off, n in runs:
        p = struct.unpack_from('<I', d, off + slot)[0]
        if not is_text(p):
            continue
        st, rf = func_of(p)
        print('vtable 0x%08x entries=%-4d  +0x%02x = 0x%08x  fn=0x%08x  ret=%s'
              % (BASE + off, n, slot, p, st or 0, rf))


if __name__ == '__main__':
    sys.exit(main(sys.argv))
