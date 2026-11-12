// rea decompile_all
// name: FUN_2009d7c0
// address: 0x2009d7c0
// body: available
// range: 0x2009d7c0-0x2009db6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009d7c0(undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  
  puVar8 = *(undefined1 **)(in_ECX + 8);
  if ((uint)((*(int *)(in_ECX + 0xc) - (int)puVar8) / 0xd8) < param_2) {
    iVar6 = *(int *)(in_ECX + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)puVar8 - iVar6) / 0xd8, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar8 - iVar6) / 0xd8;
    }
    iVar6 = iVar6 + uVar5;
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0xd8);
    pvVar7 = pvVar3;
    for (puVar8 = *(undefined1 **)(in_ECX + 4); uVar5 = param_2, pvVar1 = pvVar7, puVar8 != param_1;
        puVar8 = puVar8 + 0xd8) {
      FUN_2009f430(pvVar7,puVar8);
      pvVar7 = (void *)((int)pvVar7 + 0xd8);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_2009f430(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0xd8);
    }
    puVar8 = *(undefined1 **)(in_ECX + 8);
    if (param_1 != puVar8) {
      iVar2 = param_2 * 0xd8 - (int)param_1;
      do {
        FUN_2009f430(param_1 + (int)pvVar7 + iVar2,param_1);
        param_1 = param_1 + 0xd8;
      } while (param_1 != puVar8);
    }
    iVar2 = *(int *)(in_ECX + 8);
    for (iVar9 = *(int *)(in_ECX + 4); iVar9 != iVar2; iVar9 = iVar9 + 0xd8) {
      FUN_2009b9e0();
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar6 * 0xd8);
    if (*(int *)(in_ECX + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xd8;
    }
    *(void **)(in_ECX + 4) = pvVar3;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (param_2 + iVar6) * 0xd8);
    return;
  }
  if (param_2 <= (uint)(((int)puVar8 - (int)param_1) / 0xd8)) {
    if (param_2 != 0) {
      puVar4 = puVar8;
      for (puVar11 = puVar8 + param_2 * -0xd8; puVar11 != puVar8; puVar11 = puVar11 + 0xd8) {
        FUN_2009f430(puVar4,puVar11);
        puVar4 = puVar4 + 0xd8;
      }
      puVar8 = (undefined1 *)(*(int *)(in_ECX + 8) + param_2 * -0xd8);
      while (param_1 != puVar8) {
        puVar8 = puVar8 + -0xd8;
        FUN_2009f580(puVar8);
      }
      if (param_1 != param_1 + param_2 * 0xd8) {
        puVar8 = param_1 + 0x14;
        do {
          puVar8[-0x14] = *param_3;
          FUN_2000a3a0(param_3 + 4,0,0xffffffff);
          *puVar8 = param_3[0x14];
          puVar8[1] = param_3[0x15];
          puVar8[2] = param_3[0x16];
          FUN_2009f870(param_3 + 0x18);
          FUN_2009f9e0(param_3 + 0x2c);
          puVar8[0x70] = param_3[0x84];
          *(undefined4 *)(puVar8 + 0x74) = *(undefined4 *)(param_3 + 0x88);
          puVar8[0x78] = param_3[0x8c];
          *(undefined2 *)(puVar8 + 0x7a) = *(undefined2 *)(param_3 + 0x8e);
          *(undefined2 *)(puVar8 + 0x7c) = *(undefined2 *)(param_3 + 0x90);
          puVar4 = puVar8 + 0xc4;
          puVar10 = (undefined4 *)(param_3 + 0x94);
          puVar12 = (undefined4 *)(puVar8 + 0x80);
          for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar8 = puVar8 + 0xd8;
        } while (puVar4 != param_1 + param_2 * 0xd8);
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xd8;
    }
    return;
  }
  for (puVar4 = param_1; puVar4 != puVar8; puVar4 = puVar4 + 0xd8) {
    FUN_2009f430(puVar4 + param_2 * 0xd8,puVar4);
  }
  iVar6 = *(int *)(in_ECX + 8);
  for (iVar2 = param_2 - (iVar6 - (int)param_1) / 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_2009f430(iVar6,param_3);
    iVar6 = iVar6 + 0xd8;
  }
  puVar8 = *(undefined1 **)(in_ECX + 8);
  for (; param_1 != puVar8; param_1 = param_1 + 0xd8) {
    FUN_2009f580(param_3);
  }
  *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xd8;
  return;
}

