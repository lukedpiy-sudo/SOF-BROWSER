// rea decompile_all
// name: FUN_200834c0
// address: 0x200834c0
// body: available
// range: 0x200834c0-0x2008351e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200834c0(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 4);
  piVar1 = operator_new(0x18);
  *piVar1 = param_2;
  if (piVar2 == (int *)0x0) {
    piVar2 = piVar1;
  }
  piVar1[1] = (int)piVar2;
  *(int **)(param_2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = *param_3;
    piVar1[3] = param_3[1];
    piVar1[4] = param_3[2];
    piVar1[5] = param_3[3];
  }
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  *param_1 = piVar1;
  return param_1;
}

