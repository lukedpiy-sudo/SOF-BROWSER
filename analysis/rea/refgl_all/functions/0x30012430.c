// rea decompile_all
// name: FUN_30012430
// address: 0x30012430
// body: available
// range: 0x30012430-0x3001245f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30012430(void)

{
  code *pcVar1;
  longlong lVar2;
  
  if (*(int *)(DAT_3008fe44 + 0x14) != 0) {
    *(undefined4 *)(DAT_3008fe44 + 0x14) = 0;
    pcVar1 = DAT_300a43a4;
    if (DAT_300a43a4 != (code *)0x0) {
      lVar2 = __ftol();
      (*pcVar1)((int)lVar2);
    }
  }
  return;
}

