// rea decompile_all
// name: FUN_50014000
// address: 0x50014000
// body: available
// range: 0x50014000-0x5001425f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50014000(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501135a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_50012760(this,param_1);
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined ***)this = &PTR_FUN_501261f8;
  local_4 = 0;
  iVar2 = FUN_500ba390(*(int *)(uVar1 + 0x40));
  *(int *)((int)this + 0x40) = iVar2;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(uVar1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x50);
  iVar2 = FUN_500ba390(*(int *)(uVar1 + 0x54));
  *(int *)((int)this + 0x54) = iVar2;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x58));
  *(undefined4 *)((int)this + 0x58) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x5c));
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x60));
  *(undefined4 *)((int)this + 0x60) = uVar3;
  param_1 = *(uint *)(uVar1 + 100);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar4 = (int *)FUN_5006b100(&DAT_5018b490,&local_14,&param_1);
    if (*piVar4 == DAT_5018b494) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 100) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x68);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b468,&local_14,&param_1);
    if (local_14 == DAT_5018b46c) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x68) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x6c);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b468,&local_14,&param_1);
    if (local_14 == DAT_5018b46c) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined2 *)((int)this + 0x70) = *(undefined2 *)(uVar1 + 0x70);
  *(undefined2 *)((int)this + 0x72) = *(undefined2 *)(uVar1 + 0x72);
  *(undefined2 *)((int)this + 0x74) = *(undefined2 *)(uVar1 + 0x74);
  *(undefined2 *)((int)this + 0x76) = *(undefined2 *)(uVar1 + 0x76);
  param_1 = *(uint *)(uVar1 + 0x78);
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b490,&local_14,&param_1);
    if (local_14 != DAT_5018b494) {
      uVar5 = *(undefined4 *)(local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x78) = uVar5;
  *(undefined1 *)((int)this + 0x7c) = *(undefined1 *)(uVar1 + 0x7c);
  *(undefined1 *)((int)this + 0x7d) = *(undefined1 *)(uVar1 + 0x7d);
  *(undefined1 *)((int)this + 0x7e) = *(undefined1 *)(uVar1 + 0x7e);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(uVar1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(uVar1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(uVar1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(uVar1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(uVar1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(uVar1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(uVar1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(uVar1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(uVar1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(uVar1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(uVar1 + 0xa8);
  ExceptionList = local_c;
  return this;
}

