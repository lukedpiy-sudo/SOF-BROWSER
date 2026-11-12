// rea decompile_all
// name: FUN_500f7190
// address: 0x500f7190
// body: available
// range: 0x500f7190-0x500f71c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500f7190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x340);
  iVar2 = param_1;
  while ((iVar1 = iVar3, iVar1 != 0 && (iVar1 != param_1))) {
    if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) != 0) {
      return *(undefined4 *)(iVar2 + 0x340);
    }
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0x340);
  }
  return 0;
}

