#!/usr/bin/env python3
"""The module -> engine import table (`gamex86.dll` -> `SoF.exe`).

The game module does not import the engine's symbols through the PE import
directory.  The engine builds a **99 entry function-pointer table** on the
stack and hands it to the module's `GetGameAPI` export, which copies it
verbatim:

    SoF.exe  0x2005CDB0   the builder (sub $0x18c,%esp)
    SoF.exe  0x2005D0EF   lea  0x0(%esp),%eax      ; the table base
    SoF.exe  0x2005D0FE   push %eax                ; ... and the argument
    SoF.exe  0x2005D1AF   call 0x20065F20          ; -> GetGameAPI(&table)
    gamex86.dll 0x500AD9B0  GetGameAPI:
        500ad9b6: mov $0x63,%ecx        ; 99 dwords
        500ad9bb: mov $0x5015c9f0,%edi
        500ad9c0: rep movsl            ; esi -> 0x5015C9F0

so **slot i = the dword at `0x5015C9F0 + 4*i`** and it points at the engine
function `SoF.exe <value>`.

The table is built with `movl $0x...,N(%esp)` - N is the offset from the
table base.  The `push %eax` at 0x2005D0FE shifts esp by -4, so every write
*after* that point lands at `N-4` in the table.  This script reproduces that.

    python3 analysis/engine_imports.py
"""
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DIS = os.path.join(ROOT, 'analysis', 'rea', 'sof_disasm.txt')

LO = 0x2005CDD1          # the first table write
HI = 0x2005D1B0          # the last table write
PUSH_TABLE = 0x2005D0FE  # the `push %eax` that shifts the stack

LINE = re.compile(r'^([0-9a-f]+):\s+(.*)$')
MOVL = re.compile(r'movl\s+\$0x([0-9a-f]+),0x([0-9a-f]+)\(%esp\)')

# The name of every slot, with the evidence that pins it down.  The evidence
# is a short quote taken from the engine (or the module) - see
# `analysis/engine_imports.md` for the full table.
NAMES = {
    0: 'PF_PrecacheModel',
    1: 'PF_PrecacheSound',
    2: 'PF_PrecacheEffect',
    3: 'PF_PrecacheImage',
    4: 'PF_RemoveSound',
    5: 'the 4-number flag-key resolver (parses "d:d:d:d", masks it against '
       'the table at 0x20392dd0)',
    6: 'the deathmatch check (Cvar_GetFloat("deathmatch"))',
    7: 'PF_setmodel',
    8: 'PF_setrendermodel',
    9: 'Cmd_Argc',
    10: 'Cmd_Argv',
    11: 'Cmd_Args',
    12: 'SV_BroadcastCommand(level, fmt, ...)',
    13: 'Com_DPrintf',
    14: 'cprintf',
    15: 'clprintf',
    16: 'the client movement download (svc 0x26)',
    17: 'the client text message (svc 0x11)',
    18: 'cinprintf',
    19: 'the entity-state svc 0x12 writer',
    20: 'the client-message svc 0x12 writer',
    21: 'the 0x28-byte entity-state copy',
    22: 'the StartSound wrapper',
    23: 'SV_StartSound',
    24: '(the hole - never written, never called)',
    25: 'T_Damage',
    26: 'the character filter',
    27: 'the loading menu',
    28: 'the SV_Multicast wrapper (passes a null 3rd argument)',
    29: 'SV_Multicast',
    30: 'the client-side entity field read',
    31: 'SZ_WriteByte (a duplicate of slot 32, never called)',
    32: 'SZ_WriteByte',
    33: 'SZ_WriteShort',
    34: 'SZ_WriteLong',
    35: 'SZ_WriteLong (the native-dword variant)',
    36: 'SZ_WriteString',
    37: 'SZ_WriteFloat',
    38: 'SZ_WriteVector',
    39: 'SZ_WriteChar',
    40: 'SZ_WriteByte (the raw one)',
    41: 'SZ_WriteShort (the raw one)',
    42: 'SZ_WriteLong (the raw one)',
    43: 'the entity-state field write',
    44: 'the entity-state field read',
    45: 'VectorDotProduct',
    46: 'the entity packet writer (svc 0x21)',
    47: 'the string package register',
    48: 'the string message sender (svc 0x22)',
    49: 'the localised string message sender (svc 0x27)',
    50: 'the string id -> text lookup',
    51: 'the string id -> text lookup (the checked one)',
    52: 'the trace',
    53: 'the trace variant',
    54: 'the box trace (the full one)',
    55: 'the leaf-area velocity helper',
    56: 'CM_LeafArea',
    57: 'the PVS/cluster visibility test between two points',
    58: 'CM_Areaportal',
    59: 'the cvar-is-zero check',
    60: 'the renderer parms getter',
    61: 'the Ghoul model factory',
    62: 'the Ghoul model loader (Ghoul/%s/%s + the comskin fallback)',
    63: 'the Ghoul text line reader',
    64: 'the Ghoul .gsq loader',
    65: 'the Ghoul model loader',
    66: 'the Ghoul sequence loader',
    67: '(a data pointer, not a function)',
    68: 'the configstring setter',
    69: 'MSG_Init',
    70: 'MSG_Clear',
    71: 'SZ_Write',
    72: 'the module error trap',
    73: 'the server console print',
    74: 'the player client API loader',
    75: 'the player API unload',
    76: 'flrand',
    77: 'irand',
    78: 'the entity link/move (the rotated bounding box)',
    79: 'the entity unlink',
    80: 'the box trace (the collision globals)',
    81: 'PM_Move',
    82: 'Z_Malloc',
    83: 'Z_Free',
    84: 'the tagged-zone free (Z_FreeTagged)',
    85: 'the chunk writer',
    86: 'the chunk reader',
    87: 'Cvar_Get',
    88: 'Cvar_Set',
    89: 'Cvar_SetValue',
    90: 'the cvar setter variant (Cvar_SetForce)',
    91: 'the cvar dump by flags',
    92: 'Cvar_GetFloat',
    93: 'FS_LoadFile',
    94: 'FS_FreeFile (a tail call to Z_Free)',
    95: 'FS_ReturnFileLength',
    96: 'FS_FReadFile',
    97: 'FS_FileExists',
    98: 'the console log append (Cbuf_AddText)',
}

