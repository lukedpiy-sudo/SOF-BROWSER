// rea decompile_all
// name: FUN_30007870
// address: 0x30007870
// body: available
// range: 0x30007870-0x300078d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30007870(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  *(int *)(DAT_3008fc64 + 0x48) = DAT_3008ffd4;
  if (0 < DAT_3004c508) {
    piVar2 = &DAT_30034e48;
    do {
      iVar1 = *piVar2;
      if ((iVar1 == 6) ||
         ((((piVar2[2] != DAT_3008ffd4 && (piVar2[2] != 0)) && (iVar1 != 3)) && (iVar1 != 7)))) {
        FUN_30007620((char *)(piVar2 + -0x10));
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x1e;
    } while (iVar3 < DAT_3004c508);
  }
  return;
}

