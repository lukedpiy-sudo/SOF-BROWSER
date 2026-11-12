// rea decompile_all
// name: FUN_50053cf0
// address: 0x50053cf0
// body: available
// range: 0x50053cf0-0x50053f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50053cf0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
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
  int iStack_8;
  
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar2 = FUN_50053af0(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    local_64 = *(float *)(*(int *)(param_1 + 0x74) + 0x500);
    local_60 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x504);
    local_68 = 0.0;
    pfVar1 = *(float **)(*(int *)(param_1 + 0x45c) + 0x40);
    if (pfVar1 != (float *)0x0) {
      local_44 = *pfVar1 - *(float *)(param_1 + 4);
      local_40 = pfVar1[1] - *(float *)(param_1 + 8);
      local_3c = pfVar1[2] - *(float *)(param_1 + 0xc);
      fVar3 = FUN_500c3510(&local_44);
      local_64 = (float)fVar3;
    }
    FUN_500fdd70(&local_68,&local_8c,(float *)0x0,(float *)0x0);
    local_80 = *(float *)(param_1 + 4) - (local_8c + local_8c);
    local_7c = *(float *)(param_1 + 8) - (local_88 + local_88);
    local_78 = (*(float *)(param_1 + 0xc) - (local_88 + local_88)) + 40.0;
    local_5c = local_8c * 20.0 + local_80;
    local_58 = local_88 * 20.0 + local_7c;
    local_54 = local_84 * 20.0 + local_78;
    (*DAT_5015cac0)(&local_80,&DAT_5018bf0c,&DAT_5018bf0c,&local_5c,param_1,0x2010003,local_38);
    if ((fStack_34 == 1.0) &&
       (((iStack_8 == 0 || (*(char **)(iStack_8 + 0x1b4) == (char *)0x0)) ||
        (*(char **)(iStack_8 + 0x1b4) != s_player_50142e48)))) {
      fStack_74 = *(float *)(param_1 + 4) - (local_8c + local_8c);
      fStack_70 = *(float *)(param_1 + 8) - (local_88 + local_88);
      fStack_6c = (*(float *)(param_1 + 0xc) - (local_84 + local_84)) - 10.0;
      fStack_50 = local_8c * 20.0 + fStack_74;
      fStack_4c = local_88 * 20.0 + fStack_70;
      fStack_48 = local_84 * 20.0 + fStack_6c;
      (*DAT_5015cac0)(&fStack_74,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_50,param_1,0x2010003,local_38);
      if ((((iStack_8 == 0) || (*(char **)(iStack_8 + 0x1b4) == (char *)0x0)) ||
          (*(char **)(iStack_8 + 0x1b4) != s_player_50142e48)) && (fStack_34 != 1.0)) {
        return 1;
      }
    }
  }
  return 0;
}

