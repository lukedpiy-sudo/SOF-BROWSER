import struct
DLL='sof_target/gamex86.dll'
data=open(DLL,'rb').read(); BASE=0x50000000
def offva(o): return o+BASE
def vaoff(v): return v-BASE

vtables = {
 0x50129a80:'baseA(0x50129a80)', 0x50129a88:'ctrlA(0x50129a88)',
 0x50129cf0:'baseB(0x50129cf0)', 0x50129cf8:'ctrlB(0x50129cf8)',
 0x50125608:'0x50125608', 0x50125570:'0x50125570', 0x501281a0:'0x501281a0',
}
for v,label in vtables.items():
    pat=struct.pack('<I',v)
    hits=[]
    pos=0
    while True:
        i=data.find(pat,pos)
        if i<0: break
        if i%4==0: hits.append(i)
        pos=i+1
    print(f"\n=== refs to {label}: {len(hits)} hits ===")
    for h in hits:
        # dump a window around it (the containing table)
        lo=h-32; hi=h+64
        dws=[struct.unpack_from('<I',data,lo+4*k)[0] for k in range((hi-lo)//4)]
        print(f"  @{offva(h):#x} (off {h:#x}):")
        # print with addresses
        s=''
        for k,d in enumerate(dws):
            a=offva(lo+4*k)
            star='*' if a==offva(h) else ' '
            s+=f"\n    {star}{a:#x}: {d:#010x}"
        print(s)
