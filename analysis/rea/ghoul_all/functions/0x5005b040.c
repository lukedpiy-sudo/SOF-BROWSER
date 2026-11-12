// rea decompile_all
// name: FUN_5005b040
// address: 0x5005b040
// body: available
// range: 0x5005b040-0x5005b34c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005b040(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar7 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar7) / 0x44) < param_2) {
    iVar4 = *(int *)((int)this + 4);
    if ((iVar4 == 0) || (uVar3 = ((int)puVar7 - iVar4) / 0x44, uVar3 <= param_2)) {
      uVar3 = param_2;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar7 - iVar4) / 0x44;
    }
    iVar4 = iVar4 + uVar3;
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 0x44);
    puVar5 = puVar2;
    for (puVar7 = *(undefined4 **)((int)this + 4); uVar3 = param_2, puVar6 = puVar5,
        puVar7 != param_1; puVar7 = puVar7 + 0x11) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar7;
        puVar8 = puVar5;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar5 = puVar5 + 0x11;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = param_3;
        puVar8 = puVar6;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar6 = puVar6 + 0x11;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    puVar7 = puVar5 + param_2 * 0x11;
    if (param_1 != puVar6) {
      puVar5 = (undefined4 *)((int)puVar7 + (param_2 * -0x44 - (int)puVar5) + (int)param_1);
      do {
        if (puVar7 != (undefined4 *)0x0) {
          puVar8 = puVar5;
          puVar9 = puVar7;
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        puVar5 = puVar5 + 0x11;
        puVar7 = puVar7 + 0x11;
      } while (puVar5 != puVar6);
    }
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar4 * 0x11;
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x44;
    }
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar4) * 0x11;
    return;
  }
  if ((uint)(((int)puVar7 - (int)param_1) / 0x44) < param_2) {
    puVar5 = param_1 + param_2 * 0x11;
    if (param_1 != puVar7) {
      puVar2 = puVar5 + param_2 * -0x11;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = puVar2;
          puVar8 = puVar5;
          for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar2 = puVar2 + 0x11;
        puVar5 = puVar5 + 0x11;
      } while (puVar2 != puVar7);
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    for (iVar4 = param_2 - ((int)puVar7 - (int)param_1) / 0x44; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar7 != (undefined4 *)0x0) {
        puVar5 = param_3;
        puVar2 = puVar7;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
      }
      puVar7 = puVar7 + 0x11;
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    while (param_1 != puVar7) {
      puVar6 = param_1 + 0x11;
      puVar5 = param_3;
      puVar2 = param_1;
      for (iVar4 = 0x11; param_1 = puVar6, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x44;
    return;
  }
  if (param_2 != 0) {
    puVar5 = puVar7;
    for (puVar2 = puVar7 + param_2 * -0x11; puVar2 != puVar7; puVar2 = puVar2 + 0x11) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar2;
        puVar8 = puVar5;
        for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar5 = puVar5 + 0x11;
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    puVar5 = puVar7 + param_2 * -0x11;
    while (param_1 != puVar5) {
      puVar5 = puVar5 + -0x11;
      puVar7 = puVar7 + -0x11;
      puVar2 = puVar5;
      puVar6 = puVar7;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    puVar7 = param_1;
    while (puVar7 != param_1 + param_2 * 0x11) {
      puVar6 = puVar7 + 0x11;
      puVar5 = param_3;
      puVar2 = puVar7;
      for (iVar4 = 0x11; puVar7 = puVar6, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x44;
  }
  return;
}

