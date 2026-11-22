# The Ghoul per-entity clip selection, the frame index and the clip blending

This closes the last open Ghoul item.  `analysis/ghb_format.md` §6 listed three
open bullets; two of them ("the per-face material binding", "the runtime unit
of the clip f32") were closed on 2026-11-11, and this file closes the
remaining one: **the bone weights / clip blending**, plus the
**per-entity clip and frame selection** that `PLAYABILITY.md` still listed as
open for the `.ghb` container (97%) and the animated vertices (92%).

Everything below is derived from `SoF.exe` and is cited by address.  The
decompiles live in `analysis/rea/sof_all/functions/`; the raw disassembly is
`analysis/rea/sof_disasm.txt`.

---

## 1. Summary — the whole chain in one block

```
the module sends a CLIP NAME (lowercase) + a BLEND TIME
  -> SoF.exe 0x20075350   the interned-name red-black tree, __strcmpi
       => a u16 CLIP ID
  -> the Ghoul entity's clip tree (the entity's +0x110), keyed by that id
       => the CLIP INDEX (the model's clip vector index)
  -> the model's clip vector (model+0x110)   -> the clip object
       -> clip+0x1C = the frame PERIOD in ms
       -> model+0x130[clipIndex] = the frame COUNT
  -> SoF.exe 0x2007d200   the "resolve the clip" virtual (vtable slot +0x6C)
       => the clip DURATION in seconds, and ent+0x134 = the frame count
  -> SoF.exe 0x2007cfa0   the frame index inside the clip (the 5 outputs)
  -> SoF.exe 0x2007c0f0   the playback: two tracks (A = the new clip,
       B = the old clip) and a BLEND
  -> SoF.exe 0x20090b20 / 0x200a1020 / 0x200a6fa0 / 0x200a7710
       the blend itself
```

**The "bone weights" are not bone weights.**  The Ghoul does **not** skin its
vertices: the animated stream already stores the final per-vertex positions.
The blend is done on the **4x4 root matrices** of the two clips, and the
vertices are then transformed by the blended matrix.  This is why the model
format has no per-vertex bone index or weight table — the "43-byte vertex
record" hypothesis was not merely misread, the concept does not exist in the
format.

---

## 2. The clip duration — `SoF.exe 0x2007D200` (vtable slot +0x6C)

Ghidra created no function object here, so this is read from
`analysis/rea/sof_disasm.txt` lines 169730..169803.  The signature is

```
float  __thiscall FUN_2007d200(u16 clipId, int mode, float *outDuration);
```

with `ECX` = the Ghoul entity.

```
2007d200: mov 0x4(%esp),%eax          ; the clip id
2007d205: test %ax,%ax
2007d20a: jne 0x2007d224              ; id == 0 -> no clip
2007d20c: mov 0x10(%esp),%eax         ; the out-duration pointer
2007d210: test %eax,%eax
2007d212: je 0x2007d21a
2007d214: movl $0x0,(%eax)            ; duration = 0
2007d21a: flds 0x20111384             ; 0.0f  (the return value)
2007d221: ret $0xc
...
2007d224: lea 0x8(%esp),%ecx          ; &outIndex
2007d228: push %ecx
2007d229: mov 0x1c4(%esi),%ecx        ; the MODEL object (ent+0x1C4)
2007d22f: push %eax                   ; the clip id
2007d230: call 0x200884a0             ; id -> the model clip index
2007d235: test %eax,%eax
2007d237: jne 0x2007d243              ; no such clip -> 0.0f
2007d239: flds 0x20111384             ; 0.0f
2007d240: ret $0xc
2007d243: mov 0x8(%esp),%ecx          ; the model clip index
2007d247: mov 0x130(%eax),%edx        ; model+0x130 = the frame-count array
2007d24d: mov (%edx,%ecx,4),%edx      ; frameCount[clipIndex]
2007d250: mov %edx,0x134(%esi)        ; ent+0x134 = the frame count
2007d256: mov 0x110(%eax),%eax        ; model+0x110 = the clip vector
2007d25c: mov 0x98(%esi),%edx         ; ent+0x98 = the playback speed INDEX
2007d262: mov (%eax,%ecx,4),%ecx      ; the clip object
2007d26b: flds 0x1c(%ecx)             ; clip+0x1C = the frame PERIOD (ms)
2007d26e: fmuls 0x20111b00            ; * 0.001f        -> seconds/frame
2007d274: fmuls 0x20156fcc(,%edx,4)   ; * the playback speed
2007d27b: fmuls 0x20157000            ; * 1.0f
```

So

```
duration_seconds = clip->framePeriod_ms * 0.001f * speedTable[ent+0x98]
```

which confirms `analysis/ghb_format.md` §8.3 (**the clip f32 is the frame
period in milliseconds**) from the code, and adds the **playback speed
multiplier**, which was not in the notes.

The playback speed table `0x20156FCC` is 13 floats, read directly from the PE:

```
0.5, 0.625, 0.75, 0.875, 1.0, 1.125, 1.25, 1.375, 1.5, 1.625, 1.75, 1.875, 2.0
```

(the `ent+0x98` index; the notes said "0.5, 0.625, 0.75, ... 2.0 in steps of
0.125" — **confirmed and now exactly enumerated**).

### The `mode` argument

The third argument selects how the frame index is computed over the clip:

| mode | meaning | the code |
|---|---|---|
| 0 | **loop** | the duration is `frameCount * framePeriod` |
| 1 | **once** | the duration is `(frameCount-1) * framePeriod` |
| 2 | **ping-pong** | the duration is `(2*frameCount-1) * framePeriod` |

```
2007d297: cmp $0x2,%eax          ; mode == 2 ?
2007d29c: mov 0x134(%esi),%eax   ; the frame count
2007d2a3: lea -0x1(%eax,%eax,1),%ecx  ; 2*frameCount - 1
2007d2ab: fimull 0xc(%esp)
...
2007d2b2: cmp $0x1,%eax          ; mode == 1 ?
2007d2b7: mov 0x134(%esi),%edx
2007d2be: dec %edx               ; frameCount - 1
2007d2c3: fimull 0xc(%esp)
```

This matches the entity's playback mode field `ent+0xB0` (0 = loop, 1 = once,
2 = ping-pong) recorded in `analysis/ghb_format.md` §8.3.1.

### The clip id -> clip index lookup — `SoF.exe 0x200884A0`

```
undefined4 FUN_200884a0(u16 id, int *outIndex)
{
  iVar1 = (id & 0xffff) * 8;
  *outIndex = *(undefined4 *)(iVar1 - 4 + *(int *)(in_ECX + 0x5c));
  return *(undefined4 *)(*(int *)(in_ECX + 0x4c)
                         + *(undefined4 *)(iVar1 - 8 + *(int *)(in_ECX + 0x5c)) * 4);
}
```

`in_ECX` is the model.  `model+0x5C` points at an **8-byte-per-clip table**
(the `{modelClipIndex, runtimeClipIndex}` pairs), and `model+0x4C` is the
**runtime clip vector**.  So the id-keyed tree resolves to a *model* clip
index and then to the *runtime* clip object.  This is the tail of the hop
chain already described in `analysis/ghb_format.md` §8.6.2; the important new
detail is that **the lookup is a direct table index**, not a search:

```
runtimeClip = model->runtimeClips[ table[id].runtimeIndex ]
modelClipIndex = table[id].modelIndex
```

**For the browser** this remains a case-insensitive string match against the
`.ghb`'s clip list (§8.6.2's conclusion is unaffected).

