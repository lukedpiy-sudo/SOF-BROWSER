import struct
DLL='sof_target/gamex86.dll'; data=open(DLL,'rb').read(); BASE=0x50000000
targets={
 0x500e9cb0:'ctorA_500e9cb0', 0x500ec520:'ctorB_500ec520',
 0x500e8260:'setvA_500e8260', 0x500ea180:'setvB_500ea180',
 0x500e8910:'setbodyA',0x500ea820:'setbodyB',
 0x500148f0:'bodyctorA',0x50013e40:'bodyctorB',
}
for t,l in targets.items():
    pat=struct.pack('<I',t); hits=[];pos=0
    while True:
        i=data.find(pat,pos)
        if i<0:break
        if i%4==0: hits.append(i)
        pos=i+1
    print(f"{l} {t:#x}: {len(hits)} hits: "+' '.join(f'{h+t*0:#x}' for h in [])
          + ' '.join(f'{h+BASE:#x}' for h in hits[:20]))
    for h in hits[:6]:
        lo=h-24; hi=h+40
        dws=[struct.unpack_from('<I',data,lo+4*k)[0] for k in range((hi-lo)//4)]
        print(f"   ctx @{h+BASE:#x}: "+' '.join(f'{d:#010x}' for d in dws))
