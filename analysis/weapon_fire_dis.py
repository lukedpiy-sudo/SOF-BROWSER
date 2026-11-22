#!/usr/bin/env python3
"""Dump an address range from analysis/rea/game_disasm.txt.

usage: weapon_fire_dis.py 0x50101a90 0x50101b80
       weapon_fire_dis.py 0x50101a90 +0x120
"""
import re
import sys

DIS = "analysis/rea/game_disasm.txt"
LINE = re.compile(r"^([0-9a-f]{8}):\t(.*)$")


def main() -> int:
    lo = int(sys.argv[1], 16)
    if len(sys.argv) > 2 and sys.argv[2].startswith("+"):
        hi = lo + int(sys.argv[2][1:], 16)
    else:
        hi = int(sys.argv[2], 16)
    with open(DIS, encoding="utf-8", errors="replace") as fh:
        for raw in fh:
            m = LINE.match(raw)
            if not m:
                continue
            addr = int(m.group(1), 16)
            if lo <= addr < hi:
                sys.stdout.write(f"{m.group(1)}: {m.group(2).rstrip()}\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
