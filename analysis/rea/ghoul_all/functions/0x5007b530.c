// rea decompile_all
// name: FUN_5007b530
// address: 0x5007b530
// body: available
// range: 0x5007b530-0x5007b58e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5007b530(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    FUN_500817d0(this,(byte *)s_Illegal_push_5014573c);
  }
  iVar1 = *(int *)((int)this + 0x144);
  piVar3 = *(int **)(iVar1 + 4);
  piVar2 = operator_new(0xc);
  *piVar2 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar2[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = param_1;
  }
  *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + 1;
  return;
}