# The evidence for every name: a short quote from the engine (or the module)
# that pins the slot down.  `engine` = a quote from SoF.exe, `module` = a
# quote from gamex86.dll.
PROV = {
    0: 'engine 0x2005d534: push $0x20139738  ; "model"',
    1: 'engine 0x2005d554: push $0x20132e2c  ; "sound"',
    2: 'engine 0x2005d574: push $0x20132e14  ; "effect"',
    3: 'engine 0x2005d594: push $0x20139740  ; "image"',
    4: 'engine 0x2005d5f4: push $0x20139730  ; "remove"',
    5: 'engine 0x20059522: cmp $0x3a,%al  ; the \':\' separator; the table at '
       '0x20392dd0 and the "rcon_password" cvar at 0x203fec78',
    6: 'engine 0x2005cae0: push $0x2011d664  ; "deathmatch"',
    7: 'engine 0x2005c97a: push $0x20139688  ; "PF_setmodel: NULL"',
    8: 'engine 0x2005ca19: push $0x2013969c  ; "PF_setrendermodel: NULL"',
    9: 'engine 0x20018d20: mov 0x2023f2d8,%eax',
    10: 'engine 0x20018d30: mov 0x4(%esp),%eax; mov 0x2023f2d8,%eax',
    11: 'engine 0x20018d50: mov $0x2023f420,%eax  ; the raw command line',
    12: 'engine 0x200618d4: sub $0x800,%esp + the client loop over 0x20396eec',
    13: 'engine 0x2005c2a0: a 0x400 byte vsnprintf into 0x2001c8e0',
    14: 'engine 0x2005c2e0: push $0x20139628  ; "cprintf to a non-client"',
    15: 'engine 0x2005c3b0: push $0x20139640  ; "clprintf to a non-client"',
    16: 'engine 0x2005c5d7: push $0x26; push $0x203f6c34; call 0x2001cb00',
    17: 'engine 0x2005c4ea: push $0x11; push $0x203f6c34; call 0x2001cb00',
    18: 'engine 0x2005c6a4: push $0x2013965c  ; "cinprintf to a non-client"',
    19: 'engine 0x20061a3a: push $0x12; push %esi; call 0x2001cb00',
    20: 'engine 0x2005c7c7: push $0x12; push $0x203f6c34; call 0x2001cb00',
    21: 'engine 0x2005c896: push $0x28; push %ecx; call 0x2001cb00',
    22: 'engine 0x2005cd59: call 0x20061f50  ; StartSound',
    23: 'engine 0x20061f50: push $0x2013a2f0  ; "SV_StartSound: volume = %f"',
    24: 'the engine never writes it and the module never calls it',
    25: 'engine 0x2002330f: push $0x20130e80  ; "Doing %d damage\\n"',
    26: 'engine 0x2002348a: mov $0x2024b2f9,%edi  ; the allowed character sets',
    27: 'engine 0x20016630: the "menu_loading" cvar at 0x2011f7c0',
    28: 'engine 0x2005cd98: push $0x0; push %eax; push %ecx; call 0x20061a80',
    29: 'engine 0x20061b34: push $0x2013a29c  ; "SV_Multicast: bad to:%i"',
    30: 'engine 0x2005c210: the entity+0x118 & 0x200 test, then MSG_Clear',
    31: 'engine 0x2005cb40: call 0x2001cb00  ; SZ_WriteByte',
    32: 'engine 0x2005cb40: call 0x2001cb00  ; SZ_WriteByte',
    33: 'engine 0x2005cb60: call 0x2001cb70  ; SZ_WriteShort',
    34: 'engine 0x2005cb80: call 0x2001cbf0  ; SZ_WriteLong',
    35: 'engine 0x2005cba0: call 0x2001cc80  ; a 4 byte dword write',
    36: 'engine 0x2005cbc0: call 0x2001cd00  ; a NUL terminated string write',
    37: 'engine 0x2005cbe0: call 0x2001ce00  ; a float as two shorts',
    38: 'engine 0x2005cc00: call 0x2001d0e0  ; the axis-compressed vector',
    39: 'engine 0x2005cc20: call 0x2001cf70  ; one byte from a float',
    40: '0x2001cb00: *(undefined1 *)(*(int *)(param_1 + 4) + iVar1) = param_2;',
    41: '0x2001cb70: puVar1[1] = (char)((uint)param_2 >> 8);',
    42: '0x2001cbf0: puVar1[3] = (char)((uint)param_2 >> 0x18);',
    43: 'engine 0x2005cc50: imul $0xd2ac (the entity stride) + 0x52b4',
    44: 'engine 0x2005cc80: the same stride arithmetic',
    45: 'engine 0x2005cc40: jmp 0x2001d080  ; the dot product',
    46: 'engine 0x2005c8f6: push $0x21; push %esi; call 0x2001cb00',
    47: 'engine 0x20057f28: call 0x20057ca0 (name, 2) then 0x2005d5d0',
    48: 'engine 0x20058359: push $0x22; push %ecx; call 0x2001cb00',
    49: 'engine 0x20058593: push $0x27; push %ecx; call 0x2001cb00',
    50: 'engine 0x20058840: push $0x20138c78  ; "String package not registered '
        'for ID %04x"',
    51: 'engine 0x20058147: push $0x20138c78  ; the same error',
    52: 'engine 0x20064e60: sub $0xf0,%esp  ; the trace frame',
    53: 'engine 0x200652db: call 0x2001b570  ; the trace into the trace_t',
    54: 'engine 0x20064770: mov $0x1008,%eax; call 0x200fa720  ; the 0x1008 '
        'byte work area',
    55: 'engine 0x2001c5df: mov 0x34(%edx),%eax / mov 0x30(%edx),%eax',
    56: 'engine 0x2001c370: push $0x20120598  ; "CM_LeafArea: bad number"',
    57: 'engine 0x2005cd0a: mov (%ebx,%edi,1),%al; test %dl,%al  ; the PVS bit '
        'test between the two clusters',
    58: 'engine 0x2001bfc7: push $0x2012060c  ; "areaportal (%d) > '
        'numareaportals (%d)"',
    59: 'engine 0x2001c095: flds 0x18(%eax); fcomps 0x20111384  ; 0.0, then '
        'mov $0x1,%eax',
    60: 'engine 0x2008ea44: call 0x20069630  ; the three parms blocks '
        '(0x204036a0 / 0x20403878 / 0x20403a48)',
    61: 'engine 0x200494d6: push $0x3b4; call 0x200fa352  ; the 0x3b4 byte '
        'Ghoul model object',
    62: 'engine 0x20048e29: push $0x2013504c  ; "Ghoul/%s/%s" (+ '
        '"Ghoul/comskin/%s" at 0x20135038)',
    63: 'engine 0x200490b7: cmp $0xa,%dl  ; the newline',
    64: 'engine 0x20049112: push $0x20135058  ; "%s.gsq"',
    65: 'engine 0x200491bf: push $0x20135058  ; "%s.gsq" + the model load',
    66: 'engine 0x200493a5: push $0x20135058  ; "%s.gsq"',
    67: 'the engine saves/clears/restores 0x20396ddc around the entity '
        'table\'s vtable+0x48 call (0x2005a9b0)',
    68: 'engine 0x2005ca53: push $0x201396b4  ; "configstring: bad index %i"',
    69: '0x2001e700: *param_1 = 0; param_1[1] = param_2; param_1[2] = '
        'param_3;',
    70: '0x2001e730: *(undefined4 *)(param_1 + 0xc) = 0; *(undefined1 '
        '*)(param_1 + 1) = 0;',
    71: '0x2001e7b0: the copy loop into *(int *)(param_1 + 4)',
    72: 'engine 0x2005c952: push $0x20139678  ; "Game Error: %s"',
    73: 'engine 0x20065bf0: FUN_200faaad(&DAT_2011d114,param_1)  ; the "%s" '
        'server console print',
    74: 'engine 0x20066100: "player.dll" at 0x2013aa98, "%s/%s/%s" at '
        '0x2013a9fc and "final" at 0x2013aa08',
    75: 'engine 0x200660e5: push $0x2013aa48  ; "FreeLibrary failed for '
        'player library"',
    76: '0x2001f300: flrand',
    77: '0x2001f350: irand',
    78: 'engine 0x20063d9d: fcos / fsin  ; the rotated bounding box, then the '
        'origin updates at +0x134 / +0x140',
    79: 'engine 0x20063c2b: mov %esi,(%edx) / mov %esi,0x4(%edx)  ; the '
        'links at +0x80 / +0x84',
    80: 'engine 0x2006472c: mov %eax,0x204034ec  ; the collision globals, '
        'then call 0x200645c0',
    81: 'engine 0x20054750: PM_Move',
    82: '0x2001f090: Z_Malloc',
    83: '0x2001ebc0: Z_Free (the 0x1d1d magic)',
    84: 'engine 0x2001f038: push $0x20121418  ; "Z_Free: bad magic" - it '
        'walks the zone list for the tag',
    85: 'engine 0x20060254: push $0x20139f88  ; "Attempting write of chunk %s '
        'length %d\\n", and the magic 0x1234abcd',
    86: 'engine 0x200604bf: push $0x2013a104  ; "Attempting read of chunk %s '
        'length %d\\n"',
    87: '0x20021ae0: Cvar_Get',
    88: 'engine 0x20022198: push $0x0; ... call 0x20021d70',
    89: '0x20022350: Cvar_SetValue',
    90: 'engine 0x20022178: push $0x1; ... call 0x20021d70',
    91: 'engine 0x20022c69: movb $0x0,0x2024afd0  ; the cvar dump buffer',
    92: '0x200216d0: a float return, with the "matrix"/"timescale" special '
        'cases',
    93: 'module 0x5004c21b: FS_LoadFile(path, buffer, &length)',
    94: 'engine 0x20025420: jmp 0x2001ebc0  ; FS_FreeFile is Z_Free',
    95: 'module 0x5005f87f: FS_ReturnFileLength',
    96: 'module 0x5005f89f: FS_FReadFile(path, buffer)',
    97: 'module 0x5001e247: FS_FileExists(path)',
    98: 'engine 0x200181a3: push $0x201200b8  ; "Cbuf_AddText: overflow"',
}


