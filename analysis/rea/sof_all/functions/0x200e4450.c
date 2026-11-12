// rea decompile_all
// name: FUN_200e4450
// address: 0x200e4450
// body: available
// range: 0x200e4450-0x200e4766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e4450(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0x18)) {
    if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0x18)) {
      if (param_2 != 0) {
        puVar7 = puVar8;
        for (puVar5 = puVar8 + param_2 * -6; puVar5 != puVar8; puVar5 = puVar5 + 6) {
          FUN_200e52e0(puVar7,puVar5);
          puVar7 = puVar7 + 6;
        }
        puVar8 = *(undefined4 **)(in_ECX + 8);
        for (puVar7 = *(undefined4 **)(in_ECX + 8) + param_2 * -6; param_1 != puVar7;
            puVar7 = puVar7 + -6) {
          puVar8[-6] = puVar7[-6];
          FUN_2000a3a0(puVar7 + -5,0,0xffffffff);
          puVar8[-1] = puVar7[-1];
          puVar8 = puVar8 + -6;
        }
        puVar8 = param_1 + param_2 * 6;
        if (param_1 != puVar8) {
          do {
            *param_1 = *param_3;
            FUN_2000a3a0(param_3 + 1,0,0xffffffff);
            param_1[5] = param_3[5];
            param_1 = param_1 + 6;
          } while (param_1 != puVar8);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x18;
      }
      return;
    }
    for (puVar7 = param_1; puVar7 != puVar8; puVar7 = puVar7 + 6) {
      FUN_200e52e0(puVar7 + param_2 * 6,puVar7);
    }
    iVar4 = *(int *)(in_ECX + 8);
    for (iVar2 = param_2 - (iVar4 - (int)param_1) / 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_200e52e0(iVar4,param_3);
      iVar4 = iVar4 + 0x18;
    }
    puVar8 = *(undefined4 **)(in_ECX + 8);
    if (param_1 != puVar8) {
      do {
        *param_1 = *param_3;
        FUN_2000a3a0(param_3 + 1,0,0xffffffff);
        param_1[5] = param_3[5];
        param_1 = param_1 + 6;
      } while (param_1 != puVar8);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x18;
    return;
  }
  iVar4 = *(int *)(in_ECX + 4);
  if ((iVar4 == 0) || (uVar10 = ((int)puVar8 - iVar4) / 0x18, uVar10 <= param_2)) {
    uVar10 = param_2;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = ((int)puVar8 - iVar4) / 0x18;
  }
  iVar4 = iVar4 + uVar10;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x18);
  pvVar6 = pvVar3;
  for (puVar8 = *(undefined4 **)(in_ECX + 4); uVar10 = param_2, pvVar1 = pvVar6, puVar8 != param_1;
      puVar8 = puVar8 + 6) {
    FUN_200e52e0(pvVar6,puVar8);
    pvVar6 = (void *)((int)pvVar6 + 0x18);
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    FUN_200e52e0(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x18);
  }
  puVar8 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar8) {
    iVar2 = param_2 * 0x18 - (int)param_1;
    do {
      FUN_200e52e0((int)pvVar6 + iVar2 + (int)param_1,param_1);
      param_1 = param_1 + 6;
    } while (param_1 != puVar8);
  }
  iVar2 = *(int *)(in_ECX + 8);
  for (iVar9 = *(int *)(in_ECX + 4); iVar9 != iVar2; iVar9 = iVar9 + 0x18) {
    FUN_200defb0();
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x18);
  if (iVar2 != 0) {
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) =
         (void *)((int)pvVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0x18) * 0x18);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar3;
  *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + param_2 * 0x18);
  return;
}

