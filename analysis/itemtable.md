# SoF item table — recovered from gamex86.dll

Source: item-manager constructor `0x50067AA0`–`0x50068812` (3443 B, image base
0x50000000). Fully **unrolled**, 39 repetitions — no loop.

## Structure (important — refutes the earlier assumption)

There is **no flat item table**. The constructor `operator_new`-allocates **39
separate item records** and stores their **pointers** into a 39-slot array:

| Manager offset | Contents |
|---|---|
| `+0x00` | vtable `0x50128820` |
| `+0x04` | pointer to a base/template record (0x15C, built by `0x50065E20`) |
| `+0x08`..`+0xA0` | 39 item-record pointers, stride 4 |

Record sizes are `0x164` (ammo/weapon, rows 1–28) and `0x15C` (equipment/health,
rows 29–39). These are **allocation sizes, not an array stride.**

All record field values live as **immediates in the constructor's own code**, so
they are recoverable by disassembly — not by reading a data array.

## The 39 items

`cat` = arg2 category (0 ammo, 1 weapon, 2 armor, 3 equipment, 5 health).
`typ` = arg3 type index — **a different ordering from item index**:
`1=knife, 2=.44, 3=9mm, 4=12ga, 5=5.56, 6=rockets, 7=battery, 8=gas, 9=slugs`,
and weapons run `2..12`.

