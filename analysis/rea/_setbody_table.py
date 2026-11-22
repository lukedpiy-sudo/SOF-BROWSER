import struct,re
DLL='sof_target/gamex86.dll'; data=open(DLL,'rb').read(); BASE=0x50000000
lines=open('analysis/rea/game_disasm.txt',errors='replace').readlines()
addr2line={}
for i,l in enumerate(lines):
    m=re.match(r'^([0-9a-f]+):\s',l)
    if m: addr2line[int(m.group(1),16)]=i
def find_ptr_in_data(addr):
    pat=struct.pack('<I',addr); hits=[];pos=0
    while True:
        i=data.find(pat,pos)
        if i<0:break
        if i%4==0:hits.append(i+BASE)
        pos=i+1
    return hits
def get_ctor_vtable(ctor):
    # window: from ctor start, scan forward up to ret
    idx=addr2line.get(ctor)
    if idx is None: return None
    for l in lines[idx:idx+400]:
        m=re.search(r'movl\s+\$(0x5012[0-9a-f]{4}),\(%',l)
        if m: return int(m.group(1),16)
        if re.search(r'\bret\b',l): break
    return None

setbodies=[0x500c4a5e,0x500c7db7,0x500ca9a7,0x500cbc65,0x500cbd95,0x500cc2d5,
           0x500d0206,0x500dada7,0x500db0c7,0x500e894b,0x500ea85b,
           0x500038bf,0x5000446f,0x500047cd]
for sb in setbodies:
    idx=addr2line.get(sb)
    lo=idx-12; hi=idx+40
    chunk=lines[lo:hi]
    ni=None
    for k,l in enumerate(chunk):
        if 'call   0x501070b0' in l: ni=k;break
    size='?';ctor='?';argpush=False
    if ni is not None:
        for k in range(ni-1,-1,-1):
            m=re.search(r'push\s+\$(0x[0-9a-f]+)',chunk[k])
            if m: size=m.group(1);break
        for k in range(ni+1,min(ni+12,len(chunk))):
            m=re.search(r'call\s+(0x[0-9a-f]+)',chunk[k])
            if m and m.group(1)!='0x501070b0':
                ctor=m.group(1)
                for kk in range(max(0,k-3),k):
                    if re.search(r'push\s+%edi',chunk[kk]): argpush=True
                break
    ci=int(ctor,16) if ctor!='?' else 0
    bv=get_ctor_vtable(ci) if ci else None
    ptrs=find_ptr_in_data(sb)
    print(f"SB={sb:#x} ctrlvta={[hex(p) for p in ptrs]} size={size} ctor={ctor} bodyvta={bv and hex(bv)} arg={argpush}")
