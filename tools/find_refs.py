"""
find_refs.py - find code references to a string in a PE image and show the
surrounding disassembly.

usage: python find_refs.py <exe> <disasm.txt> <string-fragment> [before] [after]
"""

import re
import struct
import sys


def pe_sections(d):
    pe = struct.unpack_from("<I", d, 0x3C)[0]
    nsec = struct.unpack_from("<H", d, pe + 6)[0]
    optsz = struct.unpack_from("<H", d, pe + 20)[0]
    base = struct.unpack_from("<I", d, pe + 52)[0]
    sh = pe + 24 + optsz
    out = []
    for i in range(nsec):
        o = sh + i * 40
        name = d[o:o + 8].rstrip(b"\x00").decode("latin-1")
        vsize, vaddr, rsize, raddr = struct.unpack_from("<IIII", d, o + 8)
        out.append((name, vaddr, vsize, raddr, rsize))
    return base, out


def main():
    exe, disasm, frag = sys.argv[1], sys.argv[2], sys.argv[3]
    before = int(sys.argv[4]) if len(sys.argv) > 4 else 8
    after = int(sys.argv[5]) if len(sys.argv) > 5 else 16

    d = open(exe, "rb").read()
    base, secs = pe_sections(d)
    text = [s for s in secs if s[0] == ".text"]
    print("# image base 0x%08X  sections: %s" % (base, [(s[0], hex(s[1])) for s in secs]))

    # find the string
    target = None
    for m in re.finditer(rb"[ -~]{4,60}", d):
        if frag.lower().encode() in m.group(0).lower():
            target = m.start()
            print("# string %r at file 0x%X" % (m.group(0).decode("latin-1"), m.start()))
            break
    if target is None:
        print("string not found")
        return 1

    # figure out the VA of that file offset
    va = None
    for name, vaddr, vsize, raddr, rsize in secs:
        if raddr <= target < raddr + rsize:
            va = base + vaddr + (target - raddr)
            print("# VA 0x%08X (section %s)" % (va, name))
            break
    if va is None:
        print("offset not inside a section")
        return 1

    # find pointers to that VA
    sites = []
    for name, vaddr, vsize, raddr, rsize in secs:
        if name != ".text":
            continue
        for o in range(raddr, raddr + rsize - 4, 1):
            if struct.unpack_from("<I", d, o)[0] == va:
                sites.append(base + vaddr + (o - raddr))
    print("# %d code reference(s) to 0x%08X" % (len(sites), va))
    for s in sites[:8]:
        print("   0x%08X" % s)

    # index the dumpbin disassembly once
    lines = {}
    rx = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*(.*)$")
    with open(disasm, "r", errors="replace") as fh:
        idx = []
        texts = []
        for line in fh:
            m = rx.match(line)
            if m:
                idx.append(int(m.group(1), 16))
                texts.append(m.group(2).rstrip())
    print("# %d instructions indexed" % len(idx))

    import bisect
    for s in sites[:4]:
        i = bisect.bisect_left(idx, s)
        print("\n=== reference at 0x%08X ===" % s)
        for k in range(max(0, i - before), min(len(idx), i + after)):
            mark = ">>" if idx[k] == s else "  "
            print("%s %08X  %s" % (mark, idx[k], texts[k]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
