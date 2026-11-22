import struct,sys
DLL='sof_target/gamex86.dll'
data=open(DLL,'rb').read(); BASE=0x50000000
def cstr(va):
    o=va-BASE
    if o<0 or o>=len(data): return '<out of range>'
    e=data.find(b'\x00',o,o+200)
    if e<0: e=o+200
    return data[o:e].decode('latin1','replace')

vas=[0x5012f824,0x50151bf0,0x50151784,0x5012f830,0x50152c64,0x50146508,0x50153c50,
     0x50153c28,0x50153f20,0x50153e68,0x50153f14,0x50153e40,0x5012fe04,0x5018b440,
     0x50152234,0x5014e680,0x5012fa24,0x5012505c,0x501135eb,0x50113588]
for v in vas:
    print(f"{v:#x}: {cstr(v)!r}")
