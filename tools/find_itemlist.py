"""
find_itemlist.py - locate the engine's client-side item list (bg_itemlist)
and dump the entry for a given item.

Quake III engines keep their own copy of the item list client side, and the
game module keeps a matching one.  The indices must agree, so the engine's
list is the authority on which index a weapon occupies and which flags (and
therefore which client-side behaviour such as the sniper scope) it carries.

usage: python find_itemlist.py <engine.exe> <item-string-fragment>
"""

import re
import struct
import sys

BASE = 0x20000000


def strings(d):
    out = {}
    for m in re.finditer(rb"[ -~]{3,48}", d):
        if m.start() not in out:
            out[m.start()] = m.group(0).decode("latin-1")
    return out


def main():
    path, frag = sys.argv[1], sys.argv[2]
    d = open(path, "rb").read()
    st = strings(d)

    # locate the string we were asked about
    hits = [(o, s) for o, s in st.items() if frag.lower() in s.lower()]
    if not hits:
        print ("no string matching %r" % frag)
        return 1
    for o, s in hits[:6]:
        print ("string 0x%06X %r -> VA 0x%08X" % (o, s, BASE + o))

    # find pointers to those strings
    for o, s in hits[:3]:
        va = BASE + o
        sites = [p for p in range(0, len(d) - 4, 4)
                 if struct.unpack_from("<I", d, p)[0] == va]
        print ("  pointer sites: %s" % [hex(x) for x in sites[:8]])
        for site in sites[:2]:
            print ("  --- context around file 0x%X ---" % site)
            for k in range(-10, 11):
                q = site + k * 4
                if q < 0 or q + 4 > len(d):
                    continue
                v = struct.unpack_from("<I", d, q)[0]
                tag = ""
                if BASE <= v < BASE + len(d):
                    t = d[v - BASE:v - BASE + 48].split(b"\x00")[0]
                    if t and all(32 <= c < 127 for c in t):
                        tag = "-> " + t.decode("latin-1")
                mark = ">>" if k == 0 else "  "
                print ("   %s0x%06X  0x%08X %s" % (mark, q, v, tag))
    return 0


if __name__ == "__main__":
    sys.exit(main())