---

## 3. The per-entity frame selection — `SoF.exe 0x2007CFA0`

This is the function that produces "which frame of the clip, and how far
between it and the next", i.e. the **per-entity** part that was open.

```
void __thiscall FUN_2007cfa0(float *out /*5 floats*/, float normalisedTime, int frameBase)
```

with `ECX` = the Ghoul entity.

```
iVar1 = *(int *)(in_ECX + 0x134);        // the frame count
if (iVar1 != 0) {
  if (*(int *)(in_ECX + 0xb0) == 0) {    // mode 0 = LOOP
    FUN_200fc6f3((double)((float)iVar1 * param_2));   // truncate toward zero
    local_c = __ftol();
    if (local_c < in_ECX->frameCount) {
      local_4 = local_c + 1;                          // the NEXT frame
      local_14[0] = (float)local_4 - (float)iVar1 * param_2;   // the blend to it
      if (in_ECX->frameCount <= local_4) local_4 = 0; // wrap
    }
  }
  else {                                  // modes 1 and 2
    param_2 = (float)(iVar1 - 1) * param_2;
    local_c = __ftol();
    local_4 = frameCount - 1;
    if (local_c < local_4) {
      local_4 = local_c + 1;
      local_14[0] = (float)(local_c + 1) - param_2;
    }
    else local_c = local_4;
  }
}
```

