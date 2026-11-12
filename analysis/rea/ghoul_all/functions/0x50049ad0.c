// rea decompile_all
// name: FUN_50049ad0
// address: 0x50049ad0
// body: available
// range: 0x50049ad0-0x50049ccd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50049ad0(void *this,int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  puVar7 = *(undefined1 **)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc) - (int)puVar7;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x88 + iVar4 == iVar4) {
    if ((iVar1 == 0) || (uVar6 = ((int)puVar7 - iVar1) / 0x88, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar7 - iVar1) / 0x88;
    }
    iVar4 = iVar4 + uVar6;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    puVar2 = operator_new(iVar3 * 0x88);
    puVar7 = puVar2;
    for (piVar5 = *(int **)((int)this + 4); piVar5 != param_1; piVar5 = piVar5 + 0x22) {
      FUN_5004a9b0(puVar7,(undefined1 *)piVar5);
      puVar7 = puVar7 + 0x88;
    }
    FUN_5004a9b0(puVar7,param_2);
    FUN_5004a2e0((undefined1 *)param_1,*(undefined1 **)((int)this + 8),puVar7 + 0x88);
    FUN_50049d30(*(void **)((int)this + 4),*(void **)((int)this + 8));
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar2 + iVar4 * 0x88;
    iVar4 = FUN_50049a70((int)this);
    *(undefined1 **)((int)this + 4) = puVar2;
    *(undefined1 **)((int)this + 8) = puVar2 + (iVar4 + 1) * 0x88;
  }
  else {
    iVar4 = (int)puVar7 - (int)param_1 >> 0x1f;
    if (((int)puVar7 - (int)param_1) / 0x88 + iVar4 == iVar4) {
      FUN_5004a2e0((undefined1 *)param_1,puVar7,(undefined1 *)(param_1 + 0x22));
      FUN_5004a320(*(undefined1 **)((int)this + 8),
                   1 - ((int)*(undefined1 **)((int)this + 8) - (int)param_1) / 0x88,param_2);
      FUN_5004a5d0(param_1,*(void **)((int)this + 8),param_2);
    }
    else {
      FUN_5004a2e0(puVar7 + -0x88,puVar7,puVar7);
      FUN_5004a7c0(param_1,*(int **)((int)this + 8) + -0x22,*(int **)((int)this + 8));
      FUN_5004a5d0(param_1,param_1 + 0x22,param_2);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x88;
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x88) * 0x88;
}

