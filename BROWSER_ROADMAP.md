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
| 2 | Gamestate handshake (new -> configstrings -> ghoulstrings -> baselines -> precache -> begin -> snapshot) | **[x] 100%** | - |
| 3 | Netchan in JS (window, retransmit, fragment) | **[ ] 20%** | - |
| 4 | Snapshot decode (entity_state, configstrings, player_state, deltas) | **[x] 100%** | - |
| 5 | Usercmds (bit packed, checksummed, server accepted) | **[x] 100%** | - |
| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 87%** | - |
| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 84%** | #4,#6 |
| 8 | Website + master listing + relay | **[~] 95%** | - |
| 9 | Modding layer (weapon/item tables, new content) | **[~] 68%** | - |

**Overall: ~78% of the browser client is done.**

> **OPEN BLOCKER (2026-10-22):** the server stops sending the player state a
> few seconds after the spawn - the block comes back empty and the world
> stops.  The trigger is the **rate** of the user command messages (5 Hz ->
> 16 s, 20 Hz -> 6 s), not their content, not the msec, not the message
> layout and not the userinfo.  See `PROTOCOL.md` 4d for the full table of
> what is ruled out and the next probes.  **Update 2026-10-23:** the prime
> suspect is the game module's **interact mode**: a USE press (button bit
> 0x02) makes it follow another client (`PROTOCOL.md` 4e.4) - probe without
> USE.


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
| 2026-10-21 (l) | **#6 78% -> 80%, #7 74% -> 78%.** **The level's real lights are in the browser.**  The map's entity lump holds **300 light entities** for `dm/nycdm1` (295 `light` + 5 `light_generic_alley_wall`) with the classic Quake II keys: the origin, `light` (the intensity), `_color` (0..1), the optional `radius`/`style`/`wait` and the spot light's `_cone`/`_focus`/`_mangle`.  `web/bsp2light.js` extracts them into `web/www/map_lights.json` (origin, colour, intensity, radius, style, the spot direction, the sun of the worldspawn).  **The extraction is cross checked against the BSP's own LIGHTS lump** (lump 20, 36 bytes per light: the origin, the colour, the intensity and a type field) - **299 of the 300 lights match the engine's table exactly** (origin, colour and intensity) and the type field separates the point lights (1) from the spot lights (2) and the sun's light grid (3).  `web/www/sofgl.js` feeds the lights to the WebGL client: the map draw is repeated with a lit program (the attribute indices are bound explicitly, so the vertex data is untouched) and the **16 lights nearest the camera** are uploaded as uniforms, with the classic style semantics (0 = constant, 1..31 = a linear flicker, 32..255 = a random flicker).  The camera position is recovered from the MVP matrix, so no hook into the renderer is needed.  The entities are lit too (their face normal comes from the unit cube's dominant axis).  **One line is needed in `web/www/index.html`: `<script src="sofgl.js"></script>`.**  The flicker path is verified too (style 0 = constant, 1..31 = a linear flicker with the period from `wait`, 32..255 = a random flicker: the uploaded light colours change from frame to frame when a light has a style).  The map and the entity programs are found by their **attributes** (the map has `aNrm`/`aUV`, the entity only `aPos`), not by the uniform names, and if the renderer's uniforms cannot be read back the original draw is used, so a change in `app.js` degrades to the old flat shading instead of breaking the client.  Still open: the BSP's **baked lightmap** (lump 7, 726630 bytes) is not decoded, so the level's static lighting is approximated by the sun plus the entity lights, and the `_wait` key of 84 lights is not understood. |

