#!/usr/bin/env python3
"""pe.py - read PE sections / RVA data from SoF.exe"""
import struct, sys, os

EXE = r"C:\Users\User\Soldier of Fortune\SoF.exe"

def sections():
    with open(EXE, "rb") as f:
        data = f.read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    nsec = struct.unpack_from("<H", data, e_lfanew + 6)[0]
    optsz = struct.unpack_from("<H", data, e_lfanew + 20)[0]
    sec = e_lfanew + 24 + optsz
    out = []
    for i in range(nsec):
        o = sec + i * 40
        name = data[o:o+8].rstrip(b"\0").decode("latin1")
        vsz, va, rsz, raw = struct.unpack_from("<IIII", data, o + 8)
        out.append((name, va, vsz, raw, rsz))
    return data, out

def rva2off(rva, secs):
    for name, va, vsz, raw, rsz in secs:
        if va <= rva < va + max(vsz, rsz):
            return raw + (rva - va)
    return None

def read(rva, n, data, secs):
    off = rva2off(rva, secs)
    return data[off:off+n]

def cstr(rva, data, secs, maxn=200):
    off = rva2off(rva, secs)
    if off is None: return "<unmapped %x>" % rva
    end = data.index(b"\0", off, off+maxn)
    return data[off:end].decode("latin1")

if __name__ == "__main__":
    data, secs = sections()
    if len(sys.argv) > 1 and sys.argv[1] == "sec":
        for s in secs: print("%-10s va=%08x vsz=%08x raw=%08x rsz=%08x" % s)
    elif len(sys.argv) > 1 and sys.argv[1] == "dword":
        rva = int(sys.argv[2], 16)
        for i in range(int(sys.argv[3]) if len(sys.argv) > 3 else 1):
            v = struct.unpack_from("<I", read(rva + i*4, 4, data, secs))[0]
            print("%08x: %08x" % (rva + i*4, v))
    elif len(sys.argv) > 1 and sys.argv[1] == "str":
        rva = int(sys.argv[2], 16)
        print(repr(cstr(rva, data, secs)))
