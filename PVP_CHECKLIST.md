# PVP readiness checklist

Legend: `[x]` verified / done, `[~]` partially done, `[ ]` open.

This file is the live work ledger. Work proceeds top to bottom; do not skip a
blocking item. A successful test means a real browser against the real SoF
dedicated server, not a simulated client.

## A. Connection and services

1. [x] **Reliable server startup** — `./run-local.sh restart` verified; clean first connection in 10.8 s with frames and origin.
2. [x] **Stale client slots** — watchdog added (`web/server_watchdog.js`), kicks clients idle >120 s every 30 s.
3. [x] **Handshake robustness** — retry timers delayed to 2 s/5 s; protocol `reset()` added for reconnects; spawned overlay waits for first entity frame.
4. [x] **Browser cache / build identity** — relay injects git commit into HTML marker and all script query strings automatically.
5. [x] **Connection failure UX** — relay/server/refused/stalled states each have distinct loading messages.

## B. Movement and camera

6. [x] **Server-authoritative walking** — render-loop usercmds at 10 Hz; full browser playthrough walked 26.1 units with stable yaw. Silent spawn retry handles blocked spawns without menu bounce.
7. [~] **Collision / no clipping** — server stops movement at walls; several DM spawns remain wedged. Wall-stuck steering (turn, jump) added but not reliable.
8. [x] **Spawn validity** — server now runs the real `dm/nycctf1` CTF map; spawn aim is instant (no walking probe), and falls/stuck steps no longer kick the player back to the menu.
9. [x] **Jumping** — playthrough verified Z 56.1 → 77.5 with landing.
10. [x] **Camera anchor** — `cam.y = playerOrigin.z + 56` verified across 3 spawns.
11. [x] **Third-person camera** — `V` toggle verified, camera moved back 104 units.
12. [~] **Client prediction** — disabled for camera because it drifted; pure server authority now proven functional, but feel/latency not final.
13. [~] **Look controls** — synthetic mouse movement changes yaw 0 → 42; real pointer-lock session still open.

## C. Map and rendering

14. [x] **Missing walls / see-through map** — fixed: `app.js` filter `/\bsky\b/` did not match `subway/sky2`, so the near-white sky material was drawn as solid geometry while `soflight.js` skipped it. Both filters now exact; renderer/lightmap material ranges verified 92/92 with zero missing keys; corridor renders solid.
15. [x] **Sky slabs** — same root cause as #14; sky is now drawn only by `sofsurface.js` with its real dark textures.
16. [~] **Lighting parity** — exposure 0.72, light cap 1.25 and texture cap 0.72; much closer to reference but not exact.
17. [x] **Texture/material correctness** — 82 real `.m32` materials load and all 92 material draw ranges match between renderer and lightmap pass.
18. [ ] **Detail/effects surfaces** — open.

## D. Weapon and combat

19. [~] **Weapon presence** — live memory confirms a player object exists per client, but no weapon is selected; correct object offset still open.
20. [x] **Local fire loop** — ammo decrement/reserve/reload, sound, muzzle flash and attack bit verified; server still not authoritative.
21. [ ] **Server-side ammo decrement** — attack bit, `weaponselect 3`, `weapon3`, `use weapon_pistol` and `+set weaponarena 1` all tested; stats[2] stays 18. Live memory diff showed `weaponselect` changes no player-object dword.
22. [ ] **Weapon pickup** — real pickup must authoritatively change weapon, ammo and reserve.
23. [ ] **Reload** — local reload exists; server-authoritative reload needed.
24. [~] **Shot traces / hit detection** — test PVP layer broadcasts shot origin/yaw over relay; each client checks line-of-fire and applies damage locally. Server-side traces still open.
25. [~] **Damage and armour** — client-vs-client damage, hit marker and local HP overlay work over relay; server `T_Damage` authority still open.
26. [ ] **Death and respawn** — death state, penalty, respawn point and weapon reset.
27. [ ] **Scoring / frags** — kills/deaths/scoreboard update on both clients.
28. [x] **Weapon switching** — number keys and `weaponselect` wired. Shipped INVIEW GHB topology renders as shards, so a clean procedural HUD viewmodel is used with the real clip-driven recoil/flash state.
29. [ ] **Fire modes** — primary/alt, heat, overheat, per-weapon behaviour.

## E. Characters and world entities

30. [~] **Remote player models** — two real clients connect and stream entities; most remote entity model indices are 0, so character-path correlation is still unresolved.
31. [ ] **Skins and orientation** — correct team/player skin, facing and animation state.
32. [ ] **Animation sync** — idle, walk, jump, fire, hit, death driven by server state.
33. [ ] **Dropped items / pickups** — visible, identifiable, synchronised.
34. [ ] **Corpses / decals** — persistent visual combat evidence.

## F. HUD and front-end

35. [~] **HUD data** — health, armour, ammo, weapon, item decoded from player state; styling off reference.
36. [ ] **HUD visual match** — bottom-centre health/armour, green digital ammo, compact original layout.
37. [~] **Scoreboard** — relay RCON endpoint now parses real names (including CNCT pings); playthrough shows real player name. Team/score formatting still basic.
38. [ ] **Chat / team chat** — commands exist; delivery/display between clients unverified.
39. [ ] **Console** — client vs server commands separated and reliable.
40. [ ] **Menus** — main/pause/settings/controls/browser/content need final pass.
41. [ ] **Server browser** — real local server only, no fake/duplicate entries.

## G. Audio and effects

42. [~] **Sound pipeline** — real pak assets decoded; positioning/event coverage incomplete.
43. [ ] **Weapon sounds** — correct fire/reload/impact per weapon.
44. [ ] **Footsteps and ambience** — positional, map-appropriate, no missing files.
45. [~] **Muzzle flash / tracers / impacts** — procedural muzzle flash and hit marker tied to shots; tracers/impact decals still open.

## H. Verification and release

46. [ ] **Two-client PVP smoke test** — connect, see, move, shoot, damage, score, respawn.
47. [ ] **Four-to-eight client stress test** — no handshake stalls, stale-slot lockouts or desync.
48. [x] **Headless regression + playthrough** — `node web/regression.js` and `node web/playtest.js` both pass spawn/walk/look/fire/reload/jump/third-person/menu checks.
49. [ ] **Performance** — stable frame rate, load target, no memory growth over 10 min.
50. [ ] **Final release checklist** — all items ticked, committed, pushed, known-good URL.

## Current hard blockers

1. Browser must reliably reach the current build.
2. No spawn outside/inside solid geometry.
3. Movement and camera correct from every spawn.
4. Map geometry/sky must stop looking see-through.
5. Server must own weapon state, ammo, damage and scoring.