| 2026-10-21 (m) | **#6 80% -> 85%, #7 78% -> 82%.** **The music and the ambience play in the browser.**  The two sound formats that were still open are decoded and proven against the game itself.  **`.adp` is IMA/DVI ADPCM**: a u32 little endian sample rate followed by **one continuous 4 bit nibble stream** (high nibble first, no block headers) - the proof is the game's own decoder in the sound driver (`A3Dsnd.dll`/`Defsnd.dll`/`EAXSnd.dll` `FUN_60001000`, with the step table at `Defsnd.dll` file offset 65696 and the index table at 65632), the loader (`A3Dsnd.dll` `FUN_60005490`, 0x60005490, which compares the last four characters of the name with `".adp"` at 0x600158dc, reads the rate from the first dword and stores the sample count as `2 * fileLength - 46`) and the mixer (`Defsnd.dll` `FUN_60004250`, which calls the decoder with the sample position as a bit offset).  **`.dms` is the music set** (`SoF.exe` `FUN_2000ff70`, 0x2000ff70): a version byte, the track count and, per track, the left and the right channel path plus 12 parameter bytes - the music is **stereo with two separate mono `.adp` files**.  The level says which set it wants in the **worldspawn** of its `.bsp` (`"startmusic" "1" "musicset" "dm2"`), so `dm/nycdm1` plays `sound/music/DM2.dms` -> `lDM2.adp` + `rDM2.adp`.  `sound/sound.ams` is the **ambient sound set**: the 337 ambient loops plus 169 **named** ambiences (name, the minimum and the maximum distance and the sound indices), and the maps place them with `func_ambientset` / `environ_soundgen` entities that carry a **"soundName"** - the tables parse the file to the last byte.  The 727 `.os` files are **not** sound scripts: they are the **compiled level scripts** of the game module (`gamex86.dll` loads `ds/%s.os`, `FUN_5007adc0` checks the version 3); all 727 parse (version 3, exactly the 29 entity fields) and they name 1591 sounds of which 1590 resolve to a real file in the paks.  New files: `web/audiodec.js` (the decoders, CommonJS + browser), `web/www/sofmusic.js` (the music and ambience layer, and a player for the sound events of a `.os` script), `web/mkaudio.js` (copies the decoder next to the page), `web/mkmusic.js` (the map -> music set table), `web/adp2wav.js` (decodes an `.adp` into a `.wav`), `web/www/map_music.json`.  Verified in the browser against the live dedicated server: `dm/nycdm1` plays **sound/music/DM2/lDM2.adp** (22050 Hz, 178.3 s, stereo, peak 1.0, the audio context running) and the ambience of `arm1` resolves (`RoomToneGeneric1` -> `sound/Ambient/Locs/RmTone/Gen1.wav`, 1..2 units).  **One line is needed in `web/www/index.html`: `<script src="sofmusic.js"></script>`.** |
| 2026-10-21 (n) | **#6 85% -> 87%, #7 82% -> 84%.** **The Ghoul geometry is decoded: the models' vertices are extracted and they render in the browser.**  The `.ghb` geometry lives in the **block 1 tail** (between the end of the model stream and block 2): an 8 u32 header, the **index table** (the vertex indices shifted left by 8 bits, each one repeated once per face that uses it), 21 bytes of sub mesh data and then the **vertex records, 43 bytes each**: 3 floats of UV, 3 floats of position and 19 packed bytes (the three bone indices, the valence and the offsets).  The proof: the index table's highest index is exactly the vertex count (522 for the human model, 25 for the sniper rifle, 337 for the female model) and every record's UV and position are in range.  `web/ghb.js` grew `parseGeometry()` and `web/www/sofmodel.js` loads a model straight out of the pak at `/pak/<path>`, reads it in the browser and draws it.  **Still open: the triangle topology** - the index table is a valence histogram, not a triangle list, so the model is drawn as its 522 vertices (the real character's shape, verified in the browser) and not as triangles; the 19 packed bytes per vertex are the last place the faces can be.  Two browser traps: a TypedArray's `toString()` ignores its arguments (the strings have to be decoded by hand) and the pak's names are lower case while the engine's string table is upper case. |
| 2026-10-22 (a) | **#4 95% -> 100%, #5 100% -> 95%, #2 100%.**  **The player state is fully decoded and the player can finally turn.**  Four protocol bugs were found and fixed today.  (1) **The view angles are BINARY angles** (65536 = one full turn, the engine constant `0x201114A0` = 182.0444 and the module divides by 360/65536), not degrees x 16 - with the old scale the player walked but could never look around.  (2) **The server decodes THREE commands out of every movement message** (`SV_ReadClientMessage`, `SoF.exe 0x200636C0`) with the baseline chain [zero, cmd1, cmd2], and the three commands are **one continuous bit stream** - a client that sends one command makes every unchanged field of the next two resolve against zero, which is what lost the angle.  The client now keeps a three command ring and writes all three into one bit stream (`web/cmdenc.js` `encodeCmds`).  (3) **The msec byte is a delta, not a cumulative counter**: the three commands of a message have to add up to the real time between two messages, so with a 50 ms message interval it is 16 ms per command (a 60 Hz client).  (4) **The gamestate chain is driven by the client at the end**: after the ghoulstrings the client sends `baselines <tok> 0` itself, the server then asks for the baselines, sends `precache <tok>` and the client finally sends `begin <tok>`; the old client sent "begin" 250 ms after the ghoulstrings, which left the server's gamestate machine half finished.  The **player state block is now decoded byte exact** (a u32 LE presence mask, the fields in the engine's writer order, a u32 LE stat mask and 16 LE s16 stats): the stats are health (1), magazine (2), reserve (3), armour (5), the carried item (6), the dead flag (8), the money (10) and the stealth (11) - the HUD shows all of them.  The movement is clamped by the server to +/-200 (forward/up) and +/-160 (side), so the client uses 200 instead of 12000.  The game module's console commands are documented: `gimme "9mm Pistol"` takes the item's DISPLAY name, and the `bestweap` **userinfo** key (`w_pistol1`) gives the player a weapon.  **Open:** the server stops sending the player state a few seconds after the spawn - the trigger is the RATE of the user commands (5 Hz -> 16 s, 20 Hz -> 6 s), not their content, not the msec, not the layout and not the userinfo; see `PROTOCOL.md` 4d. |

