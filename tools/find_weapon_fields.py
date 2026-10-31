"""
find_weapon_fields.py - locate the field definition table for SoF's weapon
class.

The entity class' field table is plain: {name, offset, type, flags, data}.
The weapon object is a *subclass* of entity_t and its extra fields
(0x10C, 0x114, 0x118, 0x11C, 0x120, 0x13C, 0x144, 0x164, 0x174, 0x178)
have generated accessors but no name table was found by the name-pointer
scan.  This script instead looks for the *accessor addresses* stored
anywhere in the image: if a field definition records its accessor, the
address sits next to the name and the field name can be read off.

usage: python find_weapon_fields.py <dll> <accessors.txt>
"""

import re
import struct
import sys

BASE = 0x50000000


def main():
    dll, accfile = sys.argv[1], sys.argv[2]
    blob = open(dll, "rb").read()
    n = len(blob)

    names = {}
    for m in re.finditer(rb"[ -~]{3,48}", blob):
        if m.start() not in names:
            names[m.start()] = m.group(0).decode("latin-1")

    acc = {}
    for line in open(accfile):
        parts = line.rstrip("\n").split("\t")
        m = re.match(r"0x([0-9A-F]+)", parts[0])
        if not m:
            continue
        off = int(m.group(1), 16)
        getter = parts[1].strip() if len(parts) > 1 else ""
        setter = parts[2].strip() if len(parts) > 2 else ""
        if getter:
            acc[int(getter, 16)] = ("get", off)
        if setter:
            acc[int(setter, 16)] = ("set", off)
    print("# %d accessor addresses" % len(acc))

    hits = {}
    for o in range(0, n - 4, 4):
        v = struct.unpack_from("<I", blob, o)[0]
        if v in acc:
            hits.setdefault(v, []).append(o)
    print("# %d of them are stored in the image" % len(hits))

    for v, locs in sorted(hits.items()):
        kind, off = acc[v]
        for o in locs:
            # look back/forward for a string pointer -> that is the field name
            name = None
            for k in range(-8, 9):
                if k == 0:
                    continue
                q = o + k * 4
                if q < 0 or q + 4 > n:
                    continue
                w = struct.unpack_from("<I", blob, q)[0]
                if BASE <= w < BASE + n:
                    s = names.get(w - BASE)
                    if s and re.match(r"^[A-Za-z_][A-Za-z0-9_]{1,30}$", s):
                        name = s
                        break
            if name:
                print("field %-20s off 0x%03X  %s accessor 0x%08X @ file 0x%X"
                      % (name, off, kind, v, o))
    return 0


if __name__ == "__main__":
    sys.exit(main())
