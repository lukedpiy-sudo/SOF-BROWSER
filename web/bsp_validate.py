#!/usr/bin/env python3
"""Validate a SoF v46 BSP's face -> surfedge -> edge -> vertex chain.

Port of web/bspfacecheck.js to Python (no node on this box).  Tests every
candidate surfedge encoding against planarity, polygon winding (signed area
vs the plane normal), shared-edge direction and convexity.

    python3 web/bsp_validate.py nycdm1.bsp
"""
import json
import struct
import sys
from collections import Counter


def read_bsp(path):
    b = open(path, "rb").read()
    assert b[:4] == b"IBSP", "not a BSP"
    version = struct.unpack_from("<i", b, 4)[0]
    lumps = []
    for i in range(22):
        off, ln = struct.unpack_from("<ii", b, 8 + i * 8)
        lumps.append((off, ln))
    return b, version, lumps


def load(path):
    b, version, L = read_bsp(path)
    nf = L[6][1] // 44
    planes, verts, edges, surfedges, faces = [], [], [], [], []
    for i in range(L[1][1] // 20):
        o = L[1][0] + i * 20
        planes.append(struct.unpack_from("<4f", b, o) + struct.unpack_from("<i", b, o + 16))
    for i in range(L[2][1] // 12):
        verts.append(struct.unpack_from("<3f", b, L[2][0] + i * 12))
    for i in range(L[11][1] // 4):
        edges.append(struct.unpack_from("<2H", b, L[11][0] + i * 4))
    for i in range(L[12][1] // 4):
        surfedges.append(struct.unpack_from("<i", b, L[12][0] + i * 4)[0])
    for i in range(nf):
        o = L[6][0] + i * 44
        planenum, side = struct.unpack_from("<2H", b, o)
        firstedge, = struct.unpack_from("<i", b, o + 4)
        numedges, = struct.unpack_from("<h", b, o + 8)
        texinfo, = struct.unpack_from("<H", b, o + 10)
        faces.append(dict(i=i, planenum=planenum, side=side, firstedge=firstedge,
                          numedges=numedges, texinfo=texinfo))
    return dict(version=version, planes=planes, verts=verts, edges=edges,
                surfedges=surfedges, faces=faces, lumps=L)


def i32(v):
    return v - 0x100000000 if v >= 0x80000000 else v


# candidate decoders: return (edge index, reversed) or None
ENCODINGS = {
    # Quake II: signed int, 1-based edge index
    "q2 signed, index-1": lambda se: (abs(i32(se)) - 1, i32(se) < 0)
        if abs(i32(se)) >= 1 and abs(i32(se)) - 1 < len(EDG) else None,
    # signed int, 0-based edge index (what bspgeo.js / bspmap.js use)
    "signed, index": lambda se: (abs(i32(se)), i32(se) < 0)
        if abs(i32(se)) < len(EDG) else None,
    # high bit is the reverse flag, 0-based index
    "u32 high bit, index": lambda se: (se & 0x7fffffff, bool(se & 0x80000000))
        if (se & 0x7fffffff) < len(EDG) else None,
    # high bit is the reverse flag, 1-based index
    "u32 high bit, index-1": lambda se: ((se & 0x7fffffff) - 1, bool(se & 0x80000000))
        if 1 <= (se & 0x7fffffff) <= len(EDG) else None,
}


def face_verts(f, dec, M):
    out = []
    for k in range(f["numedges"]):
        idx = f["firstedge"] + k
        if idx < 0 or idx >= len(M["surfedges"]):
            return None
        d = dec(M["surfedges"][idx])
        if d is None:
            return None
        ei, rev = d
        e = M["edges"][ei]
        out.append(e[1] if rev else e[0])
    return out


def analyse(dec, M, verbose=False):
    verts, planes, edges = M["verts"], M["planes"], M["edges"]
    planar = nonplanar = bad = dup = 0
    worst = 0.0
    area_total = area_neg = area_zero = 0.0
    edge_use = {}
    vcount = Counter()
    conv_bad = 0
    for f in M["faces"]:
        v = face_verts(f, dec, M)
        if v is None:
            bad += 1
            continue
        vcount[len(v)] += 1
        if len(set(v)) != len(v):
            dup += 1
        pl = planes[f["planenum"]]
        if not pl:
            bad += 1
            continue
        w = 0.0
        for vi in v:
            p = verts[vi]
            d = abs(pl[0] * p[0] + pl[1] * p[1] + pl[2] * p[2] - pl[3])
            w = max(w, d)
        if w > 0.1:
            nonplanar += 1
            worst = max(worst, w)
        else:
            planar += 1
        # signed area via fan from v[0]
        a = 0.0
        for k in range(1, len(v) - 1):
            p0, p1, p2 = verts[v[0]], verts[v[k]], verts[v[k + 1]]
            u = [p1[j] - p0[j] for j in range(3)]
            wv = [p2[j] - p0[j] for j in range(3)]
            cr = [u[1] * wv[2] - u[2] * wv[1],
                  u[2] * wv[0] - u[0] * wv[2],
                  u[0] * wv[1] - u[1] * wv[0]]
            a += cr[0] * pl[0] + cr[1] * pl[1] + cr[2] * pl[2]
        a *= 0.5
        area_total += abs(a)
        if a < -1e-6:
            area_neg += 1
        if abs(a) < 0.01:
            area_zero += 1
        # convexity: each successive cross product should have the same sign
        crs = []
        for k in range(len(v)):
            p0, p1, p2 = verts[v[k]], verts[v[(k + 1) % len(v)]], verts[v[(k + 2) % len(v)]]
            u = [p1[j] - p0[j] for j in range(3)]
            wv = [p2[j] - p1[j] for j in range(3)]
            cr = [u[1] * wv[2] - u[2] * wv[1],
                  u[2] * wv[0] - u[0] * wv[2],
                  u[0] * wv[1] - u[1] * wv[0]]
            crs.append(sum(cr[j] * pl[j] for j in range(3)))
        if any(c < -1e-4 for c in crs) and any(c > 1e-4 for c in crs):
            conv_bad += 1
        # shared edges
        for k in range(len(v)):
            v0, v1 = v[k], v[(k + 1) % len(v)]
            key = (min(v0, v1), max(v0, v1))
            direction = 1 if v0 < v1 else -1
            e = edge_use.setdefault(key, [0, 0])
            e[0] += 1
            if direction > 0:
                e[1] += 1
    shared = sum(1 for e in edge_use.values() if e[0] > 1)
    same_dir = sum(1 for e in edge_use.values() if e[1] > 1)
    return dict(planar=planar, nonplanar=nonplanar, worst=worst, bad=bad, dup=dup,
                vcount=vcount, area=area_total, area_neg=area_neg, area_zero=area_zero,
                conv_bad=conv_bad, edges=len(edge_use), shared=shared, same_dir=same_dir)


if __name__ == "__main__":
    path = sys.argv[1] if len(sys.argv) > 1 else "nycdm1.bsp"
    M = load(path)
    global EDG
    EDG = M["edges"]
    print("file:", path, "version:", M["version"])
    print("planes", len(M["planes"]), "verts", len(M["verts"]),
          "edges", len(EDG), "surfedges", len(M["surfedges"]), "faces", len(M["faces"]))
    print("first 12 surfedges as signed:",
          [i32(x) for x in M["surfedges"][:12]])
    for name, dec in ENCODINGS.items():
        r = analyse(dec, M)
        print("\n== " + name)
        print("   planar %d  nonplanar %d (worst %.3f)  bad %d  dup %d  concave %d" %
              (r["planar"], r["nonplanar"], r["worst"], r["bad"], r["dup"], r["conv_bad"]))
        print("   area %.0f  negative %d  zero %d" % (r["area"], r["area_neg"], r["area_zero"]))
        print("   edges %d  shared %d  same-direction %d" %
              (r["edges"], r["shared"], r["same_dir"]))
        print("   vcount:", dict(sorted(r["vcount"].items())))
