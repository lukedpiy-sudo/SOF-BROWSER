# The engine pmove import — SOLVED 2026-11-14

Target: the engine function the game module calls to move a player, and the
module side of the call.

**Short answer:** the module imports the engine's `PM_Move` as import slot
**81**.  It builds a **0x100-byte `pmove_t`** on its stack, fills the first
0x1C bytes from the player entity, installs **four callbacks** at the tail
(`trace`, `point-content`, `can-jump` and the gravity multiplier), calls the
engine, and the engine writes the **new origin and velocity back into the
pmove as `s16`s**.  The module then copies the pmove's first 0x1C bytes
back into the player entity.

---

## 1. The import

| what | where |
|---|---|
| the module's import table | `gamex86.dll` **0x5015C9F0** |
| slot 81 | `DAT_5015CB34` = `0x5015C9F0 + 4*81` |
| the engine function | `SoF.exe` **0x20054750** (`FUN_20054750`) — `PM_Move` |

The call site is `gamex86.dll 0x500F53A0` (`FUN_500F53A0`, the module's
`ClientThink`):

```asm
500f55ba: lea    0x34(%esp),%edi
500f55be: rep stos %eax,%es:(%edi)      ; zero 0x100 bytes = the pmove
...
500f5620: mov    %ebx,%esi              ; esi = the player entity
500f5622: lea    0x34(%esp),%edi        ; edi = the pmove
500f5626: mov    %ax,0x12(%ebx)         ; the jump height
500f562a: rep movsl %ds:(%esi),%es:(%edi)   ; pmove[0..0x1B] = entity[0..0x1B]
...
500f5747: movl   $0x500f51a0,0x124(%esp)   ; pm+0xF0 = the trace callback
500f5752: mov    %edx,0x128(%esp)          ; pm+0xF4 = the point-content callback
500f5759: movl   $0x500f5370,0x12c(%esp)   ; pm+0xF8 = the can-jump callback
500f5785: fstps  0x130(%esp)               ; pm+0xFC = the gravity multiplier
500f578c: lea    0x34(%esp),%eax
500f5790: push   %eax
500f5791: call   *0x5015cb34            ; <<< PM_Move(pmove)
500f579c: lea    0x38(%esp),%esi
500f57a0: mov    %ebx,%edi
500f57a5: rep movsl                    ; entity[0..0x1B]   = pmove[0..0x1B]
500f57ac: lea    0x34(%esp),%esi
500f57b0: lea    0x32c(%ebx),%edi
500f57b8: rep movsl                    ; entity[0x32C..]  = pmove[0..0x1B]
```

Note `lea 0x38(%esp)` is computed **before** the `add $0x4,%esp` that pops
the pushed argument, so the copy source is still the pmove **base** — both
copies take the pmove's first 0x1C bytes.

The `entity+0x32C` copy is a **shadow** of the pmove: the module compares
it with the pmove before the call (`repz cmpsl`, `0x500F5676`) and sets a
"the movement changed" flag when they differ.

## 2. `pmove_t` — the 0x100-byte layout

The module zeroes 0x100 bytes and the engine's own field accesses pin every
offset.  The first 0x1C bytes are **shared verbatim** with the player
entity (the module copies them both ways).

