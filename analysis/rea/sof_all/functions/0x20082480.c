// rea decompile_all
// name: FUN_20082480
// address: 0x20082480
// body: available
// range: 0x20082480-0x2008267f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20082480(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar5 = *(int *)(in_ECX + 8);
  iVar4 = *(int *)(in_ECX + 0xc) - iVar5;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x24 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar10 = (iVar5 - iVar1) / 0x24, uVar10 < 2)) {
      uVar10 = 1;
    }
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar1) / 0x24;
    }
    iVar5 = iVar5 + uVar10;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x24);
    pvVar11 = pvVar3;
    for (puVar7 = *(undefined4 **)(in_ECX + 4); puVar7 != param_1; puVar7 = puVar7 + 9) {
      FUN_200876c0(pvVar11,puVar7);
      pvVar11 = (void *)((int)pvVar11 + 0x24);
    }
    FUN_200876c0(pvVar11,param_2);
    FUN_20086cf0(param_1,*(undefined4 *)(in_ECX + 8),(int)pvVar11 + 0x24);
    FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x24);
    iVar5 = FUN_20086cc0();
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (iVar5 + 1) * 0x24);
  }
  else {
    iVar2 = iVar5 - (int)param_1 >> 0x1f;
    if ((iVar5 - (int)param_1) / 0x24 + iVar2 == iVar2) {
      FUN_20086cf0(param_1,iVar5,param_1 + 9);
      FUN_20086d30(*(int *)(in_ECX + 8),1 - (*(int *)(in_ECX + 8) - (int)param_1) / 0x24,param_2);
      puVar7 = *(undefined4 **)(in_ECX + 8);
      puVar9 = param_1;
      while (puVar9 != puVar7) {
        puVar6 = puVar9 + 9;
        puVar8 = param_2;
        puVar12 = puVar9;
        for (iVar5 = 9; puVar9 = puVar6, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else {
      FUN_20086cf0(iVar5 + -0x24,iVar5,iVar5);
      puVar9 = *(undefined4 **)(in_ECX + 8);
      puVar7 = puVar9 + -9;
      while (param_1 != puVar7) {
        puVar7 = puVar7 + -9;
        puVar9 = puVar9 + -9;
        puVar8 = puVar7;
        puVar12 = puVar9;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      puVar7 = param_1;
      while (puVar7 != param_1 + 9) {
        puVar12 = puVar7 + 9;
        puVar9 = param_2;
        puVar8 = puVar7;
        for (iVar5 = 9; puVar7 = puVar12, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 0x24;
  }
  return *(int *)(in_ECX + 4) + (((int)param_1 - iVar1) / 0x24) * 0x24;
}

