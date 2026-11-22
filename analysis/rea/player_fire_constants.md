# `player.dll` fire / ammo constants — evidence report

> **Correction (2026-11-22, REA verification):** the interval interpretation in
> §(2) was wrong. The `defA+8` / `defA+0xC` floats copied to weapon `+0x1C` /
> `+0x24` are **spread angles**, proved by `gamex86.dll 0x501066B3`/`0x501066BA`
> passing them to `FUN_50100680` (`0x50100680`), which applies `flrand` angular
> deviation. There is no independent numeric fire interval in `player.dll`: the
> fire gate uses cooldown fields at `client+0x48C`/`+0x490`, supplied by the
> engine through `FUN_500F53A0` and zeroed by game callbacks `0x500F6370` /
> `0x500F63A0`. Ammo-per-shot in §(1) is unaffected and exact.

## Provenance

| item | value |
|---|---|
| binary | `Soldier of Fortune/Base/player.dll` |
| sha256 | `8a4d9d99ff58b09fff35023cb01b8fa825c1130ff05d1645fd0d93bacf0283b5` (matches `player_client_class_audit.txt`) |
| image base | `0x40000000` |
| sections | `.text` RVA/File `0x1000/0x1000`; `.rdata` `0x13000/0x13000`; `.data` `0x15000/0x15000`; `.reloc` `0x1b000/0x19000` |
| **file offset** | **VA low 32 bits** (`VA − 0x40000000`), verified against the section table |
| offline corpora | `Soldier of Fortune/analysis/player_all.txt` (326 Ghidra decompiles), `analysis/rea/player_disasm.txt`, `analysis/rea/player_vtables.txt`, `analysis/rea/player_client_class_audit.txt` |
| method | static reading only; no REA/Ghidra re-run, no network, no tracked-file edits |

### Object-model correction (needed to read the slots correctly)

There are **two different vtables**, and the task's labels are easy to misread:

* `0x400131E0` = the **player/client object** vtable (80 slots, `+0x00..+0x13c`). Constructors at `0x40001020`/`0x400010d0` region and `FUN_40005750` (`0x4000575f`: `mov dword [puVar1], PTR_LAB_400131e0`) install it on objects of size `0x29c`.
* `0x40013BB8` = the **base weapon class** vtable (32 slots, `+0x00..+0x7c`, installed by `FUN_40009d20` at `0x40009d26`: `mov dword [this], PTR_LAB_40013bb8`). The 15 concrete weapon vtables live at `0x40013470..0x40013bb8`, each 0x80 bytes.

**Important:** the ammo handlers call `+0x94`, `+0xb4`, `+0x70` through the vtable of the object stored at `*param_1` — and that object is the **player object** (`0x400131E0`), identified by its `+0x34` weapon index and `+0x4c`/`+0x48` ammo-record arrays. Example raw disassembly, Knife handler at `0x40008450`:

```
40008455: 8b 0e            mov  ecx,[esi]        ; ecx = player object
40008457: 8b 01            mov  eax,[ecx]        ; eax = 0x400131E0 (player vtable)
40008459: ff 90 94 00 00 00 call DWORD PTR [eax+0x94]   ; player vtable +0x94
```

Consequently the dwords at `0x40013BB8+0x94`, `+0xb4`, `+0xb8`, `+0xbc` are **not** function pointers; they are adjacent `.rdata` data. Both readings are reported below.

---

## (1) Ammo per shot, and the implementing vtable handler

**Observation.** The primary-fire ammo handler is weapon-class vtable slot **`+0x40`**. The call site is in the fire dispatcher `FUN_4000a040` (`0x4000a040`):

```
4000a11c: e8 8f b0 ff ff   call 0x400051b0        ; ammo-record address from player+0x34
4000a12a: 8b 0c 8d 54 5f 01 40 mov ecx,[eax*4+0x40015f54]  ; weapon object
4000a131: 8b 11            mov  edx,[ecx]        ; weapon vtable
4000a133: ff 52 3c         call DWORD PTR [edx+0x3c]  ; ALT-fire ammo path
...
4000a34a: ff 50 40         call DWORD PTR [eax+0x40]  ; PRIMARY-fire ammo path
```

