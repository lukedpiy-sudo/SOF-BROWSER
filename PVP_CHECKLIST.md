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

6. [x] **Server-authoritative walking** — verified across 3 fresh spawns: 17.3, 26.8 and 7.3 units in 1.8 s.
7. [~] **Collision / no clipping** — server stops movement at walls; exhaustive wall/floor sweep still open.
8. [x] **Spawn validity** — runtime compass probe walks in 8 directions and keeps the first that moves; 3/3 spawns became mobile.
9. [x] **Jumping** — verified Z 120.1 → 135.3 → 157.8 with landing/height change.
10. [x] **Camera anchor** — `cam.y = playerOrigin.z + 56` verified across 3 spawns.
11. [x] **Third-person camera** — `V` toggle verified, camera moved back 104 units.
12. [~] **Client prediction** — disabled for camera because it drifted; pure server authority now proven functional, but feel/latency not final.
13. [~] **Look controls** — synthetic mouse movement changes yaw 0 → 42; real pointer-lock session still open.

## C. Map and rendering

14. [~] **Missing walls / see-through map** — red-sky probe proved the large bright surfaces are map geometry, not sky; face-level audit still open.
15. [~] **Sky slabs** — `?nosky=1` probe added; real sky textures confirmed dark; sky tint restored after red diagnostic.
16. [~] **Lighting parity** — exposure 0.72, light cap 1.25 and texture cap 0.72 added; much darker but not exact reference.
17. [~] **Texture/material correctness** — 82 real `.m32` materials load; near-white materials capped.
18. [ ] **Detail/effects surfaces** — open.

## D. Weapon and combat

19. [~] **Weapon presence** — live memory confirms a player object exists per client, but no weapon is selected; correct object offset still open.
20. [~] **Local fire loop** — ammo/sound/flash/attack bit work locally; not authoritative.
21. [ ] **Server-side ammo decrement** — attack bit, `weaponselect 3`, `weapon3` and `use weapon_pistol` all tested; stats[2] stays 18.
22. [ ] **Weapon pickup** — real pickup must authoritatively change weapon, ammo and reserve.
23. [ ] **Reload** — local reload exists; server-authoritative reload needed.
24. [ ] **Shot traces / hit detection** — server traces against players and world.
25. [ ] **Damage and armour** — server `T_Damage` path reduces HP/armour.
26. [ ] **Death and respawn** — death state, penalty, respawn point and weapon reset.
27. [ ] **Scoring / frags** — kills/deaths/scoreboard update on both clients.
28. [ ] **Weapon switching** — number keys, `weaponselect`, correct viewmodel per owned weapon.
29. [ ] **Fire modes** — primary/alt, heat, overheat, per-weapon behaviour.

## E. Characters and world entities

30. [ ] **Remote player models** — real Ghoul `.ghb` characters, not boxes/point clouds.
31. [ ] **Skins and orientation** — correct team/player skin, facing and animation state.
32. [ ] **Animation sync** — idle, walk, jump, fire, hit, death driven by server state.
33. [ ] **Dropped items / pickups** — visible, identifiable, synchronised.
34. [ ] **Corpses / decals** — persistent visual combat evidence.

## F. HUD and front-end

35. [~] **HUD data** — health, armour, ammo, weapon, item decoded from player state; styling off reference.
36. [ ] **HUD visual match** — bottom-centre health/armour, green digital ammo, compact original layout.
37. [ ] **Scoreboard** — shell only; real names, scores, ping, teams needed.
38. [ ] **Chat / team chat** — commands exist; delivery/display between clients unverified.
39. [ ] **Console** — client vs server commands separated and reliable.
40. [ ] **Menus** — main/pause/settings/controls/browser/content need final pass.
41. [ ] **Server browser** — real local server only, no fake/duplicate entries.

## G. Audio and effects

42. [~] **Sound pipeline** — real pak assets decoded; positioning/event coverage incomplete.
43. [ ] **Weapon sounds** — correct fire/reload/impact per weapon.
44. [ ] **Footsteps and ambience** — positional, map-appropriate, no missing files.
45. [ ] **Muzzle flash / tracers / impacts** — visible to both clients, tied to real shots.

## H. Verification and release

46. [ ] **Two-client PVP smoke test** — connect, see, move, shoot, damage, score, respawn.
47. [ ] **Four-to-eight client stress test** — no handshake stalls, stale-slot lockouts or desync.
48. [ ] **Headless regression suite** — one command, pass/fail report.
49. [ ] **Performance** — stable frame rate, load target, no memory growth over 10 min.
50. [ ] **Final release checklist** — all items ticked, committed, pushed, known-good URL.

## Current hard blockers

1. Browser must reliably reach the current build.
2. No spawn outside/inside solid geometry.
3. Movement and camera correct from every spawn.
4. Map geometry/sky must stop looking see-through.
5. Server must own weapon state, ammo, damage and scoring.