| offset | type | field | evidence |
|---|---|---|---|
| `+0x00` | `int` | **pm_type** | `iVar4 = *DAT_20390290; if (iVar4 == 1) ...` (`0x20054761`) |
| `+0x04` | `s16` | **origin x** | `DAT_20390220 = (short)pm[1] * 0.125` |
| `+0x06` | `s16` | **origin y** | `DAT_20390224 = (short)(pm+6) * 0.125` |
| `+0x08` | `s16` | **origin z** | `DAT_20390228 = (short)pm[2] * 0.125` |
| `+0x0A` | `s16` | **velocity x** | `DAT_2039022c = (short)(pm+10) * 0.125` |
| `+0x0C` | `s16` | **velocity y** | `DAT_20390230 = (short)pm[3] * 0.125` |
| `+0x0E` | `s16` | **velocity z** | `DAT_20390234 = (short)(pm+0xE) * 0.125` |
| `+0x10` | `u8` | **pm_flags** | `mov %ebx,0x38(%eax)` clears the list; the byte at `+0x10` is tested all over the pmove family |
| `+0x11` | `u8` | the fall-speed counter | `*(undefined1 *)(pm + 0x11) = 0x12` / `0x19` |
| `+0x12` | `s16` | the **jump height** | `velocity_z -= (short)(pm+0x12) * msec` (`0x200548xx`) |
| `+0x14` | `s16[3]` | the **view angles** (raw) | `FUN_20054640`: `pm[0x14]`, `pm[0x16]`, `pm[0x18]` |
| `+0x1A` | `s16` | (unused by the pmove) | |
| `+0x1C` | `u8` | **msec** | `DAT_2039025c = (byte)(pm+0x1C) * 0.001` |
| `+0x1F` | `u8` | a flag byte | `*(char *)(pm + 0x1f)` |
| `+0x20` | `s16[3]` | the **usercmd angles** | `pm[0x20]`, `pm[0x22]`, `pm[0x24]` |
| `+0x26` | `s16` | **forwardmove** | `sVar1 = *(short *)(pm + 0x26)` |
| `+0x28` | `s16` | **sidemove** | `sVar2 = *(short *)(pm + 0x28)` |
| `+0x2A` | `s16` | **upmove** | `*(short *)(pm + 0x2a)` |
| `+0x38` | `int` | the touched-entity **count** | `mov %ebx,0x38(%eax)` |
| `+0x3C` | `int[32]` | the touched-entity list | `*(int *)(pm + 0x3c + count*4) = ent` — 32 entries fill exactly `0x3C..0xBB` |
| `+0xBC` | `f32[3]` | the **total angles** (degrees) | `FUN_20054640` writes them; `AngleVectors` consumes them |
| `+0xC8` | `f32` | **wishspeed** | `DAT_20390290[0x32]` |
| `+0xCC` | `f32[3]` | **mins** | `trace(..., pm+0xCC, pm+0xD8, ...)` |
| `+0xD8` | `f32[3]` | **maxs** | idem |
| `+0xE4` | `int` | the **touched entity** | `DAT_20390290[0x39]` |
| `+0xE8` | `int` | the **point-content** result | `DAT_20390290[0x3a]` |
| `+0xEC` | `int` | the **water level** | `DAT_20390290[0x3b]` |
| `+0xF0` | fn | the **trace** callback | `(**(code **)(pm + 0xf0))(...)` |
| `+0xF4` | fn | the **point-content** callback | `(**(code **)(pm + 0xf4))(&point)` |
| `+0xF8` | fn | the **can-jump** callback | `(*(code *)pm[0x3e])(ent)` |
| `+0xFC` | `f32` | the **gravity multiplier** | `(float)DAT_20390290[0x3f]` |

`0x3C + 32*4 = 0xBC` — the touched-entity list ends exactly where the total
angles begin, and `0xFC + 4 = 0x100` — the struct ends exactly at the
module's 0x100-byte allocation.  Both confirm the layout.

## 3. The engine's globals block

`PM_Move` keeps its working state in a **0x70-byte** block at
`0x20390220` (28 dwords, cleared with `rep stos`):

| address | what |
|---|---|
| `0x20390220` / `+4` / `+8` | the origin x / y / z (float) |
| `0x2039022C` / `+30` / `+34` | the velocity x / y / z (float) |
| `0x20390238` | the **forward** vector |
| `0x20390244` | the **right** vector |
| `0x20390250` | the **up** vector |
| `0x2039025C` | the **msec** in seconds (`pm[0x1C] * 0.001`) |
| `0x20390260..0x20390278` | the last trace's result (the plane, the fraction, ...) |
| `0x2039027C` / `+80` / `+84` | the raw origin shorts |
| `0x20390288` | the "the player is over a jumppad" flag |
| `0x2039028C` | the gravity multiplier |
| `0x20390290` | the pmove pointer |

The gravity multiplier is derived from `pm+0xFC`:

```c
51: if ((float)pm[0x3f] < 0.0 == ((float)pm[0x3f] == 0.0)) {
52:   _DAT_2039028c = 1.0 - (float)pm[0x3f];
53:   if (_DAT_2039028c < 0.0) _DAT_2039028c = 0.0;
54: } else {
55:   _DAT_2039028c = 1.0;
56: }
```

