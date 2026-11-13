#!/usr/bin/env python3
"""Read float constants and float tables out of a PE image at a given VA.

    python3 analysis/pefloats.py sof_target/SoF.exe 0x20111b00 0x20157000
    python3 analysis/pefloats.py sof_target/SoF.exe 0x20156fcc --count 8
"""
import struct
import sys


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
            return raddr + (rva - vaddr), name
    return None, None


def main():
    path = sys.argv[1]
    args = sys.argv[2:]
    count = 1
    if '--count' in args:
        i = args.index('--count')
        count = int(args[i + 1])
        del args[i:i + 2]
    data = open(path, 'rb').read()
    imagebase, sections = pe_sections(data)
    for arg in args:
        va = int(arg, 16)
        off, sec = to_off(va, imagebase, sections)
        if off is None:
            print(f"0x{va:08x}: not mapped")
            continue
        vals = struct.unpack_from('<%df' % count, data, off)
        ints = struct.unpack_from('<%dI' % count, data, off)
        print(f"0x{va:08x} ({sec}):")
        for k, (f, i) in enumerate(zip(vals, ints)):
            print(f"  +{k * 4:02x}  float {f!r}   (0x{i:08x})")


if __name__ == '__main__':
    main()
