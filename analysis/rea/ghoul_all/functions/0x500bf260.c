// rea decompile_all
// name: FUN_500bf260
// address: 0x500bf260
// body: available
// range: 0x500bf260-0x500bf2a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bf260(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  if (param_1[0xc0] == 0) {
    piVar2 = param_1 + 1;
    puVar1 = FUN_500c33f0();
    (*DAT_5015ca24)(s_target_changelevel_with_no_map_a_501504fc,puVar1,piVar2);
    FUN_500c3880(param_1);
    return;
  }
  param_1[0xb1] = (int)&LAB_500bf050;
  param_1[0x46] = 1;
  return;
}

