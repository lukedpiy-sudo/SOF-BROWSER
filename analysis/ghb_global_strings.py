#!/usr/bin/env python3
"""Dump SoF.exe's global Ghoul string table.

The Ghoul net payload never transmits raw strings: every string is sent as
an index into this global table.

    count   u32   at 0x2013ADF0   (3713 in the shipped SoF.exe)
    table   char*[] at 0x2013ADF8  (the count entries)

`FUN_200BDE30` (the writer) adds a string to the table if it is not already
there and writes its index with the encoded-u16 primitive; `FUN_200BE060`
(the reader) looks the index up and copies the bytes out.

    python3 analysis/ghb_global_strings.py sof_target/SoF.exe web/www/ghoulstrings.json
"""
import json
import os
import struct
import sys

COUNT_VA = 0x2013ADF0
TABLE_VA = 0x2013ADF8


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
    src = sys.argv[1] if len(sys.argv) > 1 else 'sof_target/SoF.exe'
    dst = sys.argv[2] if len(sys.argv) > 2 else 'web/www/ghoulstrings.json'
    data = open(src, 'rb').read()
    imagebase, sections = pe_sections(data)

    c_off = to_off(COUNT_VA, imagebase, sections)
    count = struct.unpack_from('<I', data, c_off)[0]
    t_off = to_off(TABLE_VA, imagebase, sections)

    names = []
    bad = 0
    for i in range(count):
        p = struct.unpack_from('<I', data, t_off + i * 4)[0]
        o = to_off(p, imagebase, sections)
        if o is None:
            names.append('')
            bad += 1
            continue
        e = data.find(b'\0', o)
        names.append(data[o:e].decode('latin1'))

    os.makedirs(os.path.dirname(dst) or '.', exist_ok=True)
    with open(dst, 'w') as fh:
        json.dump({'count': count, 'names': names}, fh, indent=0)
        fh.write('\n')

    print(f"the count:            {count}   (the unmapped pointers: {bad})")
    print(f"the file:             {dst}   ({os.path.getsize(dst)} bytes)")
    print(f"the first 12:         {names[:12]}")
    print(f"the last 5:           {names[-5:]}")
    # a quick sanity check: the Ghoul model and event names must be in there
    probes = ['ghoul/pmodels/teamicons/noteam', 'thud', 'inair', 'jump', 'sound', 'fire']
    for probe in probes:
        print(f"  {probe!r}: {'yes' if probe in names else 'NO'}  "
              f"(index {names.index(probe) if probe in names else -1})")


if __name__ == '__main__':
    main()
