// rea decompile_all
// name: FUN_5009e530
// address: 0x5009e530
// body: available
// range: 0x5009e530-0x5009e594 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009e530(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x318) + 1;
  *(int *)(param_1 + 0x318) = iVar2;
  if (iVar2 == 1) {
    pcVar1 = &DAT_50146a90;
  }
  else if (iVar2 == 2) {
    pcVar1 = &DAT_50146a98;
  }
  else {
    *(undefined4 *)(param_1 + 0x318) = 0;
    pcVar1 = s_yellow_5014ae60;
  }
  FUN_500b4160(param_1,pcVar1,0);
  *(code **)(param_1 + 0x2b8) = FUN_5009e530;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 5.0;
  return;
}

