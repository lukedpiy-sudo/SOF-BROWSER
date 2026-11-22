#!/usr/bin/env python3
"""Verify soflight.js's draw indexing against the renderer's material groups.

app.js buildMap() emits all face fan triangles into ONE index buffer and
records per material (start = idx.length at that material's first face,
count = its total index count).  Those ranges overlap, so the renderer's
drawElements(offset,count) cannot be reused verbatim against a different
index buffer.  soflight.js now reproduces that table, keeps its own
contiguous per-material ranges, and maps incoming (offset,count) -> range.

Simulates old vs new and reports how many drawn triangles land on the right
face / right texture.
"""
import json
from collections import OrderedDict

SKY, NODRAW = "subway/sky2", "subway/no_draw"
m = json.load(open("web/www/map_bsp.json"))
faces = m["faces"]
mat_of = [(f.get("mat") or "") for f in faces]

# --- the renderer's group table and its index buffer (face order) ---
app_idx = []                       # face per index slot
groups = OrderedDict()
render = 0
for fi, f in enumerate(faces):
    v = f.get("v") or []
    if len(v) < 3:
        continue
    key = mat_of[fi]
    if key not in groups:
        groups[key] = dict(start=render, count=0)
    n = (len(v) - 2) * 3
    groups[key]["count"] += n
    render += n
    app_idx.extend([fi] * n)

# --- OLD soflight: compact face order, sky/no_draw skipped ---
old_idx = []
for fi, f in enumerate(faces):
    v = f.get("v") or []
    if len(v) < 3 or mat_of[fi] in (SKY, NODRAW):
        continue
    old_idx.extend([fi] * ((len(v) - 2) * 3))

# --- NEW soflight: contiguous per-material index ranges ---
new_idx = []
for key, g in groups.items():
    g["myStart"] = len(new_idx)
    g["myCount"] = 0
    if key in (SKY, NODRAW):
        continue
    for fi, f in enumerate(faces):
        if mat_of[fi] != key or len(f.get("v") or []) < 3:
            continue
        n = (len(f["v"]) - 2) * 3
        new_idx.extend([fi] * n)
        g["myCount"] += n

by_draw = {"%d:%d" % (g["start"], g["count"]): g for g in groups.values()}


def simulate(layout, use_map):
    right = wrong = oob = 0
    emitted = 0
    for key, g in groups.items():
        # the renderer's draw call for this material
        if use_map:
            start, count = g["myStart"], g["myCount"]
        else:
            start, count = g["start"], g["count"]
        for k in range(start, start + count):
            if k >= len(layout):
                oob += 1
                continue
            emitted += 1
            fi = layout[k]
            if mat_of[fi] == key:
                right += 1
            else:
                wrong += 1
    return right, wrong, oob, emitted


print("renderer index slots:", len(app_idx), "triangles:", len(app_idx) // 3)
print("old soflight slots:", len(old_idx), "  new soflight slots:", len(new_idx))
print("material groups:", len(groups), " distinct (start,count) keys:", len(by_draw))
for name, layout, mapped in (("OLD (renderer offsets)", old_idx, False),
                             ("NEW (mapped ranges)", new_idx, True)):
    right, wrong, oob, emitted = simulate(layout, mapped)
    print("%-22s drawn %5d tris | right face+texture %5d | wrong %5d | oob %d" %
          (name, emitted // 3, right // 3, wrong // 3, oob))
# how much of the new buffer is real geometry
print("new layout: full buffer is real geometry:",
      all(mat_of[fi] == key for key, g in groups.items()
          for fi in new_idx[g["myStart"]:g["myStart"] + g["myCount"]]))