| 2026-10-22 (b) | **#8 95% -> 96%.**  **The relay now serves every pak.**  It only read `pak0.pak` (705 MB) before, so 831 of the 1591 sounds that the level scripts name (and the whole `.bsp` of the map, which lives in `basicpack2015v2.pak`) were 404s.  `web/relay.js` now indexes `pak0`, `pak1`, `pak2`, `pak3`, `basicpack2015v2.pak`, `sofplus*.pak` and `gs.pak` in the order the engine loads them and serves the first pak that has the file - the map, the music and the ambience load again in the browser. |
| 2026-10-22 (c) | **#5 95% -> 100%.**  **Two protocol bugs that froze the world every 6 seconds are found and fixed.**  (1) **The sequence in the user command was one too high.**  The engine's fakelag check (`SV_UserMove`) compares the sequence the command carries with the sequence of the message (`outgoing_sequence - lastcmd.netchan.outgoing_sequence > 2`); with the wrong value the difference underflows into a huge unsigned number, the check is always true, the server stores the command **without executing it** and the game module stops writing the player state - the world froze about six seconds after every spawn.  (2) **The 12 bit view angle is signed**, so the angle has to be normalised to -180..+180 degrees: with the old unsigned encoding 270 degrees was read back as -90 and the module broke in the same way.  With both fixed the player state survives 50+ seconds instead of 6, the browser bundle is rebuilt and the client keeps playing.  The remaining, much slower trigger (the state still stops after ~50 s) is documented in `PROTOCOL.md` 4d. |
| 2026-10-22 (d) | **#6 87% -> 93%, #7 84% -> 90%.**  **The BSP is fully mapped and the real baked lightmap renders.**  The engine keeps the authoritative lump table (22 x 44 byte descriptors at VA `0x2011f938`, the LUMP_* names right after it at `0x2011fd14` in reverse order - that reversal gave the index->name mapping): 0 ENTITIES 413, 1 PLANES 20 B, 2 VERTEXES 12 B 7801, 3 VISIBILITY 175407, 4 NODES 28 B, 5 TEXINFO 76 B 2072, 6 FACES 44 B 6070, 7 LIGHTING 726630 B, 8 LEAFS 32 B, 9 LEAFFACES, 10 LEAFBRUSHES, 11 EDGES, 12 SURFEDGES 28291, 13 MODELS, 14 BRUSHES 1764, 15 BRUSHSIDES 11541, 16 POP, 17 AREAS, 18 AREAPORTALS, 19 REGIONFACES, 20 LIGHTS 1230, 21 REGIONS.  **The lightmap is plain RGB888, 3 bytes per luxel**, and the luxel size is NOT a constant 16 but `ext/(n-1)` per face (proved: the 5807 face rectangles tile the lighting lump exactly, and the brightness is continuous across shared edges - RMS 26.9 for the right mapping versus 29.6 for a fixed 16 and 44.8 for the flipped row order).  **The lightmap holds the sun and the ambient only** (the correlation with the 295 light entities is 0.0013), so the entity lights are dynamic and are added on top - exactly what the module does.  `web/www/soflight.js` takes over the map draw, binds the lightmap atlas (1024x512) on texture unit 1 and multiplies `texture * (lightmap/255 + ambient/255 + entityLights + styles)`, and the browser geometry count matches the renderer exactly (28291 vertices / 48453 indices = 16151 triangles).  Also fixed: 12 of the "materials with no image" are **RGB565** (2 bytes per texel) and not RGBA - the mip-0 offset at +648 tells the format. |
| 2026-10-22 (e) | **The target look is now written down.**  `analysis/TARGET_LOOK.md` compares the real SoF screenshots with the current browser client and lists the ten gaps in the order of impact: no first person weapon view model, the full screen debug overlay, the camera not in the player's eyes, the missing sky, the missing fog, the patchy lighting, the characters as point clouds, the sounds not positional, the missing client prediction and the 20+ s spawn (the page loads the 3.6 MB map JSON, the lightmap atlas and the models before the handshake finishes).  The HUD spec is in there too: a small SoF style bar (health, armour, the ammunition, the money) plus a crosshair, and the debug dump behind a key. |
| 2026-10-22 (f) | **#7 90% -> 92%.**  **The picture stops being a debug dump.**  The full screen monospace overlay is now behind **F1** (off by default) and a real SoF style HUD took its place: the health and the armour bars at the bottom left, the magazine / reserve and the money at the bottom right - all out of the decoded player state.  The camera defaults to the **first person** (V still toggles the third person), and the local player figure is no longer drawn in the first person view (the camera used to sit inside our own body).  The client also captures the two services it used to drop: **svc 0x1A (svc_ghoulreliable - the ghoul string table that names every model and sound) and svc 0x0A (svc_sound - the positional sound events)** are kept raw in `client.ghoulPackets` / `client.soundPackets` so the Ghoul and the audio agents can decode them from a live capture.  The service byte table is now in `PROTOCOL.md`.  Still open: the first person weapon view model, the sky, the fog, the client side prediction and the 20+ s spawn (the page loads the 3.6 MB map JSON, the lightmap atlas and the models before the handshake finishes) - see `TARGET_LOOK.md`. |
| 2026-10-22 (g) | **#7 92%, but the game is still not playable - two hard bugs are now pinned.**  (1) **The map geometry is shredded**: most faces are correct (the corridor reads perfectly with the real textures) but a large part of the level is floating slabs and holes, which points at the face -> surfedge -> edge -> vertex chain (the surfedge sign encoding, the firstedge/numedges) in `web/bsp2json.js` / `web/www/map_bsp.json`.  (2) **The player falls out of the world**: it spawns at z=26 and sinks steadily (26 -> 16 and still going) and **the movement fields never move it horizontally** (the forward, the side and the up fields were each tested for 6 s, and the run bit changes nothing) - so the module never applies our movement, even though the msec (the gravity runs) and the view angles arrive.  The engine's own writer puts the movement at +0x0A/+0x0C/+0x0E and its reader stores it there, so the next probe is the **game module's** read of the movement field (`gamex86.dll` ClientThink 0x500F53A0) - the module may read the movement from a different offset, or apply a scale we do not match.  Also fixed today: the camera now uses the **player's** view angles (it had its own mouse angles with a different sensitivity, so the picture drifted away from the simulated direction), the entity lights in the map shader are compressed the way the engine compresses its light sum (added raw they blew the walls out to white), and the map shader never uploaded the light data at all (`uLightCount` was 0, so the corridors were lit by the baked lightmap alone). |

