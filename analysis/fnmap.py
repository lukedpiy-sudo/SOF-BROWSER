#!/usr/bin/env python3
"""Map one or more addresses to the decompiled function that contains them.

    python3 analysis/fnmap.py 0x2007a295 0x2007aee2 0x2007b48e

The function files under analysis/rea/{sof_all,ghoul_all}/functions carry a
"// range: 0xSTART-0xEND inclusive" header, so the containment test is exact.
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DIRS = [
    os.path.join(ROOT, 'analysis', 'rea', 'sof_all', 'functions'),
    os.path.join(ROOT, 'analysis', 'rea', 'ghoul_all', 'functions'),
]

RANGE = re.compile(r'^// range: 0x([0-9a-f]+)-0x([0-9a-f]+) inclusive', re.M)


def load():
    table = []
    for d in DIRS:
        if not os.path.isdir(d):
            continue
        for name in sorted(os.listdir(d)):
            if not name.endswith('.c'):
                continue
            path = os.path.join(d, name)
            head = open(path, 'r', errors='replace').read(2000)
            m = RANGE.search(head)
            if not m:
                continue
            table.append((int(m.group(1), 16), int(m.group(2), 16), path))
    return table


def main():
    table = load()
    for arg in sys.argv[1:]:
        addr = int(arg, 16)
        hits = [t for t in table if t[0] <= addr <= t[1]]
        if not hits:
            print(f"{arg}: no function")
            continue
        for lo, hi, path in hits:
            print(f"{arg}: {os.path.basename(path)}  (0x{lo:x}-0x{hi:x})")


if __name__ == '__main__':
    main()
