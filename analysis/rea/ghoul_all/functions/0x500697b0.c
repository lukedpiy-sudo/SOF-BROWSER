// rea decompile_all
// name: FUN_500697b0
// address: 0x500697b0
// body: available
// range: 0x500697b0-0x500698c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500697b0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 **ppuVar5;
  int *piVar6;
  int *piVar7;
  uint uStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  piVar6 = *(int **)(param_1 + 0xa8);
  if (piVar6 != *(int **)(param_1 + 0xac)) {
    do {
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0xc) == 2) {
        uVar3 = 0;
        if (*(int *)(iVar1 + 8) == 0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(*(int *)(iVar1 + 8) + 0x164);
          if (piVar7 != (int *)0x0) {
            piVar4 = (int *)(**(code **)(*piVar7 + 0x88))();
            uVar3 = (**(code **)(*piVar4 + 0x30))(&DAT_5012fe04);
          }
        }
        *(undefined4 *)(iVar1 + 0xc) = 0;
        if ((short)uVar3 != 0) {
          (**(code **)(*piVar7 + 0x60))(&DAT_50159b1c,uVar3);
        }
        uVar2 = *(uint *)(*piVar6 + 8);
        if ((((*(int *)(param_1 + 0xb4) != 0) && (uVar2 != 0)) &&
            (iVar1 = *(int *)(uVar2 + 0x460), 0 < iVar1)) && (iVar1 < 0x28)) {
          iVar1 = *(int *)(param_1 + 4 + iVar1 * 4);
          uStack_c = uVar2;
          puStack_8 = FUN_5000a7f0((void *)(iVar1 + 0x148),&uStack_c);
          if ((puStack_8 == *(undefined4 **)(iVar1 + 0x14c)) || (uStack_c < (uint)puStack_8[3])) {
            puStack_4 = *(undefined4 **)(iVar1 + 0x14c);
            ppuVar5 = &puStack_4;
          }
          else {
            ppuVar5 = &puStack_8;
          }
          if ((*ppuVar5 != *(undefined4 **)(iVar1 + 0x14c)) && (iVar1 = (*ppuVar5)[4], iVar1 != 0))
          {
            FUN_500678c0(*(void **)(param_1 + 0xb4),4,iVar1);
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0xac));
  }
  return 1;
}

