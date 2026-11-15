#!/usr/bin/env python3
"""
api_tables.py - rebuild the two renderer/engine API tables from the binaries.

There are two tables and they run in opposite directions:

  * the ENGINE's table (27 entries) is built by SoF.exe on the stack inside
    the renderer loader (SoF.exe 0x20066E10) and handed to the renderer's
    GetRefAPI(); the renderer copies it into refgl.dll's .data at
    0x3008FDC8 and calls through it.

  * the RENDERER's table (55 entries) is built by refgl.dll on the stack
    inside GetRefAPI (refgl.dll 0x3000DDB0) and copied back into the
    engine's buffer at SoF.exe 0x20403570; the engine calls through it.

Both tables are laid out by hand in the binary, so the offsets below are
read straight out of the objdump output - nothing is guessed.

usage: python3 api_tables.py
"""

import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
SOF = os.path.join(ROOT, "sof_target", "SoF.exe")
REFGL = os.path.join(ROOT, "sof_target", "refgl.dll")

# the names Ghidra recovered for the engine's functions (from the
# "/* 0x..... N  Name */" comments the decompiler leaves behind)
ENGINE_NAMES = {
    0x20018380: "a va_list copy helper",
    0x20018050: "a cvar callback registrar",
    0x2001B510: "a local engine helper",
    0x2001F090: "Z_Malloc",
    0x2001EBC0: "Z_Free",
    0x2001F300: "flrand",
    0x2001F350: "irand",
    0x20019130: "Cmd_AddCommand",
    0x200191E0: "Cmd_RemoveCommand",
    0x20018D20: "Cmd_Argc",
    0x20018D30: "Cmd_Argv",
    0x20021AE0: "Cvar_Get",
    0x20022190: "Cvar_Set",
    0x20022350: "Cvar_SetValue",
    0x20025370: "FS_LoadFile",
    0x20025420: "FS_FreeFile",
    0x20025750: "FS_* -> &DAT_2026AA80",
    0x20025760: "FS_* -> *(DAT_2026AA74+4)",
    0x20024D90: "a path/extension helper",
    0x200216C0: "sets the quiet flag DAT_2024B1DC",
    0x20066470: "Con_Printf(level,fmt,...)  <- the renderer's normal print",
    0x20066530: "Com_ErrorEx(level,fmt,...)  <- the renderer's error print",
    0x20066D80: "a local engine helper",
    0x20066DF0: "a local engine helper",
    0x20120648: "a DATA pointer, not a function",
}

# the renderer's table, as documented in analysis/render_extras.md
RENDERER_NAMES = {
    0x3000F550: "R_Init",
    0x30010C60: "R_Shutdown",
    0x30010CE0: "R_SetMode",
    0x3000AB80: "R_RegisterModel",
    0x3000B900: "R_AllocModel",
    0x30007A30: "R_FreeModel",
    0x30007A50: "R_BeginRegistration",
    0x30007A80: "R_EndRegistration",
    0x30007AA0: "R_SetRegistrationSequence",
    0x30007AD0: "R_LoadImage",
    0x30007AF0: "R_FreeImage",
    0x30019380: "R_SetSky",
    0x30016B90: "R_SetCloud (a stub)",
    0x30016A40: "R_SetFog",
    0x3000B990: "R_SetView",
    0x3000DFE0: "R_RenderView",
    0x30001CD0: "R_SetupFrame",
    0x30001ED0: "R_RenderEntity",
    0x30002080: "R_RenderWorld",
    0x30002240: "-",
    0x30001D10: "R_Draw2D",
    0x30001850: "R_DrawPic",
    0x30001AB0: "-",
    0x300019D0: "R_DrawScaled",
    0x30001A40: "R_DrawRotated",
    0x30001B00: "R_DrawColor",
    0x30002460: "R_DrawFade",
    0x300025B0: "R_DrawRect",
    0x30002740: "R_DrawStretch",
    0x30002A40: "R_Draw3D",
    0x30002C00: "R_DrawLine",
    0x30002D20: "-",
    0x30002EA0: "R_DrawPoly",
    0x30002F10: "-",
    0x30002F60: "-",
    0x30002FB0: "-",
    0x30003000: "-",
    0x30007C80: "-",
    0x30008FF0: "-",
    0x30016960: "-",
    0x30003040: "-",
    0x30010D50: "-",
    0x30012280: "-",
    0x30012360: "-",
    0x3001C640: "-",
    0x300078E0: "-",
    0x3001C6D0: "-",
    0x300045B0: "-",
    0x300042F0: "-",
    0x300044C0: "-",
    0x30011DB0: "-",
    0x3001D4D0: "-",
}


