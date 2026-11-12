// rea decompile_all
// name: FUN_2001fbd0
// address: 0x2001fbd0
// body: available
// range: 0x2001fbd0-0x2001fc28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001fbd0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  piVar3 = *(int **)(iVar2 + 8);
  if (*(char *)((int)piVar3 + 0x19) != '\0') {
    iVar5 = *(int *)(iVar2 + 4);
    if (*in_ECX == *(int *)(iVar5 + 8)) {
      do {
        *in_ECX = iVar5;
        iVar5 = *(int *)(iVar5 + 4);
      } while (*in_ECX == *(int *)(iVar5 + 8));
    }
    if (*(int *)(*in_ECX + 8) != iVar5) {
      *in_ECX = iVar5;
    }
    *param_1 = iVar2;
    return;
  }
  cVar1 = *(char *)(*piVar3 + 0x19);
  piVar4 = (int *)*piVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x19);
    piVar3 = piVar4;
    piVar4 = (int *)*piVar4;
  }
  *in_ECX = (int)piVar3;
  *param_1 = iVar2;
  return;
}

