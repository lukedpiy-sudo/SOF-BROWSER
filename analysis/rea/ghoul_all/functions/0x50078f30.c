// rea decompile_all
// name: FUN_50078f30
// address: 0x50078f30
// body: available
// range: 0x50078f30-0x50079252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50078f30(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *piStack_14;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114a8c;
  local_c = ExceptionList;
  switch(*(undefined4 *)((int)this + 0x4c)) {
  case 0:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x50);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_50078e80(this,param_1);
      if ((*(int *)((int)this + 0x4c) == 0) && (puVar3 != (undefined4 *)0x0)) {
        uVar4 = *puVar3;
      }
      else {
        iVar1 = *(int *)((int)this + 0x48);
        if (iVar1 == -3) {
          (**(code **)(*param_1 + 0xc))(&local_18);
        }
        else if (iVar1 == -2) {
          (**(code **)(*param_1 + 0xc))(&local_18);
        }
        else {
          if (iVar1 != -1) {
            uVar4 = 0;
            goto LAB_50078fec;
          }
          (**(code **)(*param_1 + 0xc))(&local_18);
        }
        lVar5 = __ftol();
        uVar4 = (undefined4)lVar5;
      }
LAB_50078fec:
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 0;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_50129328;
      puVar2[0x13] = uVar4;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x50);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_50078e80(this,param_1);
      if ((*(int *)((int)this + 0x4c) == 2) && (puVar3 != (undefined4 *)0x0)) {
        param_1 = (int *)*puVar3;
      }
      else {
        iVar1 = *(int *)((int)this + 0x48);
        if (iVar1 == -3) {
          (**(code **)(*param_1 + 0xc))(&local_18);
          param_1 = piStack_10;
        }
        else if (iVar1 == -2) {
          (**(code **)(*param_1 + 0xc))(&local_18);
          param_1 = piStack_14;
        }
        else if (iVar1 == -1) {
          (**(code **)(*param_1 + 0xc))(&local_18);
          param_1 = local_18;
        }
        else {
          param_1 = (int *)0x0;
        }
      }
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 1;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_501293f0;
      puVar2[0x13] = param_1;
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_50078e80(this,param_1);
    if ((*(int *)((int)this + 0x4c) == 4) && (puVar2 != (undefined4 *)0x0)) {
      local_24 = *puVar2;
      local_20 = puVar2[1];
      local_1c = puVar2[2];
    }
    else {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
    }
    puVar2 = operator_new(0x58);
    local_4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 2;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_50129458;
      FUN_50003c80(&local_24,puVar2 + 0x13);
      ExceptionList = local_c;
      return puVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    puVar2 = operator_new(0x50);
    local_4 = 2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_50078e80(this,param_1);
      if ((*(int *)((int)this + 0x4c) == 7) && (puVar3 != (undefined4 *)0x0)) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      *puVar2 = &PTR_LAB_50129390;
      _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
      puVar2[0x11] = 3;
      puVar2[0x12] = 0xffffffff;
      *puVar2 = &PTR_FUN_501294c0;
      puVar2[0x13] = uVar4;
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

