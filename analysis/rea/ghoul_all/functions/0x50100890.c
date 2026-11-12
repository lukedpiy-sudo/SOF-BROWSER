// rea decompile_all
// name: FUN_50100890
// address: 0x50100890
// body: available
// range: 0x50100890-0x501008e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_50100890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x284) = param_2;
  *(undefined4 *)(param_1 + 0x288) = param_3;
  *(undefined4 *)(param_1 + 0x28c) = param_4;
  *(undefined4 *)(param_1 + 0x19c) = 0xb;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x6000083;
  *(undefined4 *)(param_1 + 0x290) = param_5;
  *(undefined4 *)(param_1 + 0x294) = param_6;
  return;
}

