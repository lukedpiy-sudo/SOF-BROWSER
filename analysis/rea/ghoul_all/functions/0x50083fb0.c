// rea decompile_all
// name: FUN_50083fb0
// address: 0x50083fb0
// body: available
// range: 0x50083fb0-0x50084097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50083fb0(undefined4 param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  
  (*DAT_5015ca70)(1);
  (*DAT_5015ca70)(9);
  FUN_500fe050(param_2);
  lVar1 = __ftol();
  (*DAT_5015ca70)((int)lVar1);
  *param_2 = *param_2 * 1000.0;
  param_2[1] = param_2[1] * 1000.0;
  param_2[2] = param_2[2] * 1000.0;
  *param_3 = *param_3 * 1000.0;
  param_3[1] = param_3[1] * 1000.0;
  param_3[2] = param_3[2] * 1000.0;
  (*DAT_5015ca84)(param_2);
  (*DAT_5015ca84)(param_3);
  *param_2 = *param_2 * 0.001;
  param_2[1] = param_2[1] * 0.001;
  param_2[2] = param_2[2] * 0.001;
  *param_3 = *param_3 * 0.001;
  param_3[1] = param_3[1] * 0.001;
  param_3[2] = param_3[2] * 0.001;
  (*DAT_5015ca70)(100);
  (*DAT_5015ca70)(0xdc);
  (*DAT_5015ca68)(param_1,0);
  return;
}

