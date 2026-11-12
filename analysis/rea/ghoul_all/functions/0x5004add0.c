// rea decompile_all
// name: FUN_5004add0
// address: 0x5004add0
// body: available
// range: 0x5004add0-0x5004ae1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_5004add0(void *this,undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 4);
  piVar1 = operator_new(0x1c);
  *piVar1 = param_2;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar1;
  }
  piVar1[1] = (int)piVar3;
  *(int **)(param_2 + 4) = piVar1;
  *(int **)piVar1[1] = piVar1;
  if (piVar1 + 2 != (int *)0x0) {
    piVar3 = piVar1 + 2;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_3;
      param_3 = param_3 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *param_1 = piVar1;
  return param_1;
}

