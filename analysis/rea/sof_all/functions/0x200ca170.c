// rea decompile_all
// name: FUN_200ca170
// address: 0x200ca170
// body: available
// range: 0x200ca170-0x200ca1dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca170(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if ((*(char *)(in_ECX + 0x8e) != '\0') || (*(char *)(in_ECX + 0x8f) != '\0')) {
    if (param_1 == 2) {
      iVar1 = FUN_200cbe80();
      *(int *)(in_ECX + 0x94) = iVar1 - *(int *)(in_ECX + 0x9c);
      iVar1 = FUN_200cbe90();
      *(int *)(in_ECX + 0x98) = iVar1 - *(int *)(in_ECX + 0xa0);
    }
    piVar2 = (int *)**(int **)(in_ECX + 0x1c);
    if (piVar2 != *(int **)(in_ECX + 0x1c)) {
      do {
        FUN_200c6a40(param_1);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(in_ECX + 0x1c));
    }
  }
  return;
}