The module sets `pm+0xFC` to `max(0, client[0x5FC] - DAT_5015CCDC)` — the
time since a marker, used for the low-gravity window.

## 4. The pm_type list

`PM_Move` dispatches on `pm+0x00`:

```c
61: iVar4 = *DAT_20390290;
62: if (iVar4 == 1) { FUN_20053a40(); FUN_20054260(); return; }   // free move
67: if (iVar4 == 2) { FUN_20053cf0(); FUN_20054260(); return; }   // free move + a trace
72: if (2 < iVar4) {
73:   *(undefined2 *)((int)DAT_20390290 + 0x26) = 0;   // forwardmove = 0
74:   *(undefined2 *)(DAT_20390290 + 10) = 0;          // velocity x = 0
75:   *(undefined2 *)((int)DAT_20390290 + 0x2a) = 0;   // upmove = 0
76: }
77: if ((*DAT_20390290 != 5) && (*DAT_20390290 != 7)) {
78:   FUN_20054000();                 // PM_CalcMove
79:   if (DAT_20390290[0xd] != 0) FUN_20054470();   // PM_InitialSnapPosition
82:   FUN_20053500();                 // the ground / slide move
83:   if ((*pm == 3) && (pm[0x39] != 0)) { ...clamp the velocity to 20... }
99:   FUN_20053890();                 // the jumppad / dodge check
...
114:   if ((pm_flags & 0x20) == 0) {
115:     if ((pm_flags & 8) != 0) { ...the jumppad launch... }
127:     if (*pm != 6) {
128:       FUN_200537c0();            // the jump
129:       FUN_20052c90();            // the water / the gravity
130:       if (1 < pm[0x3b]) { FUN_20053050(); ... }
136:       FUN_200531a0();             // the step
137:     }
138:   }
```

| pm_type | meaning | the path |
|---|---|---|
| **0** | the normal walk/run | the full path |
| **1** | a **free move** (no collision): friction, accelerate along the wish direction, then move | `FUN_20053A40` |
| **2** | a free move **plus a trace** — it installs a special trace function and calls `FUN_20052A10(0)` | `FUN_20053CF0` |
| **3** | the normal path, but the velocity is clamped to a length of **20** | the full path + the clamp |
| **4** | the normal path with the movement disabled: `wishspeed = 8`, `upmove = 0`, `maxs.z = 16` | `FUN_20054000` returns early |
| **5** | **frozen** — nothing happens at all | `return` |
| **6** | the normal path **without** the jump / the water / the step | the full path, `*pm != 6` |
| **7** | **frozen** — nothing happens at all | `return` |

The module picks the pm_type (`gamex86.dll 0x500F55C0`):

```asm
500f55c0: mov 0x19c(%ebp),%eax
500f55c6: cmp $0x1,%eax
500f55cb: mov %eax,(%ebx)          ; pm_type = 1
500f55cf: cmp $0xc,%eax
500f55d4: movl $0x2,(%ebx)         ; 0x0C -> pm_type 2
500f55dc: cmpl $0xff,0x20(%ebp)
500f55e5: movl $0x4,(%ebx)         ; otherwise pm_type 4
500f55ed: mov 0x2f8(%ebp),%eax
500f55f7: movl $0x3,(%ebx)         ; pm_type 3
500f55ff: mov 0x68(%ebx),%cl
500f5602: mov $0x1,%al
500f5606: sbb %ecx,%ecx
500f5608: and $0x6,%ecx
500f560b: mov %ecx,(%ebx)          ; and finally 6 if client[0x68] > 1, else 0
```

so the pm_type is `client[0x19C]` mapped `1 -> 1`, `0x0C -> 2`, and
`client[0x20] == 0xFF -> 3` (or `4`), with the final override
`client[0x68] > 1 -> 6`, `else 0`.

## 5. The pm_flags bits (`pm+0x10`)

