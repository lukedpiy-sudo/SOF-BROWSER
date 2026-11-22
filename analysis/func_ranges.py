#!/usr/bin/env python3
"""The module's function ranges, taken from the REA/Ghidra decompile corpus.

    python3 analysis/func_ranges.py            # print every range
    python3 analysis/func_ranges.py 0x50019b20 # print the range of one fn

The corpus files `analysis/rea/ghoul_all/functions/0xADDR.c` carry a header
line

    // range: 0x500158a0-0x50016855 inclusive

which is Ghidra's own function extent -- the authoritative one.  A `ret`
based scan is *not* reliable here: MSVC lays a function out as a chain of
basic blocks, so an early `ret` sits in the middle of the function and the
code after it still belongs to it.
"""
import os
import re
import sys

CORPUS = 'analysis/rea/ghoul_all/functions'
RANGE = re.compile(r'^// range: 0x([0-9a-f]+)-0x([0-9a-f]+) inclusive', re.M)


def ranges():
    out = []
    for name in os.listdir(CORPUS):
        if not name.endswith('.c'):
            continue
        path = os.path.join(CORPUS, name)
        try:
            head = open(path, errors='replace').read(2000)
        except OSError:
            continue
        m = RANGE.search(head)
        if not m:
            continue
        lo = int(m.group(1), 16)
        hi = int(m.group(2), 16)
        out.append((lo, hi, name[:-2]))
    out.sort()
    return out


def main(argv):
    rs = ranges()
    if len(argv) > 1:
        want = int(argv[1], 16)
        for lo, hi, n in rs:
            if lo == want:
                print('0x%08x-0x%08x  (%d bytes)  %s' % (lo, hi, hi - lo + 1, n))
                return 0
        print('no range for 0x%08x' % want)
        return 1
    print('%d functions' % len(rs))
    for lo, hi, n in rs:
        print('0x%08x-0x%08x  %6d  %s' % (lo, hi, hi - lo + 1, n))
    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv))
