import struct,re
DLL='sof_target/gamex86.dll'; data=open(DLL,'rb').read(); BASE=0x50000000
def dword(va): return struct.unpack_from('<I',data,va-BASE)[0]
lines=open('analysis/rea/game_disasm.txt',errors='replace').readlines()
addr2line={}
for i,l in enumerate(lines):
    m=re.match(r'^([0-9a-f]+):\s',l)
    if m: addr2line[int(m.group(1),16)]=i
jt=0x50011164
print("jump table at",hex(jt))
for i in range(11):
    t=dword(jt+4*i)
    print(f"  [{i}] (bodycc={i+3}) -> {t:#x}")
print()
# for each target, dump until ret
seen=set()
for i in range(11):
    t=dword(jt+4*i)
    if t in seen or t==0: continue
    seen.add(t)
    idx=addr2line.get(t)
    if idx is None: 
        print(f"[{i}] {t:#x} no disasm");continue
    print(f"===== case[{i}] bodycc={i+3} target {t:#x} =====")
    for l in lines[idx:idx+30]:
        print('   '+l.rstrip())
        if re.search(r'\bret\b',l):break
    print()
