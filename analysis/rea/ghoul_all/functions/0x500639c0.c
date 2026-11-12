// rea decompile_all
// name: FUN_500639c0
// address: 0x500639c0
// body: available
// range: 0x500639c0-0x50063bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_500639c0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  puVar6 = *(undefined1 **)((int)this + 8);
  iVar4 = *(int *)((int)this + 0xc) - (int)puVar6;
  iVar3 = iVar4 >> 0x1f;
  if (iVar4 / 0x1c + iVar3 == iVar3) {
    if ((iVar1 == 0) || (uVar5 = ((int)puVar6 - iVar1) / 0x1c, uVar5 < 2)) {
      uVar5 = 1;
    }
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = ((int)puVar6 - iVar1) / 0x1c;
    }
    iVar3 = iVar3 + uVar5;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = 0;
    }
    puVar2 = operator_new(iVar4 * 0x1c);
    puVar7 = puVar2;
    for (puVar6 = *(undefined1 **)((int)this + 4); puVar6 != param_1; puVar6 = puVar6 + 0x1c) {
      FUN_50064830(puVar7,puVar6);
      puVar7 = puVar7 + 0x1c;
    }
    FUN_50064830(puVar7,param_2);
    FUN_50064200(param_1,*(undefined1 **)((int)this + 8),puVar7 + 0x1c);
    FUN_50063c80(*(int *)((int)this + 4),*(int *)((int)this + 8));
    FUN_50106b60(*(undefined **)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar2 + iVar3 * 0x1c;
    iVar3 = FUN_50063bc0((int)this);
    *(undefined1 **)((int)this + 4) = puVar2;
    *(undefined1 **)((int)this + 8) = puVar2 + (iVar3 + 1) * 0x1c;
  }
  else {
    iVar3 = (int)puVar6 - (int)param_1 >> 0x1f;
    if (((int)puVar6 - (int)param_1) / 0x1c + iVar3 == iVar3) {
      FUN_50064200(param_1,puVar6,param_1 + 0x1c);
      FUN_50064240(*(undefined1 **)((int)this + 8),
                   1 - ((int)*(undefined1 **)((int)this + 8) - (int)param_1) / 0x1c,param_2);
      FUN_500644a0(param_1,*(undefined1 **)((int)this + 8),param_2);
    }
    else {
      FUN_50064200(puVar6 + -0x1c,puVar6,puVar6);
      FUN_50064660((int)param_1,(int)(*(undefined1 **)((int)this + 8) + -0x1c),
                   *(undefined1 **)((int)this + 8));
      FUN_500644a0(param_1,param_1 + 0x1c,param_2);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x1c;
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x1c) * 0x1c;
}

