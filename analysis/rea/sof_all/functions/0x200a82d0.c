// rea decompile_all
// name: FUN_200a82d0
// address: 0x200a82d0
// body: available
// range: 0x200a82d0-0x200a8631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a82d0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar9 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar9) / 0x28)) {
    if (param_2 <= (uint)(((int)puVar9 - (int)param_1) / 0x28)) {
      if (param_2 != 0) {
        puVar8 = puVar9;
        for (puVar10 = puVar9 + param_2 * -10; puVar10 != puVar9; puVar10 = puVar10 + 10) {
          FUN_200a92c0(puVar8,puVar10);
          puVar8 = puVar8 + 10;
        }
        puVar9 = *(undefined4 **)(in_ECX + 8);
        for (puVar8 = *(undefined4 **)(in_ECX + 8) + param_2 * -10; param_1 != puVar8;
            puVar8 = puVar8 + -10) {
          puVar9[-10] = puVar8[-10];
          puVar9[-9] = puVar8[-9];
          FUN_2000a3a0(puVar8 + -8,0,0xffffffff);
          FUN_2000a3a0(puVar8 + -4,0,0xffffffff);
          puVar9 = puVar9 + -10;
        }
        if (param_1 != param_1 + param_2 * 10) {
          puVar9 = param_1 + 2;
          do {
            puVar9[-2] = *param_3;
            puVar9[-1] = param_3[1];
            FUN_2000a3a0(param_3 + 2,0,0xffffffff);
            FUN_2000a3a0(param_3 + 6,0,0xffffffff);
            puVar8 = puVar9 + 8;
            puVar9 = puVar9 + 10;
          } while (puVar8 != param_1 + param_2 * 10);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x28;
      }
      return;
    }
    for (puVar8 = param_1; puVar8 != puVar9; puVar8 = puVar8 + 10) {
      FUN_200a92c0(puVar8 + param_2 * 10,puVar8);
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar4 - (int)param_1) / 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200a92c0(iVar4,param_3);
      iVar4 = iVar4 + 0x28;
    }
    puVar9 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar9) {
      puVar8 = param_1 + 2;
      do {
        puVar8[-2] = *param_3;
        puVar8[-1] = param_3[1];
        FUN_2000a3a0(param_3 + 2,0,0xffffffff);
        FUN_2000a3a0(param_3 + 6,0,0xffffffff);
        puVar10 = puVar8 + 8;
        puVar8 = puVar8 + 10;
      } while (puVar10 != puVar9);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x28;
    return;
  }
  iVar4 = *(int *)(in_ECX + 4);
  if ((iVar4 == 0) || (uVar5 = ((int)puVar9 - iVar4) / 0x28, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar9 - iVar4) / 0x28;
  }
  iVar4 = iVar4 + uVar5;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x28);
  pvVar6 = pvVar3;
  for (puVar9 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, pvVar1 = pvVar6, puVar9 != param_1;
      puVar9 = puVar9 + 10) {
    FUN_200a92c0(pvVar6,puVar9);
    pvVar6 = (void *)((int)pvVar6 + 0x28);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    FUN_200a92c0(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x28);
  }
  puVar9 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar9) {
    iVar2 = param_2 * 0x28 - (int)param_1;
    do {
      FUN_200a92c0((int)pvVar6 + iVar2 + (int)param_1,param_1);
      param_1 = param_1 + 10;
    } while (param_1 != puVar9);
  }
  iVar2 = *(int *)(in_ECX + 8);
  for (iVar7 = *(int *)(in_ECX + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x28) {
    FUN_200a2330();
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x28);
  if (iVar2 != 0) {
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) =
         (void *)((int)pvVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0x28) * 0x28);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar3;
  *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + param_2 * 0x28);
  return;
}

