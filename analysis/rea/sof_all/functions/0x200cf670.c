// rea decompile_all
// name: FUN_200cf670
// address: 0x200cf670
// body: available
// range: 0x200cf670-0x200cf6dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200cf670(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(in_ECX[1] + 0x9c);
  if (piVar3 != *(int **)(in_ECX[1] + 0x9c)) {
    do {
      iVar1 = piVar3[2];
      if (*(char *)(iVar1 + 0x62) == '\0') {
        if ((*(int *)(iVar1 + 0xc) < in_ECX[10] + in_ECX[3]) &&
           (in_ECX[3] < *(int *)(iVar1 + 0x28) + *(int *)(iVar1 + 0xc))) {
          iVar1 = *(int *)(iVar1 + 0x10);
          iVar2 = (**(code **)(*in_ECX + 4))();
          if (iVar1 < iVar2) {
            iVar1 = in_ECX[4];
            iVar2 = (**(code **)(*(int *)piVar3[2] + 4))();
            if (iVar1 < iVar2) {
              return piVar3[2];
            }
          }
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX[1] + 0x9c));
  }
  return 0;
}