The ammo count is `*(player + (weaponIndex+6)*0xc)`, computed by `FUN_400051b0` (`0x400051b0`):
```
400051b0: 8b 41 34        mov eax,[ecx+0x34]     ; current weapon index
400051b3: 83 c0 06        add eax,6
400051b6: 8d 04 40        lea eax,[eax+eax*2]    ; *12
400051b9: 8b 04 81        mov eax,[ecx+eax*4]    ; 12-byte ammo record
```
and also exposed as player-vtable `+0x70` = `0x40005ae0` (`mov eax,[ecx+0x34]; ...; mov eax,[ecx+record]`).

**Observation.** Four distinct `+0x40` implementations exist:

| handler | address | raw decrement excerpt | ammo/shot |
|---|---|---|---|
| `FUN_40009e50` (Base) | `0x40009e50` | `40009ea7: 48 dec eax` / `40009ea8: 89 03 mov [ebx],eax` | **1** |
| `FUN_400084b0` (Autoshotgun) | `0x400084b0` | `400084ca: 83 f8 02 cmp eax,0x2` / `40008503: 83 ef 02 sub edi,0x2` / `4000850b: 89 38 mov [eax],edi` | **2** |
| `FUN_400079b0` (Machinegun, MPG) | `0x400079b0` | `400079ca: 83 f8 0a cmp eax,0xa` / `40007a03: 83 ef 0a sub edi,0xa` / `40007a06: e8 a5 d7 ff ff call 0x400051b0` | **10** |
| `FUN_40007dd0` (Flamegun) | `0x40007dd0` | `40007dea: 83 f8 06 cmp eax,0x6` / `40007e3a: 83 ef 06 sub edi,0x6` | **6** |
| `FUN_40008450` (Knife) | `0x40008450` | `4000849a: ff 8e 20 01 00 00 dec DWORD PTR [esi+0x120]` | **0 ammo** (decrements melee-swing counter at weapon `+0x120`, not the ammo record) |

The four ammo-consuming handlers first call **player vtable `+0x94`** (`0x40004f60`, `return *(player+0xf0)` — infinite-ammo flag), and on empty call **player vtable `+0xb4`** (`0x40005050`, `return *(player+0x104)`), branching to `FUN_400032a0` (out-of-ammo) or `FUN_40003630` (dry/empty animation). Base `FUN_40009e50` also gates on **weapon field `+0x10`** (`40009e62: mov eax,[esi+0x10]; 40009e65: test eax,eax; 40009e67: je ...`).

**Final per-weapon table (observation + direct consequence of the raw decrement):**

| weapon | vtable | `+0x40` target | ammo/shot | note |
|---|---|---|---|---|
| Base | `0x40013bb8` | `0x40009e50` | 1 | gated on weapon `+0x10 != 0` |
| Knife | `0x40013470` | `0x40008450` | 0 | melee; `dec [weapon+0x120]` |
| Pistol2 (.44) | `0x400134f0` | `0x40009e50` | 1 | |
| Pistol1 (9mm) | `0x40013570` | `0x40009e50` | 1 | |
| MPistol | `0x400135f0` | `0x40009e50` | 1 | |
| Assaultrifle | `0x40013670` | `0x40009e50` | 1 | |
| SniperRifle | `0x400136f0` | `0x40009e50` | 1 | |
| Autoshotgun | `0x40013778` | `0x400084b0` | **2** | needs `+0x70() >= 2` |
| Shotgun | `0x400137f8` | `0x40009e50` | 1 | |
| Machinegun | `0x40013878` | `0x400079b0` | **10** | needs `>= 10` |
| Rocket | `0x40013900` | `0x40009e50` | 1 | |
| MPG | `0x40013980` | `0x400079b0` | **10** | |
| Flamegun | `0x40013a00` | `0x40007dd0` | **6** | needs `>= 6` |
| Hurthand | `0x40013a90` | `0x40009e50` | 0 | def `+0x10` = 0 → gate fails, no decrement |
| Throwhand | `0x40013b10` | `0x40009e50` | 0 | same |

