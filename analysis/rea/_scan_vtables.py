import struct

DLL = 'sof_target/gamex86.dll'
data = open(DLL, 'rb').read()
BASE = 0x50000000

def va_to_off(va):
    return va - BASE

def off_to_va(off):
    return off + BASE

# parse PE sections
pe_off = struct.unpack_from('<I', data, 0x3c)[0]
numsec = struct.unpack_from('<H', data, pe_off+6)[0]
opt_size = struct.unpack_from('<H', data, pe_off+20)[0]
sec_off = pe_off + 24 + opt_size
sections = []
for i in range(numsec):
    s = sec_off + i*40
    name = data[s:s+8].rstrip(b'\x00').decode('latin1')
    vsize, vaddr, rsize, raddr = struct.unpack_from('<IIII', data, s+8)
    sections.append((name, vaddr, vsize, raddr, rsize))
print("SECTIONS:")
for sec in sections:
    print("  ", sec)

targets = {
    0x500e8910: 'ctrl_setbody_0e8910',
    0x500ea820: 'ctrl_setbody_0ea820',
    0x500148f0: 'body_ctor_148f0',
    0x50013e40: 'body_ctor_13e40',
}

# scan all dwords aligned at 4 in file, that fall in data sections, equal to targets
for t, label in targets.items():
    pat = struct.pack('<I', t)
    hits = []
    pos = 0
    while True:
        i = data.find(pat, pos)
        if i < 0: break
        # check 4-aligned in file (VA == off+BASE; for identity mapped, VA alignment == off alignment)
        if i % 4 == 0:
            hits.append(i)
        pos = i+1
    print(f"\n=== {label} ({t:#x}) hits: {len(hits)} ===")
    for h in hits:
        # which section
        secname = '?'
        va = off_to_va(h)
        for name, vaddr, vsize, raddr, rsize in sections:
            if raddr <= h < raddr+rsize:
                secname = name
                break
        # dump surrounding dwords +/- 12
        lo = h-16
        dws = [struct.unpack_from('<I', data, lo+4*k)[0] for k in range((32)//4)]
        print(f"  file {h:#x} va {va:#x} sec {secname}: " + ' '.join(f'{d:#010x}' for d in dws))
