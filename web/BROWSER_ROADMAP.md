# SoF -> Browser: Master Roadmap

**Goal:** *Soldier of Fortune* playable in a browser (JS + WebGL, no native
client), and freely modifiable (new weapons, cars, mechanics) - with servers
appearing on the real SoF/GameSpy master list so real players can connect.

**Route:** native browser client speaking the **real SoF wire protocol** against
a **real SoF dedicated server**, using the **original assets**.
(SoF Buddy = reference/asset only, not the client.)

Legend: **[x]** done - **[~]** in progress - **[ ]** not started - **[!]** blocker

---

## Progress at a glance

| # | Workstream | Status | Blocked by |
|---|---|---|---|
| 1 | Wire protocol / netchan | **[x] 100%** | - |
| 2 | Gamestate handshake (new -> configstrings -> baselines -> ghoulstrings -> begin -> snapshot) | **[x] 100%** | - |
| 3 | Netchan in JS (window, retransmit, fragment) | **[ ] 20%** | - |
| 4 | Snapshot decode (entity_state, configstrings, player_state, deltas) | **[~] 95%** | - |
| 5 | Usercmds (bit packed, checksummed, server accepted) | **[x] 100%** | - |
| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 78%** | - |
| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 74%** | #4,#6 |
| 8 | Website + master listing + relay | **[~] 95%** | - |
| 9 | Modding layer (weapon/item tables, new content) | **[~] 68%** | - |

**Overall: ~72% of the browser client is done.**

