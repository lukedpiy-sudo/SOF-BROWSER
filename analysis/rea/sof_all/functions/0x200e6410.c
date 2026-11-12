// rea decompile_all
// name: FUN_200e6410
// address: 0x200e6410
// body: available
// range: 0x200e6410-0x200e658d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200e6410(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  
  iVar4 = param_1[10];
  iVar1 = *in_ECX;
  if (in_ECX[0x10] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(in_ECX[0x10] + 0x28);
  }
  iVar2 = FUN_200c64f0();
  if ((*(int *)(iVar1 + 0x48) + iVar2 * -2) - iVar6 < iVar4) {
    FUN_200eb490(param_2,s_Object_too_wide_to_place_20159180);
    uVar3 = (**(code **)*param_1)(1);
    return uVar3 & 0xffffff00;
  }
  if (*(char *)((int)param_1 + 0x62) == '\0') {
    switch(param_1[0x13]) {
    case 0:
      FUN_200dd340();
      break;
    case 1:
      FUN_200dd490();
      break;
    case 2:
      FUN_200dd4e0();
      break;
    case 3:
      FUN_200dd5c0();
    }
    in_ECX[0x1a] = param_1[3] + param_1[10];
    in_ECX[0x1b] = param_1[4];
    iVar4 = (**(code **)(*param_1 + 4))();
    if (in_ECX[0x1d] < iVar4) {
      iVar4 = (**(code **)(*param_1 + 4))();
      in_ECX[0x1d] = iVar4;
    }
    if (in_ECX[0x1f] < in_ECX[0x1d]) {
      in_ECX[0x1f] = in_ECX[0x1d];
    }
  }
  else if (param_1[0x20] == 1) {
    if (param_1[0x13] == 1) {
      iVar4 = __ftol();
      param_1[5] = iVar4;
    }
    else {
      if (param_1[0x13] != 3) goto LAB_200e6549;
      iVar4 = __ftol();
      param_1[5] = iVar4;
    }
    iVar4 = __ftol();
    param_1[6] = iVar4;
  }
LAB_200e6549:
  iVar4 = in_ECX[0x27];
  piVar7 = *(int **)(iVar4 + 4);
  piVar5 = operator_new(0xc);
  *piVar5 = iVar4;
  if (piVar7 == (int *)0x0) {
    piVar7 = piVar5;
  }
  piVar5[1] = (int)piVar7;
  *(int **)(iVar4 + 4) = piVar5;
  *(int **)piVar5[1] = piVar5;
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)param_1;
  }
  iVar4 = in_ECX[0x28];
  in_ECX[0x28] = iVar4 + 1;
  return CONCAT31((int3)((uint)(iVar4 + 1) >> 8),1);
}

