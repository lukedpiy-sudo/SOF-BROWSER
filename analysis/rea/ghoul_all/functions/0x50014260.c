// rea decompile_all
// name: FUN_50014260
// address: 0x50014260
// body: available
// range: 0x50014260-0x500144d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50014260(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_4;
  
  iVar1 = param_1;
  local_4 = this;
  iVar2 = FUN_500ba8c0(*(int *)(param_1 + 0x40));
  *(int *)((int)this + 0x40) = iVar2;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  iVar2 = FUN_500ba8c0(*(int *)(iVar1 + 0x54));
  *(int *)((int)this + 0x54) = iVar2;
  param_1 = *(int *)(iVar1 + 0x58);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_4,&param_1);
    if ((void *)*piVar3 == DAT_5018b4a8) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x58) = uVar4;
  param_1 = *(int *)(iVar1 + 0x5c);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_4,&param_1);
    if ((void *)*piVar3 == DAT_5018b4a8) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x5c) = uVar4;
  param_1 = *(int *)(iVar1 + 0x60);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_4,&param_1);
    if ((void *)*piVar3 == DAT_5018b4a8) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x60) = uVar4;
  param_1 = *(int *)(iVar1 + 100);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_4,&param_1);
    if ((void *)*piVar3 == DAT_5018b4a8) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 100) = uVar4;
  param_1 = *(int *)(iVar1 + 0x68);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_5006b1a0(&DAT_5018b47c,(int *)&local_4,&param_1);
    if ((void *)*piVar3 == DAT_5018b480) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x68) = uVar4;
  param_1 = *(int *)(iVar1 + 0x6c);
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_5006b1a0(&DAT_5018b47c,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b480) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x6c) = uVar4;
  *(undefined2 *)((int)this + 0x70) = *(undefined2 *)(iVar1 + 0x70);
  *(undefined2 *)((int)this + 0x72) = *(undefined2 *)(iVar1 + 0x72);
  *(undefined2 *)((int)this + 0x74) = *(undefined2 *)(iVar1 + 0x74);
  *(undefined2 *)((int)this + 0x76) = *(undefined2 *)(iVar1 + 0x76);
  param_1 = *(int *)(iVar1 + 0x78);
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_5006b1a0(&DAT_5018b4a4,(int *)&local_4,&param_1);
    if (local_4 == DAT_5018b4a8) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((int)local_4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x78) = uVar4;
  *(undefined1 *)((int)this + 0x7c) = *(undefined1 *)(iVar1 + 0x7c);
  *(undefined1 *)((int)this + 0x7d) = *(undefined1 *)(iVar1 + 0x7d);
  *(undefined1 *)((int)this + 0x7e) = *(undefined1 *)(iVar1 + 0x7e);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(iVar1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(iVar1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(iVar1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(iVar1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(iVar1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(iVar1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(iVar1 + 0xa8);
  FUN_500127f0(this,iVar1);
  return;
}

