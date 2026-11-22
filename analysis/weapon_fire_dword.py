#!/usr/bin/env python3
"""Read N dwords from gamex86.dll at a VA (VA = file offset + 0x50000000).

usage: weapon_fire_dword.py 0x501287cc 0x100
       weapon_fire_dword.py 0x501287cc 0x100 --vtable
"""
import struct
import sys

DLL = "sof_target/gamex86.dll"
BASE = 0x50000000


def main() -> int:
    va = int(sys.argv[1], 16)
    size = int(sys.argv[2], 16)
    data = open(DLL, "rb").read()
    off = va - BASE
    for i in range(0, size, 4):
        v = struct.unpack_from("<I", data, off + i)[0]
        tag = ""
        if 0x50000000 <= v < 0x50200000:
            tag = f"  -> 0x{v:08x}"
        print(f"+0x{i:03x}  VA 0x{va + i:08x}  = 0x{v:08x}{tag}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
