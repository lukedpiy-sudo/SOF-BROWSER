// rea decompile_all
// name: FUN_2008e140
// address: 0x2008e140
// body: available
// range: 0x2008e140-0x2008e193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008e140(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  piVar4 = (int *)*in_ECX;
  if (((char)piVar4[5] == '\0') && (*(int **)(piVar4[1] + 4) == piVar4)) {
    *in_ECX = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x15) != '\0') {
    piVar4 = (int *)piVar4[1];
    if (*in_ECX == *piVar4) {
      do {
        *in_ECX = (int)piVar4;
        piVar4 = (int *)piVar4[1];
      } while (*in_ECX == *piVar4);
    }
    *in_ECX = (int)piVar4;
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x15);
  iVar3 = *(int *)(iVar2 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x15);
    iVar2 = iVar3;
    iVar3 = *(int *)(iVar3 + 8);
  }
  *in_ECX = iVar2;
  return;
}

