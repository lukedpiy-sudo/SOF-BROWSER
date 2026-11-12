// rea decompile_all
// name: FUN_500f0be0
// address: 0x500f0be0
// body: available
// range: 0x500f0be0-0x500f0d21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500f0be0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  fVar1 = 1.0 / param_3;
  if (1.875 < fVar1) {
    return 0xc;
  }
  if (1.75 < fVar1) {
    return 0xb;
  }
  if (1.625 < fVar1) {
    return 10;
  }
  if (1.5 < fVar1) {
    return 9;
  }
  if (1.375 < fVar1) {
    return 8;
  }
  if (1.25 < fVar1) {
    return 7;
  }
  if (1.125 < fVar1) {
    return 6;
  }
  if (1.0 < *(float *)(*(int *)(param_1 + 0x74) + 0x348)) {
    return 5;
  }
  if (0.875 < fVar1) {
    return 4;
  }
  if (0.75 < fVar1) {
    return 3;
  }
  if (0.625 < fVar1) {
    return 2;
  }
  if (0.5 < fVar1) {
    return 1;
  }
  return 0;
}

