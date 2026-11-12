// rea decompile_all
// name: FUN_5006b910
// address: 0x5006b910
// body: available
// range: 0x5006b910-0x5006b9b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5006b910(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = param_1;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | 0x80000000;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(float *)(DAT_5015c8c8 + 0x18) != 0.0) {
    lVar3 = __ftol();
    param_1 = (int)lVar3;
    if ((double)param_1 < 2.0) {
      param_1 = 2;
    }
    param_2 = SQRT(2.0 / (float)param_1) * param_2;
  }
  fVar1 = DAT_5015ccdc + param_2;
  *(code **)(iVar2 + 0x2b8) = FUN_5006b780;
  *(float *)(iVar2 + 0x2b4) = fVar1;
  (*DAT_5015cb28)(iVar2);
  return;
}

