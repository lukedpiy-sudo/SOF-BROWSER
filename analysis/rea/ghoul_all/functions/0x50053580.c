// rea decompile_all
// name: FUN_50053580
// address: 0x50053580
// body: available
// range: 0x50053580-0x5005368d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50053580(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  float10 fVar3;
  
  if (*(float *)(DAT_5015d278 + 0x18) != 0.0) {
    if (param_1 != param_2) {
      if ((((*(int *)(param_1 + 0x458) != 0) &&
           (iVar1 = *(int *)(param_1 + 0x45c), *(float *)(iVar1 + 0x294) < DAT_5015ccdc)) &&
          (*(int *)(iVar1 + 0x2a8) != 0)) && (iVar1 != 0)) {
        iVar1 = *(int *)(iVar1 + 0x2ac);
        fVar3 = (float10)(*DAT_5015cb20)(0,0x42c80000);
        if (fVar3 < (float10)iVar1 != (fVar3 == (float10)iVar1)) {
          bVar2 = FUN_500887e0(param_1,param_2);
          if (CONCAT31(extraout_var,bVar2) == 0) {
            FUN_50056d20(param_1,param_2,1);
          }
        }
      }
      if (((*(int *)(param_2 + 0x458) != 0) &&
          (iVar1 = *(int *)(param_2 + 0x45c), *(float *)(iVar1 + 0x294) < DAT_5015ccdc)) &&
         ((*(int *)(iVar1 + 0x2a8) != 0 && (iVar1 != 0)))) {
        iVar1 = *(int *)(iVar1 + 0x2ac);
        fVar3 = (float10)(*DAT_5015cb20)(0,0x42c80000);
        if (fVar3 < (float10)iVar1 != (fVar3 == (float10)iVar1)) {
          bVar2 = FUN_500887e0(param_1,param_2);
          if (CONCAT31(extraout_var_00,bVar2) == 0) {
            FUN_50056d20(param_2,param_1,2);
          }
        }
      }
    }
  }
  return;
}

