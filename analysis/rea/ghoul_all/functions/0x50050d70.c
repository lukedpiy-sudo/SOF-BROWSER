// rea decompile_all
// name: FUN_50050d70
// address: 0x50050d70
// body: available
// range: 0x50050d70-0x50050e9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50050d70(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float local_68;
  float local_64;
  float local_60;
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
  
  if (*(float *)(param_2 + 0xc) - 5.0 <= *(float *)(param_1 + 0xc)) {
    iVar1 = FUN_500b0d40(param_1,param_2,0);
    if (iVar1 != 0) {
      local_68 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
      local_5c = 0.0;
      local_58 = 0.0;
      local_64 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
      local_54 = 0;
      local_60 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
      fVar2 = FUN_500c3510(&local_68);
      local_58 = (float)fVar2;
      fVar2 = FUN_500fe130(&local_68);
      FUN_500fdd70(&local_5c,&local_44,(float *)0x0,(float *)0x0);
      local_50 = local_44 * (float)fVar2 * 0.5 + *(float *)(param_1 + 4);
      local_4c = local_40 * (float)fVar2 * 0.5 + *(float *)(param_1 + 8);
      local_48 = *(float *)(param_1 + 0xc) - 41.0;
      (*DAT_5015cac0)((float *)(param_1 + 4),&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x2010003
                      ,local_38);
      if (fStack_34 != 1.0) {
        return 1;
      }
    }
  }
  return 0;
}

