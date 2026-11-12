// rea decompile_all
// name: FUN_50067080
// address: 0x50067080
// body: available
// range: 0x50067080-0x500671c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50067080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 0) && (*(int **)(iVar1 + 0x164) != (int *)0x0)) &&
      (iVar4 = *(int *)(param_1 + 4), 0 < iVar4)) &&
     ((iVar4 < 0x28 && (*(int *)(&DAT_5015c7bc + iVar4 * 4) != 0)))) {
    if (*(int *)(param_1 + 0xc) != 1) {
      return;
    }
    if ((iVar4 < 1) || (0x27 < iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
    }
    if ((*(int *)(iVar3 + 0xa4) != 0) && (*(int *)(*(int *)(iVar3 + 0xa4) + 4) != 0)) {
      if ((iVar4 < 1) || (0x27 < iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
      }
      if (*(int *)(iVar3 + 0x54) == 0x1f) {
        if ((iVar4 < 1) || (0x27 < iVar4)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
        }
        if (*(int *)(iVar4 + 0xa4) == 0) {
          uVar2 = 0;
          iVar4 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0xa4) + 4);
          iVar4 = 0;
        }
      }
      else {
        if ((iVar4 < 1) || (0x27 < iVar4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
        }
        if (*(int *)(iVar3 + 0x44) == 2) {
          if ((iVar4 < 1) || (0x27 < iVar4)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
          }
          FUN_500b4160(iVar1,*(undefined4 *)(*(int *)(iVar4 + 0x100) + 4),0);
          goto LAB_500671ad;
        }
        if ((iVar4 < 1) || (0x27 < iVar4)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(&DAT_5015c7bc + iVar4 * 4);
        }
        if (*(int *)(iVar4 + 0xa4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(*(int *)(iVar4 + 0xa4) + 4);
        }
        iVar4 = 1;
      }
      FUN_500b41d0(*(int **)(iVar1 + 0x164),uVar2,iVar4);
    }
  }
LAB_500671ad:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x158) = 1;
  return;
}

