// rea decompile_all
// name: FUN_200842a0
// address: 0x200842a0
// body: available
// range: 0x200842a0-0x20084595 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200842a0(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar6) / 0x24)) {
    if ((uint)(((int)puVar6 - (int)param_1) / 0x24) < param_2) {
      puVar3 = param_1 + param_2 * 9;
      if (param_1 != puVar6) {
        puVar2 = puVar3 + param_2 * -9;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            puVar7 = puVar2;
            puVar8 = puVar3;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar2 = puVar2 + 9;
          puVar3 = puVar3 + 9;
        } while (puVar2 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar5 = param_2 - ((int)puVar6 - (int)param_1) / 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          puVar3 = param_3;
          puVar2 = puVar6;
          for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + 1;
          }
        }
        puVar6 = puVar6 + 9;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      while (param_1 != puVar6) {
        puVar7 = param_1 + 9;
        puVar3 = param_3;
        puVar2 = param_1;
        for (iVar5 = 9; param_1 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x24;
      return;
    }
    if (param_2 != 0) {
      puVar3 = puVar6;
      for (puVar2 = puVar6 + param_2 * -9; puVar2 != puVar6; puVar2 = puVar2 + 9) {
        if (puVar3 != (undefined4 *)0x0) {
          puVar7 = puVar2;
          puVar8 = puVar3;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar3 = puVar3 + 9;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      puVar3 = puVar6 + param_2 * -9;
      while (param_1 != puVar3) {
        puVar3 = puVar3 + -9;
        puVar6 = puVar6 + -9;
        puVar2 = puVar3;
        puVar7 = puVar6;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar6 = param_1;
      while (puVar6 != param_1 + param_2 * 9) {
        puVar7 = puVar6 + 9;
        puVar3 = param_3;
        puVar2 = puVar6;
        for (iVar5 = 9; puVar6 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0x24;
    }
    return;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar6 - iVar5) / 0x24, uVar4 <= param_2)) {
    uVar4 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar6 - iVar5) / 0x24;
  }
  iVar5 = iVar5 + uVar4;
  iVar1 = iVar5;
  if (iVar5 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 * 0x24);
  puVar3 = puVar2;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar4 = param_2, puVar7 = puVar3, puVar6 != param_1;
      puVar6 = puVar6 + 9) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = puVar3;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar3 = puVar3 + 9;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = param_3;
      puVar8 = puVar7;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 9;
  }
  puVar7 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar3 + param_2 * 9;
  if (param_1 != puVar7) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -0x24 - (int)puVar3) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        puVar3 = param_1;
        puVar8 = puVar6;
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      param_1 = param_1 + 9;
      puVar6 = puVar6 + 9;
    } while (param_1 != puVar7);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar1 = *(int *)(in_ECX + 4);
  *(undefined4 **)(in_ECX + 0xc) = puVar2 + iVar5 * 9;
  if (iVar1 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar2;
    *(undefined4 **)(in_ECX + 8) = puVar2 + param_2 * 9;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar2;
  *(undefined4 **)(in_ECX + 8) = puVar2 + (param_2 + (*(int *)(in_ECX + 8) - iVar1) / 0x24) * 9;
  return;
}

