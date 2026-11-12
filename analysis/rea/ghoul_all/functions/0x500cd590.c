// rea decompile_all
// name: FUN_500cd590
// address: 0x500cd590
// body: available
// range: 0x500cd590-0x500cd64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500cd590(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x450) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x450) + 0x18c))();
    if (iVar1 != 0) {
      piVar2 = FUN_500c3690();
      piVar2[0xc6] = *(int *)(param_1 + 0x318);
      piVar2[1] = *(int *)(param_1 + 4);
      piVar2[2] = *(int *)(param_1 + 8);
      piVar2[3] = *(int *)(param_1 + 0xc);
      piVar2[3] = (int)((*(float *)(param_1 + 0x130) - (float)piVar2[0x49]) + 2.0 + (float)piVar2[3]
                       );
      piVar2[4] = *(int *)(param_1 + 0x10);
      piVar2[5] = *(int *)(param_1 + 0x14);
      piVar2[6] = *(int *)(param_1 + 0x18);
      piVar2[0x71] = *(int *)(param_1 + 0x1c8);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x450) + 0x18c))();
      (**(code **)(*piVar3 + 0x98))();
      FUN_500aa6d0((char *)piVar2);
    }
    (**(code **)(**(int **)(param_1 + 0x450) + 0x118))(param_1);
  }
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

