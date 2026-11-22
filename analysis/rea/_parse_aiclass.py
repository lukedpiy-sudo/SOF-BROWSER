import re
f='analysis/rea/ghoul_all/functions/0x50001a30.c'
txt=open(f).read()
# find all cases in order
cases=[]
for m in re.finditer(r'case (0x[0-9a-f]+|\d+):(.*?)(?=case (0x[0-9a-f]+|\d+):|\Z)',txt,re.S):
    code=int(m.group(1),0)
    body=m.group(2)
    # vtable assignment
    vm=re.search(r'\*puVar1 = &PTR_LAB_([0-9a-f]+);',body)
    vtable=int(vm.group(1),16) if vm else None
    # ctor call (FUN_500ec520 or FUN_500e9cb0)
    cm=re.search(r'puVar1 = (FUN_[0-9a-f]+)\(puVar1\)',body)
    ctor=cm.group(1) if cm else None
    # size
    sm=re.search(r'operator_new\((0x[0-9a-f]+)\)',body)
    size=int(sm.group(1),16) if sm else None
    # base ctor used
    bm=re.search(r'(FUN_[0-9a-f]+|FUN_50009530)\(puVar1',body)
    basector=bm.group(1) if bm else None
    cases.append((code,size,vtable,ctor,basector))
print(f"total cases: {len(cases)}")
for c in cases:
    print(f"cc={c[0]:#04x} size={c[1]:#x} vtable={c[2] and hex(c[2])} ctor={c[3]} base={c[4]}")
