#!/usr/bin/env python3
"""Dump a raw disassembly range from the module corpus.

    python3 analysis/disasm_range.py 0x50106890 0x50106c00

Prints every objdump instruction whose VA is in [lo, hi) from
analysis/rea/game_disasm.txt (gamex86.dll, image base 0x50000000).
"""
import re
import sys

DIS = 'analysis/rea/game_disasm.txt'
LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    lo = int(argv[1], 16)
    hi = int(argv[2], 16)
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if not m:
                continue
            a = int(m.group(1), 16)
            if lo <= a < hi:
                print('%08x: %s' % (a, m.group(2)))
            elif a >= hi:
                break
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
