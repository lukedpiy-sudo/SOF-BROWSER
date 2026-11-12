// rea decompile_all
// name: FUN_50083770
// address: 0x50083770
// body: available
// range: 0x50083770-0x50083825 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50083770(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  *param_2 = *param_5 - *(float *)(param_1 + 4);
  param_2[1] = param_5[1] - *(float *)(param_1 + 8);
  param_2[2] = param_5[2] - *(float *)(param_1 + 0xc);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *param_3 = *param_4;
  fVar5 = param_4[1];
  param_3[1] = fVar5;
  param_3[2] = param_4[2];
  fVar6 = *param_3;
  fVar7 = (float10)*(float *)(param_1 + 0x14) * (float10)0.017453292519943295;
  fVar8 = (float10)fcos(fVar7);
  fVar3 = (float)fVar8;
  fVar7 = (float10)fsin(fVar7);
  fVar4 = (float)fVar7;
  *param_2 = (float)((float10)fVar1 * (float10)fVar3 + fVar7 * (float10)fVar2);
  param_2[1] = (float)((float10)fVar1 * (float10)fVar4 - (float10)fVar2 * (float10)fVar3);
  *param_3 = fVar6 * fVar3 + fVar5 * fVar4;
  param_3[1] = fVar5 * fVar3 - fVar6 * fVar4;
  return;
}

