#!/usr/bin/env python3
"""
m32_parse.py - parse the `.m32` image container (the renderer's texture
format) used by Soldier of Fortune.

The `.m32` files live in `Soldier of Fortune/Base/pak0.pak` (4199 of them)
and are loaded by the renderer DLL (`ref_gl.dll`) when it resolves a
texture name.  The container is a fixed-size header followed by the mip
chains.

    usage:  python3 analysis/m32_parse.py <file.m32> [...]
             python3 analysis/m32_parse.py --pak <pak> [...]      # verify all
"""

import os
import struct
import sys

# ---------------------------------------------------------------------------
# the header layout
# ---------------------------------------------------------------------------
HDR_VERSION = 0x00          # u32   - always 4 in the shipped data
HDR_NAME = 0x04             # char[0x80]  the material / display name
HDR_BASE = 0x84             # char[0x100] the base (parent) texture name
HDR_DAMAGE = 0x184          # char[0x80]  the damage texture name
HDR_MIPW = 0x204            # i32[15] the mip widths
HDR_MIPH = 0x244            # i32[15] the mip heights
HDR_MIPPOS = 0x284          # i32[15] the mip data offsets
HDR_CLASS = 0x2CC           # u8    the image class byte
HDR_DETAIL = 0x2DC          # char[0x80]  the detail texture name
HDR_DETAILMAT = 0x35C       # f32[4] the detail matrix
HDR_FLAGS = 0x378           # u8    the flags / image class
PIXELS = 0x3C8              # the pixel data starts here

MIPS = 15
NAMES = {}


def cstr(blob, off, size):
    raw = blob[off:off + size]
    z = raw.find(b"\x00")
    if z >= 0:
        raw = raw[:z]
    return raw.decode("latin-1")


class M32(object):
    """one parsed `.m32` container"""

    def __init__(self, blob, name="<memory>"):
        self.blob = blob
        self.name = name
        self.size = len(blob)
        if len(blob) < PIXELS:
            raise ValueError("%s: too short (%d bytes)" % (name, len(blob)))
        self.version = struct.unpack_from("<I", blob, HDR_VERSION)[0]
        self.material = cstr(blob, HDR_NAME, 0x80)
        self.base = cstr(blob, HDR_BASE, 0x100)
        self.damage = cstr(blob, HDR_DAMAGE, 0x80)
        self.mipw = list(struct.unpack_from("<%di" % MIPS, blob, HDR_MIPW))
        self.miph = list(struct.unpack_from("<%di" % MIPS, blob, HDR_MIPH))
        self.mippos = list(struct.unpack_from("<%di" % MIPS, blob, HDR_MIPPOS))
        self.cls = blob[HDR_CLASS]
        self.detail = cstr(blob, HDR_DETAIL, 0x80)
        self.detailmat = list(struct.unpack_from("<4f", blob, HDR_DETAILMAT))
        self.flags = blob[HDR_FLAGS]

    # -- helpers -----------------------------------------------------------
    @property
    def mip_count(self):
        """the number of mip levels that are actually present"""
        n = 0
        for i in range(MIPS):
            if self.mipw[i] > 0 and self.miph[i] > 0 and self.mippos[i] > 0:
                n += 1
        return n

    def mip(self, i):
        """(width, height, offset, size) of mip level i"""
        return (self.mipw[i], self.miph[i], self.mippos[i],
                self.mip_size(i))

    def mip_size(self, i):
        """the byte size of mip level i (the mips are 4-byte RGBA)"""
        w, h = self.mipw[i], self.miph[i]
        if w <= 0 or h <= 0:
            return 0
        return w * h * 4

    def data_end(self):
        """the offset just past the last mip - the end of the useful data"""
        end = PIXELS
        for i in range(MIPS):
            if self.mippos[i] > 0:
                end = max(end, self.mippos[i] + self.mip_size(i))
        return end

    def check(self):
        """a list of problems (empty = the file is consistent)"""
        bad = []
        if self.version != 4:
            bad.append("version %d (expected 4)" % self.version)
        n = 0
        for i in range(MIPS):
            w, h, p = self.mipw[i], self.miph[i], self.mippos[i]
            if w == 0 and h == 0 and p == 0:
                continue
            n += 1
            if w <= 0 or h <= 0:
                bad.append("mip %d: bad size %dx%d" % (i, w, h))
                continue
            if p < PIXELS:
                bad.append("mip %d: offset 0x%x is inside the header"
                           % (i, p))
                continue
            if p + self.mip_size(i) > self.size:
                bad.append("mip %d: runs past the end of the file "
                           "(0x%x + %d > %d)" % (i, p, self.mip_size(i),
                                                 self.size))
            if i and (w > self.mipw[i - 1] or h > self.miph[i - 1]):
                bad.append("mip %d: %dx%d is bigger than mip %d (%dx%d)"
                           % (i, w, h, i - 1, self.mipw[i - 1],
                              self.miph[i - 1]))
            if i and w == self.mipw[i - 1] and h == self.miph[i - 1]:
                bad.append("mip %d: %dx%d repeats mip %d"
                           % (i, w, h, i - 1))
        if n != self.mip_count:
            bad.append("the mip count is inconsistent")
        return bad

    def summary(self):
        return ("v%d  %-32s base=%-24s dmg=%-20s detail=%-20s "
                "mips=%d flags=0x%02x cls=0x%02x mat=%s"
                % (self.version, self.material, self.base, self.damage,
                   self.detail, self.mip_count, self.flags, self.cls,
                   self.detailmat))


# ---------------------------------------------------------------------------
# the pak reader (so we can verify every shipped .m32 without unpacking)
# ---------------------------------------------------------------------------
def read_pak(path):
    with open(path, "rb") as fh:
        blob = fh.read()
    if blob[:4] != b"PACK":
        raise SystemExit("not a pak: %s" % path)
    dirofs, dirlen = struct.unpack_from("<ii", blob, 4)
    out = []
    off = dirofs
    end = dirofs + dirlen
    while off + 64 <= end:
        raw = blob[off:off + 56]
        nm = raw.split(b"\x00", 1)[0].decode("latin-1")
        fpos, flen = struct.unpack_from("<ii", blob, off + 56)
        if nm:
            out.append((nm, fpos, flen))
        off += 64
    return blob, out


def main(argv):
    if not argv:
        print(__doc__)
        return 2
    if argv[0] == "--pak":
        pak = argv[1]
        blob, entries = read_pak(pak)
        m32s = [(n, p, l) for (n, p, l) in entries
                if n.lower().endswith(".m32")]
        if len(argv) > 2:
            m32s = [(n, p, l) for (n, p, l) in m32s
                    if any(w.lower() in n.lower() for w in argv[2:])]
        bad = 0
        names = {}
        for (n, p, l) in m32s:
            try:
                m = M32(blob[p:p + l], n)
            except Exception as exc:
                print("FAIL %-50s %s" % (n, exc))
                bad += 1
                continue
            errs = m.check()
            if errs:
                bad += 1
                print("FAIL %-50s %s" % (n, "; ".join(errs)))
            names[m.material] = names.get(m.material, 0) + 1
        print("%d .m32 files, %d bad" % (len(m32s), bad))
        return 1 if bad else 0

    for path in argv:
        with open(path, "rb") as fh:
            blob = fh.read()
        m = M32(blob, path)
        print(m.summary())
        for i in range(m.mip_count):
            w, h, p, sz = m.mip(i)
            print("   mip %d: %4dx%-4d at 0x%06x  %8d bytes"
                  % (i, w, h, p, sz))
        for e in m.check():
            print("   !! " + e)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
