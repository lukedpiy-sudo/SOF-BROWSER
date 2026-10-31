#!/usr/bin/env python3
"""sofdis.py - disassemble a window of SoF.exe (or any PE) with capstone.

  python sofdis.py <exe> <VA> [count] [back]

The VA is the image based one (0x20110e1 style).  The count is the number of
instructions, back the number of instructions to show before the VA.
"""
import sys, struct

def sections(path):
    b = open(path, "rb").read()
    e = struct.unpack_from("<I", b, 0x3c)[0]
    nsec = struct.unpack_from("<H", b, e + 6)[0]
    optsz = struct.unpack_from("<H", b, e + 20)[0]
    base = struct.unpack_from("<I", b, e + 0x34)[0]
    out = []
    off = e + 24 + optsz
    for i in range(nsec):
        o = off + i * 40
        name = b[o:o+8].rstrip(b"\0").decode("latin1")
        vsize, vaddr, rsize, rptr = struct.unpack_from("<IIII", b, o + 8)
        out.append((name, base + vaddr, max(vsize, rsize), rptr, rsize))
    return b, base, out

def to_off(secs, va):
    for name, va0, size, rptr, rsize in secs:
        if va0 <= va < va0 + size:
            return rptr + (va - va0)
    return None

def main():
    path = sys.argv[1] if len(sys.argv) > 1 else r"C:\Users\User\q2work\sof2\sof_target\SoF.exe"
    va = int(sys.argv[2], 0) if len(sys.argv) > 2 else 0x20110e1
    count = int(sys.argv[3]) if len(sys.argv) > 3 else 60
    back = int(sys.argv[4]) if len(sys.argv) > 4 else 0
    b, base, secs = sections(path)
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    md.detail = False
    off = to_off(secs, va)
    if off is None:
        print("the VA is not mapped"); return
    start_va = va - back * 6
    start_off = to_off(secs, start_va)
    code = b[start_off:off + count * 16 + 64]
    print("the file offset of 0x%x is 0x%x" % (va, off))
    n = 0
    for ins in md.disasm(code, start_va):
        raw = " ".join("%02x" % c for c in ins.bytes)
        print("%08x  %-28s %-8s %s" % (ins.address, raw, ins.mnemonic, ins.op_str))
        n += 1
        if ins.address >= va and n >= count + back:
            break
        if n > count + back + 40:
            break

main()
