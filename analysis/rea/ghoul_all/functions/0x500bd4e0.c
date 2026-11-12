// rea decompile_all
// name: FUN_500bd4e0
// address: 0x500bd4e0
// body: available
// range: 0x500bd4e0-0x500bd54c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd4e0(int param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x74) + 0x9e);
  if (cVar1 != '\x03') {
    if ((cVar1 != '\x02') && (cVar1 != '\0')) {
      return;
    }
    if (cVar1 != '\x03') goto LAB_500bd519;
  }
  if (DAT_5015ccdc - 4.0 < (float)*(int *)(*(int *)(param_1 + 0x74) + 0x56c)) {
    return;
  }
LAB_500bd519:
  uVar2 = FUN_500bd430();
  if (uVar2 != *(byte *)(*(int *)(param_1 + 0x74) + 0x9e)) {
    *(char *)(*(int *)(param_1 + 0x74) + 0x9e) = (char)uVar2;
    lVar3 = __ftol();
    *(int *)(*(int *)(param_1 + 0x74) + 0x56c) = (int)lVar3;
  }
  return;
}

