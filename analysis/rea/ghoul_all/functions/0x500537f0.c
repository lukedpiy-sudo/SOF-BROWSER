// rea decompile_all
// name: FUN_500537f0
// address: 0x500537f0
// body: available
// range: 0x500537f0-0x500539dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500537f0(int param_1,float *param_2)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar3 = *(int *)(param_1 + 0x74);
  pfVar1 = (float *)(param_1 + 4);
  local_68 = *(float *)(iVar3 + 0x4fc);
  local_64 = *(float *)(iVar3 + 0x500);
  local_60 = *(undefined4 *)(iVar3 + 0x504);
  local_44 = *param_2 - *pfVar1;
  local_40 = param_2[1] - *(float *)(param_1 + 8);
  local_3c = param_2[2] - *(float *)(param_1 + 0xc);
  fVar4 = FUN_500c3510(&local_44);
  local_64 = (float)fVar4;
  FUN_500fdd70(&local_68,&local_5c,(float *)0x0,(float *)0x0);
  local_8c = local_5c * 150.0 + *pfVar1;
  local_88 = local_58 * 150.0 + *(float *)(param_1 + 8);
  local_84 = local_54 * 150.0 + *(float *)(param_1 + 0xc);
  local_48 = local_84 - 128.0;
  local_50 = local_8c;
  local_4c = local_88;
  (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_8c,param_1,0x2010003,local_38);
  if (fStack_34 != 1.0) {
    return 0;
  }
  (*DAT_5015cac0)(&local_8c,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x2010003,local_38);
  fStack_80 = local_8c - fStack_30;
  bVar2 = false;
  fStack_74 = fStack_30;
  fStack_7c = local_88 - fStack_2c;
  fStack_70 = fStack_2c;
  fStack_78 = local_84 - fStack_28;
  fStack_6c = fStack_28 + 1.0;
  iVar3 = (*DAT_5015cac8)(&fStack_74);
  if (iVar3 != 0x10) {
    iVar3 = (*DAT_5015cac8)(&fStack_74);
    if (iVar3 != 8) goto LAB_50053995;
  }
  bVar2 = true;
LAB_50053995:
  if ((fStack_80 * fStack_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78 <= 15376.0) && (!bVar2)
     ) {
    return 0;
  }
  return 1;
}

