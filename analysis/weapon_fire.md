# The weapon fire internals — module side and shipped `player.dll`

Targets: `gamex86.dll` (the SoF game module), image base `0x50000000`; and the
shipped `Soldier of Fortune/Base/player.dll`, image base `0x40000000`, SHA-256
`8a4d9d99ff58b09fff35023cb01b8fa825c1130ff05d1645fd0d93bacf0283b5`.
Every claim below carries its address; the excerpts are short on purpose.

This file supersedes `REPORT.md` §4.2, §4.3, §4.30 and §4.31 — the corrections
are listed in §10. Observations, direct consequences and inferences are kept
distinct in §11-§13.

---

## 1. The weapon table

| what | where |
|---|---|
| the global pointer to the table | `0x50159B18` (a `char *`) |
| the table base (row 0) | `0x50159B20` |
| the row count | **31** |
| the row stride | **0x14C** |
| the builder | the thunk `0x50064AF0` → the body at `0x50064B00` |
| the row constructor | `0x50065470` (called 31×, unrolled, `0x50064B38` … `0x5006545F`) |
| the table initialiser | `FUN_50065D50` — `movl $0x50159b20,0x50159b18` at `0x50065D67` |

The table is **zero in the file** (`.data` raw) and is filled at runtime by the
31 constructor calls, so every value must be read out of the *code*, not the
image. `analysis/weapon_fire_table.py` does that and prints the table below.

The row index is computed everywhere with the same three-instruction idiom
(`index * 41`, `index * 83`, `×4` = `index * 0x14C`), e.g. in the player fire
callback at `0x501066B6`:

    501066b6: lea    (%ebx,%ebx,4),%eax
    501066b9: lea    (%ebx,%eax,8),%ecx      ; ecx = index*41
    501066c1: lea    (%ebx,%ecx,2),%edx      ; edx = index*83
    501066c4: lea    (%eax,%edx,4),%ecx      ; ecx = base + index*332

(The old "12-byte-stride table" claim was this idiom mis-read.)

The constructor `FUN_50065470` (`analysis/rea/ghoul_all/functions/0x50065470.c`)
copies the three strings into the row and writes the 15 dwords:

    *(undefined4 *)((int)this + 0x114) = param_4;
    *(undefined4 *)((int)this + 8)     = param_6;
    *(undefined4 *)((int)this + 0x10) = param_10;
    *(undefined4 *)((int)this + 4)     = param_5;
    *(undefined4 *)((int)this + 0xc)   = param_7;
    ... 0x14 <- param_1, 0x54 <- param_2, 0x94 <- param_3, 0xd4 <- param_16
    *(undefined4 *)((int)this + 0x128) = param_11;   /* the fire handler   */
    *(undefined4 *)((int)this + 300)   = param_14;   /* 0x12c the precache */
    *(undefined4 *)((int)this + 0x120) = param_12;
    *(undefined4 *)((int)this + 0x124) = param_13;
    *(undefined4 *)((int)this + 0x144) = param_17;
    *(undefined4 *)((int)this + 0x130) = param_15;   /* the range          */
    *(undefined4 *)((int)this + 0x118) = param_8;    /* the heat rate      */
    *(undefined4 *)((int)this + 0x11c) = param_9;    /* the alt heat rate  */
    *(undefined4 *)((int)this + 0x148) = param_18;

---

## 2. The field map — every offset has a reader

The eleven accessor functions are all in `0x50065850`–`0x500659C0`; they are
the proof for the names.

