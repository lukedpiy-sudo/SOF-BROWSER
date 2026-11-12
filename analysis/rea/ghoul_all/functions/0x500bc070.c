// rea decompile_all
// name: FUN_500bc070
// address: 0x500bc070
// body: available
// range: 0x500bc070-0x500bc0b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500bc070(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(*param_1 + 8);
  if (*(char *)((int)piVar2 + 0x11) != '\0') {
    iVar4 = *(int *)(*param_1 + 4);
    if (*param_1 == *(int *)(iVar4 + 8)) {
      do {
        *param_1 = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*param_1 == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*param_1 + 8) != iVar4) {
      *param_1 = iVar4;
    }
    return;
  }
  cVar1 = *(char *)(*piVar2 + 0x11);
  piVar3 = (int *)*piVar2;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar3 + 0x11);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  *param_1 = (int)piVar2;
  return;
}

