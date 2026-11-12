// rea decompile_all
// name: FUN_50090910
// address: 0x50090910
// body: available
// range: 0x50090910-0x500909c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090910(int param_1)

{
  float fVar1;
  
  if (((*(float *)(param_1 + 600) == DAT_5018bf0c) && (*(float *)(param_1 + 0x25c) == DAT_5018bf10))
     && (*(float *)(param_1 + 0x260) == DAT_5018bf14)) {
    if (*(int *)(param_1 + 0x408) != -1) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x408);
      *(undefined4 *)(param_1 + 0x40) = 0xf8;
    }
    fVar1 = *(float *)(param_1 + 0x21c);
    *(float *)(param_1 + 600) = fVar1 * *(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x25c) = fVar1 * *(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x260) = fVar1 * *(float *)(param_1 + 0x230);
    if ((*(byte *)(param_1 + 0x1b8) & 0x10) != 0) {
      *(undefined1 **)(param_1 + 0x2c0) = &LAB_500908a0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  return;
}

