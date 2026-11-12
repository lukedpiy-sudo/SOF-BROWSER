// rea decompile_all
// name: FUN_50066fd0
// address: 0x50066fd0
// body: available
// range: 0x50066fd0-0x50067071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50066fd0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(param_1 + 8) + 0x164);
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 < 1) || (0x27 < iVar1)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(&DAT_5015c7bc + iVar1 * 4);
  }
  if (((iVar5 != -0x104) && (piVar6 != (int *)0x0)) &&
     ((*(int *)(param_1 + 0xc) == 0 || (*(int *)(param_1 + 0xc) == -1)))) {
    if ((iVar1 < 1) || (0x27 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(&DAT_5015c7bc + iVar1 * 4);
    }
    uVar2 = FUN_500b41d0(piVar6,iVar1 + 0x104,0);
    if ((short)uVar2 != 0) {
      piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
      uVar4 = (**(code **)(*piVar3 + 0x30))(&DAT_5012fe04);
      if ((short)uVar4 != 0) {
        (**(code **)(*piVar6 + 0x5c))(&DAT_50159b1c,uVar4);
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  return;
}

