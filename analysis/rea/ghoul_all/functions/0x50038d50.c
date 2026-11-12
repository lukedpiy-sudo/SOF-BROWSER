// rea decompile_all
// name: FUN_50038d50
// address: 0x50038d50
// body: available
// range: 0x50038d50-0x50038dac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_50038d50(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return false;
  }
  pcVar1 = *(code **)(param_1 + 0x2c8);
  if ((((pcVar1 != (code *)&LAB_50092b90) && (pcVar1 != FUN_50090c30)) && (pcVar1 != FUN_50092a80))
     && (((pcVar1 != (code *)&LAB_50093ff0 && (pcVar1 != (code *)&LAB_500c1430)) &&
         (pcVar1 != (code *)&LAB_500c0320)))) {
    iVar2 = _strncmp(*(char **)(param_1 + 0x1b4),s_func_door_501420e8,9);
    return (bool)('\x01' - (iVar2 != 0));
  }
  return true;
}

