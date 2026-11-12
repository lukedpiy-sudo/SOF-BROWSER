// rea decompile_all
// name: FUN_500df170
// address: 0x500df170
// body: available
// range: 0x500df170-0x500df1d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500df170(int *param_1)

{
  (**(code **)(*param_1 + 0x22c))();
  (**(code **)(*param_1 + 0x234))(&DAT_50133b34,s_b_sibtrooper2_501532e8,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50144224,s_a_sibtrooper2_501532d8,3);
  (**(code **)(*param_1 + 0x234))(&DAT_501532c8,s_hd_sibtroop_501532cc,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133424,s_f_sibtroop_501532bc,3);
  return;
}

