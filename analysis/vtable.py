#!/usr/bin/env python3
"""Find a C++ vtable in a PE image by looking for a known method address.

    python3 analysis/vtable.py sof_target/SoF.exe 0x2007b430 [--slots 24]

The script prints the table's file offset / virtual address and the entries
around the given method, so a vtable can be mapped slot by slot.
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


def to_rva(imagebase, sections, va):
    rva = va - imagebase
    for name, vaddr, vsize, raddr, rsize in sections:
        if vaddr <= rva < vaddr + max(vsize, rsize):
            return raddr + (rva - vaddr), name
    return None, None


def main():
    path = sys.argv[1]
    target = int(sys.argv[2], 16)
    slots = 24
    if '--slots' in sys.argv:
        slots = int(sys.argv[sys.argv.index('--slots') + 1])
    data = open(path, 'rb').read()
    imagebase, sections = pe_sections(data)
    needle = struct.pack('<I', target)
    pos = 0
    hits = []
    while True:
        pos = data.find(needle, pos)
        if pos < 0:
            break
        hits.append(pos)
        pos += 1
    print(f"the image base is 0x{imagebase:x}")
    for h in hits:
        va = None
        for name, vaddr, vsize, raddr, rsize in sections:
            if raddr <= h < raddr + rsize:
                va = imagebase + vaddr + (h - raddr)
                sec = name
                break
        if va is None:
            print(f"file offset 0x{h:x}: not in a section")
            continue
        print(f"\nfile offset 0x{h:x}  VA 0x{va:x}  ({sec})")
        base = h - (target_slot := 0)
        for i in range(0, slots):
            p = h + i * 4
            if p + 4 > len(data):
                break
            v = struct.unpack_from('<I', data, p)[0]
            mark = '  <-- the method' if i == 0 else ''
            print(f"  +0x{i * 4:03x}  0x{v:08x}{mark}")


if __name__ == '__main__':
    main()
