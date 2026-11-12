// rea decompile_all
// name: FUN_500149b0
// address: 0x500149b0
// body: available
// range: 0x500149b0-0x50014b1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500149b0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void **ppvVar3;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_50014000(this,param_1);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined ***)this = &PTR_FUN_501260b0;
  param_1 = *(uint *)(uVar1 + 0xac);
  local_4 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b490,(int *)&local_14,&param_1);
    if (local_14 == DAT_5018b494) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((int)local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0xac) = uVar2;
  param_1 = *(uint *)(uVar1 + 0xb0);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b490,(int *)&local_14,&param_1);
    if (local_14 == DAT_5018b494) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((int)local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0xb0) = uVar2;
  param_1 = *(uint *)(uVar1 + 0xb4);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_500c7d40(&DAT_5018b490,(int *)&local_14,&param_1);
    if ((local_14 == DAT_5018b494) || (param_1 < *(uint *)((int)local_14 + 0xc))) {
      local_10 = DAT_5018b494;
      ppvVar3 = &local_10;
    }
    else {
      ppvVar3 = &local_14;
    }
    if (*ppvVar3 == DAT_5018b494) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((int)*ppvVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0xb4) = uVar2;
  *(undefined2 *)((int)this + 0xb8) = *(undefined2 *)(uVar1 + 0xb8);
  *(undefined2 *)((int)this + 0xba) = *(undefined2 *)(uVar1 + 0xba);
  *(undefined2 *)((int)this + 0xbc) = *(undefined2 *)(uVar1 + 0xbc);
  ExceptionList = local_c;
  return this;
}

