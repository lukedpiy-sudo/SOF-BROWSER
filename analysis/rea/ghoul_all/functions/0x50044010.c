// rea decompile_all
// name: FUN_50044010
// address: 0x50044010
// body: available
// range: 0x50044010-0x50044326 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50044010(float *param_1,float *param_2,float param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  undefined1 local_38 [8];
  undefined4 auStack_30 [12];
  
  local_78 = *param_1;
  local_74 = param_1[1];
  local_70 = param_1[2] - 256.0;
  local_84 = 0xc1500000;
  local_80 = 0xc1500000;
  local_7c = 0;
  local_6c = 0x41500000;
  local_68 = 0x41500000;
  local_64 = 0x41c00000;
  (*DAT_5015cac0)(param_1,&local_84,&local_6c,&local_78,0,3,local_38);
  FUN_50003c80(auStack_30,&local_78);
  fStack_60 = *param_2;
  fStack_5c = param_2[1];
  fStack_58 = param_2[2] - 256.0;
  local_6c = 0xc1500000;
  local_68 = 0xc1500000;
  local_64 = 0;
  local_84 = 0x41500000;
  local_80 = 0x41500000;
  local_7c = 0x41c00000;
  (*DAT_5015cac0)(param_2,&local_6c,&local_84,&fStack_60,0,3,local_38);
  FUN_50003c80(auStack_30,&fStack_60);
  fStack_90 = fStack_60 - local_78;
  fStack_8c = fStack_5c - local_74;
  fStack_88 = fStack_58 - local_70;
  FUN_500fe130(&fStack_90);
  lVar2 = __ftol();
  FUN_500fe050(&fStack_90);
  fStack_90 = fStack_90 * 4.0;
  iVar1 = 1;
  fStack_3c = local_70;
  fStack_8c = fStack_8c * 4.0;
  fStack_88 = fStack_88 * 4.0;
  fStack_9c = fStack_90 + local_78;
  fStack_98 = fStack_8c + local_74;
  fStack_94 = fStack_88 + local_70 + 32.0;
  if (1 < (int)lVar2) {
    fStack_48 = param_3 * 16.0;
    do {
      fStack_50 = fStack_98;
      fStack_4c = fStack_94 - 256.0;
      local_6c = 0xc1500000;
      local_68 = 0xc1500000;
      local_64 = 0;
      local_84 = 0x41500000;
      local_80 = 0x41500000;
      local_7c = 0x41c00000;
      fStack_54 = fStack_9c;
      (*DAT_5015cac0)(&fStack_9c,&local_6c,&local_84,&fStack_54,0,3,local_38);
      FUN_50003c80(auStack_30,&fStack_54);
      if (fStack_48 < ABS(fStack_4c - fStack_3c)) {
        if (param_4 != (float *)0x0) {
          *param_4 = fStack_9c;
          param_4[1] = fStack_98;
          param_4[2] = fStack_94;
        }
        return 0;
      }
      fStack_9c = fStack_9c + fStack_90;
      fStack_3c = fStack_4c;
      iVar1 = iVar1 + 1;
      fStack_98 = fStack_98 + fStack_8c;
      fStack_94 = fStack_88 + fStack_94;
    } while (iVar1 < (int)lVar2);
  }
  if (param_4 != (float *)0x0) {
    *param_2 = fStack_9c;
    param_2[1] = fStack_98;
    param_2[2] = fStack_94;
    return 1;
  }
  return 1;
}