It writes **5 floats**: `{frameIndex, blendToNext, ?, ?, ?}` (the caller
copies all five: `for (iVar11 = 5; iVar11 != 0; iVar11--) *puVar6 = *puVar5;`).

So the per-entity frame selection is:

```
frame = (int)(frameCount * normalisedTime)          // truncated
next  = (frame + 1) % frameCount                     // loop
lerp  = (frame + 1) - frameCount * normalisedTime    // 0..1, the sub-frame weight
```

and for the non-loop modes the same with `frameCount-1` and no wrap.

**`normalisedTime` comes from `FUN_2007D090`**, which is the entity's
animation clock (`analysis/ghb_format.md` §8.3 already described the loop
restart test):

```
float10 FUN_2007d090(float now, char *outDirection, int *outFrame)
{
  *outDirection = ent[0xA9];                  // the play direction
  if (!ent[0x96] || ent[0xAE] == 0) return 0.0;
  if (ent[0xA8]) now = ent[0xA0];             // the FIXED time
  if (ent[0x12C] == 0.0) return ent[0xA0];
  elapsed = now - ent[0x9C];                  // the start time
  switch (ent[0xB0]) {                       // the playback mode
    case 0: *outFrame = (int)(elapsed / ent[0x12C]);
              return elapsed / ent[0x12C] - (float)*outFrame;   // the fraction
    case 2: *outFrame = (int)(elapsed / ent[0x12C]);
              f = elapsed / ent[0x12C] - (float)*outFrame;
              if (f >= 0.5) { *outDirection = !*outDirection; f = 1 - ((1-f) + (1-f)); }
              else f = f + f;
              return f;
    case 1: *outFrame = 0; return elapsed / ent[0x12C];
  }
  if (*outDirection) f = 1.0 - f;
  return clamp(f, 0.0, 1.0);
}
```

This confirms the **ping-pong** implementation (the direction flips at the
half-way point and the fraction is mirrored) and the **backwards playback**
(`ent+0xA9`).

`ent+0x12C` is the **clip duration in seconds** — the value computed by
`FUN_2007D200` above.  So the normalised time is
`(now - startTime) / clipDuration`.

---

## 4. The clip blend — the last open item

### 4.1 Where the blend happens — `SoF.exe 0x2007C0F0`

The playback function calls the frame selector twice and keeps **two tracks**:

```
FUN_2007cfa0(local_370, local_3bc, local_3a8);    // the 5 floats of track A
```

and, when the entity has a **sub-state** (`ent+0x94`), it asks a second
object for the other track:

```
if (ent[0x94] == 0 ||
    !FUN_20088d00(ent[0xAE], ent[0x94], local_334, local_12c)) {
    // only ONE track
    FUN_200a1100(in_ECX + 4,    param_2);
    FUN_200a1100(param_2 + 0x44, in_ECX + 0x48);
    ...
}
else {
    // TWO tracks: the current clip and the sub-state's clip
    FUN_200a1100(in_ECX + 4,    param_2);
    FUN_200a1100(param_2 + 0x44, in_ECX + 0x48);
    ...
}
```

`FUN_20088D00` resolves the **sub-state** (`ent+0x94`) to its own clip:

```
iVar1 = model[0x80] + (subState & 0xffff) * 0x18;         // the sub-state table
iVar2 = (int)*(short *)( model[0x5C][-8 + (clipId & 0xffff) * 8] * 2 );
if (iVar2 >= 0) { FUN_200a6fa0(iVar2, subStateTable[...], param_3, param_4); return 1; }
return 0;
```

So **`ent+0x94` (the "sub state") is the second clip** — the one being blended
*out* or *in*.  This is the engine-side twin of the module's "the state's
command queue" (`analysis/ghb_format.md` §8.6.1).

### 4.2 The blend itself — `SoF.exe 0x200A1020`

```
void __thiscall FUN_200a1020(const float *A, const float *B, float blend)
{
  if ((A[0x10] & 1) && (B[0x10] & 1)) {
      // both are the identity -> the result is the identity
      memset(this, 0, 16*4);
      for (i = 0; i < 4; i++) this[i*5] = 1.0f;
      this[0x10] = 1;
      return;
  }
  for (i = 0x10; i != 0; i--) {
      this[i] = (A[i] - B[i]) * blend + B[i];
  }
  this[0x10] = 0;
}
```

