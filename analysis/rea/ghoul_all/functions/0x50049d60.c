// rea decompile_all
// name: FUN_50049d60
// address: 0x50049d60
// body: available
// range: 0x50049d60-0x50049f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50049d60(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar1 = *(int *)((int)this + 4);
  puVar6 = *(undefined4 **)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc) - (int)puVar6;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x24 + iVar4 == iVar4) {
    if ((iVar1 == 0) || (uVar8 = ((int)puVar6 - iVar1) / 0x24, uVar8 < 2)) {
      uVar8 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar6 - iVar1) / 0x24;
    }
    iVar4 = iVar4 + uVar8;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    puVar2 = operator_new(iVar3 * 0x24);
    puVar7 = puVar2;
    for (puVar6 = *(undefined4 **)((int)this + 4); puVar6 != param_1; puVar6 = puVar6 + 9) {
      FUN_5004ab60(puVar7,puVar6);
      puVar7 = puVar7 + 9;
    }
    FUN_5004ab60(puVar7,param_2);
    FUN_5004a350(param_1,*(undefined4 **)((int)this + 8),puVar7 + 9);
    FUN_50043230();
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar4 * 9;
    iVar4 = FUN_50049f60((int)this);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2 + (iVar4 + 1) * 9;
  }
  else {
    iVar4 = (int)puVar6 - (int)param_1 >> 0x1f;
    if (((int)puVar6 - (int)param_1) / 0x24 + iVar4 == iVar4) {
      FUN_5004a350(param_1,puVar6,param_1 + 9);
      FUN_5004a390(*(undefined4 **)((int)this + 8),
                   1 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x24,param_2);
      puVar6 = *(undefined4 **)((int)this + 8);
      puVar7 = param_1;
      while (puVar7 != puVar6) {
        puVar5 = puVar7 + 9;
        puVar2 = param_2;
        puVar9 = puVar7;
        for (iVar4 = 9; puVar7 = puVar5, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    else {
      FUN_5004a350(puVar6 + -9,puVar6,puVar6);
      puVar7 = *(undefined4 **)((int)this + 8);
      puVar6 = puVar7 + -9;
      while (param_1 != puVar6) {
        puVar6 = puVar6 + -9;
        puVar7 = puVar7 + -9;
        puVar2 = puVar6;
        puVar9 = puVar7;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar6 = param_1;
      while (puVar6 != param_1 + 9) {
        puVar9 = puVar6 + 9;
        puVar7 = param_2;
        puVar2 = puVar6;
        for (iVar4 = 9; puVar6 = puVar9, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar2 = puVar2 + 1;
        }
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x24;
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x24) * 0x24;
}