| bit | meaning | where |
|---|---|---|
| `0x01` | **PM_DUCKED** (the crouch) | `FUN_20054000`: when set, `maxs.z = 14`, `wishspeed = 0`; it is cleared when the player stands up again |
| `0x02` | **PM_JUMPED** — the jump was performed this frame | set in `FUN_200537C0` together with `velocity_z = 270`; cleared when `upmove < 10` |
| `0x04` | **PM_ON_GROUND / the stepped flag** — set when the trace hit something | `FUN_20053500`: `pm_flags \|= 4` on a hit, `pm_flags &= 0xfb` when the trace misses |
| `0x08` | the **jumppad / the dodge** — the player is over a solid point | `FUN_20053890`: `pm_flags \|= 8` when the point-content says solid; it launches the player at 200 units/s |
| `0x10` | the **hard fall** — `velocity_z < -200` | `FUN_20053500`: `pm_flags \|= 0x10` and `pm+0x11 = 0x12` (18) or `0x19` (25) — the fall-damage speed |
| `0x20` | **the yaw only** — the view angles are locked to the yaw (the spectator / the cinematic camera) | `FUN_20054640` only sums the yaw; `PM_Move` skips the whole movement |
| `0x40` | the module's **third-person / free-look** flag | checked by the module at `0x500F56AC` |

The fall counter at `pm+0x11` is decremented by `msec >> 3` each frame and
when it expires the engine clears bits `0x02` and `0x20`:

```c
100: bVar2 = *(byte *)(pm + 0x11);
102: bVar5 = *(byte *)(pm + 7) >> 3;      // msec >> 3
103: if (bVar5 == 0) bVar5 = 1;
106: if (bVar5 < bVar2) pm[0x11] = bVar2 - bVar5;
107: else { pm_flags &= 0xc3; pm[0x11] = 0; }
```

## 6. The functions of the pmove family

| function | what |
|---|---|
| `0x20054750` | **PM_Move** — the entry point |
| `0x20054640` | the **view-angle setup** + `AngleVectors` |
| `0x20054000` | **PM_CalcMove** — the wish speed / the collision box / the max speed |
| `0x20053500` | the **ground / slide move** — the trace, the ground entity, the fall detection |
| `0x200537C0` | the **jump** |
| `0x20053890` | the **jumppad / the dodge** check |
| `0x20053A40` | the pm_type 1 **free move** |
| `0x20053CF0` | the pm_type 2 **free move + trace** |
| `0x20054470` | **PM_InitialSnapPosition** — it tries the 27 neighbours of the origin (±1 unit) until the trace is clear (`"Bad InitialSnapPosition"`, `0x20137650`) |
| `0x20054260` | the **end of the move** — it writes the new origin / velocity back into the pmove and does the final trace |
| `0x20054B30` | **AngleVectors** |
| `0x20054C90` | **VectorNormalize** (with the "closest axis" projection) |
| `0x20054DC0` | the vector-op dispatcher (a switch on the opcode) |
| `0x20053050`, `0x200531A0`, `0x20052A10`, `0x20052C90` | the water / the step / the gravity helpers |

### The view angles (`0x20054640`)

```c
21: if ((pm_flags & 0x20) == 0) {
22:   iVar3 = 0x14; iVar4 = 0xbc;
25:   do {
28:     *(float *)(iVar4 + pm) =
29:        (float)(int)(short)(*(short *)(iVar2 + pm) + *psVar1) * 0.005493164;
31:   } while (iVar3 < 0x1a);      // the view angles (pm+0x14) + the usercmd angles (pm+0x20)
32:   if ((pm[0xbc] <= 89.0) || (180.0 <= pm[0xbc])) {
33:     if ((pm[0xbc] < 271.0) && (180.0 <= pm[0xbc])) pm[0xbc] = 180.0;
34:   } else pm[0xbc] = 90.0;      // the pitch clamp
40: } else {
42:   pm[0xc0] = (float)((short)pm[0x22] + (short)pm[0x16]) * 0.005493164;
45:   pm[0xbc] = 0; pm[0xc4] = 0;  // the yaw only
47: }
48: FUN_20054b30(pm + 0xbc, &DAT_20390238, &DAT_20390244, &DAT_20390250);
```

`0.005493164` = `180/32768` — the raw short angle → degrees.  The total
angles are the **view angles + the usercmd angles**, and they feed
`AngleVectors` to produce the forward / right / up vectors.

### `PM_CalcMove` (`0x20054000`) — the collision box and the speeds

