#!/usr/bin/env python3
"""Trace the Ghoul payload bit-writer / bit-reader field sequence.

The Ghoul net payload is a bit stream.  Every 16-bit value is encoded as:

    [1 bit  : non-zero flag]              0 => the value is 0 and nothing follows
    [2 bits : class c]                    c in 0..3
    [4*(c+1) bits : the value, LSB first] the low (c+1) nibbles of the value

so a value of 0 costs 1 bit and a value of 65535 costs 19 bits.

This script prints, for every call to the bit writer (0x200bdca0) or the bit
reader (0x200be390), the source/destination and the bit count, so the field
order of a writer can be compared with the field order of its reader.
"""
import re
import sys

WRITER = "0x200bdca0"
READER = "0x200be390"


def scan(path, call):
    lines = open(path).read().splitlines()
    out = []
    for i, ln in enumerate(lines):
        if f"call   {call}" not in ln:
            continue
        addr = ln.split(":")[0].strip()
        # walk backwards collecting the pushes and the interesting movs
        ctx = []
        for j in range(i - 1, max(i - 16, -1), -1):
            prev = lines[j]
            m = re.search(r"\s(push|mov|lea|call|add)\s+(.*?)\s*$", prev)
            if not m:
                continue
            ctx.append(f"{prev.split(':')[0].strip()} {m.group(1)} {m.group(2).strip()}")
            if m.group(1) == "call":
                break
        ctx.reverse()
        out.append((addr, ctx))
    return out


def main():
    path = sys.argv[1]
    call = WRITER if len(sys.argv) < 3 or sys.argv[2] == "w" else READER
    for addr, ctx in scan(path, call):
        print(f"--- {addr}")
        for c in ctx:
            print("   ", c)


if __name__ == "__main__":
    main()
