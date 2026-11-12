// rea decompile_all
// name: FUN_50052a40
// address: 0x50052a40
// body: available
// range: 0x50052a40-0x50052d65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50052a40(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 local_38 [4];
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210) < 2) {
    return 0;
  }
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_50,&local_5c,(float *)0x0);
  pfVar1 = (float *)(param_1 + 4);
  if (*(int *)(*(int *)(param_1 + 0x45c) + 0x14) == 1) {
    local_68 = local_5c * 100.0 + *pfVar1;
    local_64 = local_58 * 100.0 + *(float *)(param_1 + 8);
    local_60 = local_54 * 100.0 + *(float *)(param_1 + 0xc);
  }
  else {
    local_68 = *pfVar1 - local_5c * 100.0;
    local_64 = *(float *)(param_1 + 8) - local_58 * 100.0;
    local_60 = *(float *)(param_1 + 0xc) - local_54 * 100.0;
  }
  local_60 = local_60 - 50.0;
  (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_68,param_1,0x2010003,local_38);
  if (fStack_34 != 1.0) {
    fStack_3c = fStack_28 + 1.0;
    uStack_44 = uStack_30;
    uStack_40 = uStack_2c;
    iVar3 = (*DAT_5015cac8)(&uStack_44);
    if (iVar3 != 0x10) {
      iVar3 = (*DAT_5015cac8)(&uStack_44);
      if (iVar3 != 8) {
        if (*(int *)(*(int *)(param_1 + 0x45c) + 0x14) == 1) {
          local_68 = local_5c * 100.0 + local_50 * 8.0 + *pfVar1;
          local_64 = local_58 * 100.0 + fStack_4c * 8.0 + *(float *)(param_1 + 8);
          local_60 = local_54 * 100.0 + fStack_48 * 8.0 + *(float *)(param_1 + 0xc);
        }
        else {
          local_68 = local_50 * 8.0 + (*pfVar1 - local_5c * 100.0);
          local_64 = fStack_4c * 8.0 + (*(float *)(param_1 + 8) - local_58 * 100.0);
          local_60 = fStack_48 * 8.0 + (*(float *)(param_1 + 0xc) - local_54 * 100.0);
        }
        local_60 = local_60 - 50.0;
        (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_68,param_1,0x2010003,local_38);
        if (fStack_34 != 1.0) {
          if (*(int *)(*(int *)(param_1 + 0x45c) + 0x14) == 1) {
            local_68 = (local_5c * 100.0 + *pfVar1) - local_50 * 8.0;
            local_64 = (local_58 * 100.0 + *(float *)(param_1 + 8)) - fStack_4c * 8.0;
            fVar2 = local_54 * 100.0 + *(float *)(param_1 + 0xc);
          }
          else {
            local_68 = (*pfVar1 - local_5c * 100.0) - local_50 * 8.0;
            local_64 = (*(float *)(param_1 + 8) - local_58 * 100.0) - fStack_4c * 8.0;
            fVar2 = *(float *)(param_1 + 0xc) - local_54 * 100.0;
          }
          local_60 = (fVar2 - fStack_48 * 8.0) - 50.0;
          (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_68,param_1,0x2010003,local_38);
          if (fStack_34 != 1.0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

