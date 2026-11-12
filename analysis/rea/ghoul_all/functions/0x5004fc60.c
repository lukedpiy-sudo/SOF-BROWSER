// rea decompile_all
// name: FUN_5004fc60
// address: 0x5004fc60
// body: available
// range: 0x5004fc60-0x5004fd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong __cdecl FUN_5004fc60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30 [5];
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  local_48 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_44 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_40 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0xc);
  FUN_500c3570(&local_48,local_30);
  FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_3c,local_c,(float *)0x0);
  local_1c = *(float *)(param_1 + 0xc);
  local_48 = (local_3c * 5.0 + *(float *)(param_1 + 4)) - *(float *)(param_1 + 4);
  local_44 = (local_38 * 5.0 + *(float *)(param_1 + 8)) - *(float *)(param_1 + 8);
  local_40 = local_1c - *(float *)(param_1 + 0xc);
  FUN_500c3570(&local_48,local_18);
  lVar4 = __ftol();
  lVar5 = __ftol();
  lVar6 = __ftol();
  uVar3 = (uint)((ulonglong)lVar6 >> 0x20);
  iVar2 = (int)lVar6 + (int)lVar4;
  iVar1 = (int)lVar6 - (int)lVar4;
  if (0x168 < iVar2) {
    iVar2 = iVar2 + -0x168;
  }
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x168;
  }
  while( true ) {
    if (iVar1 == iVar2 + 1) {
      return (ulonglong)uVar3 << 0x20;
    }
    if (iVar1 == 0x169) {
      iVar1 = 0;
    }
    if (iVar1 == (int)lVar5) break;
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(uVar3,1);
}

