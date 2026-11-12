// rea decompile_all
// name: FUN_5009e940
// address: 0x5009e940
// body: available
// range: 0x5009e940-0x5009e9a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009e940(int param_1)

{
  if (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 1000)) {
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - 20.0;
    *(undefined4 *)(param_1 + 0x11c) = 0xc2240000;
    *(undefined4 *)(param_1 + 0x120) = 0xc1c00000;
    *(undefined4 *)(param_1 + 0x124) = 0xc0e00000;
    *(undefined4 *)(param_1 + 0x128) = 0x42240000;
    *(undefined4 *)(param_1 + 300) = 0x41c00000;
    *(undefined4 *)(param_1 + 0x130) = 0x41800000;
                    /* WARNING: Could not recover jumptable at 0x5009e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_5015cb28)();
    return;
  }
  return;
}

