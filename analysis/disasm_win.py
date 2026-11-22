#!/usr/bin/env python3
"""Print a window of the module disassembly around an address.

    python3 analysis/disasm_win.py 0x5009abe0 [-30] [+10]
    python3 analysis/disasm_win.py 0x5009abe0 --call 0x500659c0

The address is the VA in gamex86.dll (image base 0x50000000).  The window is
printed with the raw objdump formatting so that the provenance is obvious.
"""
import re
import sys

DIS = 'analysis/rea/game_disasm.txt'
LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')


def load():
    rows = []
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if m:
                rows.append((int(m.group(1), 16), m.group(2)))
    return rows


def main(argv):
    if len(argv) < 2:
        print(__doc__)
        return 1
    addr = int(argv[1], 16)
    rows = load()
    idx = None
    for i, (a, _) in enumerate(rows):
        if a == addr:
            idx = i
            break
    if idx is None:
        print('0x%x is not an instruction address' % addr)
        return 1
    before, after = 20, 20
    if '--call' in argv:
        i = argv.index('--call')
        target = int(argv[i + 1], 16)
        after = 12
        before = 30
        for j, (a, txt) in enumerate(rows):
            if a == addr:
                idx = j
                break
        for k in range(max(0, idx - before), min(len(rows), idx + after)):
            a, txt = rows[k]
            mark = '>>' if a == addr else '  '
            print('%s %08x: %s' % (mark, a, txt))
        return 0
    lo = max(0, idx - before)
    hi = min(len(rows), idx + after)
    for k in range(lo, hi):
        a, txt = rows[k]
        mark = '>>' if a == addr else '  '
        print('%s %08x: %s' % (mark, a, txt))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
