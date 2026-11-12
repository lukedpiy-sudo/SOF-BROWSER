// rea decompile_all
// name: FUN_50052ed0
// address: 0x50052ed0
// body: available
// range: 0x50052ed0-0x50052ff1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50052ed0(int param_1)

{
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_44 [3];
  undefined1 local_38 [4];
  float fStack_34;
  
  if ((*(int *)(param_1 + 0x45c) != 0) &&
     (2 < *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210))) {
    local_6c = *(float *)(param_1 + 0xc) - 20.0;
    local_74 = *(float *)(param_1 + 4);
    local_70 = *(float *)(param_1 + 8);
    local_4c = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x500);
    FUN_500fdd70(&local_50,local_44,&local_68,(float *)0x0);
    if (*(int *)(*(int *)(param_1 + 0x45c) + 0x14) == 1) {
      local_5c = local_68 * 50.0 + local_74;
      local_58 = local_64 * 50.0 + local_70;
      local_54 = local_60 * 50.0 + local_6c;
    }
    else {
      local_5c = local_74 - local_68 * 50.0;
      local_58 = local_70 - local_64 * 50.0;
      local_54 = local_6c - local_60 * 50.0;
    }
    (*DAT_5015cac0)(&local_74,&DAT_5018bf0c,&DAT_5018bf0c,&local_5c,param_1,0x2010003,local_38);
    if (fStack_34 != 1.0) {
      return 1;
    }
  }
  return 0;
}

