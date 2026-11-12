// rea decompile_all
// name: FUN_50092a80
// address: 0x50092a80
// body: available
// range: 0x50092a80-0x50092ad0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50092a80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1[0xbb];
  param_1[0xbb] = -0x29b;
  if (((*(byte *)(param_1 + 0x6e) & 8) == 0) || ((*(byte *)(param_2 + 0x118) & 4) == 0)) {
    FUN_50092960(param_1,param_2,param_3);
    param_1[0xba] = DAT_5015ccdc;
    param_1[0xbb] = iVar1;
  }
  return;
}

