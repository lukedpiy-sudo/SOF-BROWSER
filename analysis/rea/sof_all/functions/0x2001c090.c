// rea decompile_all
// name: FUN_2001c090
// address: 0x2001c090
// body: available
// range: 0x2001c090-0x2001c0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_2001c090(int param_1,int param_2)

{
  if (*(float *)(DAT_20244ccc + 0x18) != 0.0) {
    return true;
  }
  if ((DAT_201204a8 < param_1) || (DAT_201204a8 < param_2)) {
    Com_Error(1,s_area_>_numareas_20120634);
  }
  return *(int *)(param_1 * 0x10 + 8 + DAT_20244cd0) == *(int *)(param_2 * 0x10 + 8 + DAT_20244cd0);
}

