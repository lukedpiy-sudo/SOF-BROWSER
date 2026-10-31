"""
find_table_use.py - locate code that uses a pointer array in a PE image.

usage: python find_table_use.py <exe> <disasm.txt> <file-offset-of-array> [span]
"""

import bisect
import re
import struct
import sys

BASE = 0x20000000


def main():
    exe, disasm, off = sys.argv[1], sys.argv[2], int(sys.argv[3], 0)
    span = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0x200

    d = open(exe, "rb").read()

    # the array lives in .data; its VA = base + section_rva + (off - section_rawoff)
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    optsz = struct.unpack_from("<H", d, pe + 20)[0]
    sh = pe + 24 + optsz
    secs = []
    for i in range(nsec):
        o = sh + i * 40
        name = d[o:o + 8].rstrip(b"\x00").decode("latin-1")
        vsize, vaddr, rsize, raddr = struct.unpack_from("<IIII", d, o + 8)
        secs.append((name, vaddr, vsize, raddr, rsize))

    def va_of(fileoff):
        for name, vaddr, vsize, raddr, rsize in secs:
            if raddr <= fileoff < raddr + rsize:
                return BASE + vaddr + (fileoff - raddr)
        return None

    # how many pointer entries in the array (contiguous dwords that are VAs into .data)
    entries = []
    p = off
    while p + 4 <= len(d):
        v = struct.unpack_from("<I", d, p)[0]
        t = va_of(p)
        if t is None or not (BASE <= v < BASE + len(d)):
            break
        entries.append(p)
        p += 4
    print("# array from file 0x%X: %d pointer entries" % (off, len(entries)))
    if entries:
        print("# array base VA 0x%08X" % va_of(entries[0]))
        for e in entries[:6]:
            v = struct.unpack_from("<I", d, e)[0]
            s = d[v - BASE:v - BASE + 44].split(b"\x00")[0].decode("latin-1")
            print("   0x%06X -> %s" % (e, s))

    # find .text code referencing any of those array slots (immediate operands)
    text = [s for s in secs if s[0] == ".text"][0]
    lo = va_of(entries[0]) if entries else 0
    hi = va_of(entries[-1]) + 4 if entries else 0
    sites = []
    for o in range(text[3], text[3] + text[4] - 4, 1):
        v = struct.unpack_from("<I", d, o)[0]
        if lo <= v < hi:
            sites.append(BASE + text[1] + (o - text[3]))
    print("# %d code reference(s) into the array" % len(sites))
    for s in sites[:12]:
        print("   0x%08X" % s)

    rx = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*(.*)$")
    idx, txt = [], []
    with open(disasm, "r", errors="replace") as fh:
        for line in fh:
            m = rx.match(line)
            if m:
                idx.append(int(m.group(1), 16))
                txt.append(m.group(2).rstrip())
    print("# %d instructions indexed" % len(idx))
    for s in sites[:5]:
        i = bisect.bisect_left(idx, s)
        print("\n=== reference at 0x%08X ===" % s)
        for k in range(max(0, i - 8), min(len(idx), i + 20)):
            print("%s %08X  %s" % (">>" if idx[k] == s else "  ", idx[k], txt[k]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
