// rea decompile_all
// name: FUN_50047490
// address: 0x50047490
// body: available
// range: 0x50047490-0x500476f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50047490(void *this,int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 local_aa;
  undefined1 local_a9;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [4];
  int *local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113a17;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_94 = FUN_50049aa0((undefined4 *)0x0,0);
  local_90 = 0;
  local_4 = 0;
  FUN_500499c0(local_8c,&local_aa);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_50049a40(local_38,&local_a9);
  local_70 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_6c = 0;
  local_4 = 2;
  if (*(int *)((int)this + 4) != 0) {
    local_a8 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x88;
    if (local_a8 != 0) goto LAB_5004759f;
  }
  local_80 = DAT_5018bf0c;
  local_78 = DAT_5018bf14;
  local_7c = DAT_5018bf10;
  local_74 = 0;
  local_60 = 1;
  FUN_50049ad0(this,*(int **)((int)this + 8),local_98);
  piVar1 = FUN_500c3690();
  piVar1[0xae] = (int)&LAB_50044520;
  piVar1[0xad] = (int)(DAT_5015ccdc + 0.1);
LAB_5004759f:
  if (param_4 == (int *)0x0) {
    local_a4 = *(int *)(param_1 + 4);
    local_a0 = *(int *)(param_1 + 8);
    local_9c = *(int *)(param_1 + 0xc);
  }
  else {
    local_a4 = *param_4;
    local_9c = param_4[2];
    local_a0 = param_4[1];
  }
  local_78 = local_9c;
  local_74 = 0;
  local_60 = param_3;
  local_80 = local_a4;
  local_7c = local_a0;
  local_50 = FUN_50044410(&local_a4,0,param_3,0);
  if ((param_3 & 0x18005) == 0) {
    puVar2 = *(undefined1 **)((int)this + 0x186a1c);
    this = (void *)((int)this + 0x186a14);
  }
  else {
    puVar2 = *(undefined1 **)((int)this + 8);
  }
  FUN_50049fe0(this,puVar2,1,local_98);
  local_4 = 4;
  FUN_5005acf0(local_38,&local_a8,(int *)*local_34,local_34);
  FUN_50106b60((undefined *)local_34);
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar3 = (undefined4 *)FUN_500fc2d0(local_8c,&local_a8);
  FUN_5005acf0(local_8c,&local_10,(int *)*puVar3,local_88);
  FUN_50106b60((undefined *)local_88);
  local_88 = (int *)0x0;
  local_84 = 0;
  local_4 = 0xffffffff;
  FUN_50043ef0((int)local_98);
  ExceptionList = local_c;
  return;
}

