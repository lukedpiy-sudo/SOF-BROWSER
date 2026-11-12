// rea decompile_all
// name: FUN_50092030
// address: 0x50092030
// body: available
// range: 0x50092030-0x50092174 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50092030(int param_1,int param_2)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  if (param_2 != 0) {
    local_1c = *(float *)(param_1 + 0xc);
    local_18 = *(float *)(param_1 + 0x14c) * 0.5 +
               *(float *)(param_1 + 4) + *(float *)(param_1 + 0x11c);
    local_14 = *(float *)(param_1 + 0x150) * 0.5 +
               *(float *)(param_1 + 8) + *(float *)(param_1 + 0x120);
    local_10 = *(float *)(param_1 + 0x154) * 0.5 +
               *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x124);
    local_8 = *(float *)(param_1 + 0x228) + *(float *)(param_1 + 8);
    local_4 = *(float *)(param_1 + 0x22c) + *(float *)(param_1 + 0xc);
    local_3c = local_18 - *(float *)(param_1 + 4);
    local_38 = local_14 - *(float *)(param_1 + 8);
    local_34 = local_10 - local_1c;
    local_30 = (*(float *)(param_1 + 0x230) + *(float *)(param_1 + 4)) - *(float *)(param_1 + 4);
    local_2c = local_8 - *(float *)(param_1 + 8);
    local_28 = local_4 - local_1c;
    FUN_500fe0f0(&local_3c,&local_30,&local_48);
    if (local_48 * (*(float *)(param_2 + 4) - local_18) +
        local_44 * (*(float *)(param_2 + 8) - local_14) +
        local_40 * (*(float *)(param_2 + 0xc) - local_10) < 0.0) {
      return 1;
    }
  }
  return 0;
}

