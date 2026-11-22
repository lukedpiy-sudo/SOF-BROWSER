#!/usr/bin/env python3
"""Provenance probe for one module -> engine import slot.

Prints, for a slot number:

  * the engine function's disassembly (a window of instructions), with every
    pushed constant resolved to its ASCII string when it points at one;
  * the module's call sites (`call *0x5015xxxx`) with the argument pushes
    above them, again with the string constants resolved.

That combination is what turns `call *0x5015ca30` into a name: the engine
side tells us what the function *is*, the module side tells us what it is
*called with*.

    python3 analysis/import_slot_probe.py 16
    python3 analysis/import_slot_probe.py 16 --calls 8 --win 40
"""
import argparse
import bisect
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SOF_DIS = os.path.join(ROOT, 'analysis', 'rea', 'sof_disasm.txt')
GAME_DIS = os.path.join(ROOT, 'analysis', 'rea', 'game_disasm.txt')
SOF_BIN = os.path.join(ROOT, 'sof_target', 'SoF.exe')
GAME_BIN = os.path.join(ROOT, 'sof_target', 'gamex86.dll')

LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')
TABBED = re.compile(r'^([0-9a-f]+):\t(.*)$')

# slot -> (engine VA, module VA) is produced by engine_imports.py; we import
# the same parser here rather than duplicating the table.
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import engine_imports  # noqa: E402


def load_disasm(path, tabbed):
    rx = TABBED if tabbed else LINE
    rows = []
    with open(path, errors='replace') as fh:
        for line in fh:
            m = rx.match(line.rstrip('\n'))
            if not m:
                continue
            ins = m.group(2).strip()
            if not ins:
                continue
            rows.append((int(m.group(1), 16), ins))
    return rows


def load_strings(path, base):
    with open(path, 'rb') as fh:
        blob = fh.read()

    def cstr(va):
        off = va - base
        if off < 0 or off >= len(blob):
            return None
        end = blob.find(b'\0', off)
        if end < 0:
            return None
        raw = blob[off:end]
        if not (2 <= len(raw) <= 90):
            return None
        if not all(32 <= c < 127 for c in raw):
            return None
        return raw.decode('latin1')
    return cstr


def engine_table():
    """slot -> engine VA, using the same builder logic as engine_imports.py."""
    table = {}
    delta = 0
    with open(SOF_DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if not m:
                continue
            addr = int(m.group(1), 16)
            if addr < engine_imports.LO:
                continue
            if addr > engine_imports.HI:
                break
            text = m.group(2)
            mm = engine_imports.MOVL.search(text)
            if mm:
                slot = (int(mm.group(2), 16) + delta) // 4
                table[slot] = int(mm.group(1), 16)
            parts = text.split(None, 1)
            ins = parts[1] if len(parts) > 1 else text
            if re.match(r'push\s', ins):
                delta -= 4
            elif re.match(r'pop\s', ins):
                delta += 4
    return table


def annotate(ins, cstr):
    out = []
    for mm in re.finditer(r'(?:push|mov)\s+\$0x([0-9a-f]+)', ins):
        text = cstr(int(mm.group(1), 16))
        if text:
            out.append('; %r' % text)
    mm = re.search(r'call\s+0x([0-9a-f]+)', ins)
    if mm:
        out.append('-> 0x%s' % mm.group(1))
    return ('   ' + ' '.join(out)) if out else ''


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('slots', nargs='+', type=int)
    ap.add_argument('--win', type=int, default=28, help='engine instruction window')
    ap.add_argument('--calls', type=int, default=4, help='module call sites to show')
    args = ap.parse_args()

    table = engine_table()
    sof = load_disasm(SOF_DIS, tabbed=False)
    sof_addrs = [a for a, _ in sof]
    game = load_disasm(GAME_DIS, tabbed=True)
    game_addrs = [a for a, _ in game]
    sof_cstr = load_strings(SOF_BIN, 0x20000000)
    game_cstr = load_strings(GAME_BIN, 0x50000000)

    # module address -> the slots that live there
    for slot in args.slots:
        if slot not in table:
            print('slot %d: the engine never writes it (the hole)' % slot)
            continue
        engine_va = table[slot]
        module_va = 0x5015C9F0 + 4 * slot
        print('=' * 78)
        print('=== slot %d  module 0x%08x  engine 0x%08x' % (slot, module_va, engine_va))
        print('--- the engine side')
        i = bisect.bisect_left(sof_addrs, engine_va)
        for a, ins in sof[i:i + args.win]:
            print('  %08x: %s%s' % (a, ins, annotate(ins, sof_cstr)))
            if re.search(r'\bret\b', ins):
                break
        print('--- the module call sites')
        hits = [j for j, (a, ins) in enumerate(game)
                if re.search(r'call\s+\*0x%x\b' % module_va, ins)]
        print('  %d call sites' % len(hits))
        for j in hits[:args.calls]:
            print('  --- at 0x%08x' % game[j][0])
            for a, ins in game[max(0, j - 10):j + 2]:
                print('    %08x: %s%s' % (a, ins, annotate(ins, game_cstr)))
    return 0


if __name__ == '__main__':
    sys.exit(main())
