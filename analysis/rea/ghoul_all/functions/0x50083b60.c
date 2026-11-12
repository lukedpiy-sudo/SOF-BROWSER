// rea decompile_all
// name: FUN_50083b60
// address: 0x50083b60
// body: available
// range: 0x50083b60-0x50083baa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50083b60(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(uint *)(param_1 + 0x44) == 0) {
    *(undefined4 *)(param_1 + 0x44) = param_2;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    return;
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x80;
    *(undefined4 *)(param_1 + 0x4c) = param_2;
    *(undefined4 *)(param_1 + 0x58) = param_3;
    return;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80;
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}

