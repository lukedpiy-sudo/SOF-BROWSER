// rea decompile_all
// name: FUN_200cf6e0
// address: 0x200cf6e0
// body: available
// range: 0x200cf6e0-0x200cf775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_200cf6e0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x62) != '\0') {
    return true;
  }
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar2 = (*(int **)(in_ECX + 4))[0x20];
  iVar4 = *(int *)(*piVar1 + 0xa0);
  iVar3 = FUN_200c64f0();
  iVar3 = ((piVar1[0x11] + *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x10)) - iVar2) +
          iVar4 + iVar3;
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar2 = *(int *)(*piVar1 + 0xa0);
  iVar4 = FUN_200c64f0();
  if ((piVar1[0x13] + piVar1[0x11] + iVar2) - iVar4 < iVar3) {
    return false;
  }
  iVar2 = *(int *)(in_ECX + 0x2c);
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar4 = *(int *)(*piVar1 + 0xa0);
  iVar5 = FUN_200c64f0();
  return iVar5 + piVar1[0x11] + iVar4 <= iVar2 + iVar3;
}

