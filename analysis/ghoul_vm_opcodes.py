#!/usr/bin/env python3
"""Extract the Ghoul animation state -> clip name table from the game module.

The Ghoul script bytecode is interpreted by `FUN_5007EC40` (gamex86.dll).
It pops a *state object* off its stack, asks the object for its state code
(`vtable+0x04`) and then switches on that code.  Each case of the switch
gives the triple

    (the state code, the blend float, the clip name)

which is handed to `FUN_50080D30` - the "play this animation state" call.

The decompile of the interpreter is in analysis/rea/ghoul_vm.txt; this
script reads the switch out of it and resolves the clip names from the
module's own string table.

    python3 analysis/ghoul_vm_opcodes.py
"""
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(ROOT, 'analysis', 'rea', 'ghoul_vm.txt')
DLL = os.path.join(ROOT, 'sof_target', 'gamex86.dll')

CASE_RE = re.compile(r'^\s*case\s+(0x[0-9a-fA-F]+|\d+)\s*:')
STATE_RE = re.compile(r'^\s*uVar11\s*=\s*(\d+)\s*;')
FLOAT_RE = re.compile(r'^\s*uStack_88\s*=\s*(0x[0-9a-fA-F]+|\d+)\s*;')
NAME_RE = re.compile(r'^\s*pcVar12\s*=\s*s_(\S+?)_([0-9a-fA-F]{6,8})\s*;')
DEFAULT_RE = re.compile(r'^\s*default\s*:')


def pe_sections(data):
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    nsec = struct.unpack_from('<H', data, pe + 6)[0]
    optsz = struct.unpack_from('<H', data, pe + 20)[0]
    imagebase = struct.unpack_from('<I', data, pe + 24 + 28)[0]
    off = pe + 24 + optsz
    out = []
    for i in range(nsec):
        name = data[off:off + 8].rstrip(b'\0').decode('latin1')
        vsize, vaddr, rsize, raddr = struct.unpack_from('<IIII', data, off + 8)
        out.append((name, vaddr, vsize, raddr, rsize))
        off += 40
    return imagebase, out


def to_off(va, imagebase, sections):
    rva = va - imagebase
    for name, vaddr, vsize, raddr, rsize in sections:
        if vaddr <= rva < vaddr + max(vsize, rsize):
            return raddr + (rva - vaddr)
    return None


def main():
    data = open(DLL, 'rb').read()
    imagebase, sections = pe_sections(data)

    def cstr(va):
        o = to_off(va, imagebase, sections)
        if o is None:
            return ''
        e = data.find(b'\0', o)
        return data[o:e].decode('latin1')

    text = open(DEC).read().splitlines()
    table = []
    # the case labels of the current body: several labels can share one
    # body (case 5: falls through into case 0xfc:), so the body is
    # collected first and then applied to every label of the group
    labels = []
    body = {'state': None, 'blend': None, 'clip': None}
    in_switch = False

    def flush():
        if not labels:
            return
        for op in labels:
            row = {'opcode': op}
            row.update(body)
            # the module's names are lower case ("std_sblown_2bk_n_n") but
            # the .ghb clips are upper case ("STD_SBLOWN_2BK_N_N")
            row['clipUpper'] = (row['clip'].upper() if row['clip'] else None)
            table.append(row)

    for line in text:
        if 'switch(uVar6)' in line:
            in_switch = True
            continue
        if not in_switch:
            continue
        m = CASE_RE.match(line)
        if m:
            if labels and body == {'state': None, 'blend': None, 'clip': None}:
                # a label with an empty body: the next label shares it
                labels.append(int(m.group(1), 0))
                continue
            flush()
            labels = [int(m.group(1), 0)]
            body = {'state': None, 'blend': None, 'clip': None}
            continue
        if DEFAULT_RE.match(line):
            flush()
            labels = []
            body = {'state': None, 'blend': None, 'clip': None}
            continue
        if not labels:
            continue
        m = STATE_RE.match(line)
        if m and body['state'] is None:
            body['state'] = int(m.group(1))
            continue
        m = FLOAT_RE.match(line)
        if m and body['blend'] is None:
            v = int(m.group(1), 0)
            f = struct.unpack('<f', struct.pack('<I', v & 0xffffffff))[0]
            body['blend'] = f
            continue
        m = NAME_RE.match(line)
        if m and body['clip'] is None:
            body['clip'] = cstr(int(m.group(2), 16))
            continue
    flush()

    table.sort(key=lambda r: r['opcode'])
    out = os.path.join(ROOT, 'analysis', 'ghoul_states.json')
    with open(out, 'w') as fh:
        json.dump(table, fh, indent=1)
        fh.write('\n')

    named = [r for r in table if r['clip']]
    states = sorted(set(r['state'] for r in table if r['state'] is not None))
    blends = sorted(set(r['blend'] for r in table if r['blend'] is not None))
    print(f"the opcodes:            {len(table)}")
    print(f"with a clip name:       {len(named)}")
    print(f"the distinct states:    {states}")
    print(f"the distinct blends:    {blends}")
    print(f"the file:               {out}  ({os.path.getsize(out)} bytes)")
    print()
    for r in table[:8]:
        print(f"   opcode 0x{r['opcode']:02x}  state {r['state']}  "
              f"blend {r['blend']}  {r['clip']}")
    print('   ...')
    for r in table[-5:]:
        print(f"   opcode 0x{r['opcode']:02x}  state {r['state']}  "
              f"blend {r['blend']}  {r['clip']}")


if __name__ == '__main__':
    main()
