#!/usr/bin/env python3
"""Decide whether the module's DC-prefixed x87 memory operands reference
64-bit doubles or 80-bit long doubles.

DC /0..7 are 'faddl/fsubrl/... m80fp' in the classic x87 encoding, but MSVC
emits DC-prefixed memory arithmetic for 64-bit doubles.  Scan every DC-prefixed
memory operand in game_disasm.txt, decode the target as BOTH a double and an
80-bit long double, and report which interpretation yields sane values.
"""
import re, struct, math, collections

raw = open('sof_target/gamex86.dll','rb').read()
BASE = 0x50000000

def as_double(va):
    o = va - BASE
    if o < 0 or o + 8 > len(raw): return None
    return struct.unpack('<d', raw[o:o+8])[0]

def as_ld80(va):
    o = va - BASE
    if o < 0 or o + 10 > len(raw): return None
    m, e = struct.unpack('<QH', raw[o:o+10])
    sign = -1.0 if (e >> 15) else 1.0
    ex = e & 0x7fff
    if ex == 0 and m == 0: return 0.0
    if ex == 0: return None
    try:
        return sign * (m / 2**63) * 2.0**(ex - 16383)
    except OverflowError:
        return None

# DC /r with mod=00 rm=5 (disp32) -> mem operand
pat = re.compile(r'^\s*([0-9a-f]+):\s+(f(?:add|sub|subr|mul|div|divr|com|comp)[a-z]*)\s+0x([0-9a-f]+)\s*$')
mnem = collections.Counter()
targets = collections.defaultdict(set)
for ln in open('analysis/rea/game_disasm.txt', encoding='utf-8', errors='replace'):
    m = pat.match(ln)
    if not m: continue
    mnem[m.group(2)] += 1
    targets[m.group(2)].add(int(m.group(3), 16))

print("DC-prefixed memory operands by mnemonic:")
for k, v in mnem.most_common():
    print(f"   {k:10s} {v}")

def sane(v):
    if v is None: return False
    if v == 0.0: return True
    if math.isnan(v) or math.isinf(v): return False
    a = abs(v)
    return (1e-4 < a < 1e6) or (a == 0)

print("\nper-target interpretation census (DC-prefixed mem operands):")
for k in sorted(targets):
    ds = lds = 0; tot = 0
    ex = []
    for t in sorted(targets[k]):
        d, l = as_double(t), as_ld80(t)
        tot += 1
        ds += sane(d); lds += sane(l)
        if len(ex) < 4:
            ex.append((hex(t), d, l))
    print(f"  {k:10s} n={tot:4d} sane-as-double={ds:4d} sane-as-ld80={lds:4d}")
    for e in ex:
        print(f"        {e[0]} double={e[1]!r} ld80={e[2]!r}")
