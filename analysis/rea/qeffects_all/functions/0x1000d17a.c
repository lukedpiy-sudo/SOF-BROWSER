// rea decompile_all
// name: doexit
// address: 0x1000d17a
// body: available
// range: 0x1000d17a-0x1000d2a4 inclusive
// range: 0x1000d2b4-0x1000d2b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1000d2ab) */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2010 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_34;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_10028700 != 1) {
    DAT_100286fc = 1;
    DAT_100286f8 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = DecodePointer(DAT_1002abcc);
      if (piVar1 != (int *)0x0) {
        piVar2 = DecodePointer(DAT_1002abc8);
        local_34 = piVar1;
        local_2c = piVar2;
        local_28 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = FUN_10011b6b();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = DecodePointer((PVOID)*piVar2);
            iVar3 = FUN_10011b6b();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = DecodePointer(DAT_1002abcc);
            piVar6 = DecodePointer(DAT_1002abc8);
            if ((local_28 != piVar5) || (piVar1 = local_34, local_2c != piVar6)) {
              piVar1 = piVar5;
              piVar2 = piVar6;
              local_34 = piVar5;
              local_2c = piVar6;
              local_28 = piVar5;
            }
          }
        }
      }
      for (local_20 = &DAT_1001d18c; local_20 < &DAT_1001d198; local_20 = local_20 + 1) {
        if ((code *)*local_20 != (code *)0x0) {
          (*(code *)*local_20)();
        }
      }
    }
    for (local_24 = &DAT_1001d19c; local_24 < &DAT_1001d1a0; local_24 = local_24 + 1) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)();
      }
    }
  }
  FUN_1000d2a5();
  if (param_3 == 0) {
    DAT_10028700 = 1;
    FUN_10010114(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}

