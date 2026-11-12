// rea decompile_all
// name: FUN_2006c2e0
// address: 0x2006c2e0
// body: available
// range: 0x2006c2e0-0x2006c425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2006c2e0(float param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int **ppiVar5;
  int in_ECX;
  int *piStack_14;
  int *piStack_10;
  int *piStack_c;
  float fStack_8;
  int *piStack_4;
  
  piVar2 = param_2;
  param_2 = (int *)(**(code **)(*param_2 + 0xa0))();
  FUN_20071e30(&piStack_14,&param_2);
  piVar1 = piStack_14;
  if (piStack_14 != *(int **)(in_ECX + 0x114)) {
    piStack_c = (int *)piStack_14[5];
    piStack_10 = (int *)FUN_20075c80((int *)(in_ECX + 0xe4));
    if ((piStack_10 == (int *)piVar1[5]) || (*(int *)(in_ECX + 0xe4) < piStack_10[3])) {
      piStack_14 = (int *)piVar1[5];
      ppiVar5 = &piStack_14;
    }
    else {
      ppiVar5 = &piStack_10;
    }
    if (*ppiVar5 != piStack_c) {
      return 0;
    }
  }
  piVar1 = *(int **)(in_ECX + 0xd4);
  fStack_8 = param_1;
  piStack_4 = piVar2;
  bVar4 = true;
  piVar2 = piVar1;
  piVar3 = (int *)piVar1[1];
  while (piVar3 != *(int **)(in_ECX + 0xd8)) {
    piVar2 = piVar3;
    if ((float)piVar3[3] <= param_1) {
      bVar4 = false;
      piVar3 = (int *)piVar3[2];
    }
    else {
      bVar4 = true;
      piVar3 = (int *)*piVar3;
    }
  }
  if (*(char *)(in_ECX + 0xdc) != '\0') {
    FUN_20074bb0(&piStack_c,piVar3,piVar2,&fStack_8);
    return 1;
  }
  if (bVar4) {
    if (piVar2 == (int *)*piVar1) {
      ppiVar5 = &piStack_10;
      goto LAB_2006c40b;
    }
    FUN_2008e140();
  }
  if (fStack_8 <= (float)piVar2[3]) {
    return 1;
  }
  ppiVar5 = &piStack_14;
LAB_2006c40b:
  FUN_20074bb0(ppiVar5,piVar3,piVar2,&fStack_8);
  return 1;
}

