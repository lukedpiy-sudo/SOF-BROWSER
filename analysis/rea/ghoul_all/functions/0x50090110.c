// rea decompile_all
// name: FUN_50090110
// address: 0x50090110
// body: available
// range: 0x50090110-0x5009017b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090110(int param_1)

{
  if ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0) {
    if (*(int *)(param_1 + 0x404) != -1) {
      (*DAT_5015ca48)(param_1,10,*(int *)(param_1 + 0x404),0x3f800000,0x3f800000,0,0);
    }
    if (*(int *)(param_1 + 0x408) != -1) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x408);
      *(undefined4 *)(param_1 + 0x40) = 0xf8;
    }
  }
  *(undefined4 *)(param_1 + 0x424) = 3;
  FUN_5008f880(param_1,(float *)(param_1 + 0x3ec),FUN_500900c0);
  return;
}

