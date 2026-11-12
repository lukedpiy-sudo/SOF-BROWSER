// rea decompile_all
// name: FUN_500ec520
// address: 0x500ec520
// body: available
// range: 0x500ec520-0x500ec594 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_500ec520(undefined4 *param_1)

{
  FUN_50004710(param_1,0);
  *param_1 = &PTR_LAB_50129cf8;
  param_1[0x9c] = 0xffffffff;
  param_1[0x9d] = 0xffffffff;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)((int)param_1 + 0x291) = 1;
  *(undefined1 *)((int)param_1 + 0x292) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  return param_1;
}

