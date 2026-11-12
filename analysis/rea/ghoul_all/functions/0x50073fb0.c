// rea decompile_all
// name: FUN_50073fb0
// address: 0x50073fb0
// body: available
// range: 0x50073fb0-0x50073ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50073fb0(int *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_5006a470(&DAT_5015c7b8,(int)param_1);
  if ((iVar1 != 0) &&
     (((iVar1 = *(int *)(iVar1 + 0x44), iVar1 == 0 || (iVar1 == 2)) || (iVar1 == 3)))) {
    FUN_5006b910((int)param_1,param_2);
    return;
  }
  FUN_500c3880(param_1);
  return;
}

