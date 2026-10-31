# RESUME PROMPT — SoF browser multiplayer

Paste everything below into a new chat to continue.

---

## OBJECTIVE

Make **Soldier of Fortune** playable in a **browser**, and be able to modify
the game freely (new weapons, cars, mechanics). Servers must appear on the
**SoF/GameSpy master listing** so players can connect, download content and
play.

**Chosen route: A — a native browser client** (JS + WebGL) that speaks the
real SoF wire protocol, talks to a real SoF dedicated server, and uses the
original game assets. The SoF Buddy DLL is a *reference/asset*, not the
client.

## STATUS 2026-10-25 (read this first — it replaces the older "next step")

* **Netchan is solved.** Header `[seq | flag<<31][ack | toggle<<31]`; for
  server->client, bit31 of word1 marks a **reliable-message carrier, not a
  split** — process every packet directly (no reassembly buffer). The client
  keeps its **own** toggle (`myToggle`, flips only on reliable sends);
  **unreliable usercmds must clear the word1 flag bit** or the module ignores
  movement.
* **Checksum key = the message's own outgoing sequence.** The netchan head, the
  inner `u32` and the key must be the same number (the old bug wrote `seq+1` in
  the head). On mismatch the server prints `Failed command checksum for %s`
  (developer mode) and **drops the message silently**.
* **Usercmd layout, confirmed from the decoder** (`SoF.exe` 0x20005AA0, called
  3x per movement message by `SV_ReadClientMessage` case 2 `0x200636C0`):
  `[0x02][ck u8][u32 seq][bit-packed]`; per command msec 8 bits (no "changed"
  bit), buttons 8, flags2 5 bits `<<3`, flags3 1 bit, **angles 12 bits at +4/+6/+8**,
  **movement 10 bits (`value+0x1fe`) at +0x0A/+0x0C/+0x0E** (clamped ±200/±160/±200),
  two 32-bit extras at +0x10/+0x14. Bits are packed **LSB first inside each byte**
  (reader 0x200BE390). Ring = 64 slots x 24 bytes (`DAT_201e75b4`), delta chain
  from slots (S-2),(S-1),S against a zero baseline.
* **Cadence:** one message per sv_fps frame (msec 33 x 3 = 99 ms). Faster
  underflows the per-client msec budget (`SV_ExecuteClientMessage` 0x200635F0).
* **Movement + angles work live** (`web/moveprobe4.js`/`moveprobe5.js`,
  `logs/probe6.log`, `logs/probe7.log`): the stream survives 80 s, forwardmove
  200 moves ~13 units/frame, run bit 0x20 doubles it, and travel direction
  follows the yaw: yaw 0 → **−Y**, 90° → **+X**, 180° → **+Y**, 270° → **−X**;
  sidemove + at yaw 0 → **−X**. SoF's angle convention (`FUN_500fdd70`):
  `forward = (sin yaw, −cos yaw, ...)` (world direction = yaw − 90°), sidemove
  uses `−param_2`, **positive pitch looks down**. The old "movement
  breakthrough" claim was a false positive and is retracted in `PROTOCOL.md` 4e.6.
* The **server never sends our own viewAngles** (mask `0x1a8628a2`; velocity and
  viewAngles absent) — the browser camera angles are local, so `web/www/app.js`
  publishes `state.view` for `web/www/sofpredict.js`.
* Still open: svc **0x1d** packets (~208 per 70 s run), the velocity scale
  (wire velocity 1600 vs ~13 units/frame, `×0.125` in ClientThink), the
  fall-through-geometry case, Ghoul `.ghb` triangle topology.

## CONTEXT HYGIENE (added 2026-10-25 — the context window is the bottleneck)

