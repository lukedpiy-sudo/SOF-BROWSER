// rea decompile_all
// name: FUN_50084370
// address: 0x50084370
// body: available
// range: 0x50084370-0x500843e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50084370(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_500fdd70((float *)(param_1 + 0x10),&local_18,(float *)0x0,(float *)0x0);
  local_c = local_18 + local_18 + *(float *)(param_1 + 4);
  local_8 = local_14 + local_14 + *(float *)(param_1 + 8);
  local_4 = local_10 + local_10 + *(float *)(param_1 + 0xc);
  (*DAT_5015ca70)(1);
  (*DAT_5015ca70)(0x13);
  FUN_500839d0(&local_c,&local_18,param_1);
  (*DAT_5015ca60)((float *)(param_1 + 4),1);
  return;
}

