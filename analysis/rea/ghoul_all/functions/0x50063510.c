// rea decompile_all
// name: FUN_50063510
// address: 0x50063510
// body: available
// range: 0x50063510-0x50063818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_50063510(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar4) / 0x34) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)puVar4 - iVar6) / 0x34, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar4 - iVar6) / 0x34;
    }
    iVar6 = iVar6 + uVar5;
    iVar1 = iVar6;
    if (iVar6 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 0x34);
    puVar3 = puVar2;
    for (puVar4 = *(undefined4 **)((int)this + 4); uVar5 = param_2, puVar7 = puVar3,
        puVar4 != param_1; puVar4 = puVar4 + 0xd) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = puVar4;
        puVar8 = puVar3;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar3 = puVar3 + 0xd;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (puVar7 != (undefined4 *)0x0) {
        puVar4 = param_3;
        puVar8 = puVar7;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar7 = puVar7 + 0xd;
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    puVar4 = puVar3 + param_2 * 0xd;
    if (param_1 != puVar7) {
      puVar3 = (undefined4 *)((int)puVar4 + (param_2 * -0x34 - (int)puVar3) + (int)param_1);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          puVar8 = puVar3;
          puVar9 = puVar4;
          for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        puVar3 = puVar3 + 0xd;
        puVar4 = puVar4 + 0xd;
      } while (puVar3 != puVar7);
    }
    iVar1 = *(int *)((int)this + 8);
    for (iVar10 = *(int *)((int)this + 4); iVar10 != iVar1; iVar10 = iVar10 + 0x34) {
      FUN_5005c910(iVar10);
    }
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar6 * 0xd;
    if (*(int *)((int)this + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x34;
    }
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar6) * 0xd;
    return puVar2 + (param_2 + iVar6) * 0xd;
  }
  puVar3 = (undefined4 *)(((int)puVar4 - (int)param_1) * 0x4ec4ec4f);
  if ((uint)(((int)puVar4 - (int)param_1) / 0x34) < param_2) {
    puVar3 = param_1 + param_2 * 0xd;
    if (param_1 != puVar4) {
      puVar2 = puVar3 + param_2 * -0xd;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          puVar7 = puVar2;
          puVar8 = puVar3;
          for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar2 = puVar2 + 0xd;
        puVar3 = puVar3 + 0xd;
      } while (puVar2 != puVar4);
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    for (iVar6 = param_2 - ((int)puVar4 - (int)param_1) / 0x34; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = param_3;
        puVar2 = puVar4;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      puVar4 = puVar4 + 0xd;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    while (param_1 != puVar4) {
      puVar7 = param_1 + 0xd;
      puVar3 = param_3;
      puVar2 = param_1;
      for (iVar6 = 0xd; param_1 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    puVar4 = (undefined4 *)(*(int *)((int)this + 8) + param_2 * 0x34);
    *(undefined4 **)((int)this + 8) = puVar4;
    return puVar4;
  }
  if (param_2 != 0) {
    puVar3 = puVar4;
    for (puVar2 = puVar4 + param_2 * -0xd; puVar2 != puVar4; puVar2 = puVar2 + 0xd) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = puVar2;
        puVar8 = puVar3;
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar3 = puVar3 + 0xd;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    puVar3 = puVar4 + param_2 * -0xd;
    while (param_1 != puVar3) {
      puVar3 = puVar3 + -0xd;
      puVar4 = puVar4 + -0xd;
      puVar2 = puVar3;
      puVar7 = puVar4;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar3 = param_1;
    while (puVar3 != param_1 + param_2 * 0xd) {
      puVar7 = puVar3 + 0xd;
      puVar4 = param_3;
      puVar2 = puVar3;
      for (iVar6 = 0xd; puVar3 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x34;
  }
  return puVar3;
}

