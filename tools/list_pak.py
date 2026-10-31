"""list_pak.py - list/verify Quake II .pak contents.

usage: python list_pak.py <pak>            -> list every file
       python list_pak.py <pak> --check f  -> report whether file f exists
       python list_pak.py <pak> --checkstdin -> read paths from stdin, one per line
"""
import struct
import sys

PACK_ID = b"PACK"


def read_dir(path):
    with open(path, "rb") as fh:
        blob = fh.read()
    if blob[:4] != PACK_ID:
        raise SystemExit("not a pak: %s" % path)
    dirofs, dirlen = struct.unpack_from("<ii", blob, 4)
    entries = []
    off = dirofs
    end = dirofs + dirlen
    while off + 64 <= end:
        raw = blob[off:off + 56]
        name = raw.split(b"\x00", 1)[0].decode("latin-1")
        fpos, flen = struct.unpack_from("<ii", blob, off + 56)
        if name:
            entries.append((name, fpos, flen))
        off += 64
    return entries


def main():
    pak = sys.argv[1]
    entries = read_dir(pak)
    if len(sys.argv) == 2:
        for name, fpos, flen in entries:
            print("%-60s %10d" % (name, flen))
        print("# %d files" % len(entries))
        return 0

    have = {n.lower() for n, _, _ in entries}
    if sys.argv[2] == "--check":
        wanted = [sys.argv[3]]
    else:
        wanted = [l.strip() for l in sys.stdin if l.strip()]
    missing = 0
    for w in wanted:
        w = w.strip().lower()
        if w.startswith("./"):
            w = w[2:]
        if w not in have:
            missing += 1
            print("MISSING  %s" % w)
    print("# %d wanted, %d missing" % (len(wanted), missing))
    return 0


if __name__ == "__main__":
    sys.exit(main())
