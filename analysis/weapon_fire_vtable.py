#!/usr/bin/env python3
"""Dump candidate vtables from gamex86.dll .rdata and resolve string targets."""
import struct, sys

raw = open('sof_target/gamex86.dll','rb').read()
BASE = 0x50000000

def u32(va):
    o = va - BASE
    if o < 0 or o + 4 > len(raw): return None
    return struct.unpack('<I', raw[o:o+4])[0]

def cstr(va):
    o = va - BASE
    if o < 0 or o >= len(raw): return None
    try:
        e = raw.index(b'\0', o)
    except ValueError:
        return None
    s = raw[o:e]
    try:
        return s.decode('ascii')
    except UnicodeDecodeError:
        return repr(s[:40])

def dump_vtable(va, n=24, label=''):
    print(f"=== vtable {hex(va)} {label}")
    for i in range(n):
        p = u32(va + 4*i)
        if p is None: break
        extra = ''
        if 0x50000000 <= p < 0x50000000 + len(raw):
            s = cstr(p)
            if s and all(32 <= ord(c) < 127 for c in s) and len(s) > 1:
                extra = repr(s[:60])
        print(f"   +0x{i*4:02x}  0x{p:08x}  {extra}")

for va, label in [
    (0x50128DA8, 'controller vtable?'),
    (0x50124df0, 'PTR_LAB_50124df0 weapon-object vtable'),
    (0x50124d00, 'PTR_LAB_50124d00 (base ctor vtable)'),
    (0x50128728, '?'),
]:
    dump_vtable(va, 28, label)