Alternate fire (vtable `+0x3c`) is a second ammo path: Base `0x40009de0` (1 round, gated on weapon `+0xc`), with overrides e.g. Machinegun/Assaultrifle `0x40008610` (delegates to `0x40009de0` then fires weapon `+0x44`), Shotgun `0x40007390`, Flamegun `0x40007d10`, MPG/Autoshotgun `0x400084b0`-style.

---

## (2) Fire gate — SUPERSEDED interval interpretation, see correction at top

The values in this section are **spread angles**, not fire intervals. The gate
uses engine-supplied cooldown fields; the corrected reasoning is in
`analysis/weapon_fire.md` §13 and in the note above. The raw addresses remain
valid evidence for the fields and callbacks.

**Observation — per-weapon definition records.** The 15 weapon constructors are thunks at `0x40009a40..0x40009d00`, each pushing a 0x14-byte record. First four (from raw disasm):

```
40009a40: 68 28 5e 01 40  push 0x40015e28   ; Base
40009a70: 68 3c 5e 01 40  push 0x40015e3c   ; Knife
40009aa0: 68 50 5e 01 40  push 0x40015e50   ; Pistol2
40009ad0: 68 64 5e 01 40  push 0x40015e64   ; Pistol1
```
records run `0x40015e28 + 0x14*i`; layout `[0]=name, [1]=category, [2]=weapon id, [3]=defA, [4]=defB`.

**Observation — `FUN_40009d20` (`0x40009d20`, base weapon ctor) copies the sub-table data into the weapon object:**

```
this+0x1c = defA+0x08      this+0x20 = defB+0x08
this+0x24 = defA+0x0c      this+0x28 = defB+0x0c
this+0xb0 = defA+0x10      this+0xb4 = defB+0x10
this+0xb8 = defA+0x14      this+0xbc = defB+0x14
this+0xc0 = defA+0x18
```
(weapon `+0xb0/+0xb4` are later read as floats at `0x4000a507` / `0x4000a5b7`).

**Observation — raw per-weapon sub-table values (`defA` / `defB`):**

| weapon | defA addr | `defA+8` (weapon `+0x1c`) | `defA+0xc` (`+0x24`) | `defA+0x10` (`+0xb0`) | `defA+4` (`+0x14`) |
|---|---|---|---|---|---|
| Pistol2 | `0x40015c4c` | **0.2** | 0.8 | 5.0 | 900 |
| Pistol1 | `0x40015c68` | **0.3** | 1.5 | 1.0 | 600 |
| MPistol | `0x40015c84` | **0.6** | 3.5 | 0 | 10 |
| Assaultrifle | `0x40015ca0` | **0.4** | 1.8 | 0 | 800 |
| SniperRifle | `0x40015cbc` | 0 | 0 | 2.0 | 0 |
| Autoshotgun | `0x40015cf4` | **1.5** | 1.5 | 4.0 | 1200 |
| Shotgun | `0x40015d2c` | 0 | 0 | 5.0 | 1200 |
| Machinegun | `0x40015d48` | **0.1** | 0.4 | 0 | 1500 |
| Rocket | `0x40015d80` | 0 | 0 | 0 | 0 |
| MPG | `0x40015db8` | 0 | 0 | 0 | 0 |
| Flamegun | `0x40015df0` | 0 | 0 | 0 | 0 |
| Knife / Hurthand / Throwhand / Base | `0x40015c14`/`0x40015bf8` | 0 | 0 | 0 | 0/1 |

(`defB` is the shared zero record `0x40015bf8` except Knife, SniperRifle, Autoshotgun, Machinegun, Rocket, MPG, Flamegun.)

