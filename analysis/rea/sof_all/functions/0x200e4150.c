// rea decompile_all
// name: FUN_200e4150
// address: 0x200e4150
// body: available
// range: 0x200e4150-0x200e4448 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e4150(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0x14)) {
    if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0x14)) {
      if (param_2 != 0) {
        puVar7 = puVar8;
        for (puVar10 = puVar8 + param_2 * -5; puVar10 != puVar8; puVar10 = puVar10 + 5) {
          FUN_200e5240(puVar7,puVar10);
          puVar7 = puVar7 + 5;
        }
        puVar8 = *(undefined4 **)(in_ECX + 8);
        for (puVar7 = puVar8 + param_2 * -5; param_1 != puVar7; puVar7 = puVar7 + -5) {
          puVar8 = puVar8 + -5;
          *puVar8 = puVar7[-5];
          FUN_200e5730(puVar7 + -4);
        }
        puVar8 = param_1 + param_2 * 5;
        if (param_1 != puVar8) {
          do {
            *param_1 = *param_3;
            FUN_200e5730(param_3 + 1);
            param_1 = param_1 + 5;
          } while (param_1 != puVar8);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
      }
      return;
    }
    for (puVar7 = param_1; puVar7 != puVar8; puVar7 = puVar7 + 5) {
      FUN_200e5240(puVar7 + param_2 * 5,puVar7);
    }
    iVar5 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar5 - (int)param_1) / 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200e5240(iVar5,param_3);
      iVar5 = iVar5 + 0x14;
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar8) {
      do {
        *param_1 = *param_3;
        FUN_200e5730(param_3 + 1);
        param_1 = param_1 + 5;
      } while (param_1 != puVar8);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x14;
    return;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0x14, uVar4 <= param_2)) {
    uVar4 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar8 - iVar5) / 0x14;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x14);
  pvVar6 = pvVar3;
  for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, pvVar1 = pvVar6, puVar8 != param_1;
      puVar8 = puVar8 + 5) {
    FUN_200e5240(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0x14);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_200e5240(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x14);
  }
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar8) {
    iVar2 = param_2 * 0x14 - (int)param_1;
    do {
      FUN_200e5240((int)pvVar6 + iVar2 + (int)param_1,param_1);
      param_1 = param_1 + 5;
    } while (param_1 != puVar8);
  }
  iVar2 = *(int *)(in_ECX + 8);
  for (iVar9 = *(int *)(in_ECX + 4); iVar9 != iVar2; iVar9 = iVar9 + 0x14) {
    FUN_200765e0();
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x14);
  if (iVar2 != 0) {
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) =
         (void *)((int)pvVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0x14) * 0x14);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar3;
  *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + param_2 * 0x14);
  return;
}

