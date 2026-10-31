# Playability scorecard

*Scored against the real goal: **a player joins a SoF server in the browser and
plays a full match** - sees SoF's characters, picks up weapons, shoots, reads
health/ammo, hears the game, and the round ends properly.*

The workstream table in `BROWSER_ROADMAP.md` measures *engineering tasks*.
It is not the same thing as playability, and it was overstating the result.

Updated 2026-10-21.

| # | Area | % | Verified today | Still missing |
|---|---|---|---|---|
| 1 | Networking / protocol | **95%** | connect, full handshake, 1240 configstrings, entity snapshots, authoritative position, movement, sprint, mouse look | the server->client retransmit window and fragmentation in JS (20% of #3) |
| 2 | World rendering | **85%** | the real NYCDM1: 6070 faces, 16151 triangles, 82 real textures, UV axes, mipmaps, Z-up conversion | dynamic lighting, the sky, decals, the detail props, the 12 missing materials |
| 3 | Characters (Ghoul models) | **25%** | the `.ghb` container, the clip list, the event table, the bone and bolt sections are decoded | the vertex/triangle extraction (the geometry sits in a 6.5 MB high-entropy block 2), the skinning, the animation blending |
| 4 | Weapons | **25%** | the 31 row weapon table, the 39 row item table, the button bits (attack 0x01, use 0x02, run 0x20) | the first person view model, firing verified end to end, the muzzle flash, the impact effects |
| 5 | HUD | **20%** | the debug overlay (status, frame, entities, position, server list) | health / armor / ammo / weapon / the scoreboard - all of it lives in the **bit packed** player state block, which is not decoded yet |
| 6 | Audio | **5%** | - | the `.adp` and `.os` formats are not decoded; no weapon fire, footsteps, music or voices |
| 7 | Effects | **10%** | - | the `.eft` particle format is not decoded |
| 8 | Match flow and UI | **30%** | the server list, the content and mods page, a console that reaches the server | the main menu, map voting, chat, the round end and the scoreboard, the spectator flow |
| 9 | Multiplayer infrastructure | **85%** | the GameSpy master protocol, our master, the relay, the browser client | the public relay and the HTTPS deployment |
| 10 | Modding layer | **68%** | the weapon and item tables as data, the client mods page | a new weapon needs a patched game module on the server |

## Weighted result

| milestone | estimate | what it means |
|---|---|---|
| **Walking prototype** | **~65%** | you join a server, spawn, walk around the real level with the real textures |
| **Playable match** | **~40%** | you also see characters, pick up and fire weapons, read the HUD, hear the game and the round ends |
| **Identical to SoF** | **~30%** | the original Ghoul models with their animation, the original audio, the original effects, the full UI |

## The five things that block "playable"

1. **The Ghoul geometry** (#3) - the format is 80% decoded; the mesh data is
   in a 6.5 MB block that is not plain vertex data. This is the single biggest
   visual gap.
2. **The player state stats** (#5) - one bit packed block holds health, armor,
   ammo and the weapon. Decoding it fixes the whole HUD.
3. **The first person weapon view model** (#4) - the same Ghoul format, and it
   has to animate with the fire cycle.
4. **The audio** (#6) - 727 `.os` and 824 `.wav` files in the pak.
5. **The match flow** (#8) - the menus and the round handling.

## What is verifiably working right now

* The browser client connects to a real SoF dedicated server over UDP and
  completes the whole gamestate handshake.
* It receives the real entity snapshot and identifies itself without assuming
  an entity number.
* It walks, sprints and looks around, and the server moves the player.
* It renders the real New York City level with the real game textures.
* It lists a server on a master server and connects to it from the browser.
* It can send console commands to the server and browse the game's own weapon
  and item tables.
