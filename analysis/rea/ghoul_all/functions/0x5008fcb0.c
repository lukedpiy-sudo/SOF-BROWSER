// rea decompile_all
// name: FUN_5008fcb0
// address: 0x5008fcb0
// body: available
// range: 0x5008fcb0-0x5008fd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008fcb0(int param_1)

{
  float fVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x40);
  if (*(float *)(param_1 + 0x6c) < *(float *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x6c);
    return;
  }
  fVar1 = 1.0 / *(float *)(param_1 + 0x44);
  fVar2 = (fVar1 * *(float *)(param_1 + 0x40) + 1.0) * *(float *)(param_1 + 0x40) * 0.5;
  if ((*(float *)(param_1 + 0x6c) -
      (*(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x3c) + 1.0) * *(float *)(param_1 + 0x40) *
      0.5) - fVar2 < 0.0) {
    fVar2 = (*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x3c)) /
            (*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x3c));
    fVar2 = (SQRT(4.0 - *(float *)(param_1 + 0x6c) * -2.0 * fVar2 * 4.0) - 2.0) / (fVar2 + fVar2);
    *(float *)(param_1 + 100) = fVar2;
    fVar2 = (fVar1 * fVar2 + 1.0) * fVar2 * 0.5;
  }
  *(float *)(param_1 + 0x70) = fVar2;
  return;
}

