#!/usr/bin/env python3
"""Track the ESP delta through a function so that stack references can be
resolved to absolute slots (relative to the ESP at function entry).

Usage: weapon_fire_stack.py 0x50106640 0x50106890
"""
import re, sys

DIS = "analysis/rea/game_disasm.txt"
START = int(sys.argv[1], 16)
END = int(sys.argv[2], 16)

ins_re = re.compile(r'^\s*([0-9a-f]+):\s+(.*)$')
mem_re = re.compile(r'(-?0x[0-9a-f]+|-?\d+)?\(%esp\)')
imm_re = re.compile(r'\$(-?0x[0-9a-f]+|-?\d+)')

delta = 0  # bytes pushed below the entry ESP (positive = esp is lower)
out = []
for ln in open(DIS, encoding="utf-8", errors="replace"):
    m = ins_re.match(ln)
    if not m:
        continue
    addr = int(m.group(1), 16)
    if addr < START or addr > END:
        continue
    txt = m.group(2).strip()
    op = txt.split()[0] if txt else ""

    # annotate stack references with the absolute slot
    annot = txt
    for mm in mem_re.finditer(txt):
        off = mm.group(1)
        if off is None:
            off = 0
        else:
            off = int(off, 16) if off.startswith(('-0x', '0x')) else int(off)
        absolute = delta + off
        annot = annot.replace(mm.group(0), f"{mm.group(0)}[slot{absolute:+d}]")

    out.append(f"{addr:08x}: {annot}   ; esp_off={delta}")

    # now update delta for the instruction's own effect
    if op in ("push", "pushl", "pushw"):
        delta += 4
    elif op in ("pop", "popl"):
        delta -= 4
    elif op in ("call", "calll"):
        delta += 4
    elif op == "ret":
        pass
    else:
        mm = re.match(r'(sub|add)\s+\$(-?0x[0-9a-f]+|-?\d+),%esp$', txt)
        if mm:
            v = int(mm.group(2), 16) if mm.group(2).startswith(('-0x', '0x')) else int(mm.group(2))
            delta += v if mm.group(1) == "sub" else -v

print("\n".join(out))
