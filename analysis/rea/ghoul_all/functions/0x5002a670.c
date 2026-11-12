// rea decompile_all
// name: FUN_5002a670
// address: 0x5002a670
// body: available
// range: 0x5002a670-0x5002a827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5002a670(int param_1,float *param_2,undefined4 *param_3,int param_4,int *param_5)

{
  float fVar1;
  int iVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_500fdd70((float *)(param_1 + 0x10),&local_18,&local_c,(float *)0x0);
  local_24 = *(float *)(param_1 + 4) - *param_2;
  local_20 = *(float *)(param_1 + 8) - param_2[1];
  local_1c = *(float *)(param_1 + 0xc) - param_2[2];
  FUN_500fe050(&local_24);
  fVar1 = local_18 * local_24 + local_14 * local_20 + local_10 * local_1c;
  if (0.707 < fVar1) {
    *param_3 = 7;
    *(undefined4 *)(param_4 + *param_5 * 4) = 8;
    iVar2 = *param_5;
    *param_5 = iVar2 + 1;
    *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 6;
    iVar2 = *param_5;
    *param_5 = iVar2 + 1;
    *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 4;
    iVar2 = *param_5;
    *param_5 = iVar2 + 1;
    *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 0xe;
    *param_5 = *param_5 + 1;
    return;
  }
  if (-0.707 <= fVar1) {
    *param_3 = 8;
    *(undefined4 *)(param_4 + *param_5 * 4) = 7;
    if (local_c * local_24 + local_8 * local_20 + local_4 * local_1c <= 0.0) {
      iVar2 = *param_5 + 1;
      *param_5 = iVar2;
      *(undefined4 *)(param_4 + iVar2 * 4) = 9;
      iVar2 = *param_5;
      *param_5 = iVar2 + 1;
      *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 0xe;
      iVar2 = *param_5;
      *param_5 = iVar2 + 1;
      *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 4;
    }
    else {
      iVar2 = *param_5 + 1;
      *param_5 = iVar2;
      *(undefined4 *)(param_4 + iVar2 * 4) = 10;
      iVar2 = *param_5;
      *param_5 = iVar2 + 1;
      *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 0xe;
      iVar2 = *param_5;
      *param_5 = iVar2 + 1;
      *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 6;
    }
  }
  else {
    *param_3 = 8;
    *(undefined4 *)(param_4 + *param_5 * 4) = 7;
    iVar2 = *param_5;
    *param_5 = iVar2 + 1;
    *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 5;
    iVar2 = *param_5;
    *param_5 = iVar2 + 1;
    *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 3;
  }
  iVar2 = *param_5;
  *param_5 = iVar2 + 1;
  *(undefined4 *)(param_4 + (iVar2 + 1) * 4) = 0xd;
  *param_5 = *param_5 + 1;
  return;
}

