#!/usr/bin/env python3
"""Parse the 31 weapon-row registration calls to FUN_50065470 out of game_disasm.txt
and decode each row's fields using the stack-arg -> row-offset map proven from the
disassembly of FUN_50065470 (0x50065470-0x50065572).

Row layout (base = 0x50159B20 + idx*0x14C):
  arg1  -> row+0x14   string A
  arg2  -> row+0x54   string B
  arg3  -> row+0x94   string C
  arg16 -> row+0xd4   string D
  arg4  -> row+0x114
  arg5  -> row+0x04
  arg6  -> row+0x08
  arg7  -> row+0x0c
  arg9  -> row+0x10
  arg10 -> row+0x118  primary fire delay
  arg11 -> row+0x11c  alternate fire delay
  arg12 -> row+0x128  primary fire fn
  arg13 -> row+0x12c  alternate fire fn
  arg14 -> row+0x120
  arg15 -> row+0x124
  arg16 -> row+0x130
  arg17 -> row+0x144
  arg18 -> row+0x148
"""
import re, sys, struct

DIS = "analysis/rea/game_disasm.txt"

PUSH_RE = re.compile(r'^\s*([0-9a-f]+):\s+push\s+\$0x([0-9a-f]+)\s*$')
CALL_RE = re.compile(r'^\s*([0-9a-f]+):\s+call\s+0x([0-9a-f]+)\s*$')
MOV_RE  = re.compile(r'^\s*([0-9a-f]+):\s+mov\s+\$0x([0-9a-f]+),%ecx\s*$')

lines = open(DIS, encoding="utf-8", errors="replace").read().splitlines()

# collect instruction stream in address order
insns = []
for ln in lines:
    m = PUSH_RE.match(ln)
    if m:
        insns.append((int(m.group(1),16), 'push', int(m.group(2),16)))
        continue
    m = CALL_RE.match(ln)
    if m:
        insns.append((int(m.group(1),16), 'call', int(m.group(2),16)))
        continue
    m = MOV_RE.match(ln)
    if m:
        insns.append((int(m.group(1),16), 'mecx', int(m.group(2),16)))
        continue
    m = re.match(r'^\s*([0-9a-f]+):\s+([a-z0-9]+)\s*(.*)$', ln)
    if m:
        insns.append((int(m.group(1),16), m.group(2), m.group(3)))

def f32(v):
    return struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0]

rows = []
i = 0
while i < len(insns):
    addr, op, val = insns[i]
    if op == 'call' and val == 0x50065470:
        # find the `mov $row,%ecx` right before
        ecxrow = None
        j = i - 1
        while j >= 0 and i - j < 12:
            if insns[j][1] == 'mecx':
                ecxrow = insns[j][2]
                break
            j -= 1
        # collect the pushes preceding (walk back to the previous call / >20 pushes)
        pushes = []
        j = i - 1
        while j >= 0:
            a, o, v = insns[j]
            if o == 'push':
                pushes.append((a, v))
                j -= 1
                continue
            if o == 'call':
                break
            # allow mov $imm,%ecx and other non-push noise but stop at a 'ret'
            if o in ('ret','retn'):
                break
            j -= 1
        # `pushes` was collected walking BACKWARDS from the call, so pushes[0] is
        # the LAST push = stack slot 0 (param_1 of the Ghidra signature).
        args = [v for _, v in pushes]
        rows.append((addr, ecxrow, args))
    i += 1

# arg index (0-based; index i == param_{i+1}) -> row offset
OFF = {0:0x14, 1:0x54, 2:0x94, 3:0x114, 4:0x04, 5:0x08, 6:0x0c, 7:0x118,
       8:0x11c, 9:0x10, 10:0x128, 11:0x120, 12:0x124, 13:0x12c,
       14:0x130, 15:0xd4, 16:0x144, 17:0x148}
STR_OFF = {0x14,0x54,0x94,0xd4}
def getstr(va):
    off = va - 0x50000000
    try:
        raw = open('sof_target/gamex86.dll','rb').read()
    except OSError:
        return None
    if off < 0 or off >= len(raw):
        return None
    e = raw.index(b'\0', off)
    return raw[off:e].decode('latin1')

print("total registration calls:", len(rows))
for n,(calladdr, rowbase, args) in enumerate(rows):
    idx = (rowbase - 0x50159b20)//0x14c if rowbase else None
    vals = {}
    for ai, v in enumerate(args):
        if ai in OFF:
            vals[OFF[ai]] = v
    s = {o: (getstr(vals[o]) if o in STR_OFF and vals.get(o) else None) for o in STR_OFF}
    print(f"--- row {idx}  rowbase=0x{rowbase:08x}  call=0x{calladdr:08x}  nargs={len(args)}")
    for o in sorted(vals):
        v = vals[o]
        tag = ""
        if o in STR_OFF:
            tag = repr(s[o])
        print(f"    +0x{o:03x} = 0x{v:08x}  {f32(v):>12g} {tag}")
