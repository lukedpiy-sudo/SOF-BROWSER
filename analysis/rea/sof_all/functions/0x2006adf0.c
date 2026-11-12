// rea decompile_all
// name: FUN_2006adf0
// address: 0x2006adf0
// body: available
// range: 0x2006adf0-0x2006af01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2006adf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *local_8;
  undefined1 local_4 [4];
  
  FUN_2001fd60(&local_8,&param_1);
  piVar5 = *(int **)(in_ECX + 0xc);
  if (local_8 == piVar5) {
    iVar4 = 0;
  }
  else {
    iVar4 = local_8[4];
  }
  piVar1 = (int *)*piVar5;
  while ((piVar1 != piVar5 && (piVar1[3] < param_1))) {
    iVar2 = piVar1[4];
    if (iVar2 != 0) {
      FUN_20071000();
      FUN_200f9f75(iVar2);
    }
    FUN_20085230();
    piVar5 = *(int **)(in_ECX + 0xc);
  }
  local_8 = (int *)**(undefined4 **)(in_ECX + 0xc);
  piVar5 = local_8;
  if (((*(int *)(in_ECX + 0x18) != 0) &&
      (piVar3 = *(int **)(in_ECX + 0xc), local_8 == (int *)*piVar3)) && (piVar1 == piVar3)) {
    piVar5 = (int *)piVar3[1];
    if ((int *)piVar3[1] != *(int **)(in_ECX + 0x10)) {
      do {
        FUN_20073d20(piVar5[2]);
        piVar1 = (int *)*piVar5;
        FUN_200f9f75(piVar5);
        piVar5 = piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x10));
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 4) = *(undefined4 *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    *(int *)(*(int *)(in_ECX + 0xc) + 8) = *(int *)(in_ECX + 0xc);
    return iVar4;
  }
  while (piVar5 != piVar1) {
    local_8 = piVar5;
    FUN_20085230();
    FUN_20072720(local_4,piVar5);
    piVar5 = local_8;
  }
  return iVar4;
}