| 2026-10-23 (a) | **#4/#5 the movement and state-death blockers are explained, half of it.**  `ClientThink` (`gamex86.dll` 0x500F53A0) mapped end to end (see `PROTOCOL.md` 4e.4): the wire layout is confirmed **ours** (msec +0, buttons +1 latched as `(~old) & new`, signed binary view shorts at +4/6/8 x 360/65536, movement shorts x 0.125, f32 extras at +0x10/+0x14).  **The whole simulation is gated by `gclient+0x538`** - the module's interact/follow-cam target; when it is non-zero ClientThink applies **only angles**, never movement.  A **USE bit (0x02) rising edge** sets `+0x538` to the next live client record (`FUN_500885e0`/`FUN_50088550`, record array at `DAT_5015cca0`, stride 0x464) - an observer simulates no movement and writes an empty player state.  Several probe tools (`psbuttons.js`, `psfire2.js`, `psspeed.js`, `bot.js`) press USE, so those probe runs confounded the measurements; **new probe rule: never send 0x02** except when testing interact mode on purpose.  Sprint bit 0x20 confirmed: it doubles the three movement shorts (`gclient+0x550`). |

| 2026-10-24 (a) | **#4/#5 probes redone on a REAL dedicated server - the interact theory is NOT the whole story.**  First: a new environment trap - a dedicated server started from `SoFTest.exe` (the patched test build) **circularly re-requests `configstrings 42 0` and never completes the handshake**; started from `SoF.exe +set dedicated 1` the handshake is normal.  `web/sofproto.js` had been left with duplicated blocks and a scrambled keep-alive region; it was recovered from the copy embedded in `web/www/bundle.js`, duplicate blocks removed, then three real fixes: (1) the server's word1 bit31 on server->client packets marks **a reliable-message carrier, not a split** - SoF never fragments these, so every packet is processed directly (the old seq-keyed reassembly swallowed every request); (2) the client keeps its **own** reliable toggle (`myToggle` flips only on reliable sends: string commands/userinfo; unreliable usercmds replay it); the srvReliableToggle echo in `unrelHdr` was an artifact of the older revision; (3) `unrelHdr` wrote a negative int32 (`1<<31`) into `writeUInt32LE` -> RangeError, fixed with `>>> 0`.  Measured against `SoF.exe` dedicated on dm/nycdm1 with USE never sent: handshake completes in ~13 s (configstrings cursor 0->2312, ghoulstrings, baselines, precache, spawn); the player spawns **exactly at real `info_player_deathmatch` points +10** (three runs: (-2304,-1920), (-1128,56,162), (-1823.9,-2143.9,98.1)), hp=100, playerState mask `0x1a8628a2` (origin present; **velocity and viewAngles are NOT on the wire**).  With per-field probes (`web/moveprobe2/3.js`, moveMode unrel, USE never pressed): **zero origin change** for move0 +/-, move1 +/-, move2, and the 0x20 run bit; and the server **stops sending anything to the client ~5-7 s after the spawn** (svc tally: 0x17 frames x52, 0x1d x33, 0xf x26, 0x1a x2, 0x10 x1; no OOB disconnect, ack stuck).  Grep of the whole gamex86 decompile shows `+0x538` is written ONLY by `FUN_50088190`/`FUN_50088550` (the walk sets/clears it; clear also does `buttonbyte &= 0x7f`) and only READ by ClientThink - so with USE never pressed `+0x538 == 0` and the simulation branch DOES run (gravity, hp).  Conclusion: the "world freezes a few seconds after spawn" and the ignored movement have a cause beyond the interact gate; next probes are the simulation callee `(*DAT_5015c4d8+0xac)` in ClientThink (the sim is invoked BEFORE the movement shorts are copied into the record at +0x93, suggesting double-buffering that our identical-command ring may break) and the engine-side client drop (why the server stops sending: lostpackets/badchecksum path in SoF.exe).  **BREAKTHROUGH LATER SAME DAY:** clearing the word1 bit31 flag on **unreliable** usercmd packets (it had been set on EVERY send) makes the module apply movement: the player origin moves while it was exactly frozen before (origin -1128,56,162 -> -1127.875,56.125,162.125 in the probe window).  So rule 3 of `PROTOCOL.md` ("word 1 carries the fragment flag") applies only to the **reliable** messages; the stock client's usercmds do NOT set it.  The server still stops sending to the client ~5 s after the spawn (rate-triggered, 4d), so the state-death probe queue is unchanged. |

