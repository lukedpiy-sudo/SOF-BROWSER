#!/usr/bin/env python3
"""Read a NUL-terminated ASCII string out of sof_target/gamex86.dll.
For gamex86.dll: file offset = VA - 0x50000000 (sections identity-mapped).
"""
import sys

BIN = 'sof_target/gamex86.dll'
BASE = 0x50000000

def getstr(va, maxlen=80):
    with open(BIN, 'rb') as f:
        f.seek(va - BASE)
        b = f.read(maxlen)
    i = b.find(b'\x00')
    if i >= 0:
        b = b[:i]
    return b.decode('latin-1')

if __name__ == '__main__':
    for a in sys.argv[1:]:
        va = int(a, 16)
        print('0x%08X  %r' % (va, getstr(va)))
