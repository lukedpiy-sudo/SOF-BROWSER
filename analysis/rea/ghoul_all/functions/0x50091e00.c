// rea decompile_all
// name: FUN_50091e00
// address: 0x50091e00
// body: available
// range: 0x50091e00-0x50091e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091e00(int param_1)

{
  longlong lVar1;
  
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x42c80000;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    lVar1 = __ftol();
    *(int *)(param_1 + 0x318) = (int)lVar1;
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_50091dc0;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined4 *)(param_1 + 0x158) = 3;
  (*DAT_5015cb28)(param_1);
  return;
}

