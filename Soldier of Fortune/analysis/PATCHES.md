# Local modifications to the stock Q2 3.21 source

We build the engine from `C:\Users\User\q2src\extract\Quake-2-master` (id-Software
Quake-2 master = 3.21). Two files have been edited locally. Both changes are
defensive and do not alter gameplay or network behaviour.

## 1. `win32/sys_win.c` — `Sys_ConsoleInput()`

Stock behaviour: when `dedicated` is set, `Sys_ConsoleInput()` calls
`GetNumberOfConsoleInputEvents(hinput, ...)` and calls `Sys_Error()` if it fails.

```c
if (!GetNumberOfConsoleInputEvents (hinput, &numevents))
    Sys_Error ("Error getting # of console events");
```

When stdin is **not** a real console — a pipe or file, i.e. any harness or CI
run that redirects stdin/stdout — that call fails and the dedicated server dies
immediately with that message.

Patch: treat a non-console stdin as "no console input available" and return NULL.

```c
if (!GetConsoleMode (hinput, &dummy2))
    return NULL;
```

Side effect: with stdin redirected there is also no way to type `quit`, so the
server must be stopped by terminating the process.

## 2. `qcommon/common.c` — `Com_Printf()`

Stock behaviour prints via `Con_Print()` / `Sys_ConsoleOutput()` only. The CRT
block-buffers stdout when it is redirected, so a log is lost if the process is
killed rather than exiting cleanly.

Patch: added `fflush (stdout);` after `Sys_ConsoleOutput (msg);`.

Without this, headless runs produced only 4 lines of output before dying.

---

## Not modified

* `game/` — the ported game module lives in `C:\Users\User\q2work\sof2\game`,
  a separate copy. The pristine tree is untouched apart from the two files above.
* `qcommon/files.c`, `cmodel.c`, BSP loading — all stock.

## Build inputs

* Engine: `C:\Users\User\q2work\sof2\build_engine.cmd` → `quake2.exe` + `ref_gl.dll`
* Game module: `C:\Users\User\q2work\sof2\build.cmd` → `gamex86.dll`
* Unit tests: `C:\Users\User\q2work\sof2\tools\build_test.cmd`
* Run tree: `C:\Users\User\q2work\sof2\dist\Release`
  * `quake2.exe`, `ref_gl.dll`, `gamex86.dll`
  * `baseq2\pak0.pak` … `pak3.pak`  ← **data must live in the `baseq2` subfolder**
    (`qcommon/files.c:865` only ever adds `<basedir>/baseq2`)

## Data provenance

| pak | size | contents |
|---|---|---|
| `pak0.pak` | 175.5 MB | 39 retail single-player maps + full assets (2118 textures, 553 sounds, 273 models). Directory checksum does **not** match retail `PAK0_CHECKSUM` (`0x40e614e0`). |
| `pak1.pak` | 12.4 MB | `q2dm1`–`q2dm8`, all BSP v38 — the deathmatch maps. |
| `pak2.pak` | 44 KB | misc. |
| `pak3.pak` | 47.6 MB | demo data (`demo1`–`demo3`). |

Verified with `dist\Release\pak_verify.exe <pak> --list-bsp`, which recomputes the
directory checksum exactly as `qcommon/md4.c:265 Com_BlockChecksum()` does
(MD4 of the directory, four digest words XOR-folded).
## 3. `win32/rw_imp.c` - `Sys_MakeCodeWriteable()`

Stock behaviour makes the edge rasteriser code pages `PAGE_READWRITE`:

    if (!VirtualProtect((LPVOID)startaddr, length, PAGE_READWRITE, &flOldProtect))

`PAGE_READWRITE` drops the **execute** bit, so the pages become
non-executable. The first call into the edge code then dies with an
`EXCEPTION_ACCESS_VIOLATION` of type EXECUTE, at
`ref_soft.dll+0x9640` in `FUN_1000923e`. The engine's own
`Sys_MakeCodeWriteable()` in `win32/q_shwin.c` uses
`PAGE_EXECUTE_READWRITE`, which is the correct value for code.

Patch: use `PAGE_EXECUTE_READWRITE`.

## 4. `win32/vid_dll.c` - `vid_ref` default

Stock behaviour:

    vid_ref = Cvar_Get ("vid_ref", "soft", CVAR_ARCHIVE);

The client therefore asks for `ref_soft.dll` first. Patch: default to
`"gl"`; the engine still falls back to `"soft"` automatically if
`ref_gl.dll` cannot be loaded, and `VID_LoadRefresh()` reports
"Couldn't fall back to software refresh!" in that case.

## 5. `game/g_combat.c` - `SofGibLevel()` call site

`SofGibLevel(targ, take)` is defined against the **pre-damage** health
(`resulting = targ->health - take`), but `T_Damage` called it *after*
`targ->health` had already been reduced, so the damage was subtracted
twice and the SoF gib threshold was crossed early. The call now happens
before the health reduction. `SofGibLevel` itself is unchanged.
