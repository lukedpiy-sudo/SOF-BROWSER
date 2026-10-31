# Playability scorecard

*Scored against the real goal: **a player joins a SoF server in the browser and
plays a full match** - sees SoF's characters, picks up weapons, shoots, reads
health/ammo, hears the game, and the round ends properly.*

The workstream table in `BROWSER_ROADMAP.md` measures *engineering tasks*.
It is not the same thing as playability, and it was overstating the result.

Updated 2026-10-25.

| # | Area | % | Verified today | Still missing |
|---|---|---|---|---|
| 1 | Networking / protocol | **98%** | connect, the **complete** gamestate chain (configstrings -> ghoulstrings -> baselines -> precache -> begin), 1240 configstrings, entity snapshots, authoritative position, **movement and view angles accepted by the game module end to end** (the direction test, `PROTOCOL.md` 4e.6), sprint (button 0x20 doubles the movement shorts), the three-command bit stream, the client checksum, and a stream that survives 80 s | the server->client retransmit window and fragmentation in JS (20% of #3); **the local prediction is not reconciled with the server yet** (the client's own viewAngles never come back on the wire, so the camera angles are local-only) |
| 2 | World rendering | **92%** | the real NYCDM1: 6070 faces, 16151 triangles, 82 real textures, UV axes, mipmaps, Z-up conversion, **the level's 300 real light entities (point and spot lights) plus the sun as a per-pixel lit map, and the engine's own baked lightmap (raw RGB888 luxels, the per-face luxel size is ext/(n-1)) rendered through a 1024x512 atlas** | the sky, the fog, the water, the decals, the detail props |
| 3 | Characters (Ghoul models) | **35%** | the `.ghb` container, the clip list, the event table, the bone and bolt sections are decoded | the **triangle topology** (the index table is a valence histogram), the skinning, the animation blending |
| 4 | Weapons | **35%** | the 31 row weapon table, the 39 row item table, the button bits (attack 0x01, use 0x02, run 0x20), **the module's `gimme "<display name>"` command and the `bestweap` userinfo key** are documented | the first person view model, **firing verified end to end** (the module's fire path needs the button's rising edge, which is blocked by the open blocker), the muzzle flash, the impact effects |
| 5 | HUD | **45%** | the debug overlay (status, frame, entities, position, server list) **and the real health / armour / magazine / reserve / carried item / stealth**, all read out of the decoded player state block | the scoreboard, the weapon name, the round timer |
| 6 | Audio | **78%** | the footsteps, the jump and the weapon sounds play - the game's own 22 kHz mono WAVs, streamed straight out of `pak0.pak` through the relay; **the music plays too**: the map's `.dms` music set is found from the worldspawn, the `.adp` files are decoded (IMA ADPCM) and the stereo track is rebuilt in the browser (22050 Hz, 178 s, full scale) - and the ambience of the maps that use `func_ambientset` is mixed by the distance | the voice lines and the cinematics are decoded but not wired to the events that trigger them, and the sound effects are still not positioned |
| 7 | Effects | **10%** | - | the `.eft` particle format is not decoded |
| 8 | Match flow and UI | **30%** | the server list, the content and mods page, a console that reaches the server | the main menu, map voting, chat, the round end and the scoreboard, the spectator flow |
| 9 | Multiplayer infrastructure | **85%** | the GameSpy master protocol, our master, the relay, the browser client | the public relay and the HTTPS deployment |
| 10 | Modding layer | **68%** | the weapon and item tables as data, the client mods page | a new weapon needs a patched game module on the server |

## Weighted result

| milestone | estimate | what it means |
|---|---|---|
| **Walking prototype** | **~80%** | you join a server, spawn, walk around the real level with the real textures, the real lights and the real music, **look around**, and read your health, armour and ammunition |
| **Playable match** | **~48%** | you also see characters, pick up and fire weapons, read the HUD, hear the game and the round ends |
| **Identical to SoF** | **~35%** | the original Ghoul models with their animation, the original audio (the voices and the cinematics too), the original effects, the full UI |

## The five things that block "playable"

1. **The server stops the player state** (#1) - **resolved 2026-10-25.**  The
   cause was ours, not the server's: the netchan head wrote `seq + 1` while the
   checksum key used `seq`, so every usercmd failed the checksum and the server
   dropped it silently, and the command rate was above the per-client msec
   budget.  With the key, the field order (`PROTOCOL.md` 4e.6) and one message
   per sv_fps frame, the stream runs for the whole 80 s probe and the module
   applies the movement and the angles.  **The probe rule about button bit 0x02
   still stands** - the USE rising edge puts the client in the module's interact
   mode (`gclient+0x538`), which stops the simulation - but it is no longer what
   killed the stream.
2. **The Ghoul geometry** (#3) - the vertices are decoded and drawn, but the
   **triangle topology** is still missing (the index table turns out to be a
   valence histogram), and with it the skinning and the animation.
3. **The first person weapon view model** (#4) - the same Ghoul format, and it
   has to animate with the fire cycle.
4. **The voice lines and the cinematics** (#6) - the `.adp` files are decoded
   (IMA ADPCM), but the events of the level scripts that trigger them are not
   wired into the browser yet.  The music and the ambience do play.
5. **The look** (see `TARGET_LOOK.md`) - the baked lightmap is decoded and
   rendered now, but the first person weapon view model, the real HUD (a small
   SoF style bar plus a crosshair instead of the full screen debug dump), the
   sky, the fog and the client side prediction are still missing.
5. **The match flow** (#8) - the menus and the round handling.

## What is verifiably working right now

* The browser client connects to a real SoF dedicated server over UDP and
  completes the whole gamestate handshake.
* It receives the real entity snapshot and identifies itself without assuming
  an entity number.
* It walks, strafes and sprints, and the game module accepts the view angles:
  the direction of travel follows the yaw on the wire (`web/moveprobe5.js`,
  `logs/probe7.log`; the run bit doubles the speed).  The stream stays alive for
  the whole probe.
* It renders the real New York City level with the real game textures.
* It renders the level's real lights: the 300 light entities of the map are
  per-pixel point and spot lights (cross checked against the BSP's own light
  table) and the world's sun is a directional light.
* It plays the level's **music**: the `.dms` music set of the map is found in
  the worldspawn, the `.adp` tracks are decoded (IMA ADPCM) and the stereo
  track plays in the browser (22050 Hz, 178 s) - and the maps that use
  `func_ambientset` get their ambience, mixed by the distance.
* It lists a server on a master server and connects to it from the browser.
* It can send console commands to the server and browse the game's own weapon
  and item tables.
