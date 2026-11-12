// rea decompile_all
// name: FUN_500e0f20
// address: 0x500e0f20
// body: available
// range: 0x500e0f20-0x500e0fa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500e0f20(int *param_1)

{
  (**(code **)(*param_1 + 0x22c))();
  (**(code **)(*param_1 + 0x234))(&DAT_50133b34,s_b_irqcommander_50153558,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50144224,s_a_irqcommander_50153548,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133428,s_h_m_5_s_501534b0,3);
  (**(code **)(*param_1 + 0x238))(s_f_m_5__501534a8,3);
  (**(code **)(*param_1 + 0x234))(&DAT_50133428,s_hb_h_2_b_50153214,2);
  (**(code **)(*param_1 + 0x238))(s_f_hb_1__501517ac,2);
  return;
}