**Observation — the fire gate in `FUN_4000a040` (`0x4000a040`):**
```
4000a060: ff 52 2c     call DWORD PTR [edx+0x2c]    ; weapon "can fire?" pre-check
4000a07f: ff 52 64     call DWORD PTR [edx+0x64]    ; second weapon pre-check
4000a0dd: ff 15 7c 8c 01 40 call DWORD PTR ds:0x40018c7c  ; engine callback #13
4000a0e3: d8 1d 5c 34 01 40 fcomp DWORD PTR ds:0x4001345c ; compare with 0.0f
4000a2fb: ff 15 84 8c 01 40 call DWORD PTR ds:0x40018c84  ; engine callback #15
4000a301: d8 1d 5c 34 01 40 fcomp DWORD PTR ds:0x4001345c
```
`0x40018c7c` and `0x40018c84` are slots 13 and 15 of the 38-entry **server API table** installed at `0x40018c48` by `GetPlayerServerAPI` (`0x400010d0`). `0x4001345c` = `00 00 00 00` = `0.0f`.

**Observation — standalone float constants in `.rdata`:**
`0x40013188`=double 0.5, `0x40013190`=double 0.3, `0x40013460`=double 1.3, `0x40013468`=double 0.001, `0x40013770`=`95.0f`, `0x40013a80`=`60.0f`, `0x40013a84`=`6.0f`, `0x40013a88`=`5.0f`, `0x40013b98`=`10.0f`, `0x40013c70`=double 1.0. These are used in timers/UI code (e.g. `0x400081ea: fld [ecx+0x94]; fcomp 0x40013770` then `mov [ecx+0x94],0x42be0000` = 95.0f), not in the `+0x40` ammo handlers.

**Inference (clearly not proven):** the `defA+8` / `defA+0xc` floats are the primary/secondary fire-delay (or rate) constants, loaded into weapon fields `+0x1c`/`+0x24` and consumed by the **engine** (the weapon objects are exported to it through `PTR_DAT_40015f54` at `0x40015f54`, registered at `0x40001028`). No `fld [weapon+0x1c]` exists anywhere in `player.dll`, so the gate arithmetic itself is outside this DLL.

**Blocker for (2):** I found no explicit `nextfire = time + interval` store in `player.dll`'s 326 decompiles. The gate is expressed as two weapon virtual predicates (`+0x2c`, `+0x64`) plus engine callbacks whose names are not recoverable locally (the API table is supplied by another module; there are no xrefs to `GetPlayerServerAPI` in the offline `.exe`/`gamex86.dll` corpora). Treat the interval table above as the stored constants, and the actual timestamp comparison as unresolved in this DLL.

---

## (3) Vtable / field semantics relevant to attack/fire

### Player object `0x400131E0` (raw dwords dumped from file offset `0x131e0`)

| slot | target | semantics (source) |
|---|---|---|
| `+0x40` | `0x400021f0` | `FUN_400021f0`: add weapon to inventory; scans 12-byte records at `player+0x4c`, calls `+0x94`, sets bit in `player+0x15c` |
| `+0x5c` | `0x40005a70` | `mov eax,[ecx+0x34]; lea eax,[eax+eax*2]; mov eax,[ecx+eax*4+0x4c]` → field of current weapon's 12-byte state record at `+0x4c` (clip/max-ammo style getter) |
| `+0x70` | `0x40005ae0` | returns ammo count `*(player + (weaponIdx+6)*12)` — the `+0x70()` used by all ammo handlers |
| `+0x7c` | `0x40002bd0` | `FUN_40002bd0`: subtract amount from `player+0x158` (armour/health-style pool; halves when a float arg is nonzero), returns remainder |
| `+0x88` | `0x40004f00` | `FUN_40004f00`: one-shot reload/holster action; sets `player+0x228=1`, calls weapon `+0x4c` |
| `+0x94` | `0x40004f60` | `return *(player+0xf0)` — infinite-ammo / ammo-present flag (7 bytes) |
| `+0xb4` | `0x40005050` | `return *(player+0x104)` — empty-clip decision flag used by ammo handlers (6 bytes) |
| `+0xf4` | `0x40005b30` | setter: `mov [ecx+0x1ac], [esp+4]` — store client/entity pointer |
| `+0x138` | `0x40005750` | `FUN_40005750`: `operator_new(0x29c)` + init + installs `0x400131e0` — clone/create player |

### Weapon object `0x40013BB8` — raw dwords at vtable address + offset

