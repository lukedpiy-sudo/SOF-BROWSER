// rea decompile_all
// name: FUN_5000dae0
// address: 0x5000dae0
// body: available
// range: 0x5000dae0-0x5000dc20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5000dae0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_4;
  
  uVar1 = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_501252b8;
  local_4 = this;
  uVar2 = FUN_500ba460(*(int *)(param_1 + 4));
  *(uint *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(uVar1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(uVar1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(uVar1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(uVar1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
  param_1 = *(uint *)(uVar1 + 0x2c);
  uVar3 = 0;
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b508,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b50c) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x30);
  uVar3 = 0;
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b530,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b534) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x30) = uVar3;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(uVar1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(uVar1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(uVar1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(uVar1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(uVar1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(uVar1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(uVar1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(uVar1 + 0x5c);
  uVar2 = FUN_500ba4c0(*(int *)(uVar1 + 0x60));
  *(uint *)((int)this + 0x60) = uVar2;
  *(undefined1 *)((int)this + 100) = *(undefined1 *)(uVar1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(uVar1 + 0x68);
  iVar4 = FUN_500ba390(*(int *)(uVar1 + 0x6c));
  *(int *)((int)this + 0x6c) = iVar4;
  return this;
}

