// rea decompile_all
// name: FUN_500b7950
// address: 0x500b7950
// body: available
// range: 0x500b7950-0x500b7a31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte __cdecl FUN_500b7950(float *param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  bVar4 = 0.0 < param_2[2];
  if (param_2[2] == 0.0) {
    bVar4 = bVar4 | 2;
  }
  fVar6 = ((float10)*param_1 * (float10)*param_2 +
          (float10)param_1[2] * (float10)param_2[2] + (float10)param_2[1] * (float10)param_1[1]) *
          (float10)param_4;
  if (fVar6 == (float10)0.0) {
    *param_1 = *param_1 * 0.5;
    param_1[1] = param_1[1] * 0.5;
    param_1[2] = param_1[2] * 0.5;
    fVar6 = FUN_500fe130(param_1);
    fVar6 = fVar6 * (float10)param_4;
  }
  iVar5 = (int)param_2 - (int)param_3;
  iVar3 = 3;
  do {
    pfVar1 = (float *)(iVar5 + (int)param_3);
    fVar7 = (float10)*(float *)((int)pfVar1 + ((int)param_1 - (int)param_2)) -
            fVar6 * (float10)*pfVar1;
    fVar2 = (float)fVar7;
    *param_3 = (float)fVar7;
    if ((-1.0 < fVar2) && (fVar2 < 1.0)) {
      *param_3 = 0.0;
    }
    param_3 = param_3 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return bVar4;
}

