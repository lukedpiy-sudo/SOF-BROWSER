// rea decompile_all
// name: FUN_5005b350
// address: 0x5005b350
// body: available
// range: 0x5005b350-0x5005b679 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005b350(void *this,char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  void *this_00;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  
  pcVar3 = *(char **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)pcVar3) / 0x21c) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)pcVar3 - iVar6) / 0x21c, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)pcVar3 - iVar6) / 0x21c;
    }
    iVar6 = iVar6 + uVar5;
    iVar1 = iVar6;
    if (iVar6 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 0x21c);
    puVar11 = puVar2;
    for (pcVar3 = *(char **)((int)this + 4); uVar5 = param_2, puVar8 = puVar11, pcVar3 != param_1;
        pcVar3 = pcVar3 + 0x21c) {
      if (puVar11 != (undefined4 *)0x0) {
        pcVar4 = pcVar3;
        for (iVar1 = 0x87; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          puVar8 = puVar8 + 1;
        }
      }
      puVar11 = puVar11 + 0x87;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        pcVar3 = param_3;
        puVar10 = puVar8;
        for (iVar1 = 0x87; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar10 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          puVar10 = puVar10 + 1;
        }
      }
      puVar8 = puVar8 + 0x87;
    }
    pcVar3 = *(char **)((int)this + 8);
    puVar8 = puVar11 + param_2 * 0x87;
    if (param_1 != pcVar3) {
      pcVar4 = param_1 + (int)puVar8 + (param_2 * -0x21c - (int)puVar11);
      do {
        if (puVar8 != (undefined4 *)0x0) {
          pcVar7 = pcVar4;
          puVar11 = puVar8;
          for (iVar1 = 0x87; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar11 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar11 = puVar11 + 1;
          }
        }
        pcVar4 = pcVar4 + 0x21c;
        puVar8 = puVar8 + 0x87;
      } while (pcVar4 != pcVar3);
    }
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar6 * 0x87;
    if (*(int *)((int)this + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x21c;
    }
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar6) * 0x87;
    return;
  }
  if ((uint)(((int)pcVar3 - (int)param_1) / 0x21c) < param_2) {
    pcVar4 = param_1 + param_2 * 0x21c;
    if (param_1 != pcVar3) {
      pcVar7 = pcVar4 + param_2 * -0x21c;
      do {
        if (pcVar4 != (char *)0x0) {
          pcVar9 = pcVar7;
          pcVar12 = pcVar4;
          for (iVar6 = 0x87; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar12 = pcVar12 + 4;
          }
        }
        pcVar7 = pcVar7 + 0x21c;
        pcVar4 = pcVar4 + 0x21c;
      } while (pcVar7 != pcVar3);
    }
    puVar11 = *(undefined4 **)((int)this + 8);
    for (iVar6 = param_2 - ((int)puVar11 - (int)param_1) / 0x21c; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar11 != (undefined4 *)0x0) {
        pcVar3 = param_3;
        puVar2 = puVar11;
        for (iVar1 = 0x87; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          puVar2 = puVar2 + 1;
        }
      }
      puVar11 = puVar11 + 0x87;
    }
    pcVar3 = *(char **)((int)this + 8);
    for (; param_1 != pcVar3; param_1 = param_1 + 0x21c) {
      FUN_5005bf20(param_1,param_3);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x21c;
    return;
  }
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    for (pcVar7 = pcVar3 + param_2 * -0x21c; pcVar7 != pcVar3; pcVar7 = pcVar7 + 0x21c) {
      FUN_5005c190((undefined4 *)pcVar4,(undefined4 *)pcVar7);
      pcVar4 = pcVar4 + 0x21c;
    }
    this_00 = *(void **)((int)this + 8);
    pcVar3 = (char *)((int)this_00 + param_2 * -0x21c);
    while (param_1 != pcVar3) {
      pcVar3 = pcVar3 + -0x21c;
      this_00 = (void *)((int)this_00 + -0x21c);
      FUN_5005bf20(this_00,pcVar3);
    }
    pcVar3 = param_1 + param_2 * 0x21c;
    for (; param_1 != pcVar3; param_1 = param_1 + 0x21c) {
      FUN_5005bf20(param_1,param_3);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x21c;
  }
  return;
}

