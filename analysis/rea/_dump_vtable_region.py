import struct, subprocess, re

DLL = 'sof_target/gamex86.dll'
data = open(DLL, 'rb').read()
BASE = 0x50000000
def va_to_off(va): return va-BASE

# function start addresses from the disasm
fn_starts = set()
for line in open('analysis/rea/game_disasm.txt', errors='replace'):
    m = re.match(r'^([0-9a-f]+):\s', line)
    if m:
        fn_starts.add(int(m.group(1),16))

# known vtable refs from vtable_map files
known_vt = set()
import glob
for f in glob.glob('analysis/rea/vtable_map_*.txt'):
    for line in open(f):
        m = re.match(r'^(0x[0-9a-f]+)\s',line)
        if m: known_vt.add(int(m.group(1),16))

def describe(va):
    tags=[]
    if va in fn_starts: tags.append('FN')
    if va in known_vt: tags.append('VT')
    # readable ascii?
    off=va_to_off(va)
    if 0<=off<len(data):
        b=data[off:off+8]
        s=''.join(chr(c) if 32<=c<127 else '.' for c in b)
        if all(32<=c<127 for c in b[:4]): tags.append('ASC:'+s)
    return ','.join(tags) if tags else ''

def dump(va, count, label):
    print(f"\n===== {label}: {va:#x} .. {va+count*4:#x} =====")
    for k in range(count):
        a=va+4*k
        d=struct.unpack_from('<I',data,va_to_off(a))[0]
        dsc=describe(d)
        mark=' <--' if dsc else ''
        print(f"  {a:#x}: {d:#010x}  {dsc}{mark}")

dump(0x50129a60, 32, 'vtable region A (500e8910)')
dump(0x50129cd0, 32, 'vtable region B (500ea820)')
