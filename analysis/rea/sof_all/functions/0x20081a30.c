// rea decompile_all
// name: FUN_20081a30
// address: 0x20081a30
// body: available
// range: 0x20081a30-0x20081a9e inclusive
// range: 0x20081aa0-0x20081be3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20081a30(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 extraout_var;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 uVar5;
  
  piVar3 = (int *)**(int **)(in_ECX + 0xf0);
  if (piVar3 != *(int **)(in_ECX + 0xf0)) {
    do {
      piVar4 = (int *)*piVar3;
      (**(code **)(*(int *)piVar3[3] + 0xd4))();
      piVar3 = piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0xf0));
  }
  piVar3 = *(int **)(in_ECX + 0xf0);
  piVar4 = (int *)*piVar3;
  while (piVar4 != piVar3) {
    piVar1 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_200f9f75(piVar4);
    *(int *)(in_ECX + 0xf4) = *(int *)(in_ECX + 0xf4) + -1;
    piVar4 = piVar1;
  }
  piVar3 = *(int **)(in_ECX + 0x110);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      FUN_2008acb0(piVar4[3],CONCAT22((short)((uint)piVar3 >> 0x10),*(undefined2 *)(in_ECX + 0x1ce))
                  );
      FUN_20085230();
      piVar3 = *(int **)(in_ECX + 0x110);
    } while (piVar4 != piVar3);
  }
  piVar4 = *(int **)(in_ECX + 0xfc);
  piVar3 = (int *)*piVar4;
  while (piVar3 != piVar4) {
    iVar2 = piVar3[4];
    if (iVar2 != 0) {
      FUN_20079350(unaff_EDI,unaff_ESI);
      FUN_200f9f75(iVar2);
    }
    FUN_20085230();
    piVar4 = *(int **)(in_ECX + 0xfc);
  }
  piVar3 = *(int **)(in_ECX + 0xfc);
  piVar4 = (int *)*piVar3;
  if (((*(int *)(in_ECX + 0x108) == 0) ||
      (piVar1 = *(int **)(in_ECX + 0xfc), piVar4 != (int *)*piVar1)) || (piVar3 != piVar1)) {
    while (piVar4 != piVar3) {
      FUN_20085230();
      FUN_20072720(&stack0xfffffffc,piVar4);
    }
  }
  else {
    piVar3 = (int *)piVar1[1];
    if ((int *)piVar1[1] != *(int **)(in_ECX + 0x100)) {
      do {
        FUN_20085100(piVar3[2]);
        piVar4 = (int *)*piVar3;
        FUN_200f9f75(piVar3);
        piVar3 = piVar4;
      } while (piVar4 != (int *)*(int *)(in_ECX + 0x100));
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xfc) + 4) = *(undefined4 *)(in_ECX + 0x100);
    piVar4 = *(int **)(in_ECX + 0xfc);
    *(undefined4 *)(in_ECX + 0x108) = 0;
    *piVar4 = (int)piVar4;
    *(int *)(*(int *)(in_ECX + 0xfc) + 8) = *(int *)(in_ECX + 0xfc);
  }
  uVar5 = (undefined2)((uint)piVar4 >> 0x10);
  if (*(int **)(in_ECX + 0x1c8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1c8) + 0x7c))();
    uVar5 = extraout_var;
  }
  FUN_2008aa00(in_ECX,CONCAT22(uVar5,*(undefined2 *)(in_ECX + 0x1ce)));
  return;
}

