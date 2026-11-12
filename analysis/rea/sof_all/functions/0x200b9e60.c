// rea decompile_all
// name: FUN_200b9e60
// address: 0x200b9e60
// body: available
// range: 0x200b9e60-0x200ba1ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b9e60(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0x38) < param_2) {
    iVar6 = *(int *)(in_ECX + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)puVar8 - iVar6) / 0x38, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar8 - iVar6) / 0x38;
    }
    iVar6 = iVar6 + uVar5;
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x38);
    pvVar7 = pvVar3;
    for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, pvVar1 = pvVar7, puVar8 != param_1;
        puVar8 = puVar8 + 0xe) {
      FUN_200bb170(pvVar7,puVar8);
      pvVar7 = (void *)((int)pvVar7 + 0x38);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_200bb170(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x38);
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar8) {
      iVar2 = param_2 * 0x38 - (int)param_1;
      do {
        FUN_200bb170((int)pvVar7 + iVar2 + (int)param_1,param_1);
        param_1 = param_1 + 0xe;
      } while (param_1 != puVar8);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar6 * 0x38);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x38;
    }
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (param_2 + iVar6) * 0x38);
    return;
  }
  if ((uint)(((int)puVar8 - (int)param_1) / 0x38) < param_2) {
    for (puVar4 = param_1; puVar4 != puVar8; puVar4 = puVar4 + 0xe) {
      FUN_200bb170(puVar4 + param_2 * 0xe,puVar4);
    }
    iVar6 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar6 - (int)param_1) / 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200bb170(iVar6,param_3);
      iVar6 = iVar6 + 0x38;
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar8; param_1 = param_1 + 0xe) {
      FUN_200bb290(param_3);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x38;
    return;
  }
  if (param_2 != 0) {
    puVar4 = puVar8;
    for (puVar9 = puVar8 + param_2 * -0xe; puVar9 != puVar8; puVar9 = puVar9 + 0xe) {
      FUN_200bb170(puVar4,puVar9);
      puVar4 = puVar4 + 0xe;
    }
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 8) + param_2 * -0x38);
    while (param_1 != puVar8) {
      puVar8 = puVar8 + -0xe;
      FUN_200bb290(puVar8);
    }
    if (param_1 != param_1 + param_2 * 0xe) {
      iVar6 = (int)param_3 - (int)param_1;
      puVar8 = param_1 + 4;
      do {
        puVar8[-4] = *param_3;
        puVar8[-3] = param_3[1];
        puVar8[-2] = param_3[2];
        puVar8[-1] = param_3[3];
        *puVar8 = param_3[4];
        FUN_200802f0(param_3 + 5);
        puVar4 = puVar8 + 4;
        do {
          *(undefined1 *)puVar4 = *(undefined1 *)((int)puVar4 + iVar6);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while ((undefined1 *)((-0x10 - (int)puVar8) + (int)puVar4) < (undefined1 *)0x3);
        iVar6 = iVar6 + -0x38;
        puVar8[5] = param_3[9];
        puVar8[6] = param_3[10];
        puVar8[7] = param_3[0xb];
        puVar8[8] = param_3[0xc];
        puVar8[9] = param_3[0xd];
        puVar4 = puVar8 + 10;
        puVar8 = puVar8 + 0xe;
      } while (puVar4 != param_1 + param_2 * 0xe);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x38;
  }
  return;
}

