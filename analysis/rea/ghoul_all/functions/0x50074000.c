// rea decompile_all
// name: FUN_50074000
// address: 0x50074000
// body: available
// range: 0x50074000-0x50074048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50074000(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x74) + 0x350) == 0) {
    puVar1 = operator_new(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 **)(*(int *)(param_1 + 0x74) + 0x350) = puVar1;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x350) = 0;
  }
  return;
}