```c
23: pm[0x33] = -0.25;              // mins.x = -0.25
24: pm[0x34] = -0.25;              // mins.y = -0.25
25: pm[0x36] = 16.0;               // maxs.x = 16
26: pm[0x37] = 16.0;               // maxs.y = 16
27: if (*pm == 4) { pm[0x35] = 0; pm[0x38] = 16.0; pm[0x32] = 8.0; return; }
33: pm[0x35] = -0.25;              // mins.z = -0.25
...
65: if (pm_flags & 1) {            // ducked
66:   pm[0x38] = 14.0;             // maxs.z = 14
67:   pm[0x32] = 0;                // wishspeed = 0
...
81: LAB_200541c8:
82:   pm[0x38] = 40.0;             // maxs.z = 40
83:   pm[0x32] = 35.0;             // wishspeed = 35
```

so `pm+0xCC` = **mins** `(-0.25, -0.25, -0.25)` and `pm+0xD8` = **maxs**
`(16, 16, 40)` — or `(16, 16, 14)` when ducked.  The speed cvar
`DAT_20157004` (default 1.0) scales both the wish speed and the maxs z.

### The end of the move (`0x20054260`) — the write-back

```c
33: iVar9 = 10;                    // the velocity starts at pm+0x0A
34: do { uVar3 = __ftol(); *(undefined2 *)(iVar9 + pm) = uVar3; iVar9 += 2; } while (iVar9 < 0x10);
40: iVar9 = 4;                     // the origin starts at pm+0x04
50: uVar3 = __ftol(); *(undefined2 *)(iVar9 + pm) = uVar3;
52: if (the float == (short)*0.125) the sign fixup = 0;
```

so the **new origin** is written to `pm+0x04..+0x09` and the **new
velocity** to `pm+0x0A..+0x0F` as `s16`s.  It then runs the final trace
through `pm+0xF0` and, if the trace is blocked, retries the position with
the **axis permutation table** at `0x20137614`:

```
0x20137614: 0x0, 0x4, 0x1, 0x2, 0x3, 0x5, 0x6, 0x7
```

(the eight permutations of the three axes — the classic "try the other
axes" nudge).

## 7. The module's callbacks

| pm slot | the module's function | what |
|---|---|---|
| `+0xF0` | `gamex86.dll 0x500F51A0` | the **trace**: it calls the engine import `*0x5015CAC0` with the mask `0x10003` (or `0x2010003`) and copies the 56-byte `trace_t` out |
| `+0xF4` | `DAT_5015CAC8` (an engine import) | the **point content** |
| `+0xF8` | `gamex86.dll 0x500F5370` | the **can-jump** callback |
| `+0xFC` | a float | the **gravity multiplier** |

The `trace_t` is **56 bytes** (14 dwords):

```c
typedef struct {
  int   allsolid;       // +0x00
  int   startsolid;     // +0x04
  int   fraction;       // +0x08
  vec3_t endpos;        // +0x0C
  vec3_t plane;         // +0x18
  int   surfaceflags;   // +0x24
  int   contents;       // +0x28
  int   entity;         // +0x2C
  int   entindex;       // +0x30
} trace_t;               // 56 bytes
```

## 8. The constants

| address | value | used for |
|---|---|---|
| `0x201375F0` | `100.0` | the minimum speed for the friction |
| `0x201375F4` | `300.0` | the maximum speed the acceleration may reach |
| `0x201375FC` | `10.0` | the acceleration |
| `0x20137608` | `6.0` | the friction (× 1.5) |
| `0x20137614` | the 8 axis permutations | the final-trace nudge |
| `0x20137650` | `"Bad InitialSnapPosition"` | the snap failure |

## 9. The consequence for the browser

* The browser does **not** need the pmove — the server runs it.  But the
  pmove explains **why the player state's origin and velocity are short
  integers in 1/8 units** and why they are delta encoded: the whole
  movement is quantised to the pmove's `s16` grid before it ever reaches
  the wire.
* The pmove's first 0x1C bytes **are** the player entity's first 0x1C
  bytes, so the player state the browser decodes is literally the pmove's
  head — which is why the wire origin is at `+0x04` and the wire velocity
  at `+0x0A`.
* The **write-back** answers the question "where does the new origin go":
  into the pmove at `+0x04` / `+0x0A`, then copied into the entity at
  `+0x00` and into the entity's shadow at `+0x32C`.
