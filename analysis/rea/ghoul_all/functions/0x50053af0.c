// rea decompile_all
// name: FUN_50053af0
// address: 0x50053af0
// body: available
// range: 0x50053af0-0x50053cec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50053af0(int param_1)

{
  float *pfVar1;
  float10 fVar2;
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
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  int iStack_8;
  
  if (*(int *)(param_1 + 0x45c) != 0) {
    local_64 = *(float *)(*(int *)(param_1 + 0x74) + 0x500);
    local_60 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x504);
    local_68 = 0.0;
    pfVar1 = *(float **)(*(int *)(param_1 + 0x45c) + 0x40);
    if (pfVar1 != (float *)0x0) {
      local_5c = *pfVar1 - *(float *)(param_1 + 4);
      local_58 = pfVar1[1] - *(float *)(param_1 + 8);
      local_54 = pfVar1[2] - *(float *)(param_1 + 0xc);
      fVar2 = FUN_500c3510(&local_5c);
      local_64 = (float)fVar2;
    }
    FUN_500fdd70(&local_68,&local_50,(float *)0x0,(float *)0x0);
    local_74 = *(float *)(param_1 + 4);
    local_70 = *(float *)(param_1 + 8);
    local_80 = local_50 * 50.0 + local_74;
    local_7c = local_4c * 50.0 + local_70;
    local_78 = local_48 * 50.0 + *(float *)(param_1 + 0xc);
    local_3c = local_78 - 23.0;
    local_6c = *(float *)(param_1 + 0xc) + 24.0;
    local_78 = local_78 + 24.0;
    local_44 = local_80;
    local_40 = local_7c;
    (*DAT_5015cac0)(&local_74,&DAT_5018bf0c,&DAT_5018bf0c,&local_80,param_1,0x2010003,local_38);
    local_6c = local_6c - 24.0;
    if ((fStack_34 == 1.0) &&
       (((iStack_8 == 0 || (*(char **)(iStack_8 + 0x1b4) == (char *)0x0)) ||
        (*(char **)(iStack_8 + 0x1b4) != s_player_50142e48)))) {
      local_80 = local_74;
      local_78 = local_6c - 23.0;
      local_7c = local_70;
      (*DAT_5015cac0)(&local_80,&DAT_5018bf0c,&DAT_5018bf0c,&local_44,param_1,0x2010003,local_38);
      if ((((iStack_8 == 0) || (*(char **)(iStack_8 + 0x1b4) == (char *)0x0)) ||
          (*(char **)(iStack_8 + 0x1b4) != s_player_50142e48)) && (fStack_34 != 1.0)) {
        return 1;
      }
    }
  }
  return 0;
}

