// rea decompile_all
// name: FUN_20073500
// address: 0x20073500
// body: available
// range: 0x20073500-0x20073545 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20073500(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  
  piVar2 = *(int **)(*in_ECX + 8);
  if (*(char *)((int)piVar2 + 0xf) != '\0') {
    iVar4 = *(int *)(*in_ECX + 4);
    if (*in_ECX == *(int *)(iVar4 + 8)) {
      do {
        *in_ECX = iVar4;
        iVar4 = *(int *)(iVar4 + 4);
      } while (*in_ECX == *(int *)(iVar4 + 8));
    }
    if (*(int *)(*in_ECX + 8) != iVar4) {
      *in_ECX = iVar4;
    }
    return;
  }
  cVar1 = *(char *)(*piVar2 + 0xf);
  piVar3 = (int *)*piVar2;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xf);
    piVar2 = piVar3;
    piVar3 = (int *)*piVar3;
  }
  *in_ECX = (int)piVar2;
  return;
}

