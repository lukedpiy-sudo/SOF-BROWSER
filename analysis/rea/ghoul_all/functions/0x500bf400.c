// rea decompile_all
// name: FUN_500bf400
// address: 0x500bf400
// body: available
// range: 0x500bf400-0x500bf45c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bf400(int param_1)

{
  float *pfVar1;
  float fVar2;
  
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500bf360;
  *(undefined4 *)(param_1 + 0x118) = 1;
  if (*(float *)(param_1 + 0x21c) != 0.0) {
    pfVar1 = (float *)(param_1 + 0x228);
    FUN_500c3440((float *)(param_1 + 0x10),pfVar1);
    fVar2 = *(float *)(param_1 + 0x21c);
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)(param_1 + 0x22c) = fVar2 * *(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x230) = fVar2 * *(float *)(param_1 + 0x230);
  }
  return;
}

