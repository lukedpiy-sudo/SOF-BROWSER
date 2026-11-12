// rea decompile_all
// name: FUN_500b4250
// address: 0x500b4250
// body: available
// range: 0x500b4250-0x500b4310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b4250(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(float *)(param_2 + 0xc) = param_5 + *(float *)(param_2 + 0xc);
  local_24 = *(float *)(param_1 + 0x10);
  local_1c = *(undefined4 *)(param_1 + 0x18);
  local_20 = *(undefined4 *)(param_1 + 0x1c);
  FUN_500fdd70(&local_24,&local_18,&local_c,(float *)0x0);
  *(float *)(param_2 + 4) = local_18 * param_3 + *(float *)(param_2 + 4);
  *(float *)(param_2 + 8) = local_14 * param_3 + *(float *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = local_10 * param_3 + *(float *)(param_2 + 0xc);
  *(float *)(param_2 + 4) = local_c * param_4 + *(float *)(param_2 + 4);
  *(float *)(param_2 + 8) = local_8 * param_4 + *(float *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = local_4 * param_4 + *(float *)(param_2 + 0xc);
  return;
}

