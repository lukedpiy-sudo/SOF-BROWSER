// rea decompile_all
// name: FUN_5005bfc0
// address: 0x5005bfc0
// body: available
// range: 0x5005bfc0-0x5005c013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005bfc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (((char)piVar4[0x1d] == '\0') && (*(int **)(piVar4[1] + 4) == piVar4)) {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x75) != '\0') {
    piVar4 = (int *)piVar4[1];
    if (*param_1 == *piVar4) {
      do {
        *param_1 = (int)piVar4;
        piVar4 = (int *)piVar4[1];
      } while (*param_1 == *piVar4);
    }
    *param_1 = (int)piVar4;
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x75);
  iVar3 = *(int *)(iVar2 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x75);
    iVar2 = iVar3;
    iVar3 = *(int *)(iVar3 + 8);
  }
  *param_1 = iVar2;
  return;
}

