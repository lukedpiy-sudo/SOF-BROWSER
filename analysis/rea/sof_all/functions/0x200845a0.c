// rea decompile_all
// name: FUN_200845a0
// address: 0x200845a0
// body: available
// range: 0x200845a0-0x20084871 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200845a0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  puVar4 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar4) / 0x90) < param_2) {
    iVar7 = *(int *)(in_ECX + 4);
    if ((iVar7 == 0) || (uVar8 = ((int)puVar4 - iVar7) / 0x90, uVar8 <= param_2)) {
      uVar8 = param_2;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = ((int)puVar4 - iVar7) / 0x90;
    }
    iVar7 = iVar7 + uVar8;
    iVar2 = iVar7;
    if (iVar7 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x90);
    pvVar9 = pvVar3;
    for (puVar4 = *(undefined4 **)(in_ECX + 4); uVar8 = param_2, pvVar1 = pvVar9, puVar4 != param_1;
        puVar4 = puVar4 + 0x24) {
      FUN_200876e0(pvVar9,puVar4);
      pvVar9 = (void *)((int)pvVar9 + 0x90);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      FUN_200876e0(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x90);
    }
    puVar4 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar4) {
      iVar2 = param_2 * 0x90 - (int)param_1;
      do {
        FUN_200876e0((int)pvVar9 + iVar2 + (int)param_1,param_1);
        param_1 = param_1 + 0x24;
      } while (param_1 != puVar4);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)(iVar7 * 0x90 + (int)pvVar3);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar7 = 0;
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4);
      puVar4 = (undefined4 *)(iVar7 * 0x38e38e39);
      iVar7 = iVar7 / 0x90;
    }
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((param_2 + iVar7) * 0x90 + (int)pvVar3);
    return puVar4;
  }
  puVar5 = (undefined4 *)-((int)puVar4 - (int)param_1 >> 0x1f);
  if ((uint)(((int)puVar4 - (int)param_1) / 0x90) < param_2) {
    puVar6 = (undefined4 *)(param_2 * 0x90);
    for (puVar5 = param_1; puVar5 != puVar4; puVar5 = puVar5 + 0x24) {
      FUN_200876e0((undefined4 *)((int)puVar6 + (int)puVar5),puVar5);
    }
    iVar7 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar7 - (int)param_1) / 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200876e0(iVar7,param_3);
      iVar7 = iVar7 + 0x90;
    }
    puVar4 = *(undefined4 **)(in_ECX + 8);
    while (param_1 != puVar4) {
      puVar10 = param_1 + 0x24;
      puVar5 = param_3;
      puVar11 = param_1;
      for (iVar7 = 0x24; param_1 = puVar10, iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + (int)puVar6;
    return puVar6;
  }
  if (param_2 != 0) {
    puVar5 = puVar4;
    for (puVar6 = puVar4 + param_2 * -0x24; puVar6 != puVar4; puVar6 = puVar6 + 0x24) {
      FUN_200876e0(puVar5,puVar6);
      puVar5 = puVar5 + 0x24;
    }
    puVar4 = *(undefined4 **)(in_ECX + 8);
    puVar5 = puVar4 + param_2 * -0x24;
    while (param_1 != puVar5) {
      puVar5 = puVar5 + -0x24;
      puVar4 = puVar4 + -0x24;
      puVar6 = puVar5;
      puVar11 = puVar4;
      for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    puVar5 = param_1 + param_2 * 0x24;
    while (param_1 != puVar5) {
      puVar11 = param_1 + 0x24;
      puVar4 = param_3;
      puVar6 = param_1;
      for (iVar7 = 0x24; param_1 = puVar11, iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x90;
  }
  return puVar5;
}

