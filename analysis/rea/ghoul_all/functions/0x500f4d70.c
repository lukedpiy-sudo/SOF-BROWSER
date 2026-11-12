// rea decompile_all
// name: FUN_500f4d70
// address: 0x500f4d70
// body: available
// range: 0x500f4d70-0x500f4ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500f4d70(int *param_1)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (param_1[0x1e] != 0)) && (param_1[0x116] != 0)) {
    FUN_50058070(&DAT_50159680,param_1);
  }
  iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar1 != 0) {
    FUN_5005a330(&DAT_50159680,((int)param_1 - DAT_5015cca0) / 0x464);
    return 1;
  }
  param_1[0x117] = 0;
  return 1;
}

