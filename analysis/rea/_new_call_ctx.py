import re
lines=open('analysis/rea/game_disasm.txt',errors='replace').readlines()
idxs=[]
for i,l in enumerate(lines):
    m=re.match(r'^([0-9a-f]+):\s',l)
    if m:
        va=int(m.group(1),16)
        if 0x500e0000<=va<0x500f2000 and 'call   0x501070b0' in l:
            idxs.append(i)
for i in idxs:
    print(f"\n===== call at line {i+1} =====")
    for j in range(i-14,i+16):
        if 0<=j<len(lines):
            print(lines[j].rstrip())
