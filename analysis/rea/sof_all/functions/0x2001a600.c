// rea decompile_all
// name: FUN_2001a600
// address: 0x2001a600
// body: available
// range: 0x2001a600-0x2001a631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2001a600(int param_1)

{
  if ((param_1 < 0) || (DAT_201204a4 <= param_1)) {
    Com_Error(1,s_CM_LeafArea__bad_number_20120598);
  }
  return *(undefined4 *)(DAT_20246ce4 + 0x28 + param_1 * 0x3c);
}

