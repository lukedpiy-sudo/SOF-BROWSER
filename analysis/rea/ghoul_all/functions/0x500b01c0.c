// rea decompile_all
// name: FUN_500b01c0
// address: 0x500b01c0
// body: available
// range: 0x500b01c0-0x500b021a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b01c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x3b0) = param_2;
  *(undefined4 *)(param_1 + 0x3b4) = param_3;
  *(float *)(param_1 + 0x3ac) = (float)*(int *)(param_1 + 0x2ec);
  return;
}

