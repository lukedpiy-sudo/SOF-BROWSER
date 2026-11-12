// rea decompile_all
// name: FUN_5009e790
// address: 0x5009e790
// body: available
// range: 0x5009e790-0x5009e860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009e790(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1d80000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1b80000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x128) = 0x41d80000;
  *(undefined4 *)(param_1 + 300) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x130) = 0x41800000;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_table2_5014b0b8;
    *(undefined4 *)(param_1 + 0x3c0) = 0xe;
    *(undefined4 *)(param_1 + 0x31c) = 0x11;
  }
  else {
    pcVar1 = s_table_5014968c;
    *(undefined4 *)(param_1 + 0x3c0) = 0x1c;
    *(undefined4 *)(param_1 + 0x31c) = 0xb;
  }
  FUN_500b3870(param_1,&PTR_s_objects_generic_table_round_50148c68,pcVar1,0);
  *(undefined4 *)(param_1 + 0x11c) = 0xc1d80000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1b80000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x128) = 0x41d80000;
  *(undefined4 *)(param_1 + 300) = 0x41b80000;
  *(undefined4 *)(param_1 + 0x130) = 0x41800000;
  (*DAT_5015cb28)(param_1);
  return;
}

