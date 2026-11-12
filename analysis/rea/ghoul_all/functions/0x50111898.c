// rea decompile_all
// name: FUN_50111898
// address: 0x50111898
// body: available
// range: 0x50111898-0x501118dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * __cdecl FUN_50111898(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_50158cc0;
  if (DAT_50158cc4 != param_1) {
    puVar3 = puVar2;
    do {
      puVar2 = puVar3 + 0xc;
      if (&DAT_50158cc0 + DAT_50158d40 * 0xc <= puVar2) break;
      piVar1 = (int *)(puVar3 + 0x10);
      puVar3 = puVar2;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_50158cc0 + DAT_50158d40 * 0xc <= puVar2) || (*(int *)(puVar2 + 4) != param_1)) {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}

