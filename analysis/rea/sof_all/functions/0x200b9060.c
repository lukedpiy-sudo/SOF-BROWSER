// rea decompile_all
// name: FUN_200b9060
// address: 0x200b9060
// body: available
// range: 0x200b9060-0x200b9141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200b9060(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  if (*param_1 != 0) {
    *param_3 = 1;
    *(undefined1 *)(*param_1 + 4) = 1;
    return *param_1 + 0x14;
  }
  *param_3 = 0;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 8);
    if (iVar1 != 0) {
      FUN_200b8fb0(iVar1);
    }
    piVar2 = *(int **)(in_ECX + 0x10);
    iVar1 = *piVar2;
    while ((iVar1 < param_2 && (piVar2[3] != 0))) {
      FUN_200b8fb0(*(undefined4 *)(piVar2[3] + 8));
      piVar2 = *(int **)(in_ECX + 0x10);
      iVar1 = *piVar2;
    }
    if (param_2 <= **(int **)(in_ECX + 0x10)) break;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
  } while (iVar4 < 2);
  uVar3 = **(uint **)(in_ECX + 0x10);
  if (param_2 + 0x15U < uVar3) {
    piVar2 = (int *)((int)*(uint **)(in_ECX + 0x10) + param_2 + 0x14);
    *piVar2 = (uVar3 - param_2) + -0x14;
    **(int **)(in_ECX + 0x10) = param_2;
    piVar2[2] = 0;
    *(undefined1 *)(piVar2 + 1) = 0;
    iVar4 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
    piVar2[3] = iVar4;
    if (iVar4 != 0) {
      *(int **)(iVar4 + 0x10) = piVar2;
    }
    *(int **)(*(int *)(in_ECX + 0x10) + 0xc) = piVar2;
    piVar2[4] = *(int *)(in_ECX + 0x10);
  }
  *(int **)(*(int *)(in_ECX + 0x10) + 8) = param_1;
  *param_1 = *(int *)(in_ECX + 0x10);
  iVar4 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
  *(int *)(in_ECX + 0x10) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
  }
  return *param_1 + 0x14;
}

