#!/usr/bin/env python3
"""dis.py <start_hex> <count_hex> [--bytes] - dump disasm lines for an address range."""
import re
import sys
import os

PATH = os.path.expandvars(r"%TEMP%\sof_eng_disasm.txt")
RE = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*((?:[0-9A-Fa-f]{2}\s+)+)?(.*)$")

start = int(sys.argv[1], 16)
count = int(sys.argv[2], 16)
show_bytes = "--bytes" in sys.argv
lo, hi = start, start + count

with open(PATH, "r", errors="replace") as f:
    for line in f:
        m = RE.match(line.rstrip("\n"))
        if not m:
            continue
        addr = int(m.group(1), 16)
        if not (lo <= addr < hi):
            continue
        b = (m.group(2) or "").strip()
        if show_bytes and b:
            print("%08X  %-24s %s" % (addr, b, m.group(3).rstrip()))
        else:
            print("%08X  %s" % (addr, m.group(3).rstrip()))
