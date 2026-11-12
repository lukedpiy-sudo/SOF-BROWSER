// rea decompile_all
// name: FUN_5004e9f0
// address: 0x5004e9f0
// body: available
// range: 0x5004e9f0-0x5004eb4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5004e9f0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_50125150;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  piVar4 = (int *)(param_1 + 0x14);
  piVar7 = (int *)((int)this + 0x14);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar7 = piVar7 + 1;
  }
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  puVar5 = (undefined4 *)((int)this + 0x2c);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  iVar2 = FUN_500ba390(*(int *)(param_1 + 0x14));
  *(int *)((int)this + 0x14) = iVar2;
  iVar2 = FUN_500ba390(*(int *)(param_1 + 0x2c));
  *(int *)((int)this + 0x2c) = iVar2;
  *(undefined ***)this = &PTR_LAB_501250b8;
  iVar2 = *(int *)(param_1 + 0x1bc);
  iVar3 = 0;
  local_4 = 0;
  *(int *)((int)this + 0x1bc) = iVar2;
  param_1 = 0;
  if (0 < iVar2) {
    local_14 = (int *)(iVar6 + 0x6c);
    puVar1 = (undefined4 *)((int)this + 0x54);
    do {
      puVar5 = (undefined4 *)((int)puVar1 + (iVar6 - (int)this));
      puVar8 = puVar1;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar2 = FUN_500ba390(*local_14);
      local_14 = local_14 + 9;
      puVar1[6] = iVar2;
      puVar1 = puVar1 + 9;
      iVar3 = param_1 + 1;
      param_1 = iVar3;
    } while (iVar3 < *(int *)((int)this + 0x1bc));
    if (9 < iVar3) {
      ExceptionList = local_c;
      return this;
    }
  }
  iVar6 = 10 - iVar3;
  puVar1 = (undefined4 *)((int)this + iVar3 * 0x24 + 0x5c);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1 = puVar1 + 9;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  ExceptionList = local_c;
  return this;
}

