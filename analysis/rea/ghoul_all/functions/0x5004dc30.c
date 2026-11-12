// rea decompile_all
// name: FUN_5004dc30
// address: 0x5004dc30
// body: available
// range: 0x5004dc30-0x5004dcb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __fastcall FUN_5004dc30(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if ((iVar1 != 0) &&
     ((*(float *)(param_1 + 0x4c) < DAT_5015ccdc != (*(float *)(param_1 + 0x4c) == DAT_5015ccdc) ||
      (DAT_5015ccdc <= *(float *)(param_1 + 0x48))))) {
    return (float10)0.0;
  }
  switch(iVar1) {
  case 0:
  case 1:
    break;
  case 2:
    return (((float10)*(float *)(param_1 + 0x4c) - (float10)DAT_5015ccdc) *
           (float10)*(float *)(param_1 + 0x50)) /
           ((float10)*(float *)(param_1 + 0x4c) - (float10)*(float *)(param_1 + 0x48));
  case 3:
    fVar2 = ((float10)*(float *)(param_1 + 0x4c) - (float10)DAT_5015ccdc) /
            ((float10)*(float *)(param_1 + 0x4c) - (float10)*(float *)(param_1 + 0x48));
    return fVar2 * (float10)*(float *)(param_1 + 0x50) * fVar2;
  default:
    (*DAT_5015ca24)(s_unknown_sense_muting_recovery_co_50142e18,iVar1);
  }
  return (float10)*(float *)(param_1 + 0x50);
}