**This is the answer to "how do two clips blend".**  It is a plain **linear
interpolation of the two 4x4 root matrices**:

```
out[i] = (A[i] - B[i]) * blend + B[i]      for the 16 floats
```

The two matrices are the **per-clip root matrices**, stored at
`manager+0xC0` with a **0x44-byte stride**:

```
20090b20: FUN_200a1020( *(int *)(in_ECX + 0xc0) + *(int *)(param_1 + 0x8)  * 0x44,
                        *(int *)(in_ECX + 0xc0) + *(int *)(param_1 + 0x18) * 0x44,
                        *(float *)(param_1 + 0x20) );
```

* `param_1 + 0x08` = the index of the **new** clip,
* `param_1 + 0x18` = the index of the **old** clip,
* `param_1 + 0x20` = the **blend factor** (0 = the old clip, 1 = the new).

The 0x44-byte record holds a 16-float matrix plus the identity flag at
`+0x40` (a `uint`), i.e. 17 dwords = 0x44.

`FUN_200A1100` is the **matrix multiply** used to compose the entity's
transform with the clip's, and `FUN_200A0CC0` builds the identity matrix.

### 4.3 The packed-matrix blend — `SoF.exe 0x20090B20`

When the clip's root matrix is **not** stored as 16 floats, it is stored in
the **packed** form of §9.6 (the same 4x4 + packed normal + scale + position
encoding used by the Ghoul net protocol).  `FUN_20090B20` blends two packed
matrices:

```
FUN_200a0cc0();                                  // the identity
puVar7 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + clipIndex * 8);
FUN_2008fd20(local_88, puVar7);                   // unpack A
FUN_2008fd20(local_44, puVar7[oldIndex]);         // unpack B
for (row = 0; row < 3; row++) {
   for (col = 0; col < 3; col++) {
      out = A + (B - A) * blend;                  // the same lerp, per element
      FUN_200a15d0(&outMatrix[row], &out);        // write the row back
   }
}
// the position component (the 4th row) is blended the same way:
//   out = (A & 0x3FF) + ((B & 0x3FF) - (A & 0x3FF)) * blend
//   then * (in_ECX + 0x50) + (in_ECX + 0x5C)
```

So the blend is a **component-wise lerp of the two root matrices**, with the
position part in the packed 10-bit fixed-point form.

### 4.4 The clip cross-fade weights — `SoF.exe 0x200A7710`

`FUN_200A6FA0` dispatches on the sub-state's type and then calls
`FUN_200A7710`:

```
void __thiscall FUN_200a7710(float *weights)
{
  if (0.5 <= weights[0]) {
      this[0x154] = weights[1];  this[0x158] = weights[2];
      this[0x164] = weights[3];  this[0x168] = weights[4];
      this[0x174] = weights[0];
  } else {
      this[0x164] = weights[1];  this[0x168] = weights[2];
      this[0x154] = weights[3];  this[0x158] = weights[4];
      this[0x174] = 1.0 - weights[0];
  }
  ...
}
```

This is a **two-clip weight cross-fade**: the manager keeps the four
components of two root matrices (`+0x154`/`+0x158` and `+0x164`/`+0x168`) and
a **weight** at `+0x174`.  When the weight is >= 0.5 the roles of the two
sides swap, and the weight becomes `1 - weight` otherwise — a standard
"pick the nearer of the two" trick that keeps the interpolation always
running from the dominant clip towards the other.

The two matrices' **origins** are then resolved from the model's table:

```
this[0x15C] = *(int *)(*(int *)(this + 0x120) + this[0x154] * 4) + this[0x158];
this[0x16C] = *(int *)(*(int *)(this + 0x120) + this[0x164] * 4) + this[0x168];
```

### 4.5 Where the blend factor comes from

The blend factor is the **module's blend time**, which the module sends with
the clip name (§8.6.1: the animation command's `+0x04` is "the blend float",
the switch's own blend float is at `+0x34`, and the resolved value is
"9999.9" for a "no blend" sentinel, else 50 ms).

