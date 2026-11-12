// rea decompile_all
// name: FUN_50079d60
// address: 0x50079d60
// body: available
// range: 0x50079d60-0x50079f41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50079d60(void *this,char *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114b10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x128) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)this + 300) = pvVar1;
  *(undefined4 *)((int)this + 0x130) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x134) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)this + 0x138) = pvVar1;
  *(undefined4 *)((int)this + 0x13c) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 0x140) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)this + 0x144) = pvVar1;
  *(undefined4 *)((int)this + 0x148) = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x14c) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)this + 0x150) = pvVar1;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x158) = (undefined1)param_2;
  local_4._0_1_ = 3;
  uVar2 = FUN_5006b170((undefined4 *)0x0,0);
  *(undefined4 *)((int)this + 0x15c) = uVar2;
  *(undefined4 *)((int)this + 0x160) = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)((int)this + 0x164) = (undefined1)param_2;
  uVar2 = FUN_5006b170((undefined4 *)0x0,0);
  *(undefined4 *)((int)this + 0x168) = uVar2;
  *(undefined4 *)((int)this + 0x16c) = 0;
  local_4._0_1_ = 5;
  *(undefined1 *)((int)this + 0x170) = (undefined1)param_2;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  *(void **)((int)this + 0x174) = pvVar1;
  *(undefined4 *)((int)this + 0x178) = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)((int)this + 0x17c) = (undefined1)param_2;
  uVar2 = FUN_5006b170((undefined4 *)0x0,0);
  *(undefined4 *)((int)this + 0x180) = uVar2;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  puVar4 = (undefined4 *)((int)this + 0x318);
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = (undefined4 *)((int)this + 0x188);
  for (iVar3 = 100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x124) = 0;
  puVar4 = this;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined4 *)((int)this + 0x108) = 1;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x118) = param_2;
  _strncpy(this,param_1,0x104);
  FUN_5007adc0((int)this);
  ExceptionList = local_c;
  return this;
}

