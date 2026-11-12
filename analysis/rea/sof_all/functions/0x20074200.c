// rea decompile_all
// name: FUN_20074200
// address: 0x20074200
// body: available
// range: 0x20074200-0x2007443e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20074200(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 3)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 3) < param_2) {
      puVar7 = param_1 + param_2 * 2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + param_2 * -2;
        do {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar4;
            puVar7[1] = puVar4[1];
          }
          puVar4 = puVar4 + 2;
          puVar7 = puVar7 + 2;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 3); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *param_3;
          puVar6[1] = param_3[1];
        }
        puVar6 = puVar6 + 2;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 2) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 8;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + param_2 * -2; puVar4 != puVar6; puVar4 = puVar4 + 2) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar4;
          puVar7[1] = puVar4[1];
        }
        puVar7 = puVar7 + 2;
      }
      puVar6 = *(undefined4 **)(in_ECX + 8);
      for (puVar7 = *(undefined4 **)(in_ECX + 8) + param_2 * -2; param_1 != puVar7;
          puVar7 = puVar7 + -2) {
        puVar6[-2] = puVar7[-2];
        puVar6[-1] = puVar7[-1];
        puVar6 = puVar6 + -2;
      }
      puVar6 = param_1 + param_2 * 2;
      for (; param_1 != puVar6; param_1 = param_1 + 2) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 8;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 3, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 3;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 8);
  puVar7 = puVar4;
  for (puVar6 = *(undefined4 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 2) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
      puVar7[1] = puVar6[1];
    }
    puVar7 = puVar7 + 2;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
    }
    puVar1 = puVar1 + 2;
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2 * 2;
  if (param_1 != puVar1) {
    param_1 = (undefined4 *)((int)puVar6 + (param_2 * -8 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *param_1;
        puVar6[1] = param_1[1];
      }
      param_1 = param_1 + 2;
      puVar6 = puVar6 + 2;
    } while (param_1 != puVar1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 **)(in_ECX + 0xc) = puVar4 + iVar2 * 2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + param_2 * 2;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar4;
  *(undefined4 **)(in_ECX + 8) = puVar4 + ((*(int *)(in_ECX + 8) - iVar2 >> 3) + param_2) * 2;
  return;
}

