// rea decompile_all
// name: FUN_200b9a20
// address: 0x200b9a20
// body: available
// range: 0x200b9a20-0x200b9d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b9a20(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  uint uVar8;
  
  puVar5 = param_1;
  puVar4 = *(undefined4 **)(in_ECX + 8);
  if (param_2 <= (uint)((*(int *)(in_ECX + 0xc) - (int)puVar4) / 0xc)) {
    if (param_2 <= (uint)(((int)puVar4 - (int)param_1) / 0xc)) {
      if (param_2 != 0) {
        puVar5 = puVar4;
        for (puVar6 = puVar4 + param_2 * -3; puVar6 != puVar4; puVar6 = puVar6 + 3) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar6;
            puVar5[1] = puVar6[1];
            puVar5[2] = puVar6[2];
          }
          puVar5 = puVar5 + 3;
        }
        puVar4 = *(undefined4 **)(in_ECX + 8);
        puVar5 = *(undefined4 **)(in_ECX + 8) + param_2 * -3;
        while (param_1 != puVar5) {
          puVar4[-3] = puVar5[-3];
          puVar4[-2] = puVar5[-2];
          puVar4[-1] = puVar5[-1];
          puVar4 = puVar4 + -3;
          puVar5 = puVar5 + -3;
        }
        puVar4 = param_1 + param_2 * 3;
        for (; param_1 != puVar4; param_1 = param_1 + 3) {
          *param_1 = *param_3;
          param_1[1] = param_3[1];
          param_1[2] = param_3[2];
        }
        *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xc;
      }
      return;
    }
    puVar5 = param_1 + param_2 * 3;
    if (param_1 != puVar4) {
      puVar6 = puVar5 + param_2 * -3;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          puVar5[2] = puVar6[2];
        }
        puVar6 = puVar6 + 3;
        puVar5 = puVar5 + 3;
      } while (puVar6 != puVar4);
    }
    puVar4 = *(undefined4 **)(in_ECX + 8);
    for (iVar7 = param_2 - ((int)puVar4 - (int)param_1) / 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
        puVar4[1] = param_3[1];
        puVar4[2] = param_3[2];
      }
      puVar4 = puVar4 + 3;
    }
    puVar4 = *(undefined4 **)(in_ECX + 8);
    for (; param_1 != puVar4; param_1 = param_1 + 3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_2 * 0xc;
    return;
  }
  iVar7 = *(int *)(in_ECX + 4);
  if ((iVar7 == 0) || (uVar8 = ((int)puVar4 - iVar7) / 0xc, uVar8 <= param_2)) {
    uVar8 = param_2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = ((int)puVar4 - iVar7) / 0xc;
  }
  iVar7 = iVar7 + uVar8;
  iVar2 = iVar7;
  if (iVar7 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 0xc);
  puVar6 = puVar3;
  for (puVar4 = *(undefined4 **)(in_ECX + 4); puVar4 != param_1; puVar4 = puVar4 + 3) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
    }
    puVar6 = puVar6 + 3;
  }
  if (param_2 != 0) {
    param_1 = (undefined4 *)param_2;
    puVar4 = puVar6;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
        puVar4[1] = param_3[1];
        puVar4[2] = param_3[2];
      }
      puVar4 = puVar4 + 3;
      param_1 = (undefined4 *)((int)param_1 - 1);
    } while (param_1 != (undefined4 *)0x0);
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  puVar4 = puVar6 + param_2 * 3;
  if (puVar5 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar4 + (param_2 * -0xc - (int)puVar6) + (int)puVar5);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
      }
      puVar5 = puVar5 + 3;
      puVar4 = puVar4 + 3;
    } while (puVar5 != puVar1);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  iVar2 = *(int *)(in_ECX + 4);
  *(undefined4 **)(in_ECX + 0xc) = puVar3 + iVar7 * 3;
  if (iVar2 != 0) {
    *(undefined4 **)(in_ECX + 4) = puVar3;
    *(undefined4 **)(in_ECX + 8) = puVar3 + (param_2 + (*(int *)(in_ECX + 8) - iVar2) / 0xc) * 3;
    return;
  }
  *(undefined4 **)(in_ECX + 4) = puVar3;
  *(undefined4 **)(in_ECX + 8) = puVar3 + param_2 * 3;
  return;
}

