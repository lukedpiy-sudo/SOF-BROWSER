// rea decompile_all
// name: FUN_500d3160
// address: 0x500d3160
// body: available
// range: 0x500d3160-0x500d3222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500d3160(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = 0;
  do {
    lVar4 = __ftol();
    iVar3 = iVar2 + 1;
    param_2[iVar2] = (float)((uint)lVar4 & 0xffff) * 0.005493164;
    iVar2 = iVar3;
  } while (iVar3 < 3);
  local_18 = *param_1 - *param_3;
  local_14 = param_1[1] - param_3[1];
  local_10 = param_1[2] - param_3[2];
  FUN_500fe050(&local_18);
  FUN_500fdd70(param_2,&local_c,(float *)0x0,(float *)0x0);
  fVar1 = local_18 * local_c + local_8 * local_14 + local_4 * local_10;
  if ((0.173 <= fVar1) && (fVar1 < 1.0 != (fVar1 == 1.0))) {
    return 1;
  }
  return 0;
}

