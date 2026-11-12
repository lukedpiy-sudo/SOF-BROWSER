// rea decompile_all
// name: FUN_200cf350
// address: 0x200cf350
// body: available
// range: 0x200cf350-0x200cf56a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200cf350(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int *unaff_retaddr;
  float fStack_14;
  float fStack_10;
  float local_c [2];
  int *piStack_4;
  
  (**(code **)(**(int **)(in_ECX + 0x7c) + 0x40))
            (CONCAT22((short)((uint)local_c >> 0x10),*(undefined2 *)(in_ECX + 0x84)),local_c);
  FUN_200c64f0();
  iVar3 = __ftol();
  piVar2 = piStack_4;
  *piStack_4 = iVar3;
  piStack_4 = (int *)0x0;
  if (*(undefined4 **)(in_ECX + 0x68) != (undefined4 *)0x0) {
    piStack_4 = (int *)**(undefined4 **)(in_ECX + 0x68);
  }
  FUN_200c64f0();
  iVar3 = __ftol();
  *unaff_retaddr = iVar3;
  if (*(char *)(in_ECX + 99) == '\0') {
    iVar3 = *piVar2 + *(int *)(in_ECX + 0x14);
  }
  else {
    iVar3 = __ftol();
  }
  *piVar2 = iVar3;
  if (*(char *)(in_ECX + 100) == '\0') {
    *unaff_retaddr = *unaff_retaddr + *(int *)(in_ECX + 0x18);
  }
  else {
    iVar3 = __ftol();
    *unaff_retaddr = iVar3;
  }
  piVar1 = (int *)**(int **)(in_ECX + 4);
  piStack_4 = *(int **)(*piVar1 + 0x9c);
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(in_ECX + 0x68);
  }
  iVar4 = FUN_200c64f0();
  *(int *)(in_ECX + 0xc) = (((*piVar2 - piVar1[0x10]) - iVar3) - (int)piStack_4) - iVar4;
  piVar2 = (int *)**(int **)(in_ECX + 4);
  iVar3 = *(int *)(*piVar2 + 0xa0);
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(in_ECX + 0x68);
  }
  iVar5 = FUN_200c64f0();
  *(int *)(in_ECX + 0x10) = (((*unaff_retaddr - piVar2[0x11]) - iVar4) - iVar3) - iVar5;
  FUN_200c3870(SQRT(fStack_14 * fStack_14 + fStack_10 * fStack_10 + local_c[0] * local_c[0]));
  if (local_c[0] < 0.05) {
    return 1;
  }
  return 0;
}

