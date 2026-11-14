# The player_state gate — SOLVED 2026-11-14

Target: the engine code that writes the player_state block into the snapshot
datagram, and the exact rule that decides whether a field is on the wire.

**Short answer:** the u32 presence mask at the head of the block is a
**delta mask**.  A bit is set only when that field **changed** with respect
to the frame the server used as the delta base (the last frame the client
acknowledged).  A field that is **absent** is **not zero** — the client
**merges** the delta over the state it already has for the delta frame.
The browser was zeroing the absent fields, which is why the local player's
velocity and view angles read as 0 on the frames where they had not
changed.

---

## 1. The message chain

| side | function | what |
|---|---|---|
| server | `SoF.exe 0x200622F0` | `SV_SendClientMessages` — the per-client frame message |
| server | `SoF.exe 0x2005BB80` | fills the client's **slot** (the 16-frame history ring + the entity list) |
| server | `SoF.exe 0x2005B970` | writes the frame message: **svc 0x17** |
| server | `SoF.exe 0x2005B110` | writes the **playerinfo** sub-block: **svc 0x14** + the u32 mask |
| server | `SoF.exe 0x2005AF90` | writes the **packet entities** sub-block: **svc 0x15** |
| client | `SoF.exe 0x20002E90` | `CL_ParseFrame` — reads the frame message |
| client | `SoF.exe 0x200028B0` | parses the **playerinfo** block (svc 0x14) |
| client | `SoF.exe 0x200025A0` | parses the **packet entities** block (svc 0x15) |

`CL_ParseFrame` reads the frame number, the delta frame number and the
time, then expects the two sub-service bytes:

```c
20003105: call   0x2001e260          ; read a byte
2000310f: cmp    $0x14,%esi
20003112: je     0x20003123
20003114: push   $0x2011c868         ; "CL_ParseFrame: not_playerinfo"
...
20003123: push   $0x201e7e60         ; the new client state
20003128: push   %ebx                ; the OLD client state (the delta frame)
20003129: call   0x200028b0
...
2000310f: cmp    $0x15,%esi          ; ... and then svc 0x15 = packet entities
```

So the wire order inside the svc 0x17 frame message is:

```
[u32 frame][u32 delta frame][f32 time][u8 userinfo length][userinfo]
[svc 0x14][u32 mask][the present fields][u32 stat mask][the present stats]
[svc 0x15][the entity delta]
```

## 2. The writer — `FUN_2005B110` (SoF.exe)

The mask is built by **comparing the new state against the old one**:

```c
159: FUN_2001cb00(param_3,0x14);      // the service byte
160: FUN_2001cbf0(param_3,uVar5);     // the u32 presence mask
161: if ((uVar5 & 0x10000) != 0) { ... write the fields ... }
```

and the comparisons are the whole mask:

```c
43: if (*(short *)(param_2 + 0x94) != (short)piVar7[0x1c]) uVar5 = 0x10000;
47: if (*(short *)(param_2 + 0x98) != (short)piVar7[0x1d]) uVar5 = uVar5 | 0x20000;
50: if (*(short *)(param_2 + 0x9a) != ...)                   uVar5 = uVar5 | 0x40000;
61: if (*piVar1 != *piVar7)                                  uVar5 = uVar5 | 1;
64: if ((origin x != old) || (origin y != old) || ...)       uVar5 = uVar5 | 2;
69: if ((velocity x != old) || ...)                          uVar5 = uVar5 | 4;
83: if ((angles x != old) || ...)                            uVar5 = uVar5 | 0x40;
96: if ((view angles x != old) || ...)                       uVar5 = uVar5 | 0x100;
```

**The mask is therefore a per-field delta mask against the old state.**

### Where the old state comes from

`FUN_2005B970` picks the two slots out of the client's 16-entry history:

```c
22: puVar1 = (undefined4 *)(param_1 + ((DAT_203a1f30 & 0xf) + 0x45) * 0xf8);  // the NEW slot
23: uVar2 = *(uint *)(param_1 + 0x204);                                        // the client's last ACKED frame
28: else if ((int)(DAT_203a1f30 - uVar2) < 0xd) {   // the base is at most 13 frames old
29:   iVar4 = param_1 + ((uVar2 & 0xf) + 0x45) * 0xf8;                          // the OLD slot
```

so the base is **the last frame this client acknowledged**, and it must be
within 13 frames or the whole delta is dropped and the full state is sent.

### The state itself

