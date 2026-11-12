// rea decompile_all
// name: FUN_500c3da0
// address: 0x500c3da0
// body: available
// range: 0x500c3da0-0x500c3e38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c3da0(undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  FUN_500fdd70(param_2,local_18,&local_24,local_c);
  FUN_500ecdc0(param_3);
  local_24 = local_24 * -1.0;
  local_20 = local_20 * -1.0;
  local_1c = local_1c * -1.0;
  FUN_500ed5a0(param_3,0,local_18);
  FUN_500ed5a0(param_3,1,&local_24);
  FUN_500ed5a0(param_3,2,local_c);
  FUN_500ed5a0(param_3,3,param_1);
  FUN_500ecd70((int)param_3);
  return;
}

