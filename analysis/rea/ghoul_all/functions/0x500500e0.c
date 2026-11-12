// rea decompile_all
// name: FUN_500500e0
// address: 0x500500e0
// body: available
// range: 0x500500e0-0x500501cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong __cdecl FUN_500500e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_10;
  float local_c [3];
  
  local_30 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_2c = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_28 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc);
  FUN_500c3510(&local_30);
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_24,local_c,(float *)0x0);
  local_10 = *(float *)(param_1 + 0xc);
  local_30 = (local_24 * 5.0 + *(float *)(param_1 + 4)) - *(float *)(param_1 + 4);
  local_2c = (local_20 * 5.0 + *(float *)(param_1 + 8)) - *(float *)(param_1 + 8);
  local_28 = local_10 - *(float *)(param_1 + 0xc);
  FUN_500c3510(&local_30);
  lVar5 = __ftol();
  lVar6 = __ftol();
  uVar4 = (uint)((ulonglong)lVar6 >> 0x20);
  iVar1 = (int)lVar6;
  iVar3 = iVar1 + 10;
  iVar2 = iVar1 + -10;
  if (0x168 < iVar3) {
    iVar3 = iVar1 + -0x15e;
  }
  if (iVar2 < 0) {
    iVar2 = iVar1 + 0x15e;
  }
  while( true ) {
    if (iVar2 == iVar3 + 1) {
      return (ulonglong)uVar4 << 0x20;
    }
    if (iVar2 == 0x169) {
      iVar2 = 0;
    }
    if (iVar2 == (int)lVar5) break;
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(uVar4,1);
}

