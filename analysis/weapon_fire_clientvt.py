#!/usr/bin/env python3
"""Reconstruct the client-API struct that FUN_500b9ec0 passes to the player DLL.
It stores immediates into stack slots with `movl $imm,N(%esp)`; we recover the
exact slot -> value map and the struct base (the &local_4c argument)."""
import re, sys, collections

DIS = 'analysis/rea/game_disasm.txt'
RE = re.compile(r'^\s*([0-9a-f]+):\s+(c7 44 24 ([0-9a-f]{2}) ([0-9a-f]{8})|[0-9a-f ]+movl\s+\$0x([0-9a-f]+),0x([0-9a-f]+)\(%esp\))')

# use objdump instead: objdump prints `movl $0x50106640,0x8(%esp)`
import subprocess
out = subprocess.run(['objdump','-d','--start-address=0x500b9ec0','--stop-address=0x500ba196',
                      'sof_target/gamex86.dll'], capture_output=True, text=True).stdout

stores = []
for ln in out.splitlines():
    m = re.search(r'movl\s+\$0x([0-9a-f]+),0x([0-9a-f]+)\(%esp\)', ln)
    if m:
        stores.append((int(m.group(2),16), int(m.group(1),16)))
    m2 = re.search(r'movl\s+%eax,0x([0-9a-f]+)\(%esp\)', ln)
    if m2:
        stores.append((int(m2.group(1),16), None))

byoff = collections.defaultdict(list)
for off, val in stores:
    byoff[off].append(val)

print("stack-slot stores (esp offset -> immediate):")
for off in sorted(byoff):
    vals = byoff[off]
    hexes = [hex(v) if v is not None else 'reg' for v in vals]
    print(f"   esp+0x{off:02x} : {', '.join(hexes)}")

# the argument passed is &local_4c -> find `lea ...,%ecx` right before the call
for ln in out.splitlines():
    if 'call' in ln and ('5015cb18' in ln or '*0x5015cb18' in ln):
        print("CALL:", ln.strip())
print()
for ln in out.splitlines()[-40:]:
    print(ln)
