# Prompt for the second AI - next section

```
You are continuing work on a Soldier of Fortune (2015 re-release) project: a
browser client that speaks the real SoF wire protocol to a real SoF dedicated
server, using the original game assets.

CONTEXT
  Workspace:  C:\Users\User\q2work\sof2\
  Game:       C:\Users\User\Soldier of Fortune\
  Docs:       C:\Users\User\Soldier of Fortune\analysis\
              (PROTOCOL.md, BROWSER_ROADMAP.md, PLAYABILITY.md - all up to date,
               read them first; they are the record of what is proven)
  The client: C:\Users\User\q2work\sof2\web\www\app.js  (plain ES5-ish JS,
              global scope, no build step for new files)
  The assets: Base\pak0.pak (705 MB) - the relay serves pak files at
              GET /pak/<path in the pak>, so you can fetch any asset with
              fetch() without extracting it. See analysis\PROTOCOL.md for the
              pak layout and the route.

You already did the MAP LIGHTING section (web/bsp2light.js,
web/www/map_lights.json, web/www/sofgl.js) - that is finished and verified.
Do not revisit it. The BSP's baked lightmap (lump 7) is still undecoded and
is NOT in this section either.

YOUR NEXT SECTION: THE GHOUL 3D MODEL GEOMETRY  (web/ghb.js)
  Make the original SoF player and weapon models renderable in the browser.
  This is the biggest remaining visual gap: the characters are currently drawn
  as placeholder boxes.

WHAT IS ALREADY KNOWN (build on it, do not re-derive)
  - The models are Ghoul binaries: ghoul/**/*.ghb in Base\pak0.pak (477 files;
    the human character is ghoul/enemy/meso/MESO_IRQ3B.ghb, 7.8 MB; a weapon
    is ghoul/weapon/inview/sniperrifle/SNIPERRIFLE.ghb, 198 KB).
  - web/ghb.js is a working JS reader for the container, the model stream, the
    202 animation clips (with their event table), the meshes, the bones, the
    bolts and the skeleton. READ IT, it is the reference. You may extend it
    (it is yours now), but keep its existing exports working.
  - CONTAINER (12 bytes): u32 magic 0x198237FE, u32 the file offset of block 2,
    u32 the size of block 2. The model stream starts at file offset 0x0C.
  - MODEL STREAM: u32 magic 0x033FB1A3, u32 version (0x4A), u32 thunk flag,
    str the authoring path, u32 the frame count, u32 the clip count + clips,
    u32 the mesh count + meshes, a 26 byte bbox, the object sections, the
    skeleton.
  - A MESH is a name, two bools, two i32, then TWO submeshes (name, name2,
    four bools, a vertex blob, a 0x44 byte face array, a bool) and then two
    arrays of 0x0C byte elements and four arrays of 4 byte elements. In the
    shipped files EVERY one of those arrays is a PLACEHOLDER (identical default
    bytes for all six meshes of the human model) - so the real geometry is NOT
    in the model stream.
  - THE GEOMETRY IS IN THE BLOCK 1 TAIL (after the skeleton) and in block 2.
    Measured on sniperrifle.ghb: the tail starts at 0x1937 and block 2 at
    0x4533. The tail begins with two u32 sizes (215808 and 41984 in the human
    model), then padding, then an index table, then per submesh a header of
    three u32 and the vertex records.
  - VERTEX RECORD: 44 bytes, confirmed. At +0x00 three small floats (0.03 to
    0.05, they look like UVs), at +0x0C three floats that ARE THE POSITION
    (verified: they fall inside the model bounding box), then 20 further
    bytes. The stride was verified: 0x1be0 -> 0x1c0c, both with valid
    positions.
  - The index table holds u32 values that rise in steps, each repeated 6 times:
    256,256,256,256,256,256,512,512,512,512,512,512,768,... up to 6144,
    starting at tail+0x20 (0x1957 in the weapon). 158 such entries were found
    before the pattern broke. The values are multiples of 256, so they may be
    BYTE OFFSETS, or (index+1)<<8, or scaled indices. WHAT THEY MEAN IS
    UNKNOWN - that is the key question.
  - Block 2 starts with the "bolt tracks" (45 in the human model, 2 in the
    weapon): each is frameCount*8 bytes and they hold a bolt's position and
    rotation for every animation frame. After them there is a large high
    entropy region (6.5 MB in the human model) that is not plain vertex data.
  - The REA MCP server (Ghidra 12.1.4) is available for the engine side: the
    Ghoul subsystem lives in SoF.exe at roughly 0x2008F000-0x200E9000. The
    container reader is 0x200BD430, the model loader 0x200A18D0, the model
    class vtable 0x201129E0 (the draw path is in the engine, NOT in
    ref_gl.dll). SoF.exe's image base is 0x20000000.
    Your previous lighting work shows you how to drive it.
  - The model is SKINNED: the 0x108 objects are the bones (199 for the human,
    named _HELMETHEAD, _NECK, _RTIGHTTHIGH, ...), the 0xE8 objects are the
    bolts (ABOLT_HEAD_T, SBOLT_MOUTH, QUAKE_ORIGIN, ...). The 199 bones have
    mode==0 and no block 2 track; the 45 bolts have mode!=0 and a track.
  - The skins are .tga files next to the models
    (ghoul/weapon/inview/sniperrifle/sniperrifle.tga and _spec.tga) and the
    bolt-on parts are separate .ghb files (ghoul/enemy/bolt/*.ghb).

DELIVERABLES
  1. The complete mesh layout: where the index table is and what its values
     mean, how the indices map to the vertex records, the full 44 byte vertex
     record layout (what the 3 small floats are, what the 3 position floats
     are, and each of the 5 trailing u32: bone index, uv index, packed normal,
     flags), the vertex and triangle counts per submesh, and how the submesh
     headers (three u32 each) encode them.
  2. A working extractor: extend web/ghb.js so it returns, per mesh, the
     positions, the UVs, the triangle indices and the bone weights. Keep the
     existing exports intact.
  3. Render it: a new file web/www/sofmodel.js that loads a .ghb through
     /pak/<path>, builds the draw buffers and renders the model with the
     skin .tga. It must degrade gracefully when a model fails to parse.
  4. Wire it into the client: the local player and the other entities are
     drawn as placeholder boxes today (see the drawFigure function and the
     entity loop in app.js). Replace the placeholder with the real model when
     the model's name is known, and keep the placeholder as the fallback.
     The model index for an entity comes from the entity state's modelindex
     field and the model's name from the configstrings
     (web/sofstringtable.json maps a configstring value to the model path).
  5. Test it in the browser against the real dedicated server and take a
     screenshot of a real SoF character.

FILES
  You own: web/ghb.js, web/www/sofmodel.js, and you may add new files under
  web\ and web\www\.
  Do NOT modify: web\www\app.js, web\www\sof.js, web\www\index.html,
  web\www\content.*, web\bundle.js, web\sofproto.js, web\snapshot.js,
  web\playerstate.js, web\cmdenc.js, web\relay.js, web\mkbundle.js, and the
  .json/.html files in web\www\ - the other AI is editing them right now.
  If you need a change in one of those, write it in your own file and say
  which one-line change is needed.

WORKING RULES (learned the hard way here)
  - Never launch the SoF GUI client, only the dedicated server:
      Start-Process -FilePath "C:\Users\User\Soldier of Fortune\SoFTest.exe" `
        -ArgumentList "+set","dedicated","1","+set","sv_maxclients","16","+map","dm/nycdm1" `
        -WorkingDirectory "C:\Users\User\Soldier of Fortune"
    It listens on UDP 29000 and NEVER releases stale clients, so if a client
    stops spawning, kill SoFTest.exe and start it again.
  - Do not start a server with "+set developer 1" while hidden.
  - PowerShell mangles node -e with quotes and regex: put Node code in a .js
    file and run it.
  - The shell guard rejects commands that spawn detached children or that
    contain process.kill. Use Start-Process in its own command.
  - Do not round-trip source files through Get-Content/Set-Content; it has
    corrupted app.js once. Edit the file directly.
  - Source files: UTF-8, tabs, no comments unless they earn their place.

VERIFICATION - do not claim it works until you have seen it
  - The relay serves the client on http://127.0.0.1:8080. Restart it with:
      node relay.js --http 8080 --server 127.0.0.1:29000 --pak "C:\Users\User\Soldier of Fortune\Base\pak0.pak"
    (quote the path that has spaces).
  - web\cdp.js drives headless Chrome and takes a screenshot:
      node cdp.js "http://127.0.0.1:8080/index.html" out.png 14000 1280 720
  - web\drive.js drives a running Chrome over the DevTools protocol, evaluates
    JavaScript in the page and presses keys; see its header for the format.

WHEN YOU ARE DONE
  - Update analysis\BROWSER_ROADMAP.md (a dated row in the session log, the
    progress table and the checkboxes your work touches) and
    analysis\PLAYABILITY.md (the scores), and add what you proved to
    analysis\PROTOCOL.md.
  - Summarise: what you proved, what you changed, what is still unknown, and
    the exact one-line changes the other AI has to make to your code.
```