1. **Never read a whole decompile file into the chat.** Grep it with a narrow
   pattern (`^FUN_200be390` / a single address), then read **at most 40 lines**
   around the hit. Full decompile output goes to a **file** under `analysis\`.
2. **Heavy RE work goes to subagents**: one narrow question each, they write the
   result to `analysis\*.md` and reply with ≤ 15 lines. Batch independent
   questions in one block. Do not re-run an REA pass a file already contains.
3. **Persist before the context gets tight**: append findings to
   `analysis\PROTOCOL.md` (numbered sections) or `analysis\JOURNAL.md`, then
   compress. Never rely on chat memory as the record.
4. Keep replies short: no restating the summary, no re-reading docs already in
   the checkpoint, one probe per idea, logs via `Out-File -Encoding utf8`.
5. `Select-Process`, `Where-ProcessName`, `Get-NetUDPEndpoint` are corrupted in
   this pwsh — use `cmd /c "tasklist | findstr /I SoF.exe"` (note that
   `RadeonSoftware.exe` false-matches `/I sof`). Nested quotes/`&&` break; put
   logic in script files, not `node -e` one-liners.
6. SoF.exe's dedicated server allocates its **own console** and writes to it
   directly — stdout redirection and `-logfile` produce nothing, so the console
   is not an oracle. Use wire observables (movement, mask changes) instead.
7. REA needs `GHIDRA_INSTALL_DIR` and `JAVA_HOME` **in the same call**; Node
   v24.16.0 works despite the stated ≥ 24.22.1 floor.

## HARD RULES (do not break these)

1. **NEVER launch the SoF GUI client** (`SoF.exe` *without* `+set dedicated 1`).
   It grabs the mouse and forces the display resolution, wrecking the user's
   desktop. The **dedicated server is fine**. If a GUI run ever happens, kill
   the SoF processes and restore `User\config.cfg` (remove `vid_width` /
   `vid_height`).
2. After any GUI-adjacent run: `Get-Process SoF | Stop-Process -Force`,
   and verify the display is back to 2560x1440.
3. The dedicated server allows only ~8 clients and **never releases stale
   clients** (our in-band `disconnect` is never dispatched), so **restart the
   server between test batches** or every run dies with `rejected_full`.
4. Never commit secrets. Work in the existing workspace.

## ENVIRONMENT

* Workspace: `C:\Users\User\q2work\sof2\`  (`web\` = Node tools, `tools\` = C tools)
* Game install: `C:\Users\User\Soldier of Fortune\` (SoF.exe, Base\gamex86.dll, Base\*.pak)
* Analysis notes: `C:\Users\User\Soldier of Fortune\analysis\BROWSER_PLAN.md` (1146 lines — the full log, read it)
* Engine disassembly: `%TEMP%\sof_eng_disasm.txt` (21 MB, 378k instrs).
  **Regenerate only if needed** with `dumpbin /DISASM /NOBYTES` run from
  **cmd** (PowerShell `>` writes UTF-16 and breaks indexing).
  **The line format is `ADDR  BB BB BB BB  mnemonic operands` — the raw bytes
  are part of the line.** Any regex over these lines MUST strip them
  (e.g. `^\s*([0-9A-Fa-f]{8}):\s*((?:[0-9A-Fa-f]{2}\s+)+)?(.*)$`). This bit
  me repeatedly.
* **MSVC 2022 Build Tools ARE installed** (an earlier note claiming "no
  compiler" is wrong):
  `C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat`
  → use `cmd /c "vcvarsall.bat x86 && cl /nologo /O2 foo.c /Fe:foo.exe"`
  (x86 is required to call into 32-bit SoF.exe). `vcvars64.bat` also exists.
  **No gcc/make** (so SoF Buddy itself cannot be built), but MSVC can build
  helper EXEs **and DLLs**.
* Node v24.16.0 (no npm deps — npm is blocked by execution policy). Python 3.13.
* Git is available.

## THE KEY TRICK: THE ENGINE CAN BE CALLED AS A LIBRARY

```c
HMODULE h = LoadLibraryA("C:\\Users\\User\\Soldier of Fortune\\SoF.exe");
/* SoF.exe is mapped at 0x20000000; its functions are callable with NO GUI */
u32 (*ck)(unsigned char*, unsigned int, unsigned int) = (void*)((char*)h + 0x1F1B0);
u32 (*eng)(unsigned char*, unsigned int)             = (void*)((char*)h + 0x4D150);
unsigned char *KEY = (unsigned char*)h + 0x120648;   /* the 3000-byte key table */
```
This gives a **perfect oracle** for the checksum/hash without ever running
the game. See `web/cksum2.c`, `web/md4ref.c`, `web/engdump.c`, `web/sha1chk.c`.

## PROTOCOL — WHAT IS SOLVED (all verified)

### 1. OOB channel (works live against the dedicated server)

* `getchallenge %d\n` → server replies `challenge %d\n`
* `connect %i %i %i %d %4.2f "%s"\n` → server replies `client_connect\n`
* Field order (engine string at `SoF.exe` VA `0x2011D774`):
  1. `33` (protocol)
  2. `3` — `int(pi)`; the FPU helper at `0x200F9DEC` truncates π → 3
  3. the challenge (from the `challenge %d` reply)
  4. `time(NULL)`
  5. `3.141592653` printed `%4.2f` → `3.14`
  6. the userinfo, e.g. `\name\one\spectator\0\cl_violence\63\fov\95\rate\3000\team_red_blue\0`
* The client is fully registered: the server answers with a 39-byte netchan
  packet echoing the userinfo with defaults filled in
  (`one\*The Order\*dekker-1`).
* SoF does **not** answer `info`/`getstatus`/`getinfo` on the game port —
  server queries go to the **GameSpy query port 28911**.

### 2. The command channel

Server-side command table at `0x2013A390`:

| name | handler | | name | handler |
|---|---|---|---|---|
| new | 0x20062780 | | download | 0x20063140 |
| configstrings | 0x200629E0 | | nextdl | 0x20063040 |
| baselines | 0x20062D70 | | ghoulstrings | 0x20062BA0 |
| begin | 0x20062FC0 | | info | 0x20063470 |
| nextserver | 0x20063530 | | sv_precache | 0x20062F20 |
| disconnect | 0x20063450 | | | |

Decoded helpers: `0x20018D30` = `Cmd_Argv(n)`, `0x200F9E9E` = `atoi`,
`0x2001C6E0` = `Com_Printf`, `0x2001C8E0` = `Com_DPrintf`
(**so `New() from %s` and `commandMsec underflow` are invisible in a
release server — the console is NOT a reliable oracle**).

**The token is echoed, not guessed.** The `new` handler ends with
`0x200629AF mov ecx,[20396EE8h]` → `push 2013A450h` (`'cmd configstrings %i 0\n'`)
→ `SV_SendClientCommand`. The `configstrings` handler compares
`atoi(argv[1]) == [0x20396EE8]`. So the server sends
`cmd configstrings <N> 0` and the client must answer `configstrings <N> 0`
(same for `baselines` and `ghoulstrings`), then send `begin <N>`.

### 3. The checksum — SOLVED and VERIFIED

```
checksum = ( MD4(text || keybytes)[A] ^ [B] ^ [C] ^ [D] ) & 0xFF

