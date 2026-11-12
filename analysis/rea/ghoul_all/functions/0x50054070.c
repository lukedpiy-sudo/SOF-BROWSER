// rea decompile_all
// name: FUN_50054070
// address: 0x50054070
// body: available
// range: 0x50054070-0x50054272 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50054070(int param_1)

{
  float *pfVar1;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  undefined1 local_38 [4];
  float fStack_34;
  
  if (*(int *)(param_1 + 0x45c) != 0) {
    FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_44,&local_50,(float *)0x0);
    pfVar1 = (float *)(param_1 + 4);
    local_54 = *(undefined4 *)(param_1 + 0xc);
    local_8c = local_50 * 18.0 + *pfVar1;
    local_88 = local_4c * 18.0 + *(float *)(param_1 + 8);
    local_84 = *(undefined4 *)(param_1 + 0xc);
    local_44 = local_44 * 50.0;
    local_74 = local_44 + local_8c;
    local_40 = local_40 * 50.0;
    local_70 = local_40 + local_88;
    local_80 = *pfVar1 - local_50 * 18.0;
    local_7c = *(float *)(param_1 + 8) - local_4c * 18.0;
    local_78 = *(undefined4 *)(param_1 + 0xc);
    local_68 = local_44 + local_80;
    local_64 = local_40 + local_7c;
    local_5c = local_44 + *pfVar1;
    local_58 = local_40 + *(float *)(param_1 + 8);
    local_6c = local_84;
    local_60 = local_78;
    (*DAT_5015cac0)(&local_8c,&DAT_5018bf0c,&DAT_5018bf0c,&local_74,param_1,0x2010003,local_38);
    if (fStack_34 != 1.0) {
      *(float *)(*(int *)(param_1 + 0x45c) + 0x60) = -*(float *)(DAT_5015c96c + 0x18);
      return;
    }
    (*DAT_5015cac0)(&local_80,&DAT_5018bf0c,&DAT_5018bf0c,&local_68,param_1,0x2010003,local_38);
    if (fStack_34 != 1.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x60) = *(undefined4 *)(DAT_5015c96c + 0x18);
      return;
    }
    (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_5c,param_1,0x2010003,local_38);
    if (fStack_34 != 1.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x60) = *(undefined4 *)(DAT_5015c96c + 0x18);
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x60) = 0;
  }
  return;
}