def corpus_name(corpus, addr):
    """the name Ghidra gave a function, read from the decompile corpus."""
    for spelling in ("0x%08x.c" % addr, "0x%08x.c" % addr):
        f = os.path.join(HERE, corpus, "functions", spelling)
        if not os.path.isfile(f):
            continue
        with open(f, "r", errors="replace") as fh:
            for line in fh:
                if line.startswith("// name:"):
                    return line.split(":", 1)[1].strip()
    return None


def disasm(path, start, stop):
    out = subprocess.run(["objdump", "-d", "--start-address=%#x" % start,
                          "--stop-address=%#x" % stop, path],
                         capture_output=True, text=True).stdout
    return out.split("\n")


def stack_writes(path, start, stop):
    """every  'movl $imm, disp(%esp)'  in the range -> {disp: imm}"""
    writes = {}
    for L in disasm(path, start, stop):
        m = re.search(r"movl\s+\$0x([0-9a-f]+),0x([0-9a-f]+)\(%esp\)", L)
        if m:
            writes[int(m.group(2), 16)] = int(m.group(1), 16)
    return writes


def engine_table():
    """
    SoF.exe 0x20066E10 - FUN_20066e10, the renderer loader.

    The frame is built like this:

        sub  $0x224,%esp ; push ebx ; push ebp ; push esi ; push edi
        ...
        push $0x2013ACE0       ; "GetRefAPI"   <- these two pushes are
        push %eax              ; the module    <- still on the stack when
        ...                    ;              <- the table is filled in
        movl $0x20019130,0x24(%esp)   <- so every offset below is
        ...                          <- relative to the PUSHED stack

    After GetProcAddress has eaten its two arguments the stack is back to
    the un-pushed frame, and then

        sub  $0x6c,%esp
        lea  0x7c(%esp),%esi      ; the source = the table
        mov  %esp,%edi            ; the destination = 0x6c bytes lower
        rep  movsl                ; 27 dwords

    so the table really starts at the pushed-stack offset 0x18 and the
    renderer reads it back from the copy.
    """
    writes = stack_writes(SOF, 0x20066EA5, 0x20066F70)
    base = 0x18
    out = []
    for i in range(27):
        off = base + 4 * i
        out.append((off, writes.get(off)))
    return out


def renderer_table():
    """
    refgl.dll 0x3000DDB0 - GetRefAPI.

        sub  $0xdc,%esp ; push esi ; push edi
        movl $0x3,0x8(%esp)         <- the version, the table starts here
        ...
        lea  0x8(%esp),%esi ; mov %edi,%eax ; rep movsl   (55 dwords)
    """
    writes = stack_writes(REFGL, 0x3000DDC9, 0x3000DFC0)
    base = 0x08
    out = []
    for i in range(55):
        off = base + 4 * i
        out.append((off, writes.get(off)))
    return out


def main():
    print("=" * 74)
    print("the ENGINE's API table (27 entries)")
    print("  built by SoF.exe 0x20066E10, copied to refgl.dll 0x3008FDC8")
    print("=" * 74)
    for i, (off, fn) in enumerate(engine_table()):
        if fn is None:
            print("  [%2d]  (the slot is never written - it is stack junk)"
                  % i)
            continue
        name = ENGINE_NAMES.get(fn) or corpus_name("sof_all", fn) or "?"
        print("  [%2d]  SoF.exe 0x%08x   refgl 0x%08X   %s"
              % (i, fn, 0x3008FDC8 + 4 * i, name))
    print()
    print("=" * 74)
    print("the RENDERER's API table (55 entries)")
    print("  built by refgl.dll 0x3000DDB0, copied to SoF.exe 0x20403570")
    print("=" * 74)
    for i, (off, fn) in enumerate(renderer_table()):
        if fn is None:
            print("  [%2d]  (the slot is never written - it is stack junk)"
                  % i)
            continue
        if i == 0:
            print("  [%2d]  refgl 0x%08x   SoF.exe 0x%08X   the version"
                  % (i, fn, 0x20403570 + 4 * i))
            continue
        name = RENDERER_NAMES.get(fn) or corpus_name("refgl_all", fn) or "?"
        print("  [%2d]  refgl 0x%08x   SoF.exe 0x%08X   %s"
              % (i, fn, 0x20403570 + 4 * i, name))
    return 0


if __name__ == "__main__":
    sys.exit(main())
