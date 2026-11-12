// rea decompile_all
// name: FUN_5009e5a0
// address: 0x5009e5a0
// body: available
// range: 0x5009e5a0-0x5009e66d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009e5a0(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2300000;
  *(undefined4 *)(param_1 + 0x128) = 0x41100000;
  *(undefined4 *)(param_1 + 300) = 0x40800000;
  *(undefined4 *)(param_1 + 0x130) = 0x42300000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  FUN_500b3870(param_1,&PTR_s_objects_generic_stoplight_50148bc8,(char *)0x0,0);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_500b2fd0(param_1,PTR_s_objects_generic_stoplight_50148bc8,(int)PTR_s_stoplight_50148bcc,
                 PTR_s_stoplight_50148be0,s_stoplight_d_5014b0a4,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  FUN_500b4160(param_1,s_yellow_5014ae60,0);
  *(code **)(param_1 + 0x2cc) = FUN_5009e4e0;
  *(code **)(param_1 + 0x2b8) = FUN_5009e530;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 5.0;
  return;
}

