// rea decompile_all
// name: FUN_500b7a40
// address: 0x500b7a40
// body: available
// range: 0x500b7a40-0x500b7b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b7a40(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  if (param_4 == -1.0) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    return;
  }
  fVar5 = param_4 * -1.0;
  iVar7 = 0;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar6 = (fVar5 * fVar1 * param_2[1] + fVar5 * fVar2 * param_2[2] + fVar5 * *param_1 * *param_2) *
          1.8;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  *param_3 = fVar6 * *param_2 - fVar5 * *param_1;
  param_3[1] = fVar6 * fVar3 - fVar5 * fVar1;
  param_3[2] = fVar6 * fVar4 - fVar5 * fVar2;
  do {
    if ((-1.0 < param_3[iVar7]) && (param_3[iVar7] < 1.0)) {
      param_3[iVar7] = 0.0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if ((-100.0 < param_3[2]) && (param_3[2] < 100.0)) {
    param_3[2] = 0.0;
  }
  return;
}

