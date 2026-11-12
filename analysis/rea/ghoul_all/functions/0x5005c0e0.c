// rea decompile_all
// name: FUN_5005c0e0
// address: 0x5005c0e0
// body: available
// range: 0x5005c0e0-0x5005c160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __cdecl FUN_5005c0e0(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _strncpy(param_3,param_1,0x200);
    pcVar1 = param_1 + 0x21c;
    *(undefined4 *)(param_3 + 0x200) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_3 + 0x204) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_1 + 0x208);
    *(undefined4 *)(param_3 + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_3 + 0x210) = *(undefined4 *)(param_1 + 0x210);
    *(undefined4 *)(param_3 + 0x214) = *(undefined4 *)(param_1 + 0x214);
    *(undefined4 *)(param_3 + 0x218) = *(undefined4 *)(param_1 + 0x218);
    param_3 = param_3 + 0x21c;
    param_1 = pcVar1;
  } while (pcVar1 != param_2);
  return param_3;
}

