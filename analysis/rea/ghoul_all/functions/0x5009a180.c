// rea decompile_all
// name: FUN_5009a180
// address: 0x5009a180
// body: available
// range: 0x5009a180-0x5009a1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009a180(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1880000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x124) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x128) = 0x41880000;
  *(undefined4 *)(param_1 + 300) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x130) = 0x40e00000;
  pcVar1 = s_white_5014ad2c;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_yellow_5014ae60;
  }
  FUN_500b3870(param_1,&PTR_s_objects_generic_fish_50148650,pcVar1,0);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 90.0;
  return;
}

