// rea decompile_all
// name: FUN_20016770
// address: 0x20016770
// body: available
// range: 0x20016770-0x200167be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20016770(int param_1,float param_2,float param_3,float param_4)

{
  if ((param_1 < 0) || (0x100 < param_1)) {
    Com_Error(1,s_Bad_light_style__i_2011f7d0,param_1);
  }
  param_1 = param_1 * 0x10;
  *(float *)(&DAT_2023e2dc + param_1) = param_2 + param_3 + param_4;
  *(float *)(&DAT_2023e2d0 + param_1) = param_2;
  *(float *)(&DAT_2023e2d4 + param_1) = param_3;
  *(float *)(&DAT_2023e2d8 + param_1) = param_4;
  return;
}