| offset | size | meaning | the accessor / the reader |
|---|---|---|---|
| +0x00 | 4 | unused | — |
| +0x04 | float | **the damage** | `FUN_50065850`: `return (float10)*(float *)(param_1 + 4);` |
| +0x08 | float | **the pellet count** (used as an int) | `FUN_500658f0`: `return (float10)*(float *)(param_1 + 8);` |
| +0x0C | uint | **the damage flags** (`dflags`) | `FUN_50065880`: `return *(uint *)(param_1 + 0xc);` |
| +0x10 | uint | **the damage mod / means of death** | `FUN_500658c0`: `return *(undefined4 *)(param_1 + 0x10);` |
| +0x14 | 0x40 | the **player's view-model path** | precached to +0x134 |
| +0x54 | 0x40 | the **world-model path** | precached to +0x138 |
| +0x94 | 0x40 | the **alt world-model path** | precached to +0x13C |
| +0xD4 | 0x40 | the **tracer model path** | precached to +0x140 |
| +0x114 | float | **dead** (see below) | `FUN_50065900`: `return (float10)*(float *)(param_1 + 0x114);` |
| +0x118 | float | **the heat rate, primary** | the dispatcher |
| +0x11C | float | **the heat rate, alternate** | the dispatcher |
| +0x120 | float | **armour-cost mode flag** — `T_Damage` argument 11 | the bullet handler; `player.dll 0x40002BD0` |
| +0x124 | float | **damage-reduction fraction** — `T_Damage` argument 12 | the bullet handler; `player.dll 0x40002BD0` |
| +0x128 | ptr | **the fire handler** | `(**(code **)((int)this + 0x128))(&ctx)` |
| +0x12C | ptr | **the precache callback** (called once at init) | `FUN_50065580` |
| +0x130 | float | **the range** (and the damage falloff) | `FUN_50065970` |
| +0x134 | int | the cached model index of +0x14 | `FUN_50065580` |
| +0x138 | int | the cached model index of +0x54 | `FUN_50065910` |
| +0x13C | int | the cached model index of +0x94 | `FUN_50065580` |
| +0x140 | int | the cached model index of +0xD4 | `FUN_50065940` |
| +0x144 | int | the **impact-effect variant** (0/1) | `FUN_500659b0` |
| +0x148 | int | **the weapon class index** (0…15) | the class names at `0x5014F3C0` |

### 2.1 The class index (+0x148)

The 13 class names live at `0x5014F3C0` (`analysis/module_classes.md` §8) and the
**id is `1 << index`**:

| idx | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| name | nothing | knife | pistol2 | pistol1 | mpistol | assault | sniper | slugger | shotgun | machinegun | rocket | mpg | flamegun |

Two accessors use it:

* `FUN_50065850` — in multiplayer, class 7 or 8 (slugger / shotgun) uses a
  **fixed damage of 110** instead of the table value;
* `FUN_50065880` — for class 4, 7 or 8 the damage flags get `| 2`.

### 2.2 +0x114 is dead

`FUN_50065900` is the only reader and it is called only from the two player
fire callbacks — and its result is **overwritten before use**:

    50106677: call   0x50065900        ; the value is fetched …
    50106684: fstps  0x50(%esp)        ; … and stored
    …
    50106745: fstps  0x50(%esp)        ; … and overwritten here
    50106769: flds   0x50(%esp)        ; only the second value is used

So the field (300 … 1500 in the table) is a **vestige** in this build.

### 2.3 The precache callback (+0x12C)

`FUN_50065580` (called through the thunk at `0x50106B20`, "precache the models
of weapon *index*") is the only caller:

    if (*(code **)(param_1 + 300) == (code *)0x0) { return; }
    (**(code **)(param_1 + 300))();          /* 0x12c, this = the row */

The callback precaches a list of models, e.g. row 16's `0x501001E0`:

    501001e0: push   $0x50151568   ; "weapons/world/mpgzap"
    501001e5: call   *0x5015c9f8   ; import slot 2 = the engine EFFECT precache
    501001eb: push   $0x50155f78   ; "weapons/othermz/mpgbeam1"
    …

`0x50096C00` (the shared value of the small arms) is an **empty** function.

### 2.4 The three cached model indices

`FUN_50065580` fills them; the rule is "single player → the alt model, multiplayer
→ the world model":

    iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();     /* the game mode */
    if (iVar2 == 0) {                               /* single player */
      ...  *(undefined4 *)(param_1 + 0x13c) = (*DAT_5015c9f8)(param_1 + 0x94);
    } else {                                        /* multiplayer */
      ...  *(undefined4 *)(param_1 + 0x138) = (*DAT_5015c9f8)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x134) = (*DAT_5015c9f8)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x140) = (*DAT_5015c9f8)(param_1 + 0xd4);

`FUN_50065910` / `FUN_50065940` are the lazy getters (they precache on demand
and return +0x138 / +0x140).

---

## 3. The fire context (`fire_ctx`) — 0x3C bytes

Built on the stack by the dispatcher `0x500656E0` and handed to the row's fire
handler as **one pointer**:

| offset | field |
|---|---|
| +0x00 | the shooter entity |
| +0x04 | the start vector (3 floats) |
| +0x10 | the end vector (3 floats) |
| +0x1C | the muzzle-flash effect handle (0 = none) |
| +0x20 | **the row** (`this` of the dispatcher) |
| +0x38 | the flag: 1 when a flash effect was spawned |