`FUN_2005BB80` fills the new slot with a **verbatim 0xC8-byte copy of the
player entity's first 0xC8 bytes**:

```c
84: puVar15 = (undefined4 *)piVar2[0x1d];      // the player entity
85: puVar18 = puVar1 + 9;                      // slot + 0x24 = the state
86: for (iVar13 = 0x32; iVar13 != 0; iVar13--) { *puVar18 = *puVar15; ... }
```

So the block is the entity state in the classic Quake layout:

| state offset | the entity field | the mask bit | the wire type |
|---|---|---|---|
| `+0x00` | the entity number | `0x1` | u8 |
| `+0x04` | the **origin** (3 × 1/8 units) | `0x2` | 3 × s16 |
| `+0x0A` | the **velocity** | `0x4` | 3 × s16 |
| `+0x14` | the **angles** (pitch/yaw/roll) | `0x40` | 3 × s16 |
| `+0x1C` | the **view angles** (degrees) | `0x100` | 3 × angle-short |
| `+0x70`, `+0x74`, `+0x76` | the model / skin / weapon | `0x10000`, `0x20000`, `0x40000` | s16 |
| `+0x78`, `+0x79`, `+0x7A` | three bytes | `0x40000000`, `0x10000000`, `0x20000000` | u8 |
| `+0xA4` | the **16 stats** | a second, separate u32 mask | 16 × s16 |

### The five trailing fields

The five fields that follow the stats have their **own** mask, kept in
`local_d4`:

```c
137: local_d4 = 0;
138: if (*(char *)(param_2 + 0xeb) != ...) { uVar5 = uVar5 | 0x400000;  local_d4 = uVar5; }
142: if (*(char *)(param_2 + 0xc2) != ...) { uVar5 = uVar5 | 0x800000;  local_d4 = uVar5; }
146: if (*(short *)(param_2 + 0xc0) != ...) { uVar5 = uVar5 | 0x1000000; local_d4 = uVar5; }
150: if (...                                  ...) { uVar5 = uVar5 | 0x2000000; local_d4 = uVar5; }
155: if (*(char *)(param_2 + 0xea) != ...) { uVar5 = uVar5 | 0x4000000; local_d4 = uVar5; }
...
289: if ((local_d4 & 0x400000) != 0) FUN_2001cb00(param_3,*(undefined1 *)(param_2 + 0xeb));
```

`local_d4` is only ever assigned inside one of those five `if`s, so when
none of them changed it stays **0** and none of the five is written —
exactly the delta rule, expressed with a second variable.

### Two dead mask bits

* **`0x80`** is computed by the writer (three floats at `param_2+0x4C`) but
  **no field is ever written for it**, and the reader has no branch for it
  either.  The bit itself does go on the wire (it is part of the u32), but
  it carries nothing.  The browser has no branch for it either — correct.
* **`0x80000000`** (bit 31) has a writer branch (three bytes) and a reader
  branch, but the writer never *sets* the bit, so it never fires.

## 3. The reader — `FUN_200028B0` (SoF.exe) — **the merge**

This is the part the browser had wrong.  The reader does **not** zero the
state and then apply the present fields.  It **copies the old state over
the new one first**, then applies the present fields on top:

```asm
200028b0: mov    0x8(%esp),%eax          ; the new state
200028b7: lea    0x34(%eax),%ebp         ; ebp = new + 0x34
200028ba: mov    0x10(%esp),%eax         ; the OLD state (the delta frame)
200028be: test   %eax,%eax
200028c0: mov    %ebp,%edi
200028c2: mov    $0x32,%ecx              ; 0x32 dwords = 0xC8 bytes
200028c7: je     0x200028d0              ; no old state -> zero instead
200028c9: lea    0x34(%eax),%esi         ; esi = old + 0x34
200028cc: rep movsl                     ; <<< copy the old state over the new
200028ce: jmp    0x200028d4
200028d0: xor    %eax,%eax
200028d2: rep stosl                     ; (only when there is no old state)
```

The merged region is `+0x34 .. +0xFB` — every field of the block lives
there, so **every absent field keeps the value it had in the delta frame**.

`CL_ParseFrame` does zero the whole 0x104-byte struct first
(`20002eb1: rep stos`, 0x41 dwords), but `FUN_200028B0` then restores the
`+0x34..+0xFB` part from the old state.

### The 16-frame history ring

The old state is the one the client holds **for the delta frame**, not
merely "the previous frame":

