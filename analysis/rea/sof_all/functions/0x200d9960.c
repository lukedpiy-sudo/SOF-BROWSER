// rea decompile_all
// name: FUN_200d9960
// address: 0x200d9960
// body: available
// range: 0x200d9960-0x200d9ac4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d9960(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar2 = *(int *)(*piVar1 + 0x9c);
  iVar4 = FUN_200c64f0();
  iVar9 = piVar1[0x10];
  iVar5 = FUN_200c9ee0();
  *(int *)(in_ECX + 0xc) = iVar5 - (iVar4 + iVar9 + iVar2);
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar2 = *(int *)(*piVar1 + 0xa0);
  iVar4 = FUN_200c64f0();
  iVar9 = piVar1[0x11];
  iVar5 = FUN_200c9f00();
  *(int *)(in_ECX + 0x10) = iVar5 - (iVar4 + iVar9 + iVar2);
  piVar1 = (int *)**(int **)(in_ECX + 4);
  piVar3 = (int *)**(int **)(in_ECX + 4);
  iVar2 = *(int *)(*piVar1 + 0x9c);
  iVar9 = *(int *)(*piVar3 + 0x9c);
  iVar6 = FUN_200c64f0();
  iVar4 = piVar3[0x12];
  iVar5 = piVar3[0x10];
  iVar7 = FUN_200e6cb0();
  iVar8 = FUN_200c64f0();
  if (((iVar4 + iVar5 + iVar9) - iVar6) - iVar7 <
      iVar8 + piVar1[0x10] + *(int *)(in_ECX + 0x28) + iVar2 + *(int *)(in_ECX + 0xc)) {
    iVar2 = **(int **)(in_ECX + 4);
    iVar4 = FUN_200c64f0();
    iVar2 = *(int *)(iVar2 + 0x48);
    iVar9 = *(int *)(in_ECX + 0x28);
    iVar5 = FUN_200e6cb0();
    *(int *)(in_ECX + 0xc) = ((iVar2 + iVar4 * -2) - iVar9) - iVar5;
  }
  piVar1 = (int *)**(int **)(in_ECX + 4);
  iVar2 = *(int *)(*piVar1 + 0xa0);
  iVar9 = *(int *)(*piVar1 + 0xa0);
  iVar6 = FUN_200c64f0();
  iVar4 = piVar1[0x13];
  iVar5 = piVar1[0x11];
  iVar7 = FUN_200c64f0();
  if ((iVar4 + iVar5 + iVar9) - iVar6 <
      iVar7 + piVar1[0x11] + *(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x10) + iVar2) {
    iVar2 = **(int **)(in_ECX + 4);
    iVar9 = FUN_200c64f0();
    *(int *)(in_ECX + 0x10) = (*(int *)(iVar2 + 0x4c) + iVar9 * -2) - *(int *)(in_ECX + 0x2c);
  }
  return;
}

