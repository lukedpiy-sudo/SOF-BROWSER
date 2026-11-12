// rea decompile_all
// name: FUN_500b07f0
// address: 0x500b07f0
// body: available
// range: 0x500b07f0-0x500b0843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b07f0(int param_1)

{
  FUN_500aeb50(param_1 + 4,*(float *)(param_1 + 0x318),*(float *)(param_1 + 0x2ec),4.2039e-44);
  if (*(float *)(param_1 + 0x360) < DAT_5015ccdc) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    return;
  }
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.2;
  return;
}

