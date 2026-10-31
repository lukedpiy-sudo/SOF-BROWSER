"""
disasm_at.py - show the dumpbin disassembly around a list of addresses.

The SoF game module is only partially visible to Ghidra, so the fallback is
`dumpbin /DISASM /NOBYTES gamex86.dll`, which produces one line per
instruction in address order.  This helper indexes that file once and prints
the window around each requested address.

usage: python disasm_at.py <disasm-file> <addr> [addr ...] [--before N] [--after N]
"""

import bisect
import re
import sys

LINE_RE = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*(.*)$")


def load(path):
    addrs = []
    texts = []
    with open(path, "r", errors="replace") as fh:
        for line in fh:
            m = LINE_RE.match(line)
            if m:
                addrs.append(int(m.group(1), 16))
                texts.append(m.group(2).rstrip())
    return addrs, texts


def main():
    args = sys.argv[1:]
    before = after = 24
    if "--before" in args:
        i = args.index("--before")
        before = int(args[i + 1])
        del args[i:i + 2]
    if "--after" in args:
        i = args.index("--after")
        after = int(args[i + 1])
        del args[i:i + 2]

    path = args[0]
    targets = [int(a, 16) for a in args[1:]]

    addrs, texts = load(path)
    print("# %d instructions indexed" % len(addrs))

    for t in targets:
        i = bisect.bisect_left(addrs, t)
        lo = max(0, i - before)
        hi = min(len(addrs), i + after)
        print("\n=== around 0x%08X ===" % t)
        for k in range(lo, hi):
            mark = ">>" if addrs[k] == t else "  "
            print("%s %08X  %s" % (mark, addrs[k], texts[k]))


if __name__ == "__main__":
    main()
