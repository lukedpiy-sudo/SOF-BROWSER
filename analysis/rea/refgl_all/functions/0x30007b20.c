// rea decompile_all
// name: FUN_30007b20
// address: 0x30007b20
// body: available
// range: 0x30007b20-0x30007b51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30007b20(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_30034e08;
  if (0 < DAT_3004c508) {
    do {
      if (*(int *)(pcVar1 + 0x48) != 0) {
        FUN_30007620(pcVar1);
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x78;
    } while (iVar2 < DAT_3004c508);
  }
  return;
}

