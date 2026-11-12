// rea decompile_all
// name: FUN_5007b2b0
// address: 0x5007b2b0
// body: available
// range: 0x5007b2b0-0x5007b2d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_5007b2b0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x114);
  do {
    cVar1 = *(char *)(*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x114));
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  } while (cVar1 != '\0');
  return iVar2 + *(int *)(param_1 + 0x104);
}