| offset | raw value | interpretation |
|---|---|---|
| `+0x00` | `0x40008860` | `xor eax,eax; ret 4` — default no-op virtual (also every Base slot `+0x00..+0x18` etc.) |
| `+0x40` | `0x40009e50` | primary-fire ammo consumption (1 round) |
| `+0x6c` | `0x400011e0` | `xor eax,eax; ret` — default no-op; overridden per weapon (e.g. Pistol2 `0x400088b0`, Machinegun `0x400089a0`, Flamegun `0x40008a00`) |
| `+0x70` | `0x400011e0` | default no-op; overridden to `0x400012d0` for Autoshotgun/Rocket/MPG/Flamegun |
| `+0x94` | `0x00000000` | **not a function pointer** — adjacent `.rdata` data; the `+0x94` call in ammo handlers is on the *player* vtable (`0x40004f60`) |
| `+0xb4` | `0x00000000` | same; actual `+0xb4` handler used is player `0x40005050` |
| `+0xb8` | `0x00000000` | low dword of the double `1.0` at `0x40013c70` (used at `0x4000b956: fcomp QWORD PTR ds:0x40013c70`) |
| `+0xbc` | `0x3ff00000` | float `1.875`; with `+0xc0=0xc0000000` forms a double ≈ `-2.0` — data, not code |

**Observation.** The weapon *instance* fields (set by `FUN_40009d20`) that matter for fire are `+0x10` (primary-ammo gate), `+0xc` (alt-ammo gate), `+0x1c`/`+0x24` (copied `defA+8`/`defA+0xc` floats), `+0xb0`/`+0xb4` (read as floats at `0x4000a507`/`0x4000a5b7`), and `+0x120` (Knife swing counter). Fields `+0xb8`/`+0xbc` of the *instance* are `defA+0x14`/`defB+0x14` small integer ids (4, 3, 5, 6, 7, 9, 0xa, …), distinct from the raw vtable-address dwords listed above.

---

## Final values (recoverable)

| quantity | value | address of evidence |
|---|---|---|
| ammo/shot — pistol class (6 weapons), shotgun, rocket | **1** | `0x40009ea7` (`dec eax`) |
| ammo/shot — autoshotgun | **2** | `0x40008503` (`sub edi,0x2`) |
| ammo/shot — machinegun, MPG | **10** | `0x40007a03` (`sub edi,0xa`) |
| ammo/shot — flamethrower | **6** | `0x40007e3a` (`sub edi,0x6`) |
| ammo/shot — knife / hurt / throw hands | **0** | `0x4000849a` / zero def record `0x40015bf8` |
| primary-fire handler slot | weapon vtable `+0x40` | call at `0x4000a34a` |
| spread angles (primary/alt, degrees) | 0.2 / 0.3 / 0.6 / 0.4 / 1.5 / 0.1; 0.8 / 1.5 / 3.5 / 1.8 / 1.5 / 0.4 | `0x40015c54`, `0x40015c70`, `0x40015c8c`, `0x40015ca8`, `0x40015cfc`, `0x40015d50` (consumed at `gamex86 0x50100680`) |
| fire cooldown fields | `client+0x48C` / `client+0x490` | getters `gamex86 0x500F6360`/`0x500F6390`, setters `0x500F6370`/`0x500F63A0` |
| fire gate zero constant | `0.0f` | `0x4001345c` |
| infinite-ammo flag | `*(player+0xf0)` | `0x40004f60` |
| empty-clip flag | `*(player+0x104)` | `0x40005050` |

## Open blockers

1. The **timestamp/next-fire comparison** is not present in the player.dll corpus; it is reached through engine callbacks `0x40018c7c` / `0x40018c84` and weapon predicates `+0x2c` / `+0x64`, whose implementations are in the engine/game module. Mapping the API-slot numbers to names requires SoF.exe/gamex86 DLL-side evidence not in the provided offline files.
2. Whether `defA+8` / `defA+0xc` are literally *fire interval* versus *recoil/spread* is an inference from their magnitudes and the absence of any float read of weapon `+0x1c` inside player.dll.
3. `Hurthand`/`Throwhand` primary handlers are inherited and gated off by a zero definition record; their real "fire" effect is implemented through other vtable slots, not ammo consumption.
