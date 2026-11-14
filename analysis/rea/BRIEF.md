# The RE brief — how to work in this project

Project: **Soldier of Fortune** (the 2000 PC game) reverse engineering.
Repo: `/home/luked/Desktop/GITHUB/SOF BROWSER`

## The binaries

| file | what | image base |
|---|---|---|
| `sof_target/SoF.exe` | the engine + the Ghoul model/geometry decoders | `0x20000000` |
| `sof_target/gamex86.dll` | the game logic module (= `ghoulmod.dll`, byte identical) | `0x50000000` |
| `sof_target/refgl.dll` | **the renderer** (`Soldier of Fortune/ref_gl.dll`) — the sky, the BSP draw, the textures | `0x30000000` |
| `sof_target/qeffectsgl.dll` | **the effects renderer** (`Soldier of Fortune/QeffectsGL.dll`) — the `.eft` particles, the decals | `0x10000000` |

The renderer is a **separate DLL** loaded at runtime: the engine loads
`ref_%s.dll` (`SoF.exe 0x2013AD34`) → `ref_gl.dll`, and calls its
`GetRefAPI` to fill the **55-dword API table** at `SoF.exe 0x20403570`
(`API[0]` = the version 3).  See `analysis/sky.md`.

For `gamex86.dll` a **string VA = the file offset + 0x50000000**.
For `SoF.exe` a **VA = the file offset + 0x20000000** for the file-backed
sections (`.text` raddr 0x1000, `.rdata` raddr 0x111000, `.data` raddr
0x11c000); the addresses above `0x20400000` are BSS.
For `refgl.dll`: `.text` raddr 0x1000, `.rdata` raddr 0x2c000, `.data`
raddr 0x2e000 (the file-backed part ends at 0x35000; the rest is BSS).
For `qeffectsgl.dll`: `.text` raddr 0x400, `.rdata` raddr 0x1be00,
`.data` raddr 0x25a00.

## The offline corpora — USE THESE FIRST (they are already decompiled)

| file | what |
|---|---|
| `analysis/rea/sof_all/functions/0x<addr>.c` | 4320 Ghidra decompiles of SoF.exe. The file name is the VA, lower case, with a `0x` prefix: `0x20054750.c` |
| `analysis/rea/ghoul_all/functions/0x<addr>.c` | 3127 Ghidra decompiles of gamex86.dll |
| `analysis/rea/refgl_all/functions/0x<addr>.c` | **616** Ghidra decompiles of **refgl.dll** (the renderer) |
| `analysis/rea/qeffects_all/functions/0x<addr>.c` | **802** Ghidra decompiles of **qeffectsgl.dll** (the effects renderer) |
| `analysis/rea/sof_disasm.txt` | the **full** objdump disassembly of SoF.exe (18 MB) — grep it, don't read it |
| `analysis/rea/game_disasm.txt` | the full objdump disassembly of gamex86.dll |
| `analysis/rea/sof_import_table.txt` | the 99-entry engine → module import map: `import[i]` = the engine function the module's `DAT_5015C9F0 + 4*i` points at |
| `analysis/ghb_format.md` | the Ghoul `.ghb` + the Ghoul net protocol documentation (the main format doc) |
| `analysis/*.md` | the other format / subsystem docs |

A decompile file starts with a header of `//` comment lines (the REA
provenance) and then the pseudocode from about line 12.

## The REA fallback (only when the offline corpus does not have the address)

```bash
tools/rea.py decompile sof_target/SoF.exe 0x20054750 --out my_fn
tools/rea.py decompile sof_target/gamex86.dll 0x5007ec40 --out my_fn
tools/rea.py xrefs    sof_target/SoF.exe 0x201571ec
tools/rea.py search   sof_target/SoF.exe "Bad Ghoul"
tools/rea.py function sof_target/SoF.exe 0x20054750
tools/rea.py instructions sof_target/SoF.exe 0x20054750
```

**Whole-DLL corpora** (the fast way to get a new corpus — the output
directory must **not** exist yet, or pass `--resume`):

```bash
export PATH="$HOME/.local/node/bin:$PATH"
export JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64
export GHIDRA_INSTALL_DIR=/data/Projects/tools/ghidra_12.1.4_PUBLIC
export REA_GHIDRA_STARTUP_TIMEOUT_MS=900000
rea decompile-all sof_target/refgl.dll --output analysis/rea/refgl_all \
    --provider ghidra --layout address
```

(The corpora use the same `// range: 0xSTART-0xEND inclusive` header, so
`analysis/fnmap.py` maps an address to its decompile.)

The wrapper writes the evidence JSON and the pseudocode into
`analysis/rea/` and prints only a short summary. It needs
`JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64` and
`GHIDRA_INSTALL_DIR=/data/Projects/tools/ghidra_12.1.4_PUBLIC` (the wrapper
sets both). A Ghidra import takes a while — be patient, and prefer the
offline corpus.

## The hard rules

1. **Never launch the SoF GUI client.** Only the dedicated server may be
   started. The GUI grabs the mouse and changes the resolution.
2. **Keep the chat output small.** Do not paste whole decompiles into the
   conversation. Read targeted excerpts (≤ ~40-110 lines) and write the
   findings to a **markdown file** in the repo.
3. **Never keep source files in `/tmp/opencode`** — it was wiped by a
   server restart mid-project. Everything lives in the repo.
4. **Do not delete anything outside the repo** — the user manages the disk.
5. **Do not commit.** Write the files; the lead agent reviews and commits.
6. Report findings as **provenance**: the address, the function, the
   evidence (a short quoted excerpt or a disassembly slice), and the
   conclusion. A claim without an address is worthless.
