// rea decompile_all
// name: FUN_50053000
// address: 0x50053000
// body: available
// range: 0x50053000-0x500531f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50053000(int param_1,int param_2)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return;
  }
  if (2 < *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210)) {
    FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_5c,(float *)0x0,(float *)0x0);
    pfVar1 = (float *)(param_1 + 4);
    if (param_2 == 1) {
      local_74 = local_5c * 50.0 + *pfVar1;
      local_70 = local_58 * 50.0 + *(float *)(param_1 + 8);
      local_6c = local_54 * 50.0 + *(float *)(param_1 + 0xc);
    }
    else {
      local_74 = *pfVar1 - local_5c * 50.0;
      local_70 = *(float *)(param_1 + 8) - local_58 * 50.0;
      local_6c = *(float *)(param_1 + 0xc) - local_54 * 50.0;
    }
    local_3c = local_6c - 128.0;
    local_44 = local_74;
    local_40 = local_70;
    (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_74,param_1,0x2010003,local_38);
    if (fStack_34 == 1.0) {
      (*DAT_5015cac0)(&local_74,&DAT_5018bf0c,&DAT_5018bf0c,&local_44,param_1,0x2010003,local_38);
      fStack_68 = local_74 - fStack_30;
      bVar2 = false;
      fStack_50 = fStack_30;
      fStack_64 = local_70 - fStack_2c;
      fStack_4c = fStack_2c;
      fStack_60 = local_6c - fStack_28;
      fStack_48 = fStack_28 + 1.0;
      iVar3 = (*DAT_5015cac8)(&fStack_50);
      if ((iVar3 == 0x10) || (iVar3 = (*DAT_5015cac8)(&fStack_50), iVar3 == 8)) {
        bVar2 = true;
      }
      if ((15376.0 < fStack_68 * fStack_68 + fStack_64 * fStack_64 + fStack_60 * fStack_60) ||
         (bVar2)) {
        if (param_2 == 1) {
          *(float *)(*(int *)(param_1 + 0x45c) + 0x5c) = -*(float *)(DAT_5015c96c + 0x18);
          return;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = *(undefined4 *)(DAT_5015c96c + 0x18);
      }
      return;
    }
    return;
  }
  return;
}

