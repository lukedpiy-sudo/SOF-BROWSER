// rea decompile_all
// name: FUN_20027630
// address: 0x20027630
// body: available
// range: 0x20027630-0x20027946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20027630(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar7 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar7 >> 6)) {
    if (param_2 <= (uint)((int)puVar7 - (int)param_1 >> 6)) {
      if (param_2 != 0) {
        puVar9 = puVar7;
        for (puVar10 = puVar7 + param_2 * -0x10; puVar10 != puVar7; puVar10 = puVar10 + 0x10) {
          FUN_20027b10(puVar9,puVar10);
          puVar9 = puVar9 + 0x10;
        }
        puVar7 = *(undefined4 **)(in_ECX + 8);
        for (puVar9 = *(undefined4 **)(in_ECX + 8) + param_2 * -0x10; param_1 != puVar9;
            puVar9 = puVar9 + -0x10) {
          puVar7[-0x10] = puVar9[-0x10];
          FUN_2000a3a0(puVar9 + -0xf,0,0xffffffff);
          puVar7[-0xb] = puVar9[-0xb];
          puVar7[-10] = puVar9[-10];
          puVar7[-9] = puVar9[-9];
          FUN_2000a3a0(puVar9 + -8,0,0xffffffff);
          FUN_2000a3a0(puVar9 + -4,0,0xffffffff);
          puVar7 = puVar7 + -0x10;
        }
        if (param_1 != param_1 + param_2 * 0x10) {
          puVar7 = param_1 + 5;
          do {
            puVar7[-5] = *param_3;
            FUN_2000a3a0(param_3 + 1,0,0xffffffff);
            *puVar7 = param_3[5];
            puVar7[1] = param_3[6];
            puVar7[2] = param_3[7];
            FUN_2000a3a0(param_3 + 8,0,0xffffffff);
            FUN_2000a3a0(param_3 + 0xc,0,0xffffffff);
            puVar9 = puVar7 + 0xb;
            puVar7 = puVar7 + 0x10;
          } while (puVar9 != param_1 + param_2 * 0x10);
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x40;
      }
      return;
    }
    for (puVar9 = param_1; puVar9 != puVar7; puVar9 = puVar9 + 0x10) {
      FUN_20027b10(puVar9 + param_2 * 0x10,puVar9);
    }
    iVar5 = *(int *)(in_ECX + 8);
    for (iVar3 = param_2 - (iVar5 - (int)param_1 >> 6); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_20027b10(iVar5,param_3);
      iVar5 = iVar5 + 0x40;
    }
    puVar7 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar7; param_1 = param_1 + 0x10) {
      FUN_20027bd0(param_3);
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x40;
    return;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((iVar5 == 0) || (uVar2 = (int)puVar7 - iVar5 >> 6, uVar2 <= param_2)) {
    uVar2 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)puVar7 - iVar5 >> 6;
  }
  iVar5 = uVar2 + iVar5;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 6);
  pvVar8 = pvVar4;
  for (puVar7 = *(undefined4 **)(in_ECX + 4); uVar2 = param_2, pvVar1 = pvVar8, puVar7 != param_1;
      puVar7 = puVar7 + 0x10) {
    FUN_20027b10(pvVar8,puVar7);
    pvVar8 = (void *)((int)pvVar8 + 0x40);
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_20027b10(pvVar1,param_3);
    pvVar1 = (void *)((int)pvVar1 + 0x40);
  }
  puVar7 = *(undefined4 **)(in_ECX + 8);
  if (param_1 != puVar7) {
    iVar3 = param_2 * 0x40 - (int)param_1;
    do {
      FUN_20027b10((int)pvVar8 + iVar3 + (int)param_1,param_1);
      param_1 = param_1 + 0x10;
    } while (param_1 != puVar7);
  }
  iVar3 = *(int *)(in_ECX + 8);
  for (iVar6 = *(int *)(in_ECX + 4); iVar6 != iVar3; iVar6 = iVar6 + 0x40) {
    FUN_20025fd0();
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar3 = *(int *)(in_ECX + 4);
  *(void **)(in_ECX + 0xc) = (void *)(iVar5 * 0x40 + (int)pvVar4);
  if (iVar3 != 0) {
    *(void **)(in_ECX + 4) = pvVar4;
    *(void **)(in_ECX + 8) =
         (void *)(((*(int *)(in_ECX + 8) - iVar3 >> 6) + param_2) * 0x40 + (int)pvVar4);
    return;
  }
  *(void **)(in_ECX + 4) = pvVar4;
  *(void **)(in_ECX + 8) = (void *)(param_2 * 0x40 + (int)pvVar4);
  return;
}

