// rea decompile_all
// name: FUN_2008d0c0
// address: 0x2008d0c0
// body: available
// range: 0x2008d0c0-0x2008d2c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008d0c0(undefined2 *param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_ECX;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  puVar6 = *(undefined2 **)(in_ECX + 8);
  if (param_2 <= (uint)(*(int *)(in_ECX + 0xc) - (int)puVar6 >> 1)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 1) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar4 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar4 != puVar6);
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (iVar2 = param_2 - ((int)puVar6 - (int)param_1 >> 1); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 2;
      return;
    }
    if (param_2 != 0) {
      puVar7 = puVar6;
      for (puVar4 = puVar6 + -param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = *puVar4;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined2 **)(in_ECX + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 2;
    }
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((iVar2 == 0) || (uVar5 = (int)puVar6 - iVar2 >> 1, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2 >> 1;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 2);
  puVar7 = puVar4;
  for (puVar6 = *(undefined2 **)(in_ECX + 4); uVar5 = param_2, puVar1 = puVar7, puVar6 != param_1;
      puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined2 **)(in_ECX + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    param_1 = (undefined2 *)((int)puVar6 + (param_2 * -2 - (int)puVar7) + (int)param_1);
    do {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *param_1;
      }
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    } while (param_1 != puVar1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined2 **)(in_ECX + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    *(undefined2 **)(in_ECX + 4) = puVar4;
    *(undefined2 **)(in_ECX + 8) = puVar4 + param_2;
    return;
  }
  *(undefined2 **)(in_ECX + 4) = puVar4;
  *(undefined2 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 1) + param_2;
  return;
}