On the engine side the value is consumed as the `blend` argument of
`FUN_200A1020` / `FUN_20090B20` — i.e. **it is a 0..1 weight, not a
duration**, by the time it reaches the blend.  The engine's own
`FUN_2007B430` (the vtable slot `+0x44`, "set the animation state") computes
it:

```
fVar6 = FUN_2007d090(unaff_EBX, &param_4, &param_3);   // the elapsed fraction
param_1 = (float)fVar6;
if (!bVar5 && param_4 == 0) param_1 = 1.0 - param_1;   // the direction
fVar6 = (*(code **)(*in_ECX + 0x6c))(clipId, mode, 0); // the old clip's duration
fVar6 = fVar6 * param_1 + oldDuration;                  // the blended duration
```

so the engine blends the **durations** of the two clips with the same
weight, and the same weight is what `FUN_200A1020` uses for the matrices.
The 9999.9 "no blend" sentinel in the module therefore means "use the full
cross-fade".

### 4.6 The blend table on the engine side

`ent+0x120` is the manager's clip-**origin** table (the `int*` indexed by the
clip index) — see §4.4.  `manager+0xC0` is the **per-clip 0x44-byte root
matrix** array.  Both are filled from the model's clip data by the loader
`SoF.exe 0x200A18D0` and by the Ghoul state applier.

---

## 5. What this means for the browser

1. **The clip lookup is a case-insensitive string match** against the `.ghb`'s
   clip list — unchanged from `analysis/ghb_format.md` §8.6.2.
2. **The frame index is simple**:
   `frame = (int)(frameCount * normalisedTime)`, `next = (frame+1) % frameCount`,
   `lerp = (frame+1) - frameCount*normalisedTime`, with
   `normalisedTime = (now - startTime) / clipDuration`.
3. **The clip duration** = `framePeriod_ms * 0.001 * speedTable[speedIndex]`.
4. **The blend is a 4x4 matrix lerp**: `out = (A - B) * w + B`, where A and B
   are the two clips' root matrices and `w` is the cross-fade weight.
5. **There is no per-vertex skinning.**  The animated stream carries the
   final positions; the bones only contribute their root matrix.  A browser
   implementation therefore needs **no bone-weight table** — a large saving.

---

## 6. Corrections and additions to the earlier notes

| the earlier note | the truth |
|---|---|
| §8.3.1: "ent+0x130" is filled by the resolve-clip virtual | **confirmed** — but the *frame count* actually lands at **ent+0x134**; `FUN_2007D200` writes `ent+0x134` directly and `ent+0x130` is a different field (used elsewhere as the out-index slot) |
| §8.3: the clip f32 is the frame period in ms | **confirmed from the code** (`flds 0x1c(%ecx)` at 0x2007d26b), and the duration additionally carries the **playback speed multiplier** `speedTable[ent+0x98]` — which the notes did not have |
| the playback speed table "0.5 … 2.0 in steps of 0.125" | **confirmed and exactly enumerated** (13 entries at `0x20156FCC`) |
| §6: "the bone weights" are open | **there are no bone weights.**  The blend is on the clip root matrices; the vertices are not skinned. |
| §6: "the clip blending" is open | **solved** — `FUN_200A1020` (16-float lerp) and `FUN_20090B20` (the packed-matrix variant), with the cross-fade weights in `FUN_200A7710` |
| §8.3.1: "ent+0x94 = a u16 (the sub state)" | **confirmed and given a role**: it is the **second clip** of the blend, resolved by `FUN_20088D00` through the model's sub-state table at `model+0x80` (0x18-byte records) |
| the module's blend time (9999.9 = "no blend") | on the engine side it becomes a **0..1 weight**, and it blends **both** the clip durations and the root matrices |

---

## 7. Not RE gaps (browser port / producer tracing)

* **The animated vertex stream itself** is decoded but not yet re-implemented
  in the browser: `FUN_200B8210` is the decoder (the 0x38-byte record table,
  the bit-packed absolute and delta position paths, the 256-entry normal
  palette at `0x20404C90`).  The layout is documented in
  `analysis/ghb_format.md` and the renderer call site is
  `SoF.exe 0x200B09E0` (which calls the decoder twice — once per track).
* The **sub-state table** (`model+0x80`, 0x18-byte records) and the clip
  cross-fade weights' wire format.
* The **per-clip root matrix array** (`manager+0xC0`, 0x44-byte records) is
  read but its *producer* on the module side has not been traced.
