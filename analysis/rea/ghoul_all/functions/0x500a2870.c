// rea decompile_all
// name: FUN_500a2870
// address: 0x500a2870
// body: available
// range: 0x500a2870-0x500a29d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500a2870(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void **ppvVar4;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114d5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  pvVar2 = operator_new(0xc);
  uVar1 = param_1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 8) = 0;
  }
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)this + 4) = pvVar2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_LAB_5012982c;
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 0xc);
  param_1 = *(uint *)(param_1 + 0x14);
  local_4 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b4b8,(int *)&local_14,&param_1);
    if (local_14 == DAT_5018b4bc) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((int)local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x14) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x10);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_5006b100(&DAT_5018b490,(int *)&local_14,&param_1);
    if (local_14 == DAT_5018b494) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((int)local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x10) = uVar3;
  *(undefined2 *)((int)this + 0x18) = *(undefined2 *)(uVar1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(uVar1 + 0x20);
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)(uVar1 + 0x22);
  param_1 = *(uint *)(uVar1 + 0x24);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  else {
    FUN_500c7d40(&DAT_5018b468,(int *)&local_14,&param_1);
    if ((local_14 == DAT_5018b46c) || (param_1 < *(uint *)((int)local_14 + 0xc))) {
      local_10 = DAT_5018b46c;
      ppvVar4 = &local_10;
    }
    else {
      ppvVar4 = &local_14;
    }
    if (*ppvVar4 == DAT_5018b46c) {
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)*ppvVar4 + 0x10);
    }
  }
  ExceptionList = local_c;
  return this;
}

