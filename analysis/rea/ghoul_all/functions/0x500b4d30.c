// rea decompile_all
// name: FUN_500b4d30
// address: 0x500b4d30
// body: available
// range: 0x500b4d30-0x500b4dbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b4d30(int param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  float local_c [3];
  
  local_c[0] = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  local_c[1] = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  local_c[2] = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  FUN_500fe050(local_c);
  fVar1 = (float10)(*DAT_5015cb20)(0x41200000,0x41700000);
  fVar1 = fVar1 * (float10)param_3;
  *(float *)(param_1 + 0x24c) = (float)((float10)local_c[0] * fVar1);
  *(float *)(param_1 + 0x250) = (float)((float10)local_c[1] * fVar1);
  *(float *)(param_1 + 0x254) = (float)((float10)local_c[2] * fVar1);
  *(float *)(param_1 + 600 + param_4 * 4) = local_c[param_4] * 200.0;
  return;
}

