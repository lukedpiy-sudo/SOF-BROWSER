// rea decompile_all
// name: FUN_500ab6c0
// address: 0x500ab6c0
// body: available
// range: 0x500ab6c0-0x500ab754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ab6c0(int param_1)

{
  char *pcVar1;
  
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    pcVar1 = s_lantern_off_5014c55c;
  }
  else {
    pcVar1 = s_lantern_5014c0fc;
  }
  FUN_500b4160(param_1,pcVar1,0);
  (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    (*DAT_5015cb00)(*(int *)(param_1 + 0x3bc) + 0x487,&DAT_50133b5c);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
    return;
  }
  (*DAT_5015cb00)(*(int *)(param_1 + 0x3bc) + 0x487,&DAT_50144224);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  return;
}

