// rea decompile_all
// name: FUN_5005e540
// address: 0x5005e540
// body: available
// range: 0x5005e540-0x5005e724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x5005e6cf) */
/* WARNING: Removing unreachable block (ram,0x5005e6e6) */
/* WARNING: Removing unreachable block (ram,0x5005e6fb) */
/* WARNING: Removing unreachable block (ram,0x5005e704) */

void __thiscall FUN_5005e540(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar7 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 3, 0 < iVar1)) {
    piVar4 = *(int **)((int)this + 8);
    do {
      if ((*piVar4 != 0) && (*piVar4 == param_1)) {
        return;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 < iVar1);
  }
  local_8 = param_1;
  local_4 = param_2;
  *(undefined4 *)(param_2 + 0x10) = 3;
  piVar4 = *(int **)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - (int)piVar4 >> 3 == 0) {
    iVar7 = *(int *)((int)this + 8);
    if ((iVar7 == 0) || (uVar3 = (int)piVar4 - iVar7 >> 3, uVar3 < 2)) {
      uVar3 = 1;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)piVar4 - iVar7 >> 3;
    }
    iVar7 = iVar7 + uVar3;
    iVar1 = iVar7;
    if (iVar7 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 * 8);
    puVar6 = puVar2;
    for (piVar5 = *(int **)((int)this + 8); piVar5 != piVar4; piVar5 = piVar5 + 2) {
      FUN_500a6f20(puVar6,piVar5);
      puVar6 = puVar6 + 2;
    }
    FUN_500641d0(puVar6,1,&local_8);
    FUN_500641a0(piVar4,*(undefined4 **)((int)this + 0xc),puVar6 + 2);
    FUN_50043230();
    FUN_50106b60(*(undefined **)((int)this + 8));
    *(undefined4 **)((int)this + 0x10) = puVar2 + iVar7 * 2;
    iVar7 = FUN_50063160((int)this + 4);
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + iVar7 * 2 + 2;
    return;
  }
  FUN_500641a0(piVar4,piVar4,piVar4 + 2);
  FUN_500641d0(*(undefined4 **)((int)this + 0xc),
               1 - ((int)*(undefined4 **)((int)this + 0xc) - (int)piVar4 >> 3),&local_8);
  piVar5 = *(int **)((int)this + 0xc);
  if (piVar4 == piVar5) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 8;
    return;
  }
  do {
    *piVar4 = local_8;
    piVar4[1] = local_4;
    piVar4 = piVar4 + 2;
  } while (piVar4 != piVar5);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 8;
  return;
}

