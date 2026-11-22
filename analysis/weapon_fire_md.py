#!/usr/bin/env python3
"""Emit the 31 weapon-table rows as a markdown table for analysis/weapon_fire.md.

usage: python3 analysis/weapon_fire_md.py > analysis/weapon_fire_rows.md
"""
import re
import struct
import sys

sys.path.insert(0, "analysis")
from weapon_fire_str import getstr, BIN, BASE

DIS = "analysis/rea/game_disasm.txt"
REGN = "0x50065470"

push_re = re.compile(r"^([0-9a-f]+):\s+push\s+\$?(0x[0-9a-f]+|\d+)\s*$")
mov_re = re.compile(r"^([0-9a-f]+):\s+mov\s+\$(0x[0-9a-f]+),%ecx\s*$")
call_re = re.compile(r"^([0-9a-f]+):\s+call\s+0x([0-9a-f]+)\s*$")

lines = [l.rstrip("\n") for l in open(DIS)]

regs = []
for i, line in enumerate(lines):
    m = call_re.match(line)
    if not m or ("0x" + m.group(2)) != REGN:
        continue
    pushes = []
    rowbase = None
    j = i - 1
    while j >= 0 and len(pushes) < 18:
        l = lines[j]
        pm = push_re.match(l)
        if pm:
            pushes.append((pm.group(1), pm.group(2)))
            j -= 1
            continue
        mm = mov_re.match(l)
        if mm and rowbase is None:
            rowbase = (mm.group(1), mm.group(2))
            j -= 1
            continue
        break
    assert len(pushes) == 18, line
    regs.append((rowbase[0], rowbase[1], [p[1] for p in pushes], m.group(1)))

# registration argument -> row offset (proved from 0x50065470 + call site 0x50064bd5..0x50064c22)
ARG_OFF = {
    "a1": 0x14, "a2": 0x54, "a3": 0x94, "a4": 0x114,
    "a5": 0x04, "a6": 0x08, "a7": 0x0C,
    "a8": 0x118, "a9": 0x11C, "a10": 0x10,
    "a11": 0x128, "a12": 0x120, "a13": 0x124, "a14": 0x12C,
    "a15": 0x130, "a16": 0xD4, "a17": 0x144, "a18": 0x148,
}
ORDER = ["a1", "a2", "a3", "a4", "a5", "a6", "a7", "a8", "a9", "a10",
         "a11", "a12", "a13", "a14", "a15", "a16", "a17", "a18"]


def ai(s):
    return int(s, 16) if s.startswith("0x") else int(s)


def f32(v):
    return struct.unpack("<f", struct.pack("<I", v & 0xFFFFFFFF))[0]


def fl(v):
    x = f32(ai(v))
    if x == int(x) and abs(x) < 1e6:
        return "%g" % x
    return "%g" % x


def s(v):
    i = ai(v)
    if i == 0:
        return "-"
    if 0x50130000 <= i <= 0x501A0000:
        t = getstr(i)
        if not t:
            return "(empty)"
        return t.rsplit("/", 1)[-1]
    if 0x50000000 <= i < 0x50200000:
        return "0x%08x" % i
    return str(i)


def hx(v):
    """0x-prefixed hex for code pointers, '-' for null."""
    i = ai(v)
    if i == 0:
        return "-"
    if 0x50000000 <= i < 0x50200000:
        return "0x%08x" % i
    return str(i)


def weapon_name(a1, a2):
    for v in (a1, a2):
        i = ai(v)
        if 0x50130000 <= i <= 0x501A0000:
            t = getstr(i)
            if t:
                return t.rsplit("/", 1)[-1]
    return "-"


HDR = ("row|weapon (model)|dmg +04|pell +08|flags +0C|a10 +10|+114|delay +118|altDly +11C"
       "|spr1 +120|spr2 +124|fire +128|altFire +12C|range +130|tracer +D4|+144|rowBase|call")
print(HDR)
print("---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|")
for idx, (insn, base, args, calladdr) in enumerate(regs):
    d = dict((nm, args[k]) for k, nm in enumerate(ORDER))
    print("|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|{}|".format(
        idx,
        weapon_name(d["a1"], d["a2"]),
        fl(d["a5"]), fl(d["a6"]), s(d["a7"]), s(d["a10"]),
        fl(d["a4"]), fl(d["a8"]), fl(d["a9"]),
        fl(d["a12"]), fl(d["a13"]),
        s(d["a11"]), s(d["a14"]),
        fl(d["a15"]), s(d["a16"]), s(d["a17"]),
        "0x" + base[2:].rjust(6, "0"), calladdr))