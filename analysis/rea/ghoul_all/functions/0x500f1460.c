// rea decompile_all
// name: FUN_500f1460
// address: 0x500f1460
// body: available
// range: 0x500f1460-0x500f1596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f1460(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = param_1;
  iVar3 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar3 != 0) {
    if (((param_1 == 0) || (piVar1 = (int *)(param_1 + 0x74), *piVar1 == 0)) ||
       (param_1 = 1, (*(byte *)(*piVar1 + 0x10) & 1) == 0)) {
      param_1 = 0;
    }
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x74) != 0)) &&
       (piVar1 = *(int **)(*(int *)(iVar2 + 0x74) + 0x354), piVar1 != (int *)0x0)) {
      if (((piVar1[1] != 0) && (iVar3 = (**(code **)(*piVar1 + 0x6c))(), iVar3 == 0)) &&
         ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x74) + 0x354) + 4) + 0x48) & 0x400000) != 0
         )) {
        return;
      }
      if (0 < *(int *)(iVar2 + 0x2ec)) {
        pcVar4 = (char *)FUN_500f0fe0(iVar2,param_2,param_3);
        if ((pcVar4 == (char *)0x0) &&
           (pcVar4 = (char *)(**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x354) + 0x1c))
                                       (iVar2,param_2,param_3,2,param_1,0,0), pcVar4 == (char *)0x0)
           ) {
          return;
        }
        if ((pcVar4 == s_lb_sautofire_end_n_n_50137a30) && (0 < *(int *)(iVar2 + 0x2ec))) {
          pcVar4 = s_std_ialert_n_p_n_50137fb0;
        }
        FUN_500f0b00(iVar2,param_2);
        piVar1 = *(int **)(*(int *)(iVar2 + 0x74) + 0x354);
        if ((pcVar4 == (char *)piVar1[1]) && (iVar3 = (**(code **)(*piVar1 + 0x6c))(), iVar3 != 0))
        {
          (**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x354) + 0x58))(iVar2,pcVar4);
          return;
        }
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x354) + 0x54))(iVar2,pcVar4);
      }
    }
  }
  return;
}

