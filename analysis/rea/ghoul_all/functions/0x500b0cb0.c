// rea decompile_all
// name: FUN_500b0cb0
// address: 0x500b0cb0
// body: available
// range: 0x500b0cb0-0x500b0d3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_500b0cb0(int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if (param_3 <= 0.0) {
    fVar3 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
    fVar2 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
    fVar1 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
    param_3 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  }
  if (6400.0 <= param_3) {
    if (250000.0 <= param_3) {
      uVar4 = 2;
      if (2.25e+06 <= param_3) {
        uVar4 = 3;
      }
      return uVar4;
    }
    return 1;
  }
  return 0;
}

