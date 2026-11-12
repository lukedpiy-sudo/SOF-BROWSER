// rea decompile_all
// name: FUN_500037e0
// address: 0x500037e0
// body: available
// range: 0x500037e0-0x50003c72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500037e0(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50112f12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_50124d00;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  local_10 = this;
  FUN_50003c80((undefined4 *)(param_1 + 0x10),(undefined4 *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0x42c80000;
  *(undefined4 *)((int)this + 500) = 0x43960000;
  *(undefined4 *)((int)this + 0x1f8) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x1fc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x210) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x24c) = (undefined1)param_1;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)this + 0x250) = pvVar2;
  *(undefined4 *)((int)this + 0x254) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)((int)this + 600) = (undefined1)param_1;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)this + 0x25c) = pvVar2;
  *(undefined4 *)((int)this + 0x260) = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x264) = (undefined1)param_1;
  pvVar2 = operator_new(0xc);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)this + 0x268) = pvVar2;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined ***)this = &PTR_LAB_50124df0;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(uVar1 + 0x24);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x28);
  puVar3 = (undefined4 *)((int)this + 0x30);
  iVar7 = 9;
  puVar6 = (undefined4 *)(uVar1 + 0x9c);
  do {
    puVar3[-1] = puVar6[-0x1c];
    *puVar3 = *(undefined4 *)((uVar1 - (int)this) + (int)puVar3);
    puVar3[1] = puVar6[-0x1a];
    puVar3[0x1a] = puVar6[-1];
    puVar3[0x1b] = *puVar6;
    puVar3[0x1c] = puVar6[1];
    puVar3 = puVar3 + 3;
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 3;
  } while (iVar7 != 0);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(uVar1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(uVar1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(uVar1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(uVar1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(uVar1 + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(uVar1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(uVar1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(uVar1 + 0x120);
  puVar3 = (undefined4 *)(uVar1 + 0x124);
  puVar6 = (undefined4 *)((int)this + 0x124);
  for (iVar7 = 0x18; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar7 = FUN_500ba390(*(int *)(uVar1 + 0x184));
  *(int *)((int)this + 0x184) = iVar7;
  iVar7 = FUN_500ba390(*(int *)(uVar1 + 0x188));
  *(int *)((int)this + 0x188) = iVar7;
  uVar4 = FUN_50009950(&DAT_5018b530,*(uint *)(uVar1 + 0x18c));
  *(undefined4 *)((int)this + 0x18c) = uVar4;
  param_1 = *(uint *)(uVar1 + 400);
  uVar4 = 0;
  if (param_1 != 0) {
    piVar5 = (int *)FUN_5006b100(&DAT_5018b530,&local_14,&param_1);
    if (*piVar5 == DAT_5018b534) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*piVar5 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 400) = uVar4;
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(uVar1 + 0x194);
  *(undefined4 *)((int)this + 0x198) = *(undefined4 *)(uVar1 + 0x198);
  *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)(uVar1 + 0x19c);
  *(undefined4 *)((int)this + 0x1a0) = *(undefined4 *)(uVar1 + 0x1a0);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(uVar1 + 0x1a4);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)(uVar1 + 0x1a8);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)(uVar1 + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)(uVar1 + 0x1b0);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(uVar1 + 0x1b4);
  *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(uVar1 + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = *(undefined4 *)(uVar1 + 0x1bc);
  *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)(uVar1 + 0x1c0);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(uVar1 + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)(uVar1 + 0x1c8);
  *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)(uVar1 + 0x1cc);
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(uVar1 + 0x1d0);
  *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(uVar1 + 0x1d8);
  *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)(uVar1 + 0x1dc);
  *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)(uVar1 + 0x1e0);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(uVar1 + 0x1e4);
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(uVar1 + 0x1d4);
  *(undefined4 *)((int)this + 0x1e8) = *(undefined4 *)(uVar1 + 0x1e8);
  *(undefined4 *)((int)this + 0x1ec) = *(undefined4 *)(uVar1 + 0x1ec);
  FUN_500090a0((void *)((int)this + 0x1f0),(undefined4 *)(uVar1 + 0x1f0));
  param_1 = *(uint *)(uVar1 + 0x22c);
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b4e0,&local_14,&param_1);
    if (local_14 == DAT_5018b4e4) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x22c) = uVar4;
  param_1 = *(uint *)(uVar1 + 0x230);
  uVar4 = 0;
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b468,&local_14,&param_1);
    if (local_14 == DAT_5018b46c) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(local_14 + 0x10);
    }
  }
  *(undefined4 *)((int)this + 0x230) = uVar4;
  *(undefined4 *)((int)this + 0x234) = *(undefined4 *)(uVar1 + 0x234);
  *(undefined4 *)((int)this + 0x238) = *(undefined4 *)(uVar1 + 0x238);
  *(undefined4 *)((int)this + 0x23c) = *(undefined4 *)(uVar1 + 0x23c);
  *(undefined4 *)((int)this + 0x240) = *(undefined4 *)(uVar1 + 0x240);
  *(undefined4 *)((int)this + 0x244) = *(undefined4 *)(uVar1 + 0x244);
  *(undefined4 *)((int)this + 0x248) = *(undefined4 *)(uVar1 + 0x248);
  ExceptionList = local_c;
  return this;
}