| 2026-10-25 (a) | **#4/#5 the movement blocker is closed - our commands reach the game module.**  Two fixes: (1) `web/cmdenc.js` had the field order wrong - the decoder (`SoF.exe` 0x20005AA0) lays out angles as three 12 bit fields at +4/+6/+8 and movement as three 10 bit fields (`value + 0x1fe`, clamped +-200/160/200) at +0x0A/+0x0C/+0x0E, msec 8 bits unconditional (no "changed" bit), bits packed LSB first inside each byte; (2) the checksum key is the message's **own** outgoing sequence and the netchan head, the inner u32 and the key must all be that same number - the head used to write `seq + 1`, so every usercmd failed the checksum and was dropped silently.  Cadence: one message per sv_fps frame (3 commands x 33 ms), otherwise the per-client msec budget underflows (`SV_ExecuteClientMessage` 0x200635F0).  Live proof (`logs/probe6.log`, `logs/probe7.log`): 80 s survival, forwardmove +200 -> ~13 units/frame along **-Y** at velocity 1600, run bit 0x20 doubles it, sidemove +160 -> **-X**, and the direction rotates with the yaw (0 -> -Y, 90 -> +X, 180 -> +Y, 270 -> -X), which confirms which offsets are angles and which are movement.  SoF's convention, from `FUN_500fdd70`: `forward = (sin yaw, -cos yaw, ...)`, sidemove uses `-param_2`, positive pitch looks **down**; `web/www/sofpredict.js` was still on the Q2 convention (prediction moved at right angles to the server) and now matches, and `web/www/app.js` publishes `state.view` because the server never sends our own viewAngles on the wire.  The 4d "state death" was our own fault, not a server rule.  Open: the probe player fell through the geometry in one run (z 23.5 -> -39.9), so the ground/collision case needs a look. |

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
| [x] | `.bsp` -> the map's **light entities** as JSON (`web/bsp2light.js` -> `web/www/map_lights.json`), cross checked against the BSP's own LIGHTS lump (299 of 300 lights match exactly) | 2026-10-21 (l) |
| [ ] | `.m32` -> glTF/GLB animated models | |
| [x] | The **Ghoul geometry**: the `.ghb` vertex records (the UVs, the positions, the bone indices) are extracted and drawn in the browser - `web/ghb.js` (`parseGeometry()`) and `web/www/sofmodel.js` | 2026-10-21 (n) |
| [ ] | `.ghb` / `.GHL` Ghoul scripts -> the view-model and player animation | without it the view model cannot animate |
| [x] | `.adp` -> raw PCM (IMA ADPCM, `web/audiodec.js`), `.dms` -> the music set, `.ams` -> the ambient set, `.os` -> the compiled level script | solved 2026-10-21 - see `PROTOCOL.md` 4b |
| [ ] | Texture conversion -> KTX2 / PNG | SoF Buddy's `ref_gl_defaults.cpp` documents the stock renderer state |

