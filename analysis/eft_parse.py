#!/usr/bin/env python3
"""
eft_parse.py - the .eft (effect) file parser, reverse engineered from
SoF.exe and verified against the 211 shipped .eft files.

The engine:
  SoF.exe 0x2002DB00  FUN_2002db00  - the loader (effects/%s.eft)
  SoF.exe 0x20036C00  (class 0)     - the "Effect" emitter reader
  SoF.exe 0x2003C780  (class 1)     - the "Sound" emitter reader
  SoF.exe 0x2003C9E0  (class 2)     - the "Light" emitter reader
  SoF.exe 0x2003CC30  (class 3)     - the "Decal" emitter reader
  SoF.exe 0x2003CFE0  (class 4)     - the "Feedback" emitter reader
  SoF.exe 0x200330E0                - the particle-system reader

The x87 version gates used by the engine (verified with a real FPU test,
see analysis/eft_semantics.md):

  fcomps K ; fnstsw %ax ; and $0x4100,%eax ; jne T
      -> T is taken when ST0 <= K            (C0 | C3, status bits 8 and 14)
  fcomps K ; fnstsw %ax ; test $0x5,%ah ; jp T
      -> T is taken when ST0 >= K            (C0 | C2, status bits 8 and 10)
  fcomps K ; fnstsw %ax ; and $0x100,%eax ; jne T
      -> T is taken when ST0 <  K            (C0, status bit 8)

usage:
  python3 eft_parse.py <file.eft>          - dump one file
  python3 eft_parse.py --check <dir>       - verify every .eft in a dir
"""

import os
import struct
import sys


class Reader(object):
    def __init__(self, b):
        self.b = b
        self.o = 0

    def need(self, n):
        if self.o + n > len(self.b):
            raise EOFError("read past the end at 0x%x" % self.o)

    def raw(self, n):
        self.need(n)
        v = self.b[self.o:self.o + n]
        self.o += n
        return v

    def u32(self):
        return struct.unpack_from("<I", self.raw(4))[0]

    def f32(self):
        return struct.unpack_from("<f", self.raw(4))[0]

    def vec2(self):
        return (self.f32(), self.f32())

    def vec3(self):
        return (self.f32(), self.f32(), self.f32())

    def cstr64(self):
        """the engine copies a fixed 64 bytes and then treats the result as
        a NUL terminated string"""
        raw = self.raw(64)
        z = raw.find(b"\0")
        if z < 0:
            z = len(raw)
        return raw[:z].decode("latin-1")


def strip_m32(name):
    """.m32 is stripped case insensitively (SoF.exe 0x200FCE40, __strcmpi)"""
    if len(name) >= 4 and name[-4:].lower() == ".m32":
        return name[:-4]
    return name


# ---------------------------------------------------------------- particles

def read_particle(r):
    """the particle system - SoF.exe 0x200330E0.

    The struct offsets are the ones the engine uses; the file offsets are
    the struct offset + 4 (the version f32 is read but not stored), except
    that a v<5.0 file skips an extra 0xF4 bytes before the sprite name."""
    p = {}
    ver = r.f32()
    p["version"] = ver
    if ver > 7.0:                      # the engine rejects anything newer
        raise ValueError("the particle format version %r is too new" % ver)

    p["spawn"] = [r.vec2() for _ in range(6)]      # +0x00..+0x2F
    p["sprite_type"] = r.u32()                      # +0x30
    p["motion"] = [r.vec2() for _ in range(4)]      # +0x34..+0x53
    p["depth"] = r.u32()                            # +0x54
    p["fade"] = r.vec2()                            # +0x58
    if ver < 5.0:
        r.raw(0xF4)                                 # the v1-v5 padding block
    p["sprite"] = strip_m32(r.cstr64())             # +0x60
    p["colour"] = [r.vec2() for _ in range(5)]      # +0xA0..+0xBB
    p["scale"] = (r.f32(), r.f32())                 # +0xC8, +0xCC
    p["size"] = [r.vec2() for _ in range(2)]        # +0xD0, +0xD8
    flags = r.u32()                                 # +0xE0
    p["flags_raw"] = flags

    if ver >= 2.0:
        p["gravity"] = r.vec3()                     # +0xE4
        p["wind"] = r.vec3()                        # +0xF0
        p["drag"] = r.f32()                         # +0xFC
        p["sprite2"] = strip_m32(r.cstr64())        # +0x100
    else:
        p["gravity"] = (0.0, 0.0, 0.0)
        p["wind"] = (0.0, 0.0, 0.0)
        p["drag"] = 0.7
        p["sprite2"] = ""

    if ver >= 3.0:
        p["rate"] = r.f32()                         # +0x140 (the default is 60)
        p["sprite3"] = strip_m32(r.cstr64())        # +0x144
    else:
        p["rate"] = 60.0
        p["sprite3"] = ""

    if ver >= 4.0:
        p["extra"] = [r.vec2() for _ in range(6)]   # +0x184..+0x1B3
    else:
        p["extra"] = [(0.0, 0.0)] * 6

    if ver < 4.0:
        flags &= 0x3FFF
    if ver < 6.0:
        flags &= 0xFFFC7FFF

    if ver >= 7.0:
        p["p1b4"] = r.u32()                         # +0x1B4
        p["p1b8"] = r.u32()                         # +0x1B8
    else:
        p["p1b4"] = 0
        flags &= 0xFFF3FFFF
        p["p1b8"] = 0 if (flags & 0x20) else 1
    p["flags"] = flags

    # the sprite type 3 and 4 mean "this is a .GHL model sprite", the rest
    # is a plain .m32 image (SoF.exe 0x2003355B)
    p["is_model"] = p["sprite_type"] in (3, 4)
    return p


