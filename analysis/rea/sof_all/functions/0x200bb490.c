// rea decompile_all
// name: FUN_200bb490
// address: 0x200bb490
// body: available
// range: 0x200bb490-0x200bb506 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bb490(undefined4 *param_1,uint param_2)

{
  char *in_ECX;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*in_ECX == '\0') {
    uVar1 = (*DAT_204058ac)(param_1,4,param_2,*(undefined4 *)(in_ECX + 4));
    in_ECX[2] = in_ECX[2] | uVar1 != param_2;
    return;
  }
  if (*(undefined4 **)(in_ECX + 0x20) < *(undefined4 **)(in_ECX + 0x18) + param_2) {
    in_ECX[2] = '\x01';
    *(undefined4 **)(in_ECX + 0x18) = *(undefined4 **)(in_ECX + 0x20);
    return;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x18);
  for (uVar1 = param_2 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(uint *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + param_2 * 4;
  return;
}