| # | classname (arg1) | name (arg8) | cat | typ | mass | amount | max | icon | msg |
|---|---|---|---|---|---|---|---|---|---|
| 1 | `item_ammo_knife` | Knife | 0 | 1 | 30.0 | 1 | -1 | 0x30F | 0x326 |
| 2 | `item_ammo_pistol` | 9mm Ammo | 0 | 3 | 30.0 | 30 | -1 | 0x310 | 0x327 |
| 3 | `item_ammo_shotgun` | 12 gauge shells | 0 | 4 | 30.0 | 5 | -1 | 0x311 | 0x328 |
| 4 | `item_ammo_pistol2` | .44 Ammo | 0 | 2 | 30.0 | 5 | -1 | 0x312 | 0x329 |
| 5 | `item_ammo_auto` | 5.56 Ammo | 0 | 5 | 30.0 | 30 | -1 | 0x313 | 0x32A |
| 6 | `item_ammo_battery` | Battery | 0 | 7 | 30.0 | 30 | -1 | 0x314 | 0x32B |
| 7 | `item_ammo_gas` | Flamethrower Gas | 0 | 8 | 30.0 | 30 | -1 | 0x315 | 0x32C |
| 8 | `item_ammo_rocket` | NM-22 Rockets | 0 | 6 | 30.0 | 5 | -1 | 0x316 | 0x32D |
| 9 | `item_ammo_slug` | Slugs | 0 | 9 | 30.0 | 10 | -1 | 0x325 | 0x32E |
| 10 | `item_ammo_sp_pistol` | 9mm Ammo | 0 | 3 | 30.0 | 30 | -1 | 0x310 | 0x327 |
| 11 | `item_ammo_sp_shotgun` | 12 gauge shells | 0 | 4 | 30.0 | 5 | -1 | 0x311 | 0x328 |
| 12 | `item_ammo_sp_pistol2` | .44 Ammo | 0 | 2 | 30.0 | 5 | -1 | 0x312 | 0x329 |
| 13 | `item_ammo_sp_auto` | 5.56 Ammo | 0 | 5 | 30.0 | 30 | -1 | 0x313 | 0x32A |
| 14 | `item_ammo_sp_battery` | Battery | 0 | 7 | 30.0 | 30 | -1 | 0x314 | 0x32B |
| 15 | `item_ammo_sp_gas` | Flamethrower Gas | 0 | 8 | 30.0 | 30 | -1 | 0x315 | 0x32C |
| 16 | `item_ammo_sp_rocket` | NM-22 Rockets | 0 | 6 | 30.0 | 5 | -1 | 0x316 | 0x32D |
| 17 | `item_ammo_sp_slug` | Slugs | 0 | 9 | 30.0 | 10 | -1 | 0x325 | 0x32E |
| 18 | `item_weapon_pistol2` | .44 Pistol | 1 | 2 | 30.0 | 0 | -1 | 0x317 | 0x329 |
| 19 | `item_weapon_pistol1` | 9mm Pistol | 1 | 3 | 30.0 | 0 | -1 | 0x318 | 0x327 |
| 20 | `item_weapon_machinepistol` | 9mm Suppressed SMG | 1 | 4 | 30.0 | 0 | -1 | 0x319 | 0x327 |
| 21 | `item_weapon_assault_rifle` | 5.56 SMG | 1 | 5 | 30.0 | 0 | -1 | 0x31A | 0x32A |
| 22 | `item_weapon_sniper_rifle` | 5.56 Sniper Rifle | 1 | 6 | 30.0 | 0 | -1 | 0x31B | 0x32A |
| 23 | `item_weapon_autoshotgun` | Repeating Slug Thrower | 1 | 7 | **60.0** | 0 | -1 | 0x31C | 0x32E |
| 24 | `item_weapon_shotgun` | 12 Gauge Shotgun | 1 | 8 | 30.0 | 0 | -1 | 0x31D | 0x328 |
| 25 | `item_weapon_machinegun` | Heavy Machinegun | 1 | 9 | 30.0 | 0 | -1 | 0x31E | 0x32A |
| 26 | `item_weapon_rocketlauncher` | M-1943 Rocket Launcher | 1 | 10 | **75.0** | 0 | -1 | 799 | 0x32D |
| 27 | `item_weapon_microwavepulse` | Microwave Pulse | 1 | 11 | **90.0** | 0 | -1 | 800 | 0x32B |
| 28 | `item_weapon_flamethrower` | L-32 Flame Gun | 1 | 12 | **60.0** | 0 | -1 | 0x321 | 0x32C |
| 29 | `item_equip_armor` | Armor | 2 | 0 | 30.0 | 50 | -1 | 0x308 | 0x309 |
| 30 | `item_equip_flashpack` | Flashpack | 3 | 1 | 30.0 | 1 | 6 | 0x306 | 0x30A |
| 31 | `item_equip_c4` | *(C4)* | 3 | 2 | 30.0 | 1 | 4 | 0x322 | 0x30B |
| 32 | `item_equip_light_goggles` | Light Amplification Goggles | 3 | 3 | 30.0 | 100 | 100 | 0x323 | 0x32F |
| 33 | `item_equip_claymore` | *(Claymore)* | 3 | 4 | 30.0 | 1 | -1 | 0x324 | 0x330 |
| 34 | `item_equip_medkit` | MedKit | 3 | 5 | 30.0 | 1 | 2 | 0x333 | 0x334 |
| 35 | `item_equip_grenade` | Grenade | 3 | 6 | 30.0 | 1 | 6 | 0x337 | 0x338 |
| 36 | `item_ctf_flag` | *(CTF flag)* | 3 | 7 | 30.0 | 1 | -1 | 0x33A | 0x33B |
| 37 | `item_health_small` | Small Health | 5 | 0 | 30.0 | 25 | -1 | 0x30C | 0x30C |
| 38 | `item_health_large` | Large Health | 5 | 1 | 30.0 | 50 | -1 | 0x30C | 0x30C |
| 39 | `item_control_flag` | Control Flag | 3 | 8 | 30.0 | 1 | -1 | 0 | 0 |

Armor = 50 (confirms `SOF_ARMOR_PICKUP_AMOUNT`), MedKit max carry = 2 (confirms
`SOF_MEDKIT_MAX_CARRY`), Goggles 100/100, Small/Large health 25/50 (confirm
`SOF_HEALTH_SMALL_AMOUNT` / `SOF_HEALTH_LARGE_AMOUNT`).

Three pickup-name strings were undefined data in the source dossier and are not
yet recovered: `0x50144358` (C4), `0x50144308` (Claymore), `0x501442B4` (CTF flag).

## Row initializers (next targets)

