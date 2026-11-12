// rea decompile_all
// name: FUN_500e3700
// address: 0x500e3700
// body: available
// range: 0x500e3700-0x500e377a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500e3700(int *param_1)

{
  (**(code **)(*param_1 + 0x22c))();
  (**(code **)(*param_1 + 0x234))(&DAT_5012fc5c,s_gz_armor_5012fed0,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133b34,s_b_dcraider2_50153820,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50144224,s_a_dcraider2_50153814,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133428,s_h_raider2_50153808,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133424,s_f_raider2_501537d4,3);
  return;
}

