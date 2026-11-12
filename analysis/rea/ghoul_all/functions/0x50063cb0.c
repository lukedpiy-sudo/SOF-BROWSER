// rea decompile_all
// name: FUN_50063cb0
// address: 0x50063cb0
// body: available
// range: 0x50063cb0-0x50063eee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50063cb0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar7 >> 3)) {
    if ((uint)((int)puVar7 - (int)param_1 >> 3) < param_2) {
      puVar5 = param_1 + param_2 * 2;
      if (param_1 != puVar7) {
        puVar4 = puVar5 + param_2 * -2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar4;
            puVar5[1] = puVar4[1];
          }
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 2;
        } while (puVar4 != puVar7);
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (int)param_1 >> 3); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *param_3;
          puVar7[1] = param_3[1];
        }
        puVar7 = puVar7 + 2;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 2) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 8;
      return;
    }
    if (param_2 != 0) {
      puVar5 = puVar7;
      for (puVar4 = puVar7 + param_2 * -2; puVar4 != puVar7; puVar4 = puVar4 + 2) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
        }
        puVar5 = puVar5 + 2;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (puVar5 = *(undefined4 **)((int)this + 8) + param_2 * -2; param_1 != puVar5;
          puVar5 = puVar5 + -2) {
        puVar7[-2] = puVar5[-2];
        puVar7[-1] = puVar5[-1];
        puVar7 = puVar7 + -2;
      }
      puVar7 = param_1 + param_2 * 2;
      for (; param_1 != puVar7; param_1 = param_1 + 2) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 8;
    }
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar7 - iVar2 >> 3, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar7 - iVar2 >> 3;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 8);
  puVar5 = puVar4;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
      ; puVar7 = puVar7 + 2) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar7;
      puVar5[1] = puVar7[1];
    }
    puVar5 = puVar5 + 2;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
    }
    puVar1 = puVar1 + 2;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar7 = puVar5 + param_2 * 2;
  if (param_1 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar7 + (param_2 * -8 - (int)puVar5) + (int)param_1);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
      }
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    } while (puVar5 != puVar1);
  }
  FUN_50106b60(*(undefined **)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar2 * 2;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4 + param_2 * 2;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + ((*(int *)((int)this + 8) - iVar2 >> 3) + param_2) * 2;
  return;
}

