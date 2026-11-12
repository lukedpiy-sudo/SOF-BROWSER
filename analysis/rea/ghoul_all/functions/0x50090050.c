// rea decompile_all
// name: FUN_50090050
// address: 0x50090050
// body: available
// range: 0x50090050-0x500900b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090050(int param_1)

{
  if ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0) {
    if (*(int *)(param_1 + 0x40c) != -1) {
      (*DAT_5015ca48)(param_1,10,*(int *)(param_1 + 0x40c),0x3f800000,0x3f800000,0,0);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(code **)(param_1 + 0x2b8) = FUN_50090110;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 3.0;
  return;
}

