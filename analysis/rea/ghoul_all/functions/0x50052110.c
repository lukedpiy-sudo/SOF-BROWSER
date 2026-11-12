// rea decompile_all
// name: FUN_50052110
// address: 0x50052110
// body: available
// range: 0x50052110-0x50052205 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50052110(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_4;
  
  local_30 = *(float *)(param_1 + 4) - *param_2;
  local_2c = *(float *)(param_1 + 8) - param_2[1];
  local_28 = *(float *)(param_1 + 0xc) - param_2[2];
  FUN_500c3510(&local_30);
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_18,(float *)0x0,(float *)0x0);
  local_4 = *(float *)(param_1 + 0xc);
  local_24 = *(float *)(param_1 + 4) - (local_18 * 30.0 + *(float *)(param_1 + 4));
  local_20 = *(float *)(param_1 + 8) - (local_14 * 30.0 + *(float *)(param_1 + 8));
  local_1c = *(float *)(param_1 + 0xc) - local_4;
  lVar3 = __ftol();
  FUN_500c3510(&local_24);
  lVar4 = __ftol();
  iVar2 = (int)lVar4 + param_3;
  iVar1 = (int)lVar4 - param_3;
  if (0x168 < iVar2) {
    iVar2 = iVar2 + -0x168;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x168;
  }
  while( true ) {
    if (iVar1 == iVar2 + 1) {
      return 0;
    }
    if (iVar1 == 0x169) {
      iVar1 = 0;
    }
    if (iVar1 == (int)lVar3) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}

