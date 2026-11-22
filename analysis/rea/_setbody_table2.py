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
def funcstart(idx):
    # scan back to nearest 'mov    %fs:0x0,%eax' prologue
    for k in range(idx,max(0,idx-80),-1):
        if 'mov    %fs:0x0,%eax' in lines[k]:
            return int(lines[k].split(':')[0],16)
    return None
def ctor_vtables(ctor):
    idx=addr2line.get(ctor)
    if idx is None: return []
    out=[]
    for l in lines[idx:idx+400]:
        m=re.search(r'movl\s+\$(0x5012[0-9a-f]{4}),\(%',l)
        if m: out.append(int(m.group(1),16))
        if re.search(r'\bret\b',l): break
    return out

news=[0x500c4a6c,0x500c7dbc,0x500ca9ac,0x500cbc6a,0x500cbd9a,0x500cc2da,
      0x500d020b,0x500dadac,0x500db0cc,0x500e894b,0x500ea85b]
print("SETBODY_START | prg_new | size | ctor | ctor_vtables | ctrl_vtable_ptr_locs | vtable-base(8b before)")
for new in news:
    idx=addr2line[new]
    fs=funcstart(idx)
    chunk=lines[idx-12:idx+40]
    ni=12
    size='?'
    for k in range(ni-1,-1,-1):
        m=re.search(r'push\s+\$(0x[0-9a-f]+)',chunk[k])
        if m: size=m.group(1);break
    ctor='?'
    for k in range(ni+1,min(ni+12,len(chunk))):
        m=re.search(r'call\s+(0x[0-9a-f]+)',chunk[k])
        if m and m.group(1)!='0x501070b0': ctor=m.group(1);break
    ci=int(ctor,16) if ctor!='?' else 0
    cv=ctor_vtables(ci) if ci else []
    ptrs=find_ptr_in_data(fs) if fs else []
    bases=[]
    for p in ptrs:
        o=p-BASE-8
        if o>=0:
            bases.append(hex(struct.unpack_from('<I',data,o)[0]))
    print(f"{fs and hex(fs)} | {new:#x} | {size} | {ctor} | {[hex(x) for x in cv]} | {[hex(p) for p in ptrs]} | {bases}")
