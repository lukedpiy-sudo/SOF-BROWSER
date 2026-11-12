// rea decompile_all
// name: FUN_501007a0
// address: 0x501007a0
// body: available
// range: 0x501007a0-0x50100887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_501007a0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    pfVar1 = (float *)(param_1 + 0x10);
  }
  else {
    pfVar1 = (float *)(*(int *)(param_1 + 0x74) + 0x1c);
  }
  FUN_500fdd70(pfVar1,&local_24,&local_18,&local_c);
  *(float *)(param_2 + 0x24c) = local_24 * param_3;
  *(float *)(param_2 + 0x250) = local_20 * param_3;
  *(float *)(param_2 + 0x254) = local_1c * param_3;
  *(float *)(param_2 + 0x24c) = local_18 * param_4 + *(float *)(param_2 + 0x24c);
  *(float *)(param_2 + 0x250) = local_14 * param_4 + *(float *)(param_2 + 0x250);
  *(float *)(param_2 + 0x254) = local_10 * param_4 + *(float *)(param_2 + 0x254);
  *(float *)(param_2 + 0x24c) = local_c * param_5 + *(float *)(param_2 + 0x24c);
  *(float *)(param_2 + 0x250) = local_8 * param_5 + *(float *)(param_2 + 0x250);
  *(float *)(param_2 + 0x254) = local_4 * param_5 + *(float *)(param_2 + 0x254);
  return;
}