# ------------------------------------------------------------------ emitters

def read_effect(r):
    """the class 0 emitter - SoF.exe 0x20036C00"""
    e = {}
    ver = r.f32()
    e["version"] = ver
    if ver > 3.0:
        raise ValueError("the Effect emitter version %r is too new" % ver)
    e["size"] = r.vec2()                # +0x10
    life = r.vec2()                     # +0x18 (clamped to 0.005..99999)
    e["life"] = tuple(min(99999.0, max(0.005, v)) for v in life)
    e["a20"] = r.u32()                  # +0x20
    e["count"] = r.u32()                # +0x24  (the particle count)
    e["a28"] = r.u32()                  # +0x28
    e["a2c"] = r.u32()                  # +0x2C
    e["v30"] = r.vec3()                 # +0x30
    e["v3c"] = r.vec3()                 # +0x3C
    e["v48"] = r.vec3()                 # +0x48
    e["f54"] = r.f32()                  # +0x54
    e["f58"] = r.f32()                  # +0x58
    e["f5c"] = r.f32()                  # +0x5C
    e["f60"] = r.f32()                  # +0x60
    e["f64"] = r.f32()                  # +0x64
    e["particle"] = read_particle(r)    # +0x80
    if ver >= 2.0:
        e["offset"] = r.vec2()          # +0x68 (the emitter origin offset)
        e["particles"] = int(r.f32())   # +0x70 (the particle count, again)
    else:
        # the engine does NOT read anything here: it copies the size vec2
        # (+0x10) into +0x68 and takes the particle count from +0x24
        e["offset"] = e["size"]
        e["particles"] = e["count"]
    if ver >= 3.0:
        e["f74"] = r.f32()              # +0x74
        e["f78"] = r.f32()              # +0x78
    else:
        e["f74"] = 0.0
        e["f78"] = 0.0
    return e


def read_sound(r):
    """the class 1 emitter - SoF.exe 0x2003C780"""
    e = {}
    e["name"] = r.cstr64()              # +0x24 (a raw 64 byte field)
    e["volume"] = r.vec2()              # +0x10
    e["pitch"] = r.vec2()               # +0x18
    return e


def read_light(r):
    """the class 2 emitter - SoF.exe 0x2003C9E0"""
    e = {}
    e["radius"] = r.vec2()              # +0x10
    e["red"] = r.vec2()                 # +0x18
    e["green"] = r.vec2()               # +0x20
    e["blue"] = r.vec2()                # +0x28
    e["intensity"] = r.vec2()           # +0x30
    return e


def read_decal(r):
    """the class 3 emitter - SoF.exe 0x2003CC30"""
    e = {}
    e["version"] = r.u32()
    if e["version"] > 1:
        raise ValueError("the decal version %d is too new" % e["version"])
    e["name"] = strip_m32(r.cstr64())   # +0x24
    e["growth_accel"] = r.f32()          # +0x10
    e["growth_duration"] = r.f32()       # +0x14
    e["start_size"] = r.f32()            # +0x18
    e["end_size"] = r.f32()              # +0x1C
    e["direction"] = r.u32()             # +0x20  (0=Forward 1=Downward 2=Backward)
    return e


def read_feedback(r):
    """the class 4 emitter - SoF.exe 0x2003CFE0"""
    e = {}
    e["a10"] = r.vec2()                 # +0x10
    e["a18"] = r.vec2()                 # +0x18
    e["a20"] = r.vec2()                 # +0x20
    e["a28"] = r.u32()                  # +0x28
    e["_unused"] = r.u32()              # read and thrown away by the engine
    return e


