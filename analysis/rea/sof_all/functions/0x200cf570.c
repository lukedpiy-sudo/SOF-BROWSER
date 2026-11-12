// rea decompile_all
// name: FUN_200cf570
// address: 0x200cf570
// body: available
// range: 0x200cf570-0x200cf66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_200cf570(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  if ((*(int *)(in_ECX + 0x80) == 2) || (*(int *)(in_ECX + 0x80) == 3)) {
    if (*(int *)(in_ECX + 0x7c) != 0) {
      FUN_200cf350(param_1,param_2);
    }
  }
  else {
    if (*(int *)(in_ECX + 0x7c) == 0) {
      piVar1 = (int *)**(int **)(in_ECX + 4);
      iVar2 = *(int *)(*piVar1 + 0x9c);
      if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(in_ECX + 0x68);
      }
      iVar4 = FUN_200c64f0();
      *param_1 = iVar4 + piVar1[0x10] + *(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 0xc) + iVar2 +
                 iVar5;
      piVar1 = (int *)**(int **)(in_ECX + 4);
      iVar2 = *(int *)(*piVar1 + 0xa0);
      if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)**(int **)(in_ECX + 0x68);
      }
      iVar5 = (*(int **)(in_ECX + 4))[0x20];
      iVar4 = FUN_200c64f0();
      *param_2 = ((piVar1[0x11] + *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 0x10)) - iVar5) +
                 iVar2 + iVar4 + (int)param_1;
      return 1;
    }
    if (*(short *)(in_ECX + 0x84) != 0) {
      uVar3 = FUN_200cf350(param_1,param_2);
      if (*(int *)(in_ECX + 0x68) != 0) {
        FUN_200c4740(in_ECX);
      }
      return uVar3;
    }
  }
  return 0;
}

