# pmove engine: gamex86 ClientThink -> SoF.exe

## Call site (gamex86.dll)
- ClientThink = FUN_500f53a0 (0x500F53A0), decompile at gamex86_all.txt:138172.
- pmove invoked as `(*DAT_5015cb34)(&local_13c)` where &local_13c is the pmove_t struct on ClientThink's stack (256 bytes zeroed from &local_138 downward, gamex86_all.txt:138159 region).
- pmove_t fields proven from the call-site fill/copy-back (offsets from &local_13c, the pm pointer):
  - +0x00 origin (vec3_t floats): copied back 7 uints pm[0..6] -> ps[0..6]; ps is `param_1[0x1d]`.
  - +0x0C velocity (vec3_t floats): fill from ps; output: pm neworigin uStack_80/7c/78 -> ps[0x13f..0x141] (origin) and ps[7..9] (velocity) at gamex86_all.txt ClientThink body.
  - +0x18 viewangles: stored as SHORTS (angle*8) at asStack_134[11]; converted back via *0.125 -> player angles (param_1 +0x248/24C/250); usercmd angles copied in as shorts.
  - +0x1C..+0x34 usercmd (24 bytes, from param_2 net command, gamex86_all.txt:138189 region: `local_11c`..`local_104` = &local_13c+0x20..+0x34).
  - +0x34 pm_flags/viewoffset-like int set to 1 when viewangles changed.
  - dt: float fStack_40 = ps[0x17f]*4 - server time (DAT_5015ccdc) when ps[0x17f] > server time.
  - Second copy-back: 7 uints pm[0..6] -> ps + 0xCB uints (= +0x32C bytes): teleport/landing fields.
  - +0x11C, +0x128, +0x15C: trace start/end fields ClientThink does NOT touch directly in this function; must be proven inside the engine-side pmove.
  - State list: pm oldstate/oldorigin; groundentity proven? see below.

## Import resolution (SoF.exe side)
- DAT_5015cb34 is one slot of gamex86.dll's engine-import table, filled in GetEngineFunctions (fill loop not visible via Ghidra xrefs: xrefs of 0x5015cb34 return only the call site 0x500f5791; no direct `DAT_5015cb34 = ...` store anywhere in gamex86_all.txt).
- DAT_5015cb20 = engine random(min,max); DAT_5015cb28 = engine ftol; DAT_5015cac0 = engine trace (traceline); DAT_5015c4d8 = engine vtable (q3 import table base).
- SoF.exe candidate pmove function = FUN_200e8c50 family block 0x200e6xxx-0x200eb400 (30+ contiguous small functions = PM_ family); exact entry pending.
# status: in progress (step 1 partial, step 2 pending, step 3 pending)