Provenance — the dispatcher writes them at these stack slots
(`esp` after `sub $0x60,%esp` + 2 pushes, so the context base is `0x20(%esp)`):

    5006579b: mov    %esi,0x20(%esp)        ; the entity   -> +0x00
    500657b0: mov    %edx,0x24(%esp)        ; start[0]     -> +0x04
    500657bb: mov    %ecx,0x28(%esp)        ; start[1]     -> +0x08
    500657bf: mov    %edx,0x2c(%esp)        ; start[2]     -> +0x0C
    500657cb: mov    %ecx,0x30(%esp)        ; end[0]       -> +0x10
    500657d9: mov    %edx,0x34(%esp)        ; end[1]       -> +0x14
    500657cf: mov    %eax,0x38(%esp)        ; end[2]       -> +0x18
    500657dd: mov    %eax,0x3c(%esp)        ; the effect   -> +0x1C
    5006579f: mov    %edi,0x40(%esp)        ; the row      -> +0x20
    500657a3: movl   $0x0,0x58(%esp)       ; the flag     -> +0x38

---

## 4. The dispatcher — `FUN_500656E0` (`this` = the row)

    if (*(int *)((int)this + 0x128) != 0) {              /* a fire handler? */
      if ((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) {
        /* the view angles are applied to the entity: */
        FUN_500f1bf0(param_1,&local_54,(int)&local_60,0);
      }
      ...
      if (*(int *)(param_1 + 0x450) == 0) { fVar1 = *(float *)(this + 0x118); }
      else                                   { fVar1 = *(float *)(this + 0x11c); }
      FUN_500ee7f0(fVar1);                     /* the heat                */
      (**(code **)((int)this + 0x128))(&local_48);   /* the row's handler   */
    }

* **entity+0x450** is the **AI controller/class-object pointer**, not a boolean
  flag. The dispatcher tests it for non-null: no controller means primary heat
  (`row+0x118`), a controller means the NPC/alternate path (`row+0x11C`). See
  `analysis/rea/ai_controller_body_map.md`.
* **entity+0x74** = the client pointer (the view angles are at client+0x28).
* The context passed to the row handler is **0x3C bytes**, not 0x24:
  `+0x20` = the row, `+0x38` = the muzzle-flash flag. `REPORT.md` §4.2's
  `0x24-byte` struct is stale.
* the effect at ctx+0x1C is spawned here (`FUN_500C3BB0`) and sets ctx+0x38.

---

## 5. The fire wrapper — `FUN_500659C0`

`ECX` = the table pointer (`0x50159B18`), the row index on the stack.
It resolves the row, applies the **AI remap** and calls the dispatcher.

    50065a53: lea    (%eax,%eax,4),%edx
    50065a56: lea    (%eax,%edx,8),%ecx
    50065a5f: lea    (%eax,%ecx,2),%esi
    50065a6c: mov    (%edi),%ecx           ; *0x50159B18 = row 0
    50065a6e: shl    $0x2,%esi             ; index * 0x14C
    50065a74: call   0x500656e0            ; the dispatcher

The AI remap (the AI turns a normal weapon into the flame gun):

    50065a03: mov    0x458(%ebx),%eax      ; entity+0x458
    50065a0d: cmpl   $0x3,0x50159684       ; the global mode
    50065a16: mov    0x45c(%ebx),%eax
    50065a20: cmpl   $0xc,0x3b4(%eax)      ; the AI's weapon type
    50065a2d: cmp    $0x12,%eax            ; already a flame gun?
    50065a32: cmp    $0x13,%eax
    50065a37: mov    0x74(%ebx),%eax       ; the client
    50065a3a: mov    0x34c(%eax),%ecx
    50065a42: mov    0xc(%ecx),%edx
    50065a47: setne  %al
    50065a4a: add    $0x12,%eax            ; -> row 0x12 or 0x13

i.e. **row 0x12 (18) = the flame gun, row 0x13 (19) = the flame release**.

The wrapper also resolves the muzzle-flash model before the call:

    500659ed: push   $0x50133d48           ; "flash"
    500659f4: call   *0x1c(%edx)           ; the engine's model handle

---

## 6. The player's primary / alternate callbacks

| what | address |
|---|---|
| the primary fire callback | **`0x50106640`** |
| the alternate fire callback | **`0x50106890`** |

They are **byte-for-byte the same code** except for the row index they use:

| | primary | alternate |
|---|---|---|
| the row index | `weapon_object+0xB8` | `weapon_object+0xBC` |
| the read | `50106660: mov 0xb8(%edi),%ebx` | `501068b0: mov 0xbc(%edi),%ebx` |

Both resolve the row through `0x5015D9B8`, which is **not a weapon registry**:
it is the **player API object returned by `GetPlayerServerAPI`** (`player.dll
0x400010D0`). `client+0x34C` is the **player object** created by that API's
`+0x24` method (`player.dll 0x40005220`, a 0x29C-byte object). The weapon-row
index comes from the player object's `+0xB8` / `+0xBC`; the row array itself is
`0x50159B18`. The stale `mov 0x10(%ecx)` reading is part of the player-object
interface, not a registry of weapon objects.

and then do, in order:

1. `FUN_50065900` — the dead +0x114 fetch (§2.2);
2. the muzzle position = the entity origin + the client's view origin
   (`entity+0x74` → client+0x28…0x38);
3. the gate `call *0x70(%edx)` — the weapon object must agree (a non-zero
   return);
4. the flash effect `FUN_500C3BB0` with the model name `"flash"`
   (`0x50133D48`) and the client's +0x14C (the weapon model info);
5. the gate `call *0x74(%edx)` — the aim vector (`FUN_500FDD70`, this+0x240);
6. the trace `call *0x5015cac0` with the mask **0x6000081**;
7. the direction normalised by `FUN_500FE050`;
8. the fire wrapper `call 0x500659c0` with `ECX = 0x50159b18` and the row index;
9. the sphere trace `FUN_500F8FE0`.

The **AI** has its own equivalent helpers, `FUN_50065B40` and `FUN_50065BF0`
(`this` = the table base, the row index as the first argument). They build the
same context and call the same row handler:

    iVar4 = *(int *)this + param_1 * 0x14c;
    if (*(int *)(iVar4 + 0x128) != 0) { … (**(code **)(iVar4 + 0x128))(&local_48); }

`FUN_50065BF0` also spawns the flash with `FUN_50085470` and picks the alt
model (+0x94 → +0x13C) in single player, the world model (+0x54 → +0x138) in
multiplayer — the same rule as `FUN_50065580`.

### 6.1 Where the callbacks come from

They are **not** in a vtable — they are put into the *game callback table* that
the module hands to the player DLL when the engine loader calls
`GetPlayerServerAPI` (`FUN_500B9EC0`, raw range `0x500B9EC0-0x500BA196`):

    500ba043: movl   $0x5015ccdc,0x4(%esp)   ; &level.time
    500ba04b: movl   $0x50106640,0x8(%esp)   ; the primary fire callback
    500ba053: movl   $0x50106890,0xc(%esp)   ; the alternate fire callback
    500ba05b: movl   $0x500eeba0,0x10(%esp)
    500ba06b: movl   $0x50106ae0,0x14(%esp)
    500ba063: movl   $0x500eec70,0x18(%esp)
    …
    500ba138: call   *0x5015cb18             ; the engine creates the weapon
    500ba141: mov    %eax,0x5015d9b8         ; the registry

`0x5015CB18` = the engine import **slot 74** = `SoF.exe 0x20066100`. With
`param_4 == 0` it calls `GetPlayerServerAPI` (`player.dll 0x400010D0`); with a
non-zero `param_4` it calls `GetPlayerClientAPI` (`0x40001020`). The loader
tries `<gamedir>/final/player.dll` first and then `<gamedir>/player.dll`; the
shipped `Soldier of Fortune/Base/player.dll` is at the latter path, beside the
byte-identical `gamex86.dll`. Therefore the player-side fire/ammo constants are
recoverable from that DLL, not from the game module.

---

## 7. The heat model

Globals: the heat `_DAT_5015CDA4` (0…1), the overheat-until `_DAT_5015D1BC`,
the cool time `_DAT_5015D934`, the frame time `_DAT_5015D930`.

`FUN_500EE7F0` (called by the dispatcher with the row's heat rate):

    if (_DAT_5015d934 + _DAT_5015d1bc <= DAT_5015ccdc) {
      fVar1 = _DAT_5015d930 * *(float *)(DAT_5015cb88 + 0x18);
      if (fVar1 < 0.1) { fVar1 = 0.1; }
      _DAT_5015cda4 = fVar1 * param_1 * 0.7 + _DAT_5015cda4;
      if (1.0 < _DAT_5015cda4) { _DAT_5015cda4 = 1.0; }
      if (((*(float *)(DAT_5015cb88 + 0x18) < 0.1) || (_DAT_5015d930 < 0.1)) &&
          (0.4 < _DAT_5015cda4)) { _DAT_5015cda4 = 0.4; }
    }

`FUN_500EE8B0` (the cooling, called every frame):

    _DAT_5015cda4 = _DAT_5015cda4 - (_DAT_5015cda4 * 0.015 + 0.003) * 0.7;
    …
    if (_DAT_5015cda4 <= 0.75) { … the "padd_warning.wav" warning … }
    … else { _DAT_5015cda4 = 1.0; FUN_500f8fe0(); … "misc/padd_max.wav" … }

and while the gun is locked out the heat decays linearly:

    _DAT_5015cda4 = 1.0 - (DAT_5015ccdc - _DAT_5015d1bc) / _DAT_5015d934;

So: **+0x118 / +0x11C are the heat rates per shot**, *not* the fire delays.

---

## 8. The damage path — the bullet handler `FUN_50101230`

`FUN_50101230` is the fire handler of rows 3, 4, 5, 6, 7, 12 and 28
(the pistols, the SMG, the assault rifle, the sniper, the machine gun).

    bVar2 = false;
    FUN_50065850(param_1[8]);              /* the damage -> 0x18(%esp) */
    (*DAT_5015cac0)(*param_1 + 4,0,0,pfVar1,*param_1,0x6000081,local_70);

* the **damage** (row+0x04) is fetched into `0x18(%esp)` and is scaled by the
  distance falloff (`0x5010134F`–`0x50101378`):

      flds   0x4c(%esp)                   ; the trace fraction
      fcompl 0x50128318                   ; 0.99
      …
      call   0x50065970                   ; the range (row+0x130)
      fmuls  0x30(%esp)                   ; × the distance
      …
      call   0x50065970
      fdivs  0x14(%esp)
      fmuls  0x18(%esp)                   ; damage *= range/(2*distance)

  so **beyond half the weapon's range the damage falls off linearly**;
* the **pellet count** (row+0x08) is the impact spawn count
  (`FUN_500840D0` is called once per pellet);
* the final damage integer is `__ftol` (`FUN_50107520`) of the float;
* the call is

      FUN_5008bb10(target, attacker, attacker, dir, point, start,
                   damage, damage, flags|0x20000, mod, row+0x120, row+0x124);

  with `flags` = row+0x0C (`FUN_50065880`), `mod` = row+0x10
  (`FUN_500658C0`) and the two floats = row+0x120 / row+0x124
  (`FUN_500658D0` / `FUN_500658E0`);
* the impact effect: `FUN_500659B0` (row+0x144) chooses between
  `FUN_50084D00` and `FUN_50084DB0`;
* the tracer: `FUN_50065940` (row+0x140) and the weapon model
  `FUN_50065910` (row+0x138).

The two floats (+0x120 / +0x124) are the last two arguments of `T_Damage`
(`FUN_5008BB10`, 12 arguments) and are forwarded unchanged to the target's class
damage handler (`call *0x40(%edx)` at `0x5008BCA7`). Their exact roles are now
fixed by the shipped `player.dll` reducer: +0x120 selects the **alternate
armour-cost branch** and +0x124 is the **fractional damage-reduction factor**
used as `N = trunc(damage * (1 - reduction))`. See §12.

---

## 9. The 31 rows

`python3 analysis/weapon_fire_table.py` prints this table from the binary.

| # | class | view model (+0x14) | world model (+0x54) | dmg (+0x04) | pellets (+0x08) | flags (+0x0C) | mod (+0x10) | heat (+0x118/+0x11C) | range (+0x130) | d1 (+0x120) | d2 (+0x124) | tracer (+0xD4) | fire (+0x128) | precache (+0x12C) |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 0 | nothing | "" | "" | 0 | 3 | 0x0 | 0x0 | 0/0 | 0 | 0 | 0 | "" | 0x0 | 0x0 |
| 1 | knife | "" | weapons/othermz/knife | 22 | 3 | 0x1000000 | 0x0 | 0/0 | 30 | 0 | 0.25 | "" | 0x50100bf0 | 0x500ffea0 |
| 2 | pistol2 | "" | "" | 30 | 2 | 0x1000000 | 0x0 | 0/0 | 0 | 0 | 0 | "" | 0x50103a60 | 0x500ffec0 |
| 3 | pistol1 | weapons/playermz/pistol1 | weapons/othermz/pistol1_p | 45 | 2 | 0x0 | 0x3 | 0.03/0.03 | 512 | 0 | 0 | weapons/world/tracer_s | 0x50101230 | 0x50096c00 |
| 4 | mpistol | weapons/playermz/pistol2 | weapons/othermz/pistol2_p | 120 | 5 | 0x20000 | 0x4 | 0.08/0.08 | 800 | 0.5 | 0 | weapons/world/tracer_l | 0x50101230 | 0x50096c00 |
| 5 | assault | weapons/playermz/machinepistol | weapons/othermz/machinepistol | 40 | 2 | 0x1010000 | 0x5 | 0/0 | 512 | 0 | 0.5 | weapons/world/tracer_s | 0x50101230 | 0x50096c00 |
| 6 | sniper | weapons/playermz/assaultrifle | weapons/othermz/assaultrifle_p | 45 | 4 | 0x10000 | 0x6 | 0.03/0.03 | 512 | 0 | 0 | weapons/world/tracer | 0x50101230 | 0x50096c00 |
| 7 | slugger | weapons/playermz/sniper | weapons/othermz/sniper | 80 | 6 | 0x1080000 | 0x7 | 0/0 | 1600 | 0.5 | 0 | weapons/world/tracer_n | 0x50101230 | 0x500fff50 |
| 8 | shotgun | "" | "" | 30 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | weapons/world/tracer_n | 0x0 | 0x0 |
| 9 | machinegun | weapons/playermz/autoshot | weapons/othermz/autoshot_p | 80 | 3 | 0x28000 | 0x8 | 0.04/0.04 | 512 | 0 | 0 | "" | 0x501018a0 | 0x500fff70 |
| 10 | rocket | weapons/playermz/autoalt | weapons/othermz/autoalt_p | 200 | 3 | 0x80 | 0x25 | 0.02/0.02 | 256 | 0 | 0 | "" | 0x50104fc0 | 0x500fffa0 |
| 11 | mpg | weapons/playermz/shotgun | weapons/othermz/shotgun_p | 40 | 1 | 0x20000 | 0x9 | 0.2/0.2 | 128 | 0 | 0.5 | "" | 0x50101a90 | 0x500ffff0 |
| 12 | flamegun | weapons/playermz/machinegun | weapons/othermz/machinegun_p | 100 | 7 | 0x20000 | 0xa | 0.08/0.04 | 1024 | 0.25 | 0 | weapons/world/tracer_l | 0x50101230 | 0x50096c00 |
| 13 | (NULL) | weapons/playermz/phos | weapons/othermz/phos_p | 30 | 3 | 0x0 | 0x0 | 0.01/0.01 | 512 | 0 | 0 | "" | 0x50104a20 | 0x50100010 |
| 14 | ? | weapons/playermz/rocket | weapons/othermz/rocket_p | 30 | 5 | 0x0 | 0x0 | 0.2/0.2 | 512 | 0 | 0 | "" | 0x50102a40 | 0x50100070 |
| 15 | ? | weapons/playermz/rocket_alt | weapons/othermz/rocket_alt_p | 15 | 5 | 0x0 | 0x0 | 0.1/0.1 | 512 | 0 | 0 | "" | 0x50103270 | 0x501000d0 |
| 16 | ? | weapons/playermz/mpgbeam1 | "" | 10 | 3 | 0x0 | 0xe | 0/0 | 512 | 1 | 0 | "" | 0x501051b0 | 0x501001e0 |
| 17 | ? | weapons/playermz/mpg | weapons/othermz/mpg | 200 | 3 | 0x0 | 0xe | 0/0 | 512 | 1 | 0 | "" | 0x50104510 | 0x50100150 |
| 18 | ? | weapons/playermz/flamegun | "" | 15 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | "" | 0x50105b20 | 0x501002b0 |
| 19 | ? | weapons/playermz/flamerelease | weapons/othermz/flamerelease | 30 | 3 | 0x0 | 0x0 | 0.3/0.3 | 512 | 0 | 0 | "" | 0x50105930 | 0x50100300 |
| 20 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0.03/0.03 | 512 | 0 | 0 | "" | 0x50106050 | 0x0 |
| 21 | ? | "" | "" | 10 | 3 | 0x0 | 0x0 | 0.1/0.1 | 512 | 0 | 0 | weapons/world/tracer_l | 0x501063c0 | 0x0 |
| 22 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0.05/0.05 | 512 | 0 | 0 | "" | 0x50106380 | 0x50100330 |
| 23 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0.1/0.1 | 512 | 0 | 0 | "" | 0x501061e0 | 0x0 |
| 24 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | "" | 0x50106380 | 0x0 |
| 25 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | "" | 0x50096c00 | 0x0 |
| 26 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | "" | 0x501063d0 | 0x0 |
| 27 | ? | "" | "" | 30 | 3 | 0x0 | 0x0 | 0/0 | 512 | 0 | 0 | "" | 0x501063e0 | 0x0 |
| 28 | ? | "" | "" | 180 | 15 | 0x20000 | 0x0 | 0.1/0.1 | 512 | 0 | 0 | weapons/world/tracer_l | 0x50101230 | 0x50096c00 |
| 29 | ? | "" | weapons/othermz/gb_dekmz | 300 | 3 | 0x0 | 0x0 | 0.02/0.02 | 512 | 0 | 0 | weapons/world/tracer_l | 0x501063f0 | 0x50100220 |
| 30 | ? | "" | "" | 30 | 2 | 0x0 | 0x0 | 0/0 | 0 | 0 | 0 | "" | 0x50103fe0 | 0x500fff00 |

(The "class" column is the +0x148 index resolved through the names at
`0x5014F3C0`; rows 13…30 use the indices 13…15 which are **not** in the
13-name table, so they print as `?` — those rows are the special/AI weapon rows
and the AI's class name is not stored in the row.)

The rows with no view model (0, 2, 8, 20…28, 30) are the **state / AI** rows;
the AI's fire sites use the indices 0x15 (21), 0x1C (28), 0x0C (12) and a
dynamic one (`0x5002ED3D`).

---

## 10. The corrections to `REPORT.md`

| the old claim | the truth |
|---|---|
| §4.2/§4.3: the "12-byte-stride table" | the same `0x14C` stride, mis-read; the real 12-byte table is the **weapon-class callback table** at `0x50128728` (3 pointers per class, the default `0x500151E0` = empty) |
| §4.30 "Gate A at `0x50104803`" = the player's next-action timer | `0x50104803` is inside the **phos-burn damage function** (`0x50104700`): it compares `entity+0x370` with `level.time` and re-arms it with **+2.0 s** (`0x50125030`) or **+0.5 s** (`0x50125518`) — a *burn tick timer*, not a fire gate |
| §4.30/§4.31: row+0x118/+0x11C are the **fire delays** | they are the **heat rates** — the dispatcher passes them to `FUN_500EE7F0` (§7) |
| §4.30/§4.31: the fire-rate gate is `weapon_object+0x37C` vs `level.time` at `0x50105411` | that code is inside **row 16's own fire handler** (`0x501051B0`, the microwave pulse beam); it is a per-weapon "next allowed time" re-armed with +0.4 / +0.2 s, and it is **not** the general player fire gate |
| the 0.99 constant at `0x50128318` = the "heat" threshold | it is the **trace-fraction** threshold ("the trace hit nothing") — `fcompl 0x50128318` right after the trace in the bullet handler |
| entity+0x74 = "the scale" | there is **no entity field at 0x74** (`analysis/module_classes.md` §3); in the fire path entity+0x74 is the **client pointer** |

---

## 11. Shipped `player.dll` identity — proven, not assumed

| observation | address / evidence |
|---|---|
| `Soldier of Fortune/Base/gamex86.dll` is byte-identical to `sof_target/gamex86.dll` | SHA-256 `9e5390f05aa5eae0cab62b7a35f304078d3b395e7118a9c6b9535568ac575483` for both |
| the engine loader tries `<gamedir>/final/player.dll`, then `<gamedir>/player.dll` | `SoF.exe 0x20066100` (`FUN_20066100`), strings `0x2013A9FC`, `0x2013AA08`, `0x2013AA98` |
| the candidate sits at exactly the fallback path, beside that identical `gamex86.dll` | `Soldier of Fortune/Base/player.dll`, SHA-256 `8a4d9d99ff58b09fff35023cb01b8fa825c1130ff05d1645fd0d93bacf0283b5` |
| the game module checks the API version is 1 and calls the API's `+0x24` factory | `gamex86.dll 0x500B9EC0` / `0x500F4070`; `player.dll 0x40001000` returns 1 |
| the factory returns a 0x29C-byte object with the expected vtable | `player.dll 0x40005220` → `0x40001D40`; vtable `0x400131E0` |

**Conclusion (observation-level):** the candidate is the player module the
shipped `gamex86.dll` loads. The previous note that the player DLL was "absent"
is wrong; it was simply outside `sof_target/`.

## 12. `T_Damage` arguments 11/12 are now named

The raw `player.dll 0x40002BD0` reducer has the stack contract
`(arg1=damage, arg2=armour-cost mode, arg3=damage-reduction fraction)`,
`ret 0xC`. It reads all three:

```
40002bd0: push esi; push edi
40002bd4: mov  esi,[edi+0x158]        ; armour pool
40002be7: fild DWORD PTR [esp+0xc]    ; arg1 = damage
40002beb: fld  DWORD PTR [esp+0x14]   ; arg3 = reduction fraction
40002bef: fmul st,st(1)
40002bf1: fsubr st,st(1)              ; damage * (1 - fraction)
40002bf3: call 0x4000aaec             ; __ftol -> N
40002bfa: fld  DWORD PTR [esp+0x10]   ; arg2 = mode
...
```

* `arg2 != 0`: armour cost is `2N`; if armour survives the function returns 0,
  otherwise it returns `trunc((2N-A)*0.5)`.
* `arg2 == 0`: armour cost is `N`; if armour survives the function returns 0,
  otherwise it returns `N-A`.
* zero armour returns `arg1` unchanged.

The module-side call sites are `FUN_5002B8E0` at `0x5002BDC0` and
`0x5002BE00`: they push the two original `T_Damage` arguments 12 and 11 (stack
`+0x150` then `+0x14C`) as callee arguments 3 and 2, plus a per-zone local
damage value as argument 1. Therefore weapon row `+0x120` is the **armour-cost
mode flag** and `+0x124` is the **damage-reduction fraction**. The raw accessors
`0x500658D0`/`0x500658E0` are called only from the fire-handler range
`0x50100000-0x501063FF` (15 + 13 calls); a bounded module-wide search found no
other reader of these two row fields.

## 13. Player-side ammo, spread and the fire gate — recovered

Full evidence: `analysis/rea/player_fire_constants.md`.

**Observation — ammo per shot.** The primary-fire ammo handler is weapon vtable
slot `+0x40` (call `0x4000A34A`). Four implementations use direct immediates:

| weapon | `+0x40` handler | ammo/shot | raw evidence |
|---|---|---|---|
| base / pistol1 / pistol2 / MPistol / assault / sniper / shotgun / rocket | `0x40009E50` | 1 | `40009EA7: dec eax` |
| autoshotgun | `0x400084B0` | 2 | `40008503: sub edi,0x2` |
| machinegun, MPG | `0x400079B0` | 10 | `40007A03: sub edi,0xa` |
| flamethrower | `0x40007DD0` | 6 | `40007E3A: sub edi,0x6` |
| knife / hands | inherited / gated off | 0 | knife decrements a swing counter at `weapon+0x120`, not ammo |

**Observation — the `defA+8`/`defA+0xC` floats are spread angles, not fire
delays.** `FUN_40009D20` copies them to weapon object `+0x1C`/`+0x24`, and the
game module's fire callbacks load them at `0x501066B3`/`0x501066BA` (primary)
and `0x50106903`/`0x5010690A` (alternate) and pass them to `FUN_50100680`,
which applies `flrand` angular deviation. The values 0.2 / 0.3 / 0.6 / 0.4 /
1.5 / 0.1 are therefore cone angles in degrees.

**Observation — the actual fire gate.** `player.dll FUN_4000A040` calls game
callback slot 13 (`0x40018C7C` → `gamex86.dll 0x500F6360`) and compares the
return with 0.0; slot 14 (`0x40018C80` → `0x500F6370`) zeroes it. Raw
`gamex86.dll`:

```
500f6360: mov 0x4(%esp),%eax; mov 0x74(%eax),%ecx; flds 0x48c(%ecx); ret
500f6370: mov 0x4(%esp),%eax; mov 0x74(%eax),%ecx; movl $0,0x48c(%ecx); ret
```

`client+0x48C` (and its alternate companion `client+0x490`, slots 15/16) is
filled in `FUN_500F53A0` from the incoming `pmove_t+0x10`/`+0x14` floats
(`0x500F5A70`/`0x500F5A8C`). It is a cooldown/timestamp supplied by the
engine, **not a static per-weapon constant stored in `player.dll`**. REA found
no `nextfire = time + interval` expression in the 326-function `player.dll`
corpus. The honest conclusion is: ammo-per-shot is exactly recoverable; a
single numeric per-weapon fire interval is not stored in this module.

## 14. The remaining object families

* **AI controller/body** — `entity+0x450` is the controller installed by
  `FUN_50001A30`; the body hangs at `controller+0x22C`/`+0x230`. The complete
  class-code → controller-vtable → body-vtable map is in
  `analysis/rea/ai_controller_body_map.md`. This is separate from the player
  weapon object at `client+0x34C`.
* **Pickup/item registry** — the 40-entry table at `0x5015C7BC` is indexed by
  `entity+0x460`, and each entry owns a `+0x148` tree keyed by entity pointers.
  `FUN_50065D90` looks up the entity's payload, `FUN_50067080` applies it and
  sets `entity+0x158 = 1`; `FUN_50065E20`/`FUN_50067AA0` build the ammo/item
  class states. It is **not** weapon-class state.
