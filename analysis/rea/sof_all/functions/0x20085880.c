// rea decompile_all
// name: FUN_20085880
// address: 0x20085880
// body: available
// range: 0x20085880-0x20085ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20085880(undefined4 *param_1,uint param_2,int param_3)

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
  undefined4 *puVar9;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0x1c) < param_2) {
    iVar5 = *(int *)(in_ECX + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0x1c, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar8 - iVar5) / 0x1c;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x1c);
    pvVar6 = pvVar3;
    for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, pvVar1 = pvVar6, puVar8 != param_1;
        puVar8 = puVar8 + 7) {
      FUN_20076540(pvVar6,puVar8);
      pvVar6 = (void *)((int)pvVar6 + 0x1c);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_20076540(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x1c);
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar8) {
      iVar2 = param_2 * 0x1c - (int)param_1;
      do {
        FUN_20076540((int)pvVar6 + iVar2 + (int)param_1,param_1);
        param_1 = param_1 + 7;
      } while (param_1 != puVar8);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x1c);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x1c;
    }
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 0x1c);
    return;
  }
  if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0x1c)) {
    if (param_2 != 0) {
      puVar7 = puVar8;
      for (puVar9 = puVar8 + param_2 * -7; puVar9 != puVar8; puVar9 = puVar9 + 7) {
        FUN_20076540(puVar7,puVar9);
        puVar7 = puVar7 + 7;
      }
      puVar8 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = *(undefined4 **)(in_ECX + 8) + param_2 * -7; param_1 != puVar7;
          puVar7 = puVar7 + -7) {
        puVar8[-7] = puVar7[-7];
        puVar8[-6] = puVar7[-6];
        puVar8[-5] = puVar7[-5];
        puVar8[-4] = puVar7[-4];
        FUN_200802f0(puVar7 + -3);
        puVar8 = puVar8 + -7;
      }
      puVar8 = param_1 + param_2 * 7;
      if (param_1 != puVar8) {
        do {
          FUN_200802f0(param_3);
          param_1[3] = *(undefined4 *)(param_3 + 0xc);
          FUN_200802f0(param_3 + 0x10);
          param_1 = param_1 + 7;
        } while (param_1 != puVar8);
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x1c;
    }
    return;
  }
  for (puVar7 = param_1; puVar7 != puVar8; puVar7 = puVar7 + 7) {
    FUN_20076540(puVar7 + param_2 * 7,puVar7);
  }
  iVar5 = *(int *)(in_ECX + 8);
  for (iVar2 = param_2 - (iVar5 - (int)param_1) / 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_20076540(iVar5,param_3);
    iVar5 = iVar5 + 0x1c;
  }
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar8) {
    do {
      FUN_200802f0(param_3);
      param_1[3] = *(undefined4 *)(param_3 + 0xc);
      FUN_200802f0(param_3 + 0x10);
      param_1 = param_1 + 7;
    } while (param_1 != puVar8);
  }
  *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x1c;
  return;
}

