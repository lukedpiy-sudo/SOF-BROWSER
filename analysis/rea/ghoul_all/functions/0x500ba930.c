// rea decompile_all
// name: FUN_500ba930
// address: 0x500ba930
// body: available
// range: 0x500ba930-0x500ba956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * __cdecl FUN_500ba930(uint param_1)

{
  if (param_1 == 0xffffffff) {
    return (undefined *)0x0;
  }
  return (&PTR_s_std_istand_n_a_n_5014de98)[((int)param_1 >> 0x10) * 2] + (param_1 & 0xffff) * 0x58;
}

