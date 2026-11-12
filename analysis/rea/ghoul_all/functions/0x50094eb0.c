// rea decompile_all
// name: FUN_50094eb0
// address: 0x50094eb0
// body: available
// range: 0x50094eb0-0x50094f49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50094eb0(int *param_1)

{
  param_1[0xcf] = 0;
  param_1[0xc9] = 0;
  if (param_1[0x71] == 0) {
    (*DAT_5015ca24)(s_Object__func_remote_camera__with_50147b2c);
    FUN_500c3880(param_1);
    return;
  }
  param_1[0x67] = 0;
  param_1[0x56] = 0;
  param_1[0x47] = -0x3f800000;
  param_1[0x48] = -0x3f800000;
  param_1[0x49] = -0x3f800000;
  param_1[0x4a] = 0x40800000;
  param_1[0x4b] = 0x40800000;
  param_1[0x4c] = 0x40800000;
  param_1[0xc6] = 0;
  param_1[0xb1] = (int)&LAB_50094a80;
  if (param_1[0xd6] == 0x40800000) {
    DAT_50188940 = 0x70;
  }
  (*DAT_5015cb28)(param_1);
  return;
}

