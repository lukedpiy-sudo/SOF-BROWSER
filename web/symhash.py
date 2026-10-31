"""
symhash.py - symbolically execute SoF.exe's unrolled hash transform
(0x2004CAD0) and print the 48 step formulas.

Initial register roles:  eax=A edi=B edx=C ebp=D
Message words:           [esp+14h + k*4]  ->  w[k]
"""
import re, bisect, json

DIS = r"C:\Users\User\AppData\Local\Temp\sof_eng_disasm.txt"
rx = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*((?:[0-9A-Fa-f]{2}\s+)+)?(.*)$")
seg = []
for l in open(DIS, errors="replace"):
    m = rx.match(l)
    if m and (m.group(3) or "").strip():
        seg.append((int(m.group(1), 16), m.group(3).strip()))
addrs = [a for a, _ in seg]
i = bisect.bisect_left(addrs, 0x2004CAD0)
j = bisect.bisect_left(addrs, 0x2004D150)
tr = seg[i:j]

val = {"eax": "A", "ebx": "?", "ecx": "?", "edx": "C", "esi": "?", "edi": "B", "ebp": "D"}
steps = []
shr_info = None
rot_pending = None


def operand(txt):
    t = txt.strip()
    t = re.sub(r"^(byte|word|dword)\s+ptr\s+", "", t)
    m = re.search(r"\[esp\+([0-9A-Fa-f]+)h\]", t)
    if m:
        off = int(m.group(1), 16)
        if 0x14 <= off <= 0x50 and (off - 0x14) % 4 == 0:
            return "w%d" % ((off - 0x14) // 4)
    if t in val:
        return val[t]
    return t


for a, text in tr:
    parts = text.split(None, 1)
    op = parts[0]
    rest = parts[1] if len(parts) > 1 else ""
    ops = [o.strip() for o in rest.split(",")] if rest else []

    if op == "mov" and len(ops) == 2:
        d, s = ops
        if d in val:
            val[d] = operand(s)
    elif op == "not" and len(ops) == 1:
        if ops[0] in val:
            val[ops[0]] = "~(%s)" % val[ops[0]]
    elif op in ("and", "or", "xor", "add") and len(ops) == 2:
        d, s = ops
        if op == "or" and rot_pending and d == rot_pending[0]:
            dst, amount, base = rot_pending
            val[dst] = "ROL(%s,%d)" % (base, amount)
            steps.append({"addr": "0x%08X" % a, "reg": dst, "rot": amount, "expr": base})
            rot_pending = None
            continue
        sym = {"and": "&", "or": "|", "xor": "^", "add": "+"}[op]
        if d in val:
            val[d] = "(%s %s %s)" % (val[d], sym, operand(s))
    elif op == "shr" and len(ops) == 2:
        shr_info = (ops[0], 32 - int(ops[1].rstrip("h"), 16))
    elif op == "shl" and len(ops) == 2:
        m = int(ops[1].rstrip("h"), 16)
        if shr_info and m == shr_info[1]:
            rot_pending = (shr_info[0], shr_info[1], val.get(ops[0], "?"))
    elif op == "rol" and len(ops) == 2:
        pass

print("steps found:", len(steps))
for k, s in enumerate(steps):
    print("%2d rot=%-2d %s" % (k, s["rot"], s["expr"]))
json.dump(steps, open(r"C:\Users\User\q2work\sof2\web\sofhash_formulas.json", "w"), indent=1)
