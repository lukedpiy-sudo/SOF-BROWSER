// rea decompile_all
// name: FUN_50056b80
// address: 0x50056b80
// body: available
// range: 0x50056b80-0x50056bc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50056b80(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = DAT_5015cca0;
  if (0 < DAT_5015d8c8) {
    do {
      piVar2 = piVar1 + 0x119;
      if ((piVar2 != (int *)0x0) && (piVar1[0x22f] != 0)) {
        FUN_50056850(piVar2);
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar2;
    } while (iVar3 < DAT_5015d8c8);
  }
  return;
}