k          = sequence % 3000
keybytes[0]= KEY[k+0] ^ (sequence & 0xFF)
keybytes[1]= KEY[k+1]
keybytes[2]= KEY[k+2] ^ ((sequence >> 8) & 0xFF)
keybytes[3]= KEY[k+3]

KEY = 3000 static bytes at SoF.exe file offset 0x120648  (web/sofkey.bin)
```
* The engine's hash at `0x2004D150` is **standard MD4 (RFC 1320)** — the
  detail that makes it MD4 is the round constants `5A827999` / `6ED9EBA1`.
  The 32-bit value it returns is the **XOR of the four state words**.
* The engine's checksum wrapper is `0x2001F1B0(data, len, seq)`.
* `web/sofmd4.js` is a **verified JS port** (run it → "ALL VECTORS MATCH THE
  ENGINE"). Reference vectors: `"new"`/seq 0 → `0xc111e38c`; `"info"`/1 →
  `0xfb0a3588`; `"configstrings 42 0"`/7 → `0x16fafbd9`; `"begin 0"`/3 →
  `0x18054340`.
* The engine's key-derivation sequence is `cl->[0x5298]`, which is **never
  written in .text** → 0 for a fresh client.

### 4. The frame — the ONE remaining unknown

**Server side (certain):**
* The message buffer is `cl + 0x526C`; `cl+0x5264` holds a **pointer** to it.
* `0x2005F211` → `call 2004D640` builds the stream; `0x2005F23B` →
  `call 200636C0` (SV_ReadClientMessage) dispatches.
* `0x2001E220` (stream init) just sets the offset to 0.
* `0x2004D640` reads **two dwords** (offset 0→8), then the **command char is
  read at offset 8** (`0x2001E260` reads one byte; the jump table at
  `0x20063A64` maps 1=keepalive, 2=netchan path, 3=game-module command,
  4=raw command dispatch; anything else → `SV_ReadClientMessage: unknown
  command char`).
* `0x2004D668`: `cmp dword ptr [ebx+4],1` → **the message's 2nd dword must be 1**.

⇒ server-side message:
```
[ dword0 ][ dword1 == 1 ][ u8 command char ][ … ]
type 2:   [ dword0 ][ 1 ][ 0x02 ][ checksum ][ u32 seq ][ text ]
```

**Client side:** the raw datagram carries a **channel list**:
`0x20005D70` (netchan transmit, write helper `0x200BDCA0`) writes per channel
`[ u8 flag ][ 12 bytes: dword0, dword1 = seq>>4, dword2 ]`, for three
channels (`edi+4`, `edi+6`, `edi+8`); if a channel's sequence equals the
peer's, only the single flag byte is written. The client's send path is
`0x20006330`; its checksum call is `0x2000638C` with
`checksum(data+ebp+1, len-ebp-1, seq)` — byte-identical to the server's
`0x20063893`/`0x200638AE`. The server's netchan layer strips the channel
list and repacks the message.

**=> THE DECISIVE NEXT STEP:** read the **netchan message extraction on the
server**, i.e. the code that fills `cl+0x526C`. Anchors:
`0x2005EC13 lea ecx,[ebx+0x526Ch]` → `0x2005EC1C call 2004D390` (the copy) and
`0x2005EC54 mov [ebx+0x5264h],ecx`. That function yields the exact raw
datagram layout, what becomes `dword0`, and why `dword1` must be 1.

**=> Then** rebuild the frame in `web/sofclient.js` and run it against the
dedicated server; expect `cmd configstrings <N> 0` back.

## SWEEPS ALREADY TRIED (do not repeat)

All with the verified MD4 checksum, against the live dedicated server:
* prefix length 0/2/4/8/10 × command char 1/2/3/4 × NUL-terminated text or
  not × checksum sequence 0/actual (`web/framesweep.js`, `web/framesweep2.js`)
* netchan header variants: flags 0/1/2/4/0x8001, reliable seq/flags, seq
  0/1/2 (`web/netframe.js`)
* magic `0x1234ABCD` + dword 1 in various slots (`web/magicframe.js`)
* raw channel list: present/absent, flag 0/1, three dwords 0/1, char 2/4,
  checksum sequence 0/actual — **128 variants** (`web/chanframe.js`)

All silently dropped. Reason: the server's rejection messages
(`unknown command char`, `Failed command checksum for %s`) are
`Com_DPrintf` → invisible in a release build, and the netchan layer
rejects malformed frames before the command is ever dispatched.

## TOOLING INVENTORY (all in `C:\Users\User\q2work\sof2\web\`)

| file | what it is |
|---|---|
| `sofmd4.js` | **verified** MD4 + checksum (the key piece) |
| `sofkey.bin` | the 3000-byte key table (SoF.exe offset 0x120648) |
| `sofclient.js` | client: connect (OOB) + checksummed type-2 commands |
| `sofcmd.js`, `sofcmd2.js` | checksum/frame experiments |
| `chanframe.js`, `netframe.js`, `framesweep.js`, `framesweep2.js`, `magicframe.js` | frame sweeps |
| `trynew.js`, `oneshot.js`, `dispatchtest.js`, `obbinfo.js` | earlier probes |
| `cksum2.c`, `md4ref.c`, `engdump.c`, `sha1chk.c`, `cksum_probe.c`, `cksum_scan.c`, `hashsearch.c` | **C oracles** that call SoF.exe directly |
| `relay.js` | UDP↔WebSocket relay (one UDP socket per session) |
| `serlist.js` | master polling → JSON API on :8082 |
| `master.js` | our own fallback master (:6667/:8081) |
| `sniff.js`, `probe.js`, `udplog.js`, `beginprobe.js` | capture/diagnostic tools |
| `symhash.py`, `extract_sof_hash.py` | disassembly parsers (the byte-column
  parsing bug is fixed in `symhash.py`) |

`tools\` (C): `readconsole.exe` (read the server console), `dump_mi.c`,
`dump_offsets.c`, `capconsole.ps1`, `watchdbg.c`, `crashprobe32.c`,
`q2input.c`.

## TASK LIST (8 tasks)

1. **Netchan frame format** — *in progress*: checksum DONE + verified;
   frame shape confirmed from both sides; **the 8/13 header bytes remain**.
2. **Gamestate**: `new` → `cmd configstrings <N> 0` → echo → `baselines` →
   `ghoulstrings` → `begin` → entity snapshot.
3. **Netchan in JS**: sequence, reliable window, retransmit, fragmentation.
   (The client keeps a 64-entry reliable ring at `0x201E75B4`, indexed by
   `(seq-2) & 0x3F`, 24 bytes per entry — Q3-style.)
4. **Snapshot decode**: entity_state, configstring block, player_state, deltas.
5. **Usecmds** so the server treats the browser client as a player.
6. **Asset pipeline**: `.bsp` v46 (52 SoF + 70 GC maps), `.m32` models/textures,
   `.ghb`/`.GHL` Ghoul scripts, `.adp` audio. SoF Buddy's
   `src/core/ref_gl_defaults.cpp` documents the stock renderer state.
7. **WebGL renderer**: scene, camera from the snapshot, models, Ghoul
   animation, HUD, audio.
8. **Website**: server list → pick → WebSocket relay → run the client;
   make the server listable on the SoF master.

## MASTER / SERVER LIST (already working)

* GameSpy "gsm" over **TCP 28900**: `IDQD` → `\secure\<challenge>\` → reply
  `base64(RC4(challenge, key="iVn3a3"))` → send
  `\gamename\sofretail\gamever\1.07f\location\0\validate\<v>\final\\queryid\1.1\`
  then `\list\cmp\gamename\sofretail\final\` → the list is terminated by
  `\final\`; each entry is **6 bytes (4-byte IPv4 + 2-byte BE port)**.
* Live masters: `sof1master.sofvault.org` (28), `sof1master.megalag.org` (54),
  `master.333networks.com` (38). The 6-byte entries are the masters
  themselves; the real server list arrives as a ~27 KB packet the master
  pushes spontaneously.
* Dedicated server: UDP **28910** (game) + **28911** (GameSpy query);
  `+set net_port` is ignored by this build; `sv_maplistfile "ravdm"`.
  Launch: `SoF.exe +set dedicated 1 +set sv_maxclients 16 +map dm/nycdm1`.
* `SoF.exe` is vanilla-patched: the import slot at file offset `0x11AD72`
  was changed from `spcl.dll` to `WSOCK32.dll` (SoFPlus otherwise breaks
  dedicated servers with `Error: Unknown function: 'sofplus_sv_init'`).
  `SoF.exe.bak` is kept. That same slot is our code-injection point.

## SOF BUDDY (reference material)

`C:\Users\User\q2work\sof_buddy` (also on GitHub: d3nd3/sof_buddy).
It is a **DLL that hooks the original SoF.exe** (Detours + MinGW, MIT) — a
quality-of-life mod, **not** a portable port, so it cannot be the browser
game by itself. It is valuable because `rsrc/funcmaps/SoF.exe.json` contains
**2611 engine function RVAs** (a complete function index for the RE), plus
maps for `gamex86.dll`, `ref_gl.dll`, `spcl.dll`, `player.dll`, and
`src/core/ref_gl_defaults.cpp` documents the stock renderer state.

## WIDER CONTEXT (from earlier sessions)

* SoF RE: `entity_t` field table (97 fields), weapon table (31 rows,
  stride 0x14C, base `0x50159B18`, `+0x118/+0x11C` = per-weapon fire
  delays), item table (39 records, stride 0x164; `item_weapon_sniper_rifle`
  at index 23), the fire chain, ammo on the weapon object, the fire-rate gate
  (`weapon+0x37C` next-fire time, `edict+0x370` next-action time) and the
  weapon heat model (0.99 threshold, 150.0 scale).
* The Quake II port in `C:\Users\User\q2work\sof2` (`game\g_sof_weapon.c`,
  `g_sof_combat.c`, `p_weapon.c`, `g_combat.c`) is **off-target for browser
  play** (Q2 servers can never list on the SoF master) — keep it only as a
  mechanics reference.
* `analysis\REPORT.md` holds the consolidated SoF RE; `analysis\` also has
  `sof_entity_fields.txt`, `sof_field_accessors.txt`, `sof_field_tables.txt`.

## HOW TO PROCEED (concrete)

1. **Read the netchan extraction** that fills `cl+0x526C` (anchors
   `0x2005EC13`/`0x2004D390`/`0x2005EC54`) and write down the raw datagram
   layout it expects.
2. Rebuild the frame in `web/sofclient.js` accordingly; run
   `node web/sofclient.js 127.0.0.1 28910` against a freshly restarted
   dedicated server; look for `cmd configstrings <N> 0`.
3. Answer it (`configstrings <N> 0`), then `baselines`, `ghoulstrings`,
   `begin <N>` → the entity snapshot.
4. Then proceed down the task list: netchan in JS → snapshot decode →
   usercmds → assets → WebGL → website.

Useful: `Get-Process SoF | Stop-Process -Force` then
`Start-Process SoF.exe -ArgumentList "+set","dedicated","1","+set","sv_maxclients","16","+map","dm/nycdm1"`
(working dir `C:\Users\User\Soldier of Fortune`), wait ~30 s for the map to
load before testing.