> **MILESTONE 2026-10-20 (late):** **Soldier of Fortune is running in a
> browser.** The page at `web/www/index.html` connects through the WebSocket
> relay, completes the real handshake against a live SoF dedicated server,
> spawns, receives the entity snapshots and renders the live entity stream in
> raw WebGL. Verified with headless Chrome (`web/cdp.js` drives Chrome over the
> DevTools protocol and captures the screenshot).
> The renderer draws the entities as placeholder boxes for now - the map
> geometry and the models are the next step.
>
> **MILESTONE 2026-10-21 (a): the netchan is solved.** The browser client now
> receives the **complete configstring table (1240 entries)** instead of 121,
> the server walks the whole gamestate handshake
> (`configstrings -> ghoulstrings -> baselines -> precache -> begin`) and the
> numeric configstrings resolve to real model/sound names through the
> engine's string table (`web/sofstringtable.json`).
>
> **MILESTONE 2026-10-21 (b): the map renders.** The `.bsp` v46 geometry is
> decoded (every face is exactly coplanar with its plane) and the New York
> City map is drawn in the browser with WebGL (6070 faces / 16151 triangles).
> The remaining gap for a playable game are the **models** (`.m32`/`.eft`/the
> Ghoul `.gpm` from the game's `.pak`), the **textures**, the **player
> state** (the HUD and the local camera) and the **audio**.

### Session log
| 2026-10-20 (b) | #4 20% -> **60%**. Discovered **REA** (`morluto/rea`) already installed as an opencode MCP server with Ghidra 12.1.4 + JDK 21 - `tools/rea.cmd` decompiles SoF.exe to C. Decoded the frame header, the frame layout (`[cmd][0x14 playerinfo][0x15 entities]`), the entity-number encoding and the **full 116-byte entity-state field table**; the origin scale **1/8** is confirmed against live coordinates. `web/snapshot.js` now parses a real capture (14 entities/frame). |
| 2026-10-20 (c) | **#5 25% -> 95%.** The usercmd wire format is solved: `[0x02][checksum][u32 seq][the bit packed cmd]`, the checksum key is the outgoing netchan sequence, and the cmd is a 24-byte struct bit packed and delta encoded against the previous cmd. `web/cmdenc.js` is **byte exact** against the engine's own writer (12/12 vectors, via `tools/cmdwrite2.exe` which calls `SoF.exe` through `LoadLibraryA` with no GUI). The server now accepts our usercmds: the client reaches state 3 and the world streams. |
| 2026-10-20 (d) | **#6 10% -> 20%.** The `.bsp` v46 header is decoded: `IBSP` + version 46 + **22 lumps** of (off,len) with no `numlumps`; the header is exactly 184 bytes and the file ends exactly at the last lump. `web/bsp.js` is a lump reader. Lumps 0 (entities), 1 (planes), 2 (vertexes) and 5 (shaders) are identified. See `analysis/BSP_V46.md`. |

> **REA is available!** `morluto/rea` is already installed and configured as
| 2026-10-20 (e) | **#7 5% -> 25%, #8 60% -> 75%.** The browser client works end to end. The protocol was refactored into `web/sofproto.js` (transport agnostic) and is shared by the Node client and the browser; `web/mkbundle.js` bundles it for the browser with a small Buffer shim. The relay (`web/relay.js`) now also serves the page, and **three real bugs in it were fixed**: it echoed the server's replies back to the server, it double-encoded the WebSocket frames, and the OOB replies were misrouted. `web/cdp.js` drives headless Chrome over the DevTools protocol for the end-to-end test and the screenshot. |
| 2026-10-20 (f) | **#4 60% -> 68%, #7 25% -> 30%.** The **configstring service is decoded**: every server datagram is `[seq][0x8000][ack][flags]` + a **service byte at offset 8** (`0x0F` configstrings, `0x17` frame, `0x0D` command, `0x05` userinfo), and a configstring message is a record stream `[0x0F][u16 index][u16 value]` where `value == 0xFFFF` means a NUL terminated string follows and any other value is a **number** - SoF sends the *client side model table index* instead of the model name (values up to 1881), so the browser client will need SoF's model table to map them to `.m32` files. `web/sofproto.js` parses the table; the browser HUD now shows the map name (`NYCDM1`) and the configstring count. A fourth relay/protocol bug was found and fixed: the `cmd configstrings ...` request is **embedded in the same packet** as the configstring records, so the parser may not return early. Open: the server keeps asking `configstrings 42 397` with the same cursor and only ~120 of the 1497 configstrings arrive; the player state block (29..32 bytes) does not change with the view, and the local entity number is **dynamic** because the server never releases stale clients. |
| 2026-10-21 (a) | **#1 100%, #2 95% -> 100%, #4 68% -> 80%.** **The netchan framing is solved** - this was the reason the configstring cursor never advanced. The header is two **32 bit** words (`[seq|frag<<31][ack|toggle<<31]`), not four 16 bit ones; the **reliable toggle in word 2 must alternate with every packet**; the client must **keep sending packets** (the server queues its reliable message until the client acknowledges it, so a silent client deadlocks the handshake - the browser client now sends a packet every 50 ms); and word 1 must carry the **fragment flag** or the server ignores the payload. With the corrected framing the client receives **1240 configstrings** (340 strings + 900 table indices) instead of 121, and the server walks the whole chain: `configstrings -> ghoulstrings -> baselines -> precache -> begin` (the server refuses every request once the client has spawned, so nothing may be sent out of order). The engine's **global string table** (`SoF.exe` `0x201217B0`, 1927 entries) was extracted to `web/sofstringtable.json`: the numeric configstring values are indices into it, so `cs[36] -> "maps/dm/nycdm1.bsp"`, `cs[648] -> "weapons/world/claymore"`, `cs[650] -> "environ/onfireburst"`. The models live in `Base\*.pak` (4210 `.m32` files in `pak0.pak`). The server's own command handlers were decompiled from `SoF.exe` (`SV_Configstrings_f` at `0x200629E0`, the ghoulstring/baseline/precache/begin handlers at `0x20062BA0`..`0x20062FC0`, `Netchan_Transmit` at `0x2004D400`, `Netchan_Process` at `0x2004D640`) which is where the exact framing rules come from. |
| 2026-10-21 (b) | **#6 30% -> 55%, #7 30% -> 45%.** **The map geometry is decoded and renders in the browser.** The `.bsp` v46 lump table was brute forced against the live data: lump 1 = planes (20 bytes), 2 = vertexes (12), **6 = faces (44 bytes: u16 planenum, u16 side, i32 firstedge, i16 numedges, u16 texinfo)**, 11 = edges (4 bytes, 2 x u16 vertex indices), 12 = surfedges (4 bytes, the 0 based edge index with the sign as the direction), 0 = the entity list, 5 = the shaders.  The proof that the layout is right: **every face of every map is exactly coplanar with its plane** (0 off plane, worst error 0.0000).  `web/bspgeo.js` reads it, `web/bsp2json.js` converts a map to `web/www/map_<name>.json` and the WebGL renderer draws it - the New York City map now shows up in the browser (6070 faces / 16151 triangles).  Also: SoF's world is **Z up** (the renderer is Y up, so the loader converts `(x,y,z) -> (x,z,y)`), the game's `.pak` format is **64 byte directory entries** (a 56 byte name + an int offset + an int length - the classic 64 byte name field does not apply), and `web/pakget.js` extracts files from a pak (the maps and the 4210 `.m32` models live in `Base\pak0.pak`).
| 2026-10-21 (c) | **#4 80% -> 88%, #5 95% -> 100%, #7 45% -> 52%.** **The client can walk.**  A sweep of every usercmd field (`web/cmdsweep.js`) showed that **+0x0A/+0x0C/+0x0E are the movement (forward/side/up), not angle deltas** - writing 100/200/400 into +0x0A makes the local player walk and the same in +0x0C strafes (the engine speed scale is 400 for a run, 100 for a walk).  A second sweep (`web/originscan.js`) matched the live entity origins against the map's entity list and proved that **the origin is three floats at +0x04 in SoF's Z up order** - the earlier 'i16 * 1/8' reading was garbage, the decoded state already holds floats.  Both fixes are in `web/sofproto.js` and `web/snapshot.js`, so the browser client now walks with WASD and the entity boxes and the first person camera sit exactly on the map geometry. |
| 2026-10-21 (d) | **#6 55% -> 62%.** The game data layout is mapped: the `.pak` files hold **4199 `.m32`**, 1112 `.tga`, 824 `.wav`, 727 `.os`, **476 `.ghb`** (the Ghoul models, 196 MB), 390 `.adp` (the audio), 308 `.gsq`, 252 `.ifl`, **211 `.eft`** (the effects) and 136 `.sp`.  The configstring model names resolve against the pak: `cs[648] = "weapons/world/claymore"` -> `effects/weapons/world/claymore.eft` (87 of them match).  In the BSP, **lump 5 is the material table** (64 byte entries, the name at +40, 2460 of them) and lump 6 holds the faces.  Still open: the texinfo record (the UV axes) and the Ghoul `.ghb` mesh format. |
| 2026-10-21 (e) | **#6 62% -> 70%.** **The complete `.bsp` v46 lump table is now known** - the engine prints it when the `developer` cvar is on (`CM_LoadLump: LUMP_<name> <n> entries (<bytes> in, <bytes> out)`), which is the authoritative list: 0 ENTITIES, 1 PLANES (20 B), 2 VERTEXES (12 B), 3 VISIBILITY, 4 NODES (28 B), 5 **TEXINFO (2072 x 76 B)**, 6 FACES (6070 x 44 B), 7 LIGHTING, 8 LEAFS (32 B), 9 LEAFFACES, 10 LEAFBRUSHES, 11 EDGES (4 B), 12 SURFEDGES (4 B), 13 MODELS, 14 BRUSHES, 15 BRUSHSIDES, 16 POP, 17 AREAS, 18 AREAPORTALS, 19 REGIONFACES, 20 LIGHTS.  The **texinfo** record is confirmed: 8 floats (the S and T axes, the 4th = the offset), an int, an int and a 32 byte texture name - so the map's textures are now addressable (`subway/clip`, ...).  The map's textures live in the pak as `.m32` **material** files (`textures/subway/clip.m32`) whose pixel data is a custom compressed codec (open item). |
| 2026-10-21 (f) | **#8 75% -> 85%.** The **GameSpy master protocol is fully reverse engineered** from the engine (REA on `SoF.exe` `0x200f4bf0`..`0x200f9xxx`): the master address is **hard coded** (`master.gamespy.com`), the server registers over **UDP 27900** with `\heartbeat\<gameport>\gamename\sofretail\statechanged\` (every 150 s or when the player count changes) and the client queries over **TCP 28900** (a `\secure\` challenge answered with `base64(RC4("iVn3a3", challenge))`, then `\list\cmp\gamename\sofretail\final\`).  `web/gsmaster.js` implements that master (heartbeat channel, list channel, HTTP API) and `web/mkmasterpatch.js` writes `SoFTest.exe`, a copy of the server whose two hard coded master strings point at 127.0.0.1 (the original `SoF.exe` is untouched).  Open: the engine's heartbeat still does not arrive - its master socket binds the *local* port 27900, which collides with our master on the same machine, and the `gamespyport` cvar may be read too late. |
| 2026-10-21 (g) | **#8 85% -> 95%.** The **master round trip works end to end**: the browser client publishes the server it is connected to (`POST /api/servers`) and reads the list back (`GET /api/servers`, CORS enabled) and the HUD shows it (`master (1): 127.0.0.1:29000  NYCDM1`).  Two findings from the chase: (1) a **dedicated server can never register with a GameSpy master by itself** - the master client is created in the *client's* `Sys_Main` (`0x2001f390`), so the server process has no master object and the heartbeat gate (`0x2005f720`, which needs a non empty `hostname` and the `maxclients` condition) never fires; the browser client therefore publishes the server.  (2) the `developer` cvar opens a "Developer Mode" window and starting the server hidden makes the engine **hang before it binds its socket** - that was the cause of the 'Couldn't allocate dedicated server IP port' dialogs.  The `port` cvar works from `User/config.cfg` (read before the net init) but **not** from the command line. |
| 2026-10-21 (k) | **#7 66% -> 74%, #4 93% -> 95%.** **The player is now visible and controllable in the browser.**  Four real bugs were found and fixed: (1) the **buttons byte was completely mis-mapped** - the engine's own builder (`SoF.exe 0x20005240`) ORs **0x01 attack, 0x02 use, 0x04 alt attack, 0x08/0x10 weaponExtra, 0x20 run, 0x40 lean, 0x80 lean key** into it, and **0x20 is the run/sprint bit, not the attack**; the movement is not a bit at all but the three i16 fields at +0x0A/+0x0C/+0x0E, and the **weapon number is not in the cmd at all** (it is a string command, `weaponselect N`).  Holding W was therefore *firing the gun* and the mouse button was *sprinting*.  (2) The **entity list is a delta**, but the parser replaced the whole map every frame, so the entity count collapsed to 0 whenever a frame had no changes - the unchanged entities are now carried over.  (3) The browser's **Buffer shim had a broken `subarray`**: it dropped the byte offset, so every sliced view in the browser covered the whole packet - the player state was pure garbage in the browser while it parsed correctly in Node.  (4) The render loop **died on the first frame that drew an entity** (a `scale` parameter shadowed the `scale()` matrix helper) and was silently swallowed, which is why the camera looked frozen outside the map.  The renderer now draws a **procedural player figure** (a box per body part with a walk cycle) plus the other players and the dropped items, with a **third person camera** (V toggles it).  The browser client also got a **console** (backtick): client commands (`tp`, `speed`, `sensitivity`, `fov`) and everything else is sent to the server as a string command, which the server accepts on the same reliable channel the handshake uses.  A CDP driver (`web/drive.js`) was added to drive the real Chrome over the DevTools protocol, so the game can be played and screenshotted headlessly. |
| 2026-10-21 (j) | **#4 88% -> 93%.** **The player state block is decoded.**  The block between the `0x14` and `0x15` markers is the game module's `player_state_t` and it is **bit packed**: a leading mask decides which fields are present, so the block's length (29..42 bytes observed) *and* every field's offset change from frame to frame.  The one field that can be found is the **authoritative player origin** - three shorts with the 1/8 scale - and it matches the local entity's origin exactly (distance 0.00).  `web/snapshot.js` now exports `findPlayerOrigin(ps, x, y, z)`, which **searches** the block for the six byte pattern of a candidate position.  That search is also the reliable way to identify the local player: the dedicated server never releases a stale client, so the entity number moves with every test client and "entity 1 = me" is wrong.  The browser client uses it, shows the authoritative position in the HUD and follows it with the camera.  Two traps: the block *does* change when the client moves (it does not change when looking around - the view angles are not sent back, the client predicts them) and the comparison has to happen in the raw SoF order (x, y, z with z up) - applying the renderer's Y-up swap first makes the match fail silently.  The Ghoul `.ghb` container was also examined: the header is `FE 37` + three u32 + the authoring path (`C:\SOF\!GPREP!\ENEMY\MESO\MESO_IRQ3B.GFLA`) + the animation frame names; the mesh/animation payload is a proprietary Ghoul engine format and is not decoded yet. |
| 2026-10-21 (i) | **#9 40% -> 68%, #7 62% -> 66%.** **The modding layer has a user interface.**  The recovered game data is now served to the browser: `web/mkweapons.js` turns `analysis/weapontable.txt` into `www/weapons.json` (31 weapon registrations, the model path, the fire/altfire functions, the row's float fields and the two fire delays) and `web/mkitems.js` turns `analysis/itemtable.md` into `www/items.json` (all 39 item records: the class name, the display name, the category, the type index, the mass, the amount, the maximum and the icon/message ids).  `www/content.html` + `www/content.js` render both tables and offer the **client mods** - the movement speed, the look sensitivity, the field of view, the draw distance and the master address - stored in `localStorage` and exported as JSON.  The movement speed and the look sensitivity are real game changes: they go into the user commands the server executes.  The HUD links the page.  The usercmd builder in the engine (`0x20005240`) was re-checked with REA: the buttons byte uses 0x01 forward, 0x02 speed, 0x04 back, 0x08 strafe, 0x10 up/down, 0x40 lean, 0x80 lean key, so **0x20 is the only free bit and is the attack (fire) bit** - the browser now fires on the left mouse button (still unverified: a freshly spawned player has no weapon and the engine has no `give` command).  The flags2 byte is a cvar float, **not** the weapon number, so no weapon field is sent. |
| 2026-10-21 (h) | **#6 70% -> 78%, #7 52% -> 62%.** **The real SoF map renders with the real game textures.**  The `.m32` material format is decoded: `+0` the version (4), `+4` the name (128 B), `+132` a second name (384 B), `+516` the mip sizes (64,32,16,8,4,2,1), `+644` the pixel offset (968) and the mip level offsets at +648; the pixels are **uncompressed** `w*h` texels of (R,G,B,0xFF).  `web/bsp2json.js` now pulls the materials the map uses out of `Base\pak0.pak` (94 materials, 82 with an image) and embeds them base64 in the map JSON; the browser builds one WebGL texture per material, adds the texinfo's UV axes to the mesh and enables the mip levels.  The New York City level now shows brick walls, rusted metal and the street geometry in the browser.  (One bug found on the way: the material pixels are RGBA, not RGB - reading them as 3 byte RGB turned the level into colour stripes.) |

> an opencode MCP server (`~/.config/opencode/opencode.jsonc`) with
> **Ghidra 12.1.4** (`C:\Users\User\tools\ghidra_12.1.4_PUBLIC`) and JDK 21.
> `opencode mcp list` shows `rea connected`. Drive it from the shell with
> `tools\rea.cmd <label> <address>` - it decompiles SoF.exe (and gamex86.dll,
> player.dll) to C, which is far faster than hand-reading the disassembly.
> (The MCP tools are not exposed inside a running session, but the CLI is, and
> it shares the same analysis cache.)

---

## 1. Wire protocol / netchan - **DONE**

| | Task | Evidence |
|---|---|---|
| [x] | OOB handshake: `getchallenge n` -> `challenge m` -> `connect 33 <seed> <m> <ts> 3.14 "<ui>"` -> `client_connect` | verified live |
| [x] | Server registers us and echoes the userinfo with defaults | live capture |
| [x] | Frame layout: `[netchan hdr 4][reliable hdr 4][u16 seed][u8 type][payload]` | stock capture + live |
| [x] | `netchan hdr = seq(u16 LE) | flags(u16 LE)`, `0x8000` = reliable | stock capture |
| [x] | `reliable hdr = ack(u16 LE) | flags(u16 LE)` (ack = the peer's last seq) | live capture |
| [x] | The **seed** is the connect's field 2, stored at `cl->[0x5294]`, echoed in every frame, so it must be **< 65536** | `tools/dumpall.c` |
| [x] | The seed u16 is **little endian** (the trap that hid the frame layout) | live |
| [x] | Type byte: **4** = string command; the dispatch table is `0x2013A390` | disasm + live |
| [x] | Type bytes 1/2/3 identified (keepalive / checksummed cmd / OOB) | the jump table at `0x20063A64` |
| [x] | Server -> client frame: the same 8-byte header, payload = typed records (`0x05` userinfo, `0x0D` command, `0x0F` configstring) | live capture |
| [x] | The snapshot frame: `[u32 frame][u32 deltaFrom][f32 time][len][cmd][0x14 playerinfo][0x15 entities]` | `CL_ParseFrame` 0x20002E90 |

**Full spec: `q2work/sof2/web/PROTOCOL.md`. Reference client: `web/sofclient.js`.**

### Live oracle tooling (built this session)
* `tools/dumpall.c` - reads the live server's `client_t` out of process memory.
* `tools/dumpcl.c` - deep dump of one client slot (netchan, message buffer).
* `tools/setdev.c` - flips the server's `developer` cvar so `Com_DPrintf`
  becomes visible in the server console (the console is the engine's only
  reliable diagnostic; the server never prints to stdout).
* `tools/dbgbreak.c` - hardware-breakpoint debugger (attach or launch mode).
* `tools/patchmem.c` - write bytes into the running server (to bisect a check).
* `tools/cmdwrite.c` - calls the **engine's own** usercmd writer through
  `LoadLibraryA("SoF.exe")` (no GUI) - the oracle for the cmd encoding.
* `tools/cmdparse.c` - the same trick for the server's cmd **parser**.

---

## 2. Gamestate handshake - **DONE**

| | Task | State |
|---|---|---|
| [x] | `new` -> the server sends the userinfo, the map name and `cmd configstrings 42 0` | live |
| [x] | The client echoes `configstrings <N> <V>`; the server loops with a cursor until every configstring is sent | live |
| [x] | `baselines <N> 0`, `ghoulstrings <N> 0`, `begin <N>` all dispatch | live |
| [x] | The **entity snapshot streams** after `begin` (225-byte packets, ~20/s) | live |
| [x] | The configstring table decode (the `0x0F` records) | partly |

The token is **echoed, not guessed** (server -> `cmd X <N> <V>` -> client
replies `X <N> <V>`), so no reverse-engineering of the token is needed.

---

## 3. Netchan in JS - *20%*

| | Task |
|---|---|
| [x] | The frame header, the sequence and the ack |
| [ ] | The reliable window / retransmit (the client keeps a 64 entry ring at `0x201E75B4`, 24 B per entry) |
| [ ] | Fragmentation (server -> client fragment header and reassembly) |

---

## 4. Snapshot decode - *88%* (entities + configstrings decoded, player state open)

| | Task | State |
|---|---|---|
| [x] | The frame header and the frame layout | decoded |
| [x] | The entity list: the variable-length number and the field mask | decoded |
| [x] | The 116-byte entity state: every field, its mask bit and its width | decoded |
| [x] | The origin scale = **1/8** (the engine constant at `0x201113A8`) | verified against live coordinates |
| [x] | The delta ring: 16 frames, the max age 897 ms | decoded |
| [x] | A JS decoder (`web/snapshot.js`) that parses a live capture (14 entities/frame) | **working** |
| [x] | The service byte at offset 8 and the configstring record stream `[0x0F][u16 idx][u16 value]` | **decoded 2026-10-20 (f)** |
| [x] | The configstrings are parsed in the browser; the HUD shows the map name | **working** |
| [x] | The full gamestate chain: configstrings -> ghoulstrings -> baselines -> precache -> begin | **solved 2026-10-21 (a)** |
| [x] | The netchan framing: two u32 words, the alternating reliable toggle, the fragment flag, the keep alive | **solved 2026-10-21 (a)** |
| [x] | The engine's global string table (`SoF.exe 0x201217B0`, 1927 entries) -> `web/sofstringtable.json`; the numeric configstrings resolve to the model/sound names | **done 2026-10-21 (a)** |
| [x] | The player state (`0x14` record): it is **bit packed**, so the fields move; the authoritative origin (3 shorts, 1/8 scale) is found by searching the block, which also identifies the local player | **solved 2026-10-21 (j)** |
| [ ] | The angle byte scale (the origin scale is confirmed, the angles are not) | open |
| [x] | The local entity number is dynamic (the server never releases stale clients) - it is now found by the player-state origin search | **solved 2026-10-21 (j)** |

---

## 5. Usercmds - *100%* (the server accepts them)

| | Task | State |
|---|---|---|
| [x] | The wire format: `[0x02][checksum][u32 seq][the bit packed cmd]` | solved |
| [x] | The checksum key = the outgoing netchan sequence | solved |
| [x] | The 24-byte cmd struct and its bit packed, delta encoded form | solved |
| [x] | `web/cmdenc.js` - a **byte exact** JS port (12/12 vectors vs the engine) | done |
| [x] | The server accepts our usercmds (the client reaches state 3) | verified live |
| [ ] | The buttons -> movement mapping and the mouse look, wired to the browser | open |

---

## 6. Asset pipeline - *70%* (the BSP v46 header is decoded)

Use the **engine as an offline converter** (drop a DLL into the SoF root at the
`0x11AD72` import slot) instead of writing parsers from scratch.

| | Task | Notes |
|---|---|---|
| [x] | The `.bsp` v46 header: `IBSP` + version 46 + **22 lumps** of (off,len), no `numlumps`; the header is exactly 184 bytes and the file ends exactly at the last lump | `analysis/BSP_V46.md` |
| [x] | `web/bsp.js` - a lump reader/dumper | done |
| [x] | lumps 0 (entities), 1 (planes), 2 (vertexes), 5 (shaders) identified | done |
| [x] | The full lump table of `beta17.bsp`: 19 non-empty lumps (3, 7, 19, 20, 21 are empty) - the **face** lump is one of lump 4 (992 records, 28 bytes) or lump 8 (994 records, 32 bytes); both have a valid plane index and a 0/1 side in the first u16 but neither matches the Q2 face layout, so SoF's face struct differs | 2026-10-20 (f) |
| [x] | The BSP holds **no model list** (no `.m32` path anywhere in the file) - the model names come from the client side model table that SoF addresses by index (see #4) | 2026-10-20 (f) |
| [ ] | Identify the rest (models, nodes, leafs, brushes, brushsides, surfaces) via the engine's loader with Ghidra | open - REA/MCP works, but `SoF.exe` contains **no "IBSP" bytes at all**, so the header check is not a string compare; the loader has to be found another way |
| [ ] | `.bsp` -> WebGL map geometry (52 SoF + 70 GC maps) | the biggest single asset task |
| [ ] | `.m32` -> glTF/GLB animated models | |
| [ ] | `.ghb` / `.GHL` Ghoul scripts -> the view-model and player animation | without it the view model cannot animate |
| [ ] | `.adp` -> ogg/Opus audio | |
| [ ] | Texture conversion -> KTX2 / PNG | SoF Buddy's `ref_gl_defaults.cpp` documents the stock renderer state |

---

## 7. WebGL renderer - *52%*

| | Task |
|---|---|
| [x] | The WebGL context, a shader, a MVP matrix and a coloured box per entity | done |
| [x] | The camera: free flight (W/A/S/D + Space/C) and **follow the local entity** at the eye height (+56), the local entity is not drawn | 2026-10-20 (f) |
| [x] | The HUD: the relay/server, the status, the frame number and time, the entity count, the **map name from the configstrings**, the seed/sequence and the protocol log | 2026-10-20 (f) |
| [x] | The first frame frames the whole entity cloud so the view starts outside the geometry | 2026-10-20 (f) |
| [ ] | The scene graph and the camera driven by the snapshot (the local entity number is still dynamic) |
| [ ] | The map geometry and the collision (server-authoritative) |
| [ ] | The player models and the Ghoul animation blending (the model index table is needed) |
| [ ] | The first-person weapon view model and its animation |
| [ ] | The HUD (health/armor/ammo/weapon, the scoreboard) |
| [ ] | Positional audio |

---

## 8. Website, master listing, relay - *60%* (independent of #1)

| | Task | State |
|---|---|---|
| [x] | The GameSpy "gsm" TCP-28900 protocol (IDQD -> `\secure\` -> RC4/challenge -> `\list\cmp\gamename\sofretail\final\`) | working |
| [x] | The live masters: `sof1master.sofvault.org(28)`, `sof1master.megalag.org(54)`, `master.333networks.com(38)` | working |
| [ ] | The ~27 KB server list is *pushed* by a master - parse it properly | `web/serlist.js` still returns the masters |
| [ ] | **Register our server on the master** so the modified servers are listable | the GameSpy server-registration packet |
| [x] | The UDP <-> WebSocket relay | `web/relay.js` |
| [ ] | The website: list -> pick -> WebSocket -> play | not started |
| [ ] | The public relay deployment | not started |

---

## 9. Modding layer - *40%* (the "modify the game freely" goal)

| | Task | State |
|---|---|---|
| [x] | The weapon table: 31 rows, stride `0x14C`, base `0x50159B18`, the fire delays at `+0x118/+0x11C` | `analysis/weapontable.txt` |
| [x] | The item table: 39 records, stride `0x164` | `analysis/items.txt` |
| [x] | The fire chain, the ammo on the weapon, the fire-rate gate (`weapon+0x37C`), the heat model (0.99 / 150.0) | `analysis/REPORT.md` |
| [x] | Expose these as **data-driven** tables that the browser client and a patched server both read | **done 2026-10-21 (i)**: `www/weapons.json` + `www/items.json` + `www/content.html` |
| [ ] | A new weapon definition -> the server and the client | the client side is ready (the content page); the server needs a patched game module |
| [ ] | Vehicles ("cars") | not started |

---

## Cross-cutting rules (do not violate)

* **Never launch the SoF GUI client** (`SoF.exe` without `+set dedicated 1`) -
  it grabs the mouse and forces the display resolution. The dedicated server is
  fine. If a GUI run ever happens: kill SoF, restore `User/config.cfg`
  (remove `vid_width`/`vid_height`), verify 2560x1440.
* The dedicated server allows ~8 clients and **never releases stale clients**
  (our in-band disconnect is never dispatched) => **restart the server between
  test batches** or the runs die with `rejected_full`.
* Work in the existing workspace; never commit secrets.
* MSVC 2022 Build Tools are installed (x86 is needed to call the 32-bit
  `SoF.exe`). The engine is callable **as a library** (`LoadLibraryA("SoF.exe")`
  maps the image at `0x20000000` with **no GUI**) - a perfect oracle for the
  hash, the usercmd encoder and the cmd parser.
* `tools/rea.cmd` runs the Ghidra-backed REA decompiler on SoF.exe.
