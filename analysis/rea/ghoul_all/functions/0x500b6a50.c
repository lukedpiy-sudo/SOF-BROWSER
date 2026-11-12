// rea decompile_all
// name: FUN_500b6a50
// address: 0x500b6a50
// body: available
// range: 0x500b6a50-0x500b6c34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_500b6a50(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  int iVar4;
  int unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_50115104;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)((int)this + 0x14) = &PTR_FUN_501298a8;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  DAT_5014d1b4 = 6;
  *(undefined4 *)((int)this + 0x28) = &PTR_FUN_501298b0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 2;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = DAT_5015ccdc;
  local_4 = 2;
  uStack_3 = 0;
  iVar1 = FUN_500ba390(*(int *)(param_1 + 0x10));
  *(int *)((int)this + 0x10) = iVar1;
  puVar2 = operator_new(0x14);
  local_4 = 3;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_LAB_501298f0;
    puVar2[1] = *(undefined4 *)(param_1 + 0x18);
    iVar1 = FUN_500ba390(*(int *)(param_1 + 0x1c));
    puVar2[2] = iVar1;
    *puVar2 = &PTR_FUN_501298a8;
    puVar2[3] = *(undefined4 *)(param_1 + 0x20);
    puVar2[4] = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)((int)this + 0x18) = puVar2[1];
  *(undefined4 *)((int)this + 0x1c) = puVar2[2];
  *(undefined4 *)((int)this + 0x20) = puVar2[3];
  *(undefined4 *)((int)this + 0x24) = puVar2[4];
  _local_4 = CONCAT31(uStack_3,2);
  (**(code **)*puVar2)(1);
  this_00 = operator_new(0x48);
  puStack_8._0_1_ = 4;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_500b6fa0(this_00,unaff_retaddr + 0x28);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  *(undefined4 *)((int)this + 0x2c) = puVar2[1];
  *(undefined4 *)((int)this + 0x30) = puVar2[2];
  *(undefined4 *)((int)this + 0x34) = puVar2[3];
  *(undefined4 *)((int)this + 0x38) = puVar2[4];
  *(undefined4 *)((int)this + 0x3c) = puVar2[5];
  *(undefined4 *)((int)this + 0x40) = puVar2[6];
  *(undefined4 *)((int)this + 0x44) = puVar2[7];
  puVar3 = (undefined4 *)((int)this + 0x48);
  iVar1 = (int)puVar2 - ((int)this + 0x28);
  iVar4 = 3;
  do {
    *puVar3 = *(undefined4 *)(iVar1 + (int)puVar3);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)((int)this + 0x54);
  iVar4 = 3;
  do {
    *puVar3 = *(undefined4 *)((int)puVar3 + iVar1);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)((int)this + 0x60);
  iVar4 = 3;
  do {
    *puVar3 = *(undefined4 *)((int)puVar3 + iVar1);
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x6c) = puVar2[0x11];
  (**(code **)*puVar2)(1);
  ExceptionList = this_00;
  return this;
}

