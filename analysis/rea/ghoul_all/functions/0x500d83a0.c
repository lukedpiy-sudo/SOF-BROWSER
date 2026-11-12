// rea decompile_all
// name: FUN_500d83a0
// address: 0x500d83a0
// body: available
// range: 0x500d83a0-0x500d8458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d83a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x450);
  iVar3 = (**(code **)(*piVar1 + 0x238))();
  if (*(float *)(iVar3 + 400) != 0.0) {
    *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) | 0x10;
    piVar1[0x9c] = 1;
    return;
  }
  *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) & 0xffffffef;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if ((*(byte *)(iVar3 + 0x194) & 0x10) != 0) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
    if ((*(uint *)(iVar3 + 0x194) & 0x20) != 0) {
      *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) & 0xffffffdf;
      if ((*(int *)(iVar3 + 0x44) != 0) &&
         (piVar2 = *(int **)(*(int *)(iVar3 + 0x44) + 0x1c), piVar2 != (int *)0x0)) {
        FUN_500b41d0(piVar2,s_barrel_still_5012fa0c,0);
      }
    }
  }
  piVar1[0x9c] = 1;
  return;
}