TYPE_NAMES = {0: "Effect", 1: "Sound", 2: "Light", 3: "Decal", 4: "Feedback"}

# the loader's per emitter mode (0xb8(%esp) in FUN_2002db00): the Effect
# emitter is "Instant", everything else is "Continual"
TYPE_MODES = {0: "Instant", 1: "Continual", 2: "Continual",
              3: "Continual", 4: "Continual"}


def parse_eft(b):
    r = Reader(b)
    out = {}
    version = r.f32()
    out["version"] = version
    if version > 3.0:
        raise ValueError("the file version %r is too new" % version)
    out["effect"] = r.u32()             # the effect +0x00
    origin = r.vec2()                   # the effect +0x04 (the origin)
    out["origin"] = origin
    count = r.f32()
    out["count"] = count

    emitters = []
    n = 0
    # the loader's loop is a do/while: it runs while n < count
    while True:
        etype = int(r.f32())
        if etype == 0:
            e = read_effect(r)
        elif etype == 1:
            e = read_sound(r)
        elif etype == 2:
            e = read_light(r)
        elif etype == 3:
            e = read_decal(r)
        elif etype == 4:
            e = read_feedback(r)
        else:
            raise ValueError("the emitter type %d is unknown" % etype)
        e["type"] = etype
        e["type_name"] = TYPE_NAMES[etype]
        e["mode"] = TYPE_MODES[etype]
        e["file_offset"] = r.o
        # the loader reads one extra vec2 into the emitter +0x08 when the
        # file version is newer than 2.0 (SoF.exe 0x2002DD73)
        if version > 2.0:
            e["origin"] = r.vec2()
        emitters.append(e)
        n += 1
        if not (float(n) < count):
            break
    out["emitters"] = emitters

    # after the loop: the effect +0x18
    if version <= 1.0:
        # the engine does NOT read anything here either: it copies the
        # origin vec2 (+0x04) into +0x18
        out["size"] = origin
    else:
        size = r.vec2()
        out["size"] = size
        # the engine then copies the smaller of each component back over
        # the origin (SoF.exe 0x2002DE0A)
        out["origin"] = (min(origin[0], size[0]), min(origin[1], size[1]))
    out["end"] = r.o
    out["tail"] = b[r.o:]
    return out


def main(argv):
    if len(argv) >= 3 and argv[1] == "--check":
        d = argv[2]
        names = sorted(x for x in os.listdir(d) if x.lower().endswith(".eft"))
        ok = 0
        bad = []
        tails = {}
        for n in names:
            b = open(os.path.join(d, n), "rb").read()
            try:
                p = parse_eft(b)
            except Exception as ex:
                bad.append((n, "parse: %s" % ex))
                continue
            tail = p["tail"]
            # the tail must be the MSVC debug fill (0xcd / 0xeb) or zeros
            junk = set(tail)
            if junk - set((0xCD, 0xEB, 0x00)):
                bad.append((n, "the tail at 0x%x has junk %s" %
                            (p["end"], sorted(junk))))
                continue
            tails[tuple(sorted(junk))] = tails.get(tuple(sorted(junk)), 0) + 1
            ok += 1
        print("%d/%d files parse exactly" % (ok, len(names)))
        for k, v in sorted(tails.items()):
            print("   the tail bytes %s: %d files" %
                  (",".join("0x%02x" % x for x in k), v))
        for n, why in bad:
            print("   FAIL %s: %s" % (n, why))
        return 0 if not bad else 1
    if len(argv) >= 2:
        b = open(argv[1], "rb").read()
        p = parse_eft(b)
        print("the file version", p["version"], "the effect", p["effect"],
              "the origin", p["origin"], "the emitters", p["count"])
        for i, e in enumerate(p["emitters"]):
            print(" emitter %d: %s (%s)" %
                  (i, e["type_name"], e["mode"]))
            for k, v in e.items():
                if k in ("type", "type_name", "mode", "particle"):
                    continue
                print("    %-10s %s" % (k, v))
            if "particle" in e:
                q = e["particle"]
                print("    the particle: the version %s the sprite type %s "
                      "the sprite %r the flags 0x%X" %
                      (q["version"], q["sprite_type"], q["sprite"], q["flags"]))
        print("the data ends at 0x%x, the file is 0x%x bytes" %
              (p["end"], len(b)))
        return 0
    print(__doc__)
    return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))
