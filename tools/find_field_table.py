"""
find_field_table.py - recover SoF's class field definition table.

gamex86.dll stores the weapon/item field names as short identifiers and
reaches the fields through generated accessors.  If the definitions live in
a static table, it will be a run of dwords where every Nth entry is a
pointer to one of those names and the neighbouring dwords are the field
offsets.

This script locates those runs.

usage: python find_field_table.py <dll> [image_base]
"""

import re
import struct
import sys

IMAGE_BASE = 0x50000000


def main():
    path = sys.argv[1]
    base = int(sys.argv[2], 0) if len(sys.argv) > 2 else IMAGE_BASE

    blob = open(path, "rb").read()

    # every printable run of >=3 chars -> its file offset (= RVA for this DLL)
    names = {}
    for m in re.finditer(rb"[ -~]{3,48}", blob):
        s = m.group(0).decode("latin-1")
        if s in names:
            continue
        names[m.start()] = s
    print("# %d strings" % len(names))

    # RVA -> string
    rva_to_str = {}
    for off, s in names.items():
        rva_to_str[off] = s

    n = len(blob)
    hits = []           # (file offset of the pointer, rva it points at)
    for off in range(0, n - 4, 4):
        v = struct.unpack_from("<I", blob, off)[0]
        if base <= v < base + n:
            target = v - base
            s = rva_to_str.get(target)
            if s is not None and not s.isspace():
                hits.append((off, target, s))
    print("# %d dword pointers into the string pool" % len(hits))

    # group into runs with a constant stride
    by_off = {o: (t, s) for o, t, s in hits}
    offs = sorted(by_off)

    best = []
    i = 0
    while i < len(offs):
        j = i
        stride = None
        while j + 1 < len(offs):
            d = offs[j + 1] - offs[j]
            if stride is None:
                if d < 8 or d > 64:
                    break
                stride = d
            elif d != stride:
                break
            j += 1
        if stride is not None and j - i >= 3:
            best.append((offs[i], offs[j], stride))
        i = max(j, i + 1)

    best.sort(key=lambda t: -(t[1] - t[0]))
    print("# %d candidate tables" % len(best))

    for start, end, stride in best:
        print("\n=== table @ RVA 0x%X  stride %d  (%d entries) ===" %
              (start, stride, (end - start) // stride + 1))
        for k in range((end - start) // stride + 1):
            o = start + k * stride
            if o in by_off:
                tgt, s = by_off[o]
                extra = []
                for j in range(1, 6):
                    q = o + j * 4
                    if q + 4 <= n:
                        extra.append(struct.unpack_from("<I", blob, q)[0])
                print("  0x%06X  %-28s  next: %s" % (o, s[:28],
                      " ".join("0x%X" % e for e in extra[:4])))


if __name__ == "__main__":
    main()