---

## 7. WebGL renderer - *52%*

| | Task |
|---|---|
| [x] | The WebGL context, a shader, a MVP matrix and a coloured box per entity | done |
| [x] | The camera: free flight (W/A/S/D + Space/C) and **follow the local entity** at the eye height (+56), the local entity is not drawn | 2026-10-20 (f) |
| [x] | The HUD: the relay/server, the status, the frame number and time, the entity count, the **map name from the configstrings**, the seed/sequence and the protocol log | 2026-10-20 (f) |
| [x] | The first frame frames the whole entity cloud so the view starts outside the geometry | 2026-10-20 (f) |
| [x] | The **level's real lights**: the map's 300 light entities as per-pixel point and spot lights, the sun as a directional light, the classic flicker styles, the entities lit too | 2026-10-21 (l) |
| [ ] | The scene graph and the camera driven by the snapshot (the local entity number is still dynamic) |
| [ ] | The map geometry and the collision (server-authoritative) |
| [~] | The player models: the real Ghoul geometry is extracted and drawn (the vertices); the **triangle topology and the animation** are still open | 2026-10-21 (n) |
| [ ] | The first-person weapon view model and its animation |
| [ ] | The HUD (health/armor/ammo/weapon, the scoreboard) |
| [~] | Positional audio: the music and the ambience play, the ambience is mixed by the distance to the `func_ambientset` entity; the sound **effects** are still not positioned | 2026-10-21 (m) |

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
