// rea decompile_all
// name: FUN_200724f0
// address: 0x200724f0
// body: available
// range: 0x200724f0-0x20072614 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200724f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  undefined1 local_4 [4];
  
  piVar1 = (int *)FUN_20076060(param_1);
  piVar4 = *(int **)(in_ECX + 4);
  if ((int *)piVar4[1] != *(int **)(in_ECX + 8)) {
    piVar3 = (int *)piVar4[1];
    do {
      if (piVar3[3] < *param_1) {
        piVar2 = (int *)piVar3[2];
      }
      else {
        piVar2 = (int *)*piVar3;
        piVar4 = piVar3;
      }
      piVar3 = piVar2;
    } while (piVar2 != *(int **)(in_ECX + 8));
  }
  iVar5 = 0;
  piVar3 = piVar4;
  while (piVar3 != piVar1) {
    iVar5 = iVar5 + 1;
    if (*(char *)(piVar3[2] + 0x11) == '\0') {
      piVar3 = (int *)FUN_20087920(piVar3[2]);
    }
    else {
      piVar2 = (int *)piVar3[1];
      if (piVar3 == (int *)piVar2[2]) {
        do {
          piVar3 = piVar2;
          piVar2 = (int *)piVar3[1];
        } while (piVar3 == (int *)piVar2[2]);
      }
      if ((int *)piVar3[2] != piVar2) {
        piVar3 = piVar2;
      }
    }
  }
  if (((*(int *)(in_ECX + 0x10) != 0) && (piVar3 = *(int **)(in_ECX + 4), piVar4 == (int *)*piVar3))
     && (piVar1 == piVar3)) {
    piVar4 = (int *)piVar3[1];
    if ((int *)piVar3[1] != *(int **)(in_ECX + 8)) {
      do {
        FUN_200759d0(piVar4[2]);
        piVar1 = (int *)*piVar4;
        FUN_200f9f75(piVar4);
        piVar4 = piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 8));
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    return iVar5;
  }
  if (piVar4 == piVar1) {
    return iVar5;
  }
  do {
    FUN_200850b0();
    FUN_200755f0(local_4,piVar4);
  } while (piVar4 != piVar1);
  return iVar5;
}

