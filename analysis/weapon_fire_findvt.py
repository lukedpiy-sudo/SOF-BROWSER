#!/usr/bin/env python3
"""Find vtable-like arrays in .rdata that contain the primary/alt fire thunks
0x50106640 / 0x50106890 at +0x08 / +0x0C, and print the whole table."""
import struct

raw = open('sof_target/gamex86.dll','rb').read()
BASE = 0x50000000
RDATA_VA, RDATA_OFF, RDATA_SIZE = 0x50116000, 0x116000, 0x18259

def u32(off): return struct.unpack('<I', raw[off:off+4])[0]

hits = []
for off in range(RDATA_OFF, RDATA_OFF + RDATA_SIZE - 4, 4):
    v = u32(off)
    if v == 0x50106640:
        hits.append(off)
print("occurrences of 0x50106640 in .rdata at file offsets:",
      [hex(o) for o in hits], " VA:", [hex(o + BASE) for o in hits])

for off in hits:
    # a vtable entry at +0x08 means the array starts 8 bytes earlier
    for start in (off - 8, off - 0x0C + 4):
        if start < RDATA_OFF or start + 0x80 > RDATA_OFF + RDATA_SIZE: continue
        print(f"\n=== candidate vtable at VA 0x{start+BASE:08x}")
        for i in range(20):
            va = start + 4*i
            p = u32(va)
            tag = ""
            if p == 0x50106640: tag = "  <-- PRIMARY FIRE"
            if p == 0x50106890: tag = "  <-- ALT FIRE"
            if p == 0x50073c90: tag = "  <-- controller dispatcher"
            if p == 0x500659c0: tag = "  <-- fire wrapper"
            if p == 0x500656e0: tag = "  <-- row dispatcher"
            print(f"   +0x{i*4:02x} (VA 0x{va:08x}) -> 0x{p:08x}{tag}")