def markdown(table):
    """Emit the section 2 table of `analysis/engine_imports.md`."""
    print('| slot | engine | module | name | evidence |')
    print('|---|---|---|---|---|')
    for i in range(99):
        engine = ('`0x%08x`' % table[i]) if i in table else '-'
        module = '`0x%08x`' % (0x5015C9F0 + 4 * i)
        name = NAMES.get(i, '??')
        prov = PROV.get(i, '')
        prov = prov.replace('|', '\\|')
        print('| %d | %s | %s | %s | %s |' % (i, engine, module, name, prov))


def main():
    table = {}
    delta = 0
    with open(DIS, errors='replace') as fh:
        for line in fh:
            m = LINE.match(line.rstrip('\n'))
            if not m:
                continue
            addr = int(m.group(1), 16)
            if addr < LO:
                continue
            if addr > HI:
                break
            text = m.group(2)
            mm = MOVL.search(text)
            if mm:
                slot = (int(mm.group(2), 16) + delta) // 4
                table[slot] = int(mm.group(1), 16)
            # the objdump line starts with the raw bytes - strip them
            parts = text.split(None, 1)
            ins = parts[1] if len(parts) > 1 else text
            if re.match(r'push\s', ins):
                delta -= 4
            elif re.match(r'pop\s', ins):
                delta += 4
    if '--markdown' in sys.argv:
        markdown(table)
        return 0
    for i in sorted(table):
        print('%2d  SoF.exe 0x%08x   module 0x%08x   %s' %
              (i, table[i], 0x5015C9F0 + 4 * i, NAMES.get(i, '??')))
    missing = [i for i in range(99) if i not in table]
    if missing:
        print('no entry for the slots: %s' % missing, file=sys.stderr)
    unnamed = [i for i in range(99) if i not in NAMES]
    if unnamed:
        print('no name for the slots: %s' % unnamed, file=sys.stderr)
    return 0


if __name__ == '__main__':
    sys.exit(main())