| Address | Calls | Role |
|---|---|---|
| `0x50065E20` | 1 | base/template 0x15C record |
| `0x50066D60` | 17 | ammo rows |
| `0x50066B00` | 11 | **weapon rows** |
| `0x500660B0` | 9 | equipment/health rows |
| `0x50066630` | 1 | medkit |
| `0x500668A0` | 1 | goggles |

All take `this` (ECX) + 12 dword args. These are where the 12 arguments land in
memory — **`0x50066B00` is where the item→weapon-table link can be proven**
(arg3 = weapon type index 2..12, suspected to index `0x50159B20` at stride `0x14C`).

## Item record layout (0x164) — PROVEN

From `0x50066B00` (weapon) and `0x50066D60` (ammo). Both are 212 bytes,
`RET 0x30` = 12 dword stack args, callee-clean.

| Arg | Meaning | Record offset | Width |
|---|---|---|---|
| 1 | classname ptr | `+0x04` | 0x40, `strncpy` n=0x40 |
| 2 | category int | `+0x44` | 4 |
| 3 | **type index** | `+0x48` | 4 |
| 4 | mass float | `+0xAC` | 4 (bit-pattern copy) |
| 5 | amount / stack | `+0x4C` | 4 |
| 6 | max carry | `+0x50` | 4 |
| 7 | item index | `+0x54` | 4 |
| 8 | pickup name ptr | `+0x58` | 0x40, `strncpy` |
| 9 | icon (world) | `+0x98` | 4 |
| 10 | icon (HUD) | `+0x9C` | 4 |
| 11 | message/sound | `+0xA0` | 4 |
| 12 | flag | `+0x160` | 4 (last dword) |
| — | vtable ptr | `+0x00` | 4 — weapon `0x501287CC`, ammo `0x501287F0` |
| — | zero-filled | `+0xB0`..`+0xEF`, `+0x104`..`+0x143` | 16 dwords each |
| — | zero | `+0xA4`, `+0xF4`, `+0xF8`, `+0xFC`, `+0x100` | 4 each |
| — | float 1.0f | `+0xF0` | 4 (`0x3F800000`) |
| — | **never written** | `+0xA8`, `+0x144`..`+0x15F` | 32-byte hole |

Weapon and ammo initializers are **byte-identical except the vtable constant**
(`0x50066B14` vs `0x50066D74`). Full instruction-level diff = 1 differing line.

### Ammo ↔ weapon link

There is **no direct reference**. Both record kinds store their type index at
the same offset `+0x48`; the association is resolved at use time by matching
that shared value (weapons 2..12 vs ammo 1..9), or via the vtable at `+0x00`
(contents not yet read).

## Key conclusions

1. **Fire rate and ammo-per-shot are NOT in the item records.** Proven by
   complete opcode inventory (no `MULT`/`DIV`/`SUB`/`LESS`) and complete
   constant inventory (the only non-zero float is `1.0f`). Neither initializer
   touches a time value.
2. **Fire handlers are NOT in the item record.** `+0x128`/`+0x12C` fall inside
   the ctor's zero-filled `+0x104..+0x143` range and would be forced to 0.
   They belong to the separate **0x14C weapon-stats row** (`0x50159B20`).
   Note `0x164 > 0x14C`, so these are two different structures — the item
   objects and the weapon rows cannot be the same array.
3. **11 weapon objects, not 31.** `0x50066B00` has exactly 11 call sites
   (`0x50068108`…`0x50068446`, uniform stride 0x53) — 1:1 with weapon type
   indices 2..12. The 31-row weapon table therefore contains 11 playable
   weapons plus internal/state rows. Ammo side: 17 call sites against 9 ammo
   types, which does not reconcile and needs `FUN_50067AA0` re-read.
4. **Fire rate most likely lives in per-player weapon state**, not any of these
   tables — the dispatcher's `EDI` object (which holds `+0x450`, `+0x118`,
   `+0x11C`) is the prime remaining candidate.

## Still unresolved
* Fire rate / fire delay location (not in item records, not in weapon row as
  mapped so far).
* Ammo consumed per shot.
* Vtable contents at `0x501287CC` / `0x501287F0`.
* The 32 unwritten record bytes (`+0xA8`, `+0x144`..`+0x15F`) — `FUN_50065E20`
  may fill them.