// rea decompile_all
// name: FUN_50013220
// address: 0x50013220
// body: available
// range: 0x50013220-0x500137fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50013220(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_50012760(this,param_1);
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined ***)this = &PTR_FUN_50126338;
  local_4 = 0;
  iVar2 = FUN_500ba390(*(int *)(uVar1 + 0x40));
  *(int *)((int)this + 0x40) = iVar2;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x44));
  *(undefined4 *)((int)this + 0x44) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x48));
  *(undefined4 *)((int)this + 0x48) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x4c));
  *(undefined4 *)((int)this + 0x4c) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x50));
  *(undefined4 *)((int)this + 0x50) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x54));
  *(undefined4 *)((int)this + 0x54) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x58));
  *(undefined4 *)((int)this + 0x58) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b490,*(uint *)(uVar1 + 0x5c));
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b468,*(uint *)(uVar1 + 0x60));
  *(undefined4 *)((int)this + 0x60) = uVar3;
  uVar3 = FUN_50009950(&DAT_5018b468,*(uint *)(uVar1 + 100));
  *(undefined4 *)((int)this + 100) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x68);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar4 = (int *)FUN_5006b100(&DAT_5018b468,&local_10,&param_1);
    if (*piVar4 == DAT_5018b46c) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x68) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x6c);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar4 = (int *)FUN_5006b100(&DAT_5018b468,&local_10,&param_1);
    if (*piVar4 == DAT_5018b46c) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined2 *)((int)this + 0x70) = *(undefined2 *)(uVar1 + 0x70);
  *(undefined2 *)((int)this + 0x72) = *(undefined2 *)(uVar1 + 0x72);
  *(undefined2 *)((int)this + 0x74) = *(undefined2 *)(uVar1 + 0x74);
  *(undefined2 *)((int)this + 0x76) = *(undefined2 *)(uVar1 + 0x76);
  param_1 = *(uint *)(uVar1 + 0x78);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar4 = (int *)FUN_5006b100(&DAT_5018b490,&local_10,&param_1);
    if (*piVar4 == DAT_5018b494) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x78) = uVar3;
  param_1 = *(uint *)(uVar1 + 0x7c);
  if (param_1 != 0) {
    piVar4 = (int *)FUN_5006b100(&DAT_5018b490,&local_10,&param_1);
    if (*piVar4 != DAT_5018b494) {
      uVar5 = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x7c) = uVar5;
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
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(uVar1 + 0xac);
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(uVar1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(uVar1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(uVar1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(uVar1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(uVar1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(uVar1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(uVar1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(uVar1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(uVar1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(uVar1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(uVar1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(uVar1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(uVar1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(uVar1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(uVar1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(uVar1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(uVar1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(uVar1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(uVar1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(uVar1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(uVar1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(uVar1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(uVar1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(uVar1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(uVar1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(uVar1 + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(uVar1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(uVar1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(uVar1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(uVar1 + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(uVar1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(uVar1 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(uVar1 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(uVar1 + 0x134);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(uVar1 + 0x138);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(uVar1 + 0x13c);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(uVar1 + 0x140);
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(uVar1 + 0x144);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(uVar1 + 0x148);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(uVar1 + 0x14c);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(uVar1 + 0x150);
  *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(uVar1 + 0x154);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)(uVar1 + 0x158);
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)(uVar1 + 0x15c);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)(uVar1 + 0x160);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)(uVar1 + 0x164);
  *(undefined4 *)((int)this + 0x168) = *(undefined4 *)(uVar1 + 0x168);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)(uVar1 + 0x16c);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)(uVar1 + 0x170);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)(uVar1 + 0x174);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)(uVar1 + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)(uVar1 + 0x17c);
  iVar2 = FUN_500ba390(*(int *)(uVar1 + 0x180));
  *(int *)((int)this + 0x180) = iVar2;
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(uVar1 + 0x184);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(uVar1 + 0x188);
  *(undefined4 *)((int)this + 0x18c) = *(undefined4 *)(uVar1 + 0x18c);
  *(undefined4 *)((int)this + 400) = *(undefined4 *)(uVar1 + 400);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(uVar1 + 0x194);
  *(undefined4 *)((int)this + 0x198) = *(undefined4 *)(uVar1 + 0x198);
  *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)(uVar1 + 0x19c);
  iVar2 = FUN_500ba390(*(int *)(uVar1 + 0x1a0));
  *(int *)((int)this + 0x1a0) = iVar2;
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(uVar1 + 0x1a4);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)(uVar1 + 0x1a8);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)(uVar1 + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)(uVar1 + 0x1b0);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(uVar1 + 0x1b4);
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)(uVar1 + 0xb1);
  ExceptionList = local_c;
  return this;
}

