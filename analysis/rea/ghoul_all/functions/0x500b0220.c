// rea decompile_all
// name: FUN_500b0220
// address: 0x500b0220
// body: available
// range: 0x500b0220-0x500b0282 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b0220(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 2;
  uVar1 = (*DAT_5015c9f0)(*(undefined4 *)(param_1 + 0x1a4));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x128) = 0x41800000;
  *(undefined4 *)(param_1 + 300) = 0x41800000;
  *(undefined4 *)(param_1 + 0x130) = 0x41800000;
  (*DAT_5015cb28)(param_1);
  return;
}