```asm
20002ffa: mov    %ecx,%eax              ; ecx = the delta frame number
20002ffc: and    $0xf,%eax
20002fff: mov    %eax,%edx
20003001: shl    $0x6,%edx
20003004: add    %eax,%edx              ; edx = (delta & 0xf) * 0x41
20003006: mov    0x201e7f68(,%edx,4),%eax
2000300d: cmp    %esi,%eax
2000300f: lea    0x201e7f68(,%edx,4),%ebx   ; ebx = the old state pointer
```

so the ring is at **`0x201E7F68`**, 16 slots of **0x104 bytes**, indexed by
`frame & 0xf`.  After the parse the new state is stored back into the
slot of the **current** frame:

```c
118: puVar9 = (undefined4 *)(&DAT_201e7f68 + (DAT_201e7e64 & 0xf) * 0x104);
119: for (iVar6 = 0x41; iVar6 != 0; iVar6--) { *puVar9 = *puVar8; ... }
```

Each slot's first dword is its frame number (it is checked against the
delta frame number; a mismatch is `"Delta frame too old"`).

## 4. Why the local player's velocity and view angles go missing

1. The **playerinfo** block (svc 0x14) is the receiving client's **own**
   player state.  Every **other** player's state travels in the **entity
   delta** (svc 0x15) instead.
2. The playerinfo block is **delta encoded**: the velocity (mask `0x4`) and
   the view angles (mask `0x100`) are only on the wire when they differ
   from the delta base.  Running at a constant speed, the velocity does
   not change; not touching the mouse, the view angles do not change.
3. The engine **merges** the delta over the base frame's state, so the
   value simply stays as it was.
4. The browser **zeroed** the absent fields, so the local player's
   velocity read 0 and the view angles read 0/null on exactly those
   frames.

So the data is **not** missing from the protocol — it is delta encoded,
and the browser decoded the delta as if it were a full snapshot.

## 5. The consequence for the browser

* `web/playerstate.js` must **merge** the delta over the previous state
  instead of starting from `emptyState()`.
* `web/snapshot.js` already passes the previous state
  (`decodePlayerState(buf, from, prevFrame && prevFrame.playerStateDecoded)`,
  line 227) but `decodePlayerState` **ignores the third argument** — the
  merge was designed but never implemented.
* The merge base must be the state at the **delta frame**, so the browser
  needs the same **16-slot ring** (indexed by `frame & 0xf`) that the
  engine keeps at `0x201E7F68`.  The previous *received* frame is only an
  approximation (the server may delta against a frame up to 13 frames
  old — the last one the client acknowledged).
* When there is no base state the fields are zero, exactly as the engine
  does (`je 0x200028d0` → `rep stosl`).

### The field names are confirmed

The engine's own use of the parsed fields fixes the browser's naming:

```c
129: DAT_201e7e3c = (float)(int)DAT_201e7e98 * 0.125;   // state+0x38 -> the origin x
132: DAT_201e7e40 = (float)(int)DAT_201e7e9a * 0.125;   // state+0x3a -> the origin y
136: _DAT_201e7e44 = (float)local_4 * 0.125;             // state+0x3c -> the origin z
131: DAT_201e7e48 = DAT_201e7eb0;                       // state+0x50 -> the view angles x
134: DAT_201e7e4c = DAT_201e7eb4;                       // state+0x54 -> the view angles y
135: _DAT_201e7e50 = DAT_201e7eb8;                      // state+0x58 -> the view angles z
```

so mask `0x2` is the **origin** (3 × s16 × 1/8), mask `0x100` is the
**view angles** (3 × angle-short → degrees) and mask `0x4` is the
**velocity** (3 × s16) — exactly what `web/playerstate.js` calls them.

## 6. The wire primitives (for completeness)

| helper | direction | type |
|---|---|---|
| `FUN_2001CB00` | write | u8 |
| `FUN_2001CB70` | write | s16 (LE) |
| `FUN_2001CFF0` | write | **angle** — `__ftol` then the low 16 bits |
| `FUN_2001CBF0` | write | u32 (LE) |
| `FUN_2001E260` | read | u8 |
| `FUN_2001E290` | read | s16 (LE) |
| `FUN_2001E310` | read | u32 (LE) |
| `FUN_2001E5F0` | read | **angle** — s16 × 360/65536 → degrees |
| `FUN_2001E360` | read | f32 (LE) |

The angle round trip is `float degrees → int → 16 bits` on the wire and
`s16 × 360/65536 → float degrees` on read.
