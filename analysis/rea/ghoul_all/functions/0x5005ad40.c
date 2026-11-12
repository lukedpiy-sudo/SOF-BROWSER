// rea decompile_all
// name: FUN_5005ad40
// address: 0x5005ad40
// body: available
// range: 0x5005ad40-0x5005affe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005ad40(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar6 >> 9)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 9) < param_2) {
      puVar4 = param_1 + param_2 * 0x80;
      if (param_1 != puVar6) {
        puVar3 = puVar4 + param_2 * -0x80;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = puVar3;
            puVar8 = puVar4;
            for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar3 = puVar3 + 0x80;
          puVar4 = puVar4 + 0x80;
        } while (puVar3 != puVar6);
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      for (iVar1 = param_2 - ((int)puVar6 - (int)param_1 >> 9); iVar1 != 0; iVar1 = iVar1 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          puVar4 = param_3;
          puVar3 = puVar6;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        puVar6 = puVar6 + 0x80;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      while (param_1 != puVar6) {
        puVar7 = param_1 + 0x80;
        puVar4 = param_3;
        puVar3 = param_1;
        for (iVar1 = 0x80; param_1 = puVar7, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x200;
      return;
    }
    if (param_2 != 0) {
      puVar4 = puVar6;
      for (puVar3 = puVar6 + param_2 * -0x80; puVar3 != puVar6; puVar3 = puVar3 + 0x80) {
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = puVar3;
          puVar8 = puVar4;
          for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar4 = puVar4 + 0x80;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      puVar4 = puVar6 + param_2 * -0x80;
      while (param_1 != puVar4) {
        puVar4 = puVar4 + -0x80;
        puVar6 = puVar6 + -0x80;
        puVar3 = puVar4;
        puVar7 = puVar6;
        for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar6 = param_1;
      while (puVar6 != param_1 + param_2 * 0x80) {
        puVar7 = puVar6 + 0x80;
        puVar4 = param_3;
        puVar3 = puVar6;
        for (iVar1 = 0x80; puVar6 = puVar7, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x200;
    }
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (uVar5 = (int)puVar6 - iVar1 >> 9, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar6 - iVar1 >> 9;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 << 9);
  puVar4 = puVar3;
  for (puVar6 = *(undefined4 **)((int)this + 4); uVar5 = param_2, puVar7 = puVar4, puVar6 != param_1
      ; puVar6 = puVar6 + 0x80) {
    if (puVar4 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = puVar4;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar4 = puVar4 + 0x80;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = param_3;
      puVar8 = puVar7;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 0x80;
  }
  puVar7 = *(undefined4 **)((int)this + 8);
  puVar6 = puVar4 + param_2 * 0x80;
  if (param_1 != puVar7) {
    puVar4 = (undefined4 *)((int)puVar6 + (param_2 * -0x200 - (int)puVar4) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        puVar8 = puVar4;
        puVar9 = puVar6;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar4 = puVar4 + 0x80;
      puVar6 = puVar6 + 0x80;
    } while (puVar4 != puVar7);
  }
  FUN_50106b60(*(undefined **)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar1 * 0x80;
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + param_2 * 0x80;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) =
       puVar3 + ((*(int *)((int)this + 8) - iVar2 >> 9) + param_2) * 0x80;
  return;
}

