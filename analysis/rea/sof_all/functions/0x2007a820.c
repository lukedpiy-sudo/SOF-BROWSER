// rea decompile_all
// name: FUN_2007a820
// address: 0x2007a820
// body: available
// range: 0x2007a820-0x2007a940 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007a820(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_4;
  
  FUN_2001fd60(&local_4,&param_1);
  if (param_2 < 0) {
    if (local_4 != *(int *)(in_ECX + 0x110)) {
      FUN_20072720(&param_2,local_4);
      return;
    }
  }
  else {
    if (local_4 != *(int *)(in_ECX + 0x110)) {
      *(int *)(local_4 + 0x10) = param_2;
    }
    piVar1 = *(int **)(in_ECX + 0x110);
    param_2 = 0x7fffffff;
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      iVar2 = piVar3[4];
      if (iVar2 < param_2) {
        param_2 = iVar2;
      }
      FUN_20085230();
      piVar1 = *(int **)(in_ECX + 0x110);
    }
    piVar3 = (int *)**(int **)(in_ECX + 0xfc);
    if (piVar3 != *(int **)(in_ECX + 0xfc)) {
      do {
        if (*(char *)(*(int *)((int)piVar3 + 8) + 0x15) == '\0') {
          iVar2 = FUN_20085550(*(int *)((int)piVar3 + 8));
LAB_2007a8f6:
          iVar4 = iVar2;
        }
        else {
          iVar2 = *(int *)((int)piVar3 + 4);
          iVar4 = (int)piVar3;
          if (piVar3 == (int *)*(int *)(iVar2 + 8)) {
            do {
              iVar4 = iVar2;
              iVar2 = *(int *)(iVar4 + 4);
            } while (iVar4 == *(int *)(iVar2 + 8));
          }
          if (*(int *)(iVar4 + 8) != iVar2) goto LAB_2007a8f6;
        }
        if (param_2 <= *(int *)((int)piVar3 + 0xc)) {
          return;
        }
        iVar2 = *(int *)((int)piVar3 + 0x10);
        if (iVar2 != 0) {
          FUN_20079350();
          FUN_200f9f75(iVar2);
        }
        FUN_20072720(&local_4,piVar3);
        piVar3 = (int *)iVar4;
      } while (iVar4 != *(int *)(in_ECX + 0xfc));
    }
  }
  return;
}

