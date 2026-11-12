// rea decompile_all
// name: FUN_200c6530
// address: 0x200c6530
// body: available
// range: 0x200c6530-0x200c6631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6530(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x4c);
  iVar2 = *(int *)(in_ECX + 0x48);
  if ((int *)param_1[2] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1[2];
  }
  *(int *)(in_ECX + 0x40) = *(int *)(*param_1 + 0x9c) + param_1[0x10] + iVar3;
  if ((int *)param_1[2] == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1[2];
  }
  *(int *)(in_ECX + 0x44) = *(int *)(*param_1 + 0xa0) + param_1[0x11] + iVar3;
  if ((param_1[0x12] == 0) || (param_1[0x13] == 0)) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    return;
  }
  if (iVar2 < 1) {
    if ((int *)param_1[2] == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[2];
    }
    *(int *)(in_ECX + 0x48) = param_1[0x12] + iVar3 * -2 + iVar2;
  }
  if (iVar1 < 1) {
    if ((int *)param_1[2] == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1[2];
    }
    *(int *)(in_ECX + 0x4c) = param_1[0x13] + iVar3 * -2 + iVar1;
    if (iVar1 == 0) {
      if (iVar2 != 0) goto LAB_200c6602;
      param_1[0x10] = param_1[0x10] + *(int *)(in_ECX + 0x48);
      param_1[0x12] = param_1[0x12] - *(int *)(in_ECX + 0x48);
      goto LAB_200c65e2;
    }
  }
  if (iVar2 != 0) {
LAB_200c6602:
    param_1[0x10] = param_1[0x10] + *(int *)(in_ECX + 0x48);
    param_1[0x12] = param_1[0x12] - *(int *)(in_ECX + 0x48);
    return;
  }
LAB_200c65e2:
  param_1[0x11] = param_1[0x11] + *(int *)(in_ECX + 0x4c);
  param_1[0x13] = param_1[0x13] - *(int *)(in_ECX + 0x4c);
  return;
}

