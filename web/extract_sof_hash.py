"""
extract_sof_hash.py - parse SoF.exe's unrolled MD4-family transform
(0x2004CAD0) and recover the per-step formula table.

Registers: eax=A edi=B edx=C ebp=D  (from ctx+0,+4,+8,+0xC)
The message words live at [esp+14h + k*4].
"""
import re, bisect, json, sys

DIS = r"C:\Users\User\AppData\Local\Temp\sof_eng_disasm.txt"
lines = open(DIS, errors="replace").read().splitlines()
rx = re.compile(r"^\s*([0-9A-Fa-f]{8}):\s*(.*)$")
idx = []
for l in lines:
    m = rx.match(l)
    if m:
        idx.append((int(m.group(1), 16), m.group(2).strip()))
addrs = [a for a, _ in idx]
i = bisect.bisect_left(addrs, 0x2004CAD0)
j = bisect.bisect_left(addrs, 0x2004D150)
seg = idx[i:j]

REGS = {"eax": "A", "ebx": "B", "ecx": "C", "edx": "D", "esi": "?", "edi": "?", "ebp": "?"}

def parse(t):
    m = re.match(r"^(\S+)\s+(\S+)(?:,\s*(\S+))?$", t)
    return m.groups() if m else None

# Walk the instructions and rebuild the per-step structure.
# Strategy: identify "steps" by the pattern:
#    <F computation> ; add <state>,<F> ; rotate
# We locate the rotate (shr N + shl (32-N) pair) as the step anchor and
# then look backwards for the 'add <state>, reg' and the word load.

steps = []
cur = {"rot": None, "word": None, "state": None, "fpat": None}
i = 0
pending_not = None
regs = {}          # register -> symbolic value
memword = {}       # esp offset -> word index

while i < len(seg):
    a, t = seg[i]
    p = parse(t)
    if not p:
        i += 1
        continue
    op, d1, d2 = p
    # track 'not'
    if op == "not" and d1 in REGS:
        pending_not = d1
        regs[d1] = "~" + REGS.get(d1, d1)
    elif op == "and" and d2:
        regs[d1] = regs.get(d1, "?") + "&" + REGS.get(d2, d2)
    elif op == "or" and d2:
        regs[d1] = regs.get(d1, "?") + "|" + REGS.get(d2, d2)
    elif op == "mov" and d2:
        if d1 in REGS:
            if d2 in REGS:
                regs[d1] = REGS[d2]
            else:
                regs[d1] = d2
    elif op == "add" and d2:
        if d1 in REGS and d2 in REGS:
            regs[d1] = regs.get(d1, "?") + "+" + regs.get(d2, "?")
    elif op == "shr" and d2:
        n = int(d2.rstrip("h"), 16)
        cur["rot"] = 32 - n
    elif op == "shl":
        pass
    i += 1

# second pass: find word loads and state adds
def find_word_index(txt):
    m = re.search(r"\[esp\+([0-9A-Fa-f]+)h\]", txt)
    if not m:
        return None
    off = int(m.group(1), 16)
    if off >= 0x14 and (off - 0x14) % 4 == 0:
        return (off - 0x14) // 4
    return None

# Emit the raw instruction list around each 'shr' for manual inspection
anchors = [k for k, (a, t) in enumerate(seg) if re.match(r"^shr\s+\w+,[0-9A-Fa-f]+h$", t)]
print("rotate anchors found:", len(anchors))
out = []
for n, k in enumerate(anchors):
    a, t = seg[k]
    nval = int(t.split(",")[1].rstrip("h"), 16)
    rot = 32 - nval
    # look back 14 instructions for the word load and the state add
    ctx = seg[max(0, k - 16):k + 2]
    words = [find_word_index(x[1]) for x in ctx]
    words = [w for w in words if w is not None]
    out.append({"rot": rot, "addr": "0x%08X" % a, "wordloads": words})
for o in out[:16]:
    print(o)
json.dump(out, open(r"C:\Users\User\q2work\sof2\web\sofhash_steps.json", "w"), indent=1)
print("wrote sofhash_steps.json")
