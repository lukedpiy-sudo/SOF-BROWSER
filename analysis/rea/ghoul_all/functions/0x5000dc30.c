// rea decompile_all
// name: FUN_5000dc30
// address: 0x5000dc30
// body: available
// range: 0x5000dc30-0x5000dd5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000dc30(void *this,int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_4;
  
  iVar4 = param_1;
  local_4 = this;
  puVar1 = FUN_500ba930(*(uint *)(param_1 + 4));
  *(undefined **)((int)this + 4) = puVar1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar4 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar4 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(iVar4 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(iVar4 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(iVar4 + 0x28);
  param_1 = *(int *)(iVar4 + 0x2c);
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_5006b1a0(&DAT_5018b51c,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b520) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  param_1 = *(int *)(iVar4 + 0x30);
  uVar2 = 0;
  if (param_1 != 0) {
    FUN_5006b1a0(&DAT_5018b544,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b548) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar4 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar4 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar4 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar4 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar4 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
  iVar3 = FUN_500ba960(*(uint *)(iVar4 + 0x60));
  *(int *)((int)this + 0x60) = iVar3;
  *(undefined1 *)((int)this + 100) = *(undefined1 *)(iVar4 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(iVar4 + 0x68);
  iVar4 = FUN_500ba8c0(*(int *)(iVar4 + 0x6c));
  *(int *)((int)this + 0x6c) = iVar4;
  return;
}

