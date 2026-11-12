// rea decompile_all
// name: FUN_50049fe0
// address: 0x50049fe0
// body: available
// range: 0x50049fe0-0x5004a2dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50049fe0(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  void *pvVar9;
  
  puVar7 = *(undefined1 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar7) / 0x88) < param_2) {
    iVar5 = *(int *)((int)this + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar7 - iVar5) / 0x88, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar7 - iVar5) / 0x88;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 0x88);
    puVar6 = puVar3;
    for (puVar7 = *(undefined1 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar6,
        puVar7 != param_1; puVar7 = puVar7 + 0x88) {
      FUN_5004a9b0(puVar6,puVar7);
      puVar6 = puVar6 + 0x88;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_5004a9b0(puVar1,param_3);
      puVar1 = puVar1 + 0x88;
    }
    puVar7 = *(undefined1 **)((int)this + 8);
    if (param_1 != puVar7) {
      iVar2 = param_2 * 0x88 - (int)param_1;
      do {
        FUN_5004a9b0(param_1 + (int)(puVar6 + iVar2),param_1);
        param_1 = param_1 + 0x88;
      } while (param_1 != puVar7);
    }
    pvVar9 = *(void **)((int)this + 8);
    for (pvVar8 = *(void **)((int)this + 4); pvVar8 != pvVar9; pvVar8 = (void *)((int)pvVar8 + 0x88)
        ) {
      FUN_50047700(pvVar8);
    }
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar3 + iVar5 * 0x88;
    if (*(int *)((int)this + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88;
    }
    *(undefined1 **)((int)this + 4) = puVar3;
    *(undefined1 **)((int)this + 8) = puVar3 + (param_2 + iVar5) * 0x88;
    return;
  }
  if ((uint)(((int)puVar7 - (int)param_1) / 0x88) < param_2) {
    for (puVar6 = param_1; puVar6 != puVar7; puVar6 = puVar6 + 0x88) {
      FUN_5004a9b0(puVar6 + param_2 * 0x88,puVar6);
    }
    puVar7 = *(undefined1 **)((int)this + 8);
    for (iVar5 = param_2 - ((int)puVar7 - (int)param_1) / 0x88; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_5004a9b0(puVar7,param_3);
      puVar7 = puVar7 + 0x88;
    }
    puVar7 = *(undefined1 **)((int)this + 8);
    for (; param_1 != puVar7; param_1 = param_1 + 0x88) {
      FUN_5004ab80(param_1,param_3);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x88;
    return;
  }
  if (param_2 != 0) {
    puVar6 = puVar7;
    for (puVar3 = puVar7 + param_2 * -0x88; puVar3 != puVar7; puVar3 = puVar3 + 0x88) {
      FUN_5004a9b0(puVar6,puVar3);
      puVar6 = puVar6 + 0x88;
    }
    pvVar9 = *(void **)((int)this + 8);
    puVar7 = (undefined1 *)((int)pvVar9 + param_2 * -0x88);
    while (param_1 != puVar7) {
      puVar7 = puVar7 + -0x88;
      pvVar9 = (void *)((int)pvVar9 + -0x88);
      FUN_5004ab80(pvVar9,puVar7);
    }
    puVar7 = param_1 + param_2 * 0x88;
    for (; param_1 != puVar7; param_1 = param_1 + 0x88) {
      FUN_5004ab80(param_1,param_3);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x88;
  }
  return;
}

