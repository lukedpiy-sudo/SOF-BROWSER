// rea decompile_all
// name: FUN_200932c0
// address: 0x200932c0
// body: available
// range: 0x200932c0-0x20093586 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200932c0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar7 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar7) / 0x44) < param_2) {
    iVar4 = *(int *)(in_ECX + 4);
    if ((iVar4 == 0) || (uVar5 = ((int)puVar7 - iVar4) / 0x44, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar7 - iVar4) / 0x44;
    }
    iVar4 = iVar4 + uVar5;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x44);
    pvVar6 = pvVar3;
    for (puVar7 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, pvVar1 = pvVar6, puVar7 != param_1;
        puVar7 = puVar7 + 0x11) {
      FUN_20093840(pvVar6,puVar7);
      pvVar6 = (void *)((int)pvVar6 + 0x44);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_20093840(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x44);
    }
    puVar7 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar7) {
      iVar2 = param_2 * 0x44 - (int)param_1;
      do {
        FUN_20093840((int)pvVar6 + iVar2 + (int)param_1,param_1);
        param_1 = param_1 + 0x11;
      } while (param_1 != puVar7);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x44);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x44;
    }
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (param_2 + iVar4) * 0x44);
    return;
  }
  if ((uint)(((int)puVar7 - (int)param_1) / 0x44) < param_2) {
    for (puVar9 = param_1; puVar9 != puVar7; puVar9 = puVar9 + 0x11) {
      FUN_20093840(puVar9 + param_2 * 0x11,puVar9);
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar4 - (int)param_1) / 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_20093840(iVar4,param_3);
      iVar4 = iVar4 + 0x44;
    }
    puVar7 = *(undefined4 **)(in_ECX + 8);
    while (param_1 != puVar7) {
      puVar10 = param_1 + 0x11;
      puVar9 = param_3;
      puVar8 = param_1;
      for (iVar4 = 0x11; param_1 = puVar10, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x44;
    return;
  }
  if (param_2 != 0) {
    puVar9 = puVar7;
    for (puVar8 = puVar7 + param_2 * -0x11; puVar8 != puVar7; puVar8 = puVar8 + 0x11) {
      FUN_20093840(puVar9,puVar8);
      puVar9 = puVar9 + 0x11;
    }
    puVar7 = *(undefined4 **)(in_ECX + 8);
    puVar9 = puVar7 + param_2 * -0x11;
    while (param_1 != puVar9) {
      puVar9 = puVar9 + -0x11;
      puVar7 = puVar7 + -0x11;
      puVar8 = puVar9;
      puVar10 = puVar7;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    puVar7 = param_1;
    while (puVar7 != param_1 + param_2 * 0x11) {
      puVar10 = puVar7 + 0x11;
      puVar9 = param_3;
      puVar8 = puVar7;
      for (iVar4 = 0x11; puVar7 = puVar10, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x44;
  }
  return;
}

