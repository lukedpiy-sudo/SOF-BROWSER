// rea decompile_all
// name: FUN_500c1830
// address: 0x500c1830
// body: available
// range: 0x500c1830-0x500c18f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c1830(int param_1)

{
  if (((*(float *)(param_1 + 0x10) != DAT_5018bf0c) || (*(float *)(param_1 + 0x14) != DAT_5018bf10))
     || (*(float *)(param_1 + 0x18) != DAT_5018bf14)) {
    FUN_500c3440((float *)(param_1 + 0x10),(float *)(param_1 + 0x228));
  }
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined4 *)(param_1 + 0x118) = 1;
  *(undefined1 **)(param_1 + 0x2c8) = &LAB_500c1790;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_500c17b0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0xc1200000;
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500c17d0;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  (*DAT_5015cb28)(param_1);
  return;
}

