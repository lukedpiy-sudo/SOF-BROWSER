"""
make_player_pak.py - add a player model to a Quake II .pak.

The Quake II software renderer (and the engine's player-skin handling)
resolves the player skin model "players/male/tris.md2" itself - the game
module never requests it - so a pack that lacks that file makes the
renderer register a null model and crash while building its model tree.

Our asset pack is derived from Soldier of Fortune and does not carry the
stock Quake II player model, so this script builds a small extra pak that
contains the entry under the expected name, using a model that does exist as
the stand-in body.

usage: python make_player_pak.py <source.pak> <source-model-path> <out.pak>
"""

import struct
import sys

PACK_ID = b"PACK"
ENTRY_SIZE = 64
NAME_MAX = 56


def read_pak(path):
    with open(path, "rb") as fh:
        blob = fh.read()
    if blob[:4] != PACK_ID:
        raise SystemExit("not a pak: %s" % path)
    dirofs, dirlen = struct.unpack_from("<ii", blob, 4)
    entries = []
    off = dirofs
    while off + ENTRY_SIZE <= dirofs + dirlen:
        raw = blob[off:off + NAME_MAX]
        name = raw.split(b"\x00", 1)[0].decode("latin-1")
        fpos, flen = struct.unpack_from("<ii", blob, off + NAME_MAX)
        if name:
            entries.append((name, fpos, flen))
        off += ENTRY_SIZE
    return blob, entries


def build_pak(out_path, items):
    """items: list of (name, bytes)"""
    header = bytearray(56)
    header[0:4] = PACK_ID

    # layout: header | file data | directory
    data_start = 56
    blobs = bytearray()
    dir_entries = []
    for name, payload in items:
        pos = data_start + len(blobs)
        blobs += payload
        dir_entries.append((name, pos, len(payload)))

    dir_offset = data_start + len(blobs)
    directory = bytearray()
    for name, pos, length in dir_entries:
        raw = name.encode("latin-1")
        if len(raw) >= NAME_MAX:
            raise SystemExit("name too long: %s" % name)
        entry = bytearray(ENTRY_SIZE)
        entry[0:len(raw)] = raw
        struct.pack_into("<ii", entry, NAME_MAX, pos, length)
        directory += entry

    struct.pack_into("<ii", header, 4, dir_offset, len(directory))
    struct.pack_into("<i", header, 12, 0)          # version
    struct.pack_into("<i", header, 16, 0)          # checksum (unused on load)

    with open(out_path, "wb") as fh:
        fh.write(bytes(header))
        fh.write(bytes(blobs))
        fh.write(bytes(directory))

    print("wrote %s (%d bytes, %d entries)" %
          (out_path, 56 + len(blobs) + len(directory), len(dir_entries)))


def main():
    if len(sys.argv) != 4:
        print(__doc__)
        return 2

    src_pak, src_model, out_pak = sys.argv[1:4]
    blob, entries = read_pak(src_pak)

    want = src_model.lower()
    for name, fpos, flen in entries:
        if name.lower() == want:
            payload = blob[fpos:fpos + flen]
            build_pak(out_pak, [("players/male/tris.md2", payload)])
            print("  %s (%d bytes) -> players/male/tris.md2" % (name, flen))
            return 0

    print("model not found in %s: %s" % (src_pak, src_model))
    return 1


if __name__ == "__main__":
    sys.exit(main())
