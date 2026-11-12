// rea decompile_all
// name: FUN_5004fa80
// address: 0x5004fa80
// body: available
// range: 0x5004fa80-0x5004fb06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl FUN_5004fa80(int param_1)

{
  float10 fVar1;
  undefined4 uStack_8;
  
  (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0xf4))();
  fVar1 = (float10)DAT_5015ccdc;
  switch(uStack_8) {
  case 1:
  case 7:
  case 0xb:
    return (float10)DAT_5015ccdc + (float10)2.0;
  case 9:
    return (float10)DAT_5015ccdc + (float10)1.5;
  case 10:
    return (float10)DAT_5015ccdc + (float10)3.0;
  case 0xc:
    fVar1 = (float10)DAT_5015ccdc + (float10)1.3;
  }
  return fVar1;
}

