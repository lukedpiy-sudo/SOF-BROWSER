// rea decompile_all
// name: FUN_500544d0
// address: 0x500544d0
// body: available
// range: 0x500544d0-0x50054789 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500544d0(int param_1)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_50,&local_44,(float *)0x0);
  local_44 = local_44 * 18.0;
  pfVar1 = (float *)(param_1 + 4);
  local_60 = *(undefined4 *)(param_1 + 0xc);
  local_5c = local_44 + *pfVar1;
  local_40 = local_40 * 18.0;
  local_58 = local_40 + *(float *)(param_1 + 8);
  local_68 = *pfVar1 - local_44;
  local_64 = *(float *)(param_1 + 8) - local_40;
  local_b0 = local_50 * 50.0 + *pfVar1;
  local_ac = local_4c * 50.0 + *(float *)(param_1 + 8);
  local_a8 = local_48 * 50.0 + *(float *)(param_1 + 0xc);
  local_8c = local_44 + local_b0;
  local_88 = local_ac + local_40;
  local_80 = local_b0 - local_44;
  local_7c = local_ac - local_40;
  local_6c = local_a8 - 128.0;
  local_84 = local_a8;
  local_78 = local_a8;
  local_74 = local_b0;
  local_70 = local_ac;
  local_54 = local_60;
  (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_b0,param_1,0x2010003,local_38);
  if (fStack_34 != 1.0) {
    return 1;
  }
  (*DAT_5015cac0)(&local_b0,&DAT_5018bf0c,&DAT_5018bf0c,&local_74,param_1,0x2010003,local_38);
  fStack_a4 = local_b0 - fStack_30;
  bVar2 = false;
  fStack_98 = fStack_30;
  fStack_a0 = local_ac - fStack_2c;
  fStack_94 = fStack_2c;
  fStack_9c = local_a8 - fStack_28;
  fStack_90 = fStack_28 + 1.0;
  iVar3 = (*DAT_5015cac8)(&fStack_98);
  if ((iVar3 == 0x10) || (iVar3 = (*DAT_5015cac8)(&fStack_98), iVar3 == 8)) {
    bVar2 = true;
  }
  if ((((fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c <= 15376.0) &&
       (!bVar2)) &&
      ((*DAT_5015cac0)(&local_5c,&DAT_5018bf0c,&DAT_5018bf0c,&local_8c,param_1,0x2010003,local_38),
      fStack_34 == 1.0)) &&
     ((*DAT_5015cac0)(&local_68,&DAT_5018bf0c,&DAT_5018bf0c,&local_80,param_1,0x2010003,local_38),
     fStack_34 == 1.0)) {
    return 0;
  }
  return 1;
}

