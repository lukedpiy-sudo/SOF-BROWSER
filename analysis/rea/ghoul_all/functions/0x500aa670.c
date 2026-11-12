// rea decompile_all
// name: FUN_500aa670
// address: 0x500aa670
// body: available
// range: 0x500aa670-0x500aa6c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500aa670(char *param_1)

{
  int iVar1;
  
  if (DAT_5015c7c0 != 0) {
    FUN_500aa030(param_1,DAT_5015c7c0);
    *(code **)(param_1 + 0x2b8) = FUN_500c3880;
    iVar1 = (**(code **)(*DAT_5015c4d8 + 0x68))();
    if (iVar1 != 0) {
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 10.0;
      return;
    }
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 30.0;
  }
  return;
}

