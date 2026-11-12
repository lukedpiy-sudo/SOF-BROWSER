// rea decompile_all
// name: FUN_5006e660
// address: 0x5006e660
// body: available
// range: 0x5006e660-0x5006e706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5006e660(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (_DAT_5015d1c8 == 0.0) {
    if (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) == 0) {
      puVar1 = (undefined4 *)**(int **)(*(int *)(param_1 + 0x74) + 0x350);
      if (puVar1 == (undefined4 *)0x0) {
        (*DAT_5015cab0)(param_1,0x802);
      }
      else {
        (*DAT_5015cab0)(param_1,0x801,*puVar1);
      }
      iVar4 = 0;
      if (0 < DAT_5015d8c8) {
        piVar2 = (int *)(DAT_5015cca0 + 0x4d8);
        iVar3 = DAT_5015d8c8;
        do {
          if (((piVar2[1] != 0) && (*piVar2 != 0)) && (**(int **)(*piVar2 + 0x350) == param_1)) {
            iVar4 = iVar4 + 1;
          }
          piVar2 = piVar2 + 0x119;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (*DAT_5015cab0)(param_1,0x803,iVar4);
    }
  }
  return;
}

