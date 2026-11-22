import struct,re
DLL='sof_target/gamex86.dll'; data=open(DLL,'rb').read(); BASE=0x50000000
lines=open('analysis/rea/game_disasm.txt',errors='replace').readlines()
addr2line={}
for i,l in enumerate(lines):
    m=re.match(r'^([0-9a-f]+):\s',l)
    if m: addr2line[int(m.group(1),16)]=i
def dword(va): return struct.unpack_from('<I',data,va-BASE)[0]
txt=open('analysis/rea/ghoul_all/functions/0x50001a30.c').read()
ccmap=[]
for m in re.finditer(r'case (0x[0-9a-f]+|\d+):(.*?)(?=case (0x[0-9a-f]+|\d+):|\Z)',txt,re.S):
    code=int(m.group(1),0);body=m.group(2)
    vm=re.search(r'\*puVar1 = &PTR_LAB_([0-9a-f]+);',body)
    cm=re.search(r'puVar1 = (FUN_[0-9a-f]+)\(puVar1\)',body)
    ccmap.append((code,int(vm.group(1),16) if vm else None,cm.group(1) if cm else None))
special={0x09:0x50129cf8,0x0a:0x50129a88}
def ctor_vtables(ctor):
    idx=addr2line.get(ctor)
    if idx is None:return []
    out=[]
    for l in lines[idx:idx+500]:
        m=re.search(r'movl\s+\$(0x5012[0-9a-f]{4}),\(%',l)
        if m: out.append(int(m.group(1),16))
        if re.search(r'\bret\b',l):break
    return out
def setbody_info(sb):
    idx=addr2line.get(sb)
    if idx is None:return (None,None,[])
    ni=None
    for k in range(idx,idx+40):
        if 'call   0x501070b0' in lines[k]: ni=k;break
    if ni is None:return (None,None,[])
    size=None;ctor=None
    for k in range(max(0,ni-6),ni):
        m=re.search(r'push\s+\$(0x[0-9a-f]+)',lines[k])
        if m: size=int(m.group(1),16)
    for k in range(ni+1,min(ni+14,len(lines))):
        m=re.search(r'call\s+(0x[0-9a-f]+)',lines[k])
        if m and m.group(1)!='0x501070b0':
            ctor=int(m.group(1),16);break
    return (size,ctor,ctor_vtables(ctor) if ctor else [])
print("cc  ctrl_vtable  slot0_setbody  body_size  body_ctor  body_vtables_in_ctor")
for code,vtable,ctor in ccmap:
    if code in special: vtable=special[code]
    if vtable is None:
        print(f"{code:#04x}  <ctor-only: {ctor}>");continue
    try:
        sb=dword(vtable)
        size,ctor2,cvs=setbody_info(sb)
        print(f"{code:#04x}  {vtable:#x}  {sb:#x}  {size and hex(size)}  {ctor2 and hex(ctor2)}  {[hex(x) for x in cvs]}")
    except Exception as e:
        print(f"{code:#04x}  {vtable:#x}  ERROR {e}")
