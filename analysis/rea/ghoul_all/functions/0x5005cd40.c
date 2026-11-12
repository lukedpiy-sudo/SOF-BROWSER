// rea decompile_all
// name: FUN_5005cd40
// address: 0x5005cd40
// body: available
// range: 0x5005cd40-0x5005cf99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x5005cf6f) */

undefined4 __thiscall FUN_5005cd40(void *this,uint param_1)

{
  void *this_00;
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501141d8;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x14);
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x24) = param_1;
  if (*(int *)((int)this + 0x18) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x18)) / 0x34;
  }
  if (uVar6 < param_1) {
    uVar6 = param_1;
    if ((int)param_1 < 0) {
      uVar6 = 0;
    }
    puVar4 = operator_new(uVar6 * 0x34);
    FUN_500638d0(*(undefined4 **)((int)this + 0x18),*(undefined4 **)((int)this + 0x1c),puVar4);
    FUN_50063890(*(int *)((int)this + 0x18),*(int *)((int)this + 0x1c));
    FUN_50106b60(*(undefined **)((int)this + 0x18));
    *(undefined4 **)((int)this + 0x20) = puVar4 + param_1 * 0xd;
    iVar5 = FUN_50056bf0((int)this_00);
    *(undefined4 **)((int)this + 0x18) = puVar4;
    *(undefined4 **)((int)this + 0x1c) = puVar4 + iVar5 * 0xd;
  }
  *(undefined1 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  FUN_50063820(this_00,*(undefined4 **)((int)this + 0x18),*(undefined4 **)((int)this + 0x1c));
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_14 = 0;
  local_10 = 0;
  local_18 = 0;
  local_4 = 0;
  FUN_50063510(this_00,*(undefined4 **)((int)this + 0x1c),1,&local_40);
  local_4 = 0xffffffff;
  FUN_5005c910((int)&local_40);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  piVar1 = *(int **)((int)this + 0x54);
  puVar4 = (undefined4 *)FUN_500fc2d0((void *)((int)this + 0x50),&param_1);
  FUN_50063910((void *)((int)this + 0x50),&local_4c,(int *)*puVar4,piVar1);
  piVar1 = *(int **)((int)this + 0x68);
  puVar4 = (undefined4 *)FUN_500fc2d0((void *)((int)this + 100),&param_1);
  FUN_50063910((void *)((int)this + 100),&local_4c,(int *)*puVar4,piVar1);
  piVar1 = *(int **)((int)this + 0x7c);
  puVar4 = (undefined4 *)FUN_500fc2d0((void *)((int)this + 0x78),&local_48);
  FUN_50063910((void *)((int)this + 0x78),&local_44,(int *)*puVar4,piVar1);
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x8e) = 0;
  iVar5 = FUN_500642a0(*(undefined1 **)((int)this + 0x9c),*(undefined1 **)((int)this + 0x9c),
                       *(undefined1 **)((int)this + 0x98));
  FUN_50063c80(iVar5,*(int *)((int)this + 0x9c));
  *(int *)((int)this + 0x9c) = iVar5;
  puVar4 = *(undefined4 **)((int)this + 0xa8);
  if (puVar4 != *(undefined4 **)((int)this + 0xac)) {
    do {
      puVar2 = (undefined *)*puVar4;
      if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0;
        FUN_50106b60(puVar2);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)((int)this + 0xac));
  }
  uVar3 = *(undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xa8);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

