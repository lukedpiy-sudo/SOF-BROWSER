// rea decompile_all
// name: FUN_50053690
// address: 0x50053690
// body: available
// range: 0x50053690-0x500537e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50053690(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  
  if ((*(float *)(DAT_5015d278 + 0x18) != 0.0) &&
     (iVar3 = 1, iVar2 = DAT_5015cca0, 0 < DAT_5015d8c8)) {
    while ((*(int *)(iVar2 + 0x4dc) == 0 ||
           ((((iVar2 + 0x464 == param_1 || (*(int *)(iVar2 + 0x4d8) == 0)) ||
             (*(int *)(*(int *)(iVar2 + 0x4d8) + 800) != 0)) ||
            (*(int *)(*(int *)(param_1 + 0x74) + 0x2dc) != 0))))) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x464;
      if (DAT_5015d8c8 < iVar3) {
        return;
      }
    }
    if (((*(int *)(param_1 + 0x458) != 0) &&
        (iVar2 = *(int *)(param_1 + 0x45c), *(float *)(iVar2 + 0x294) < DAT_5015ccdc)) &&
       ((*(int *)(iVar2 + 0x2a8) != 0 &&
        ((iVar2 != 0 &&
         (iVar2 = *(int *)(iVar2 + 0x2ac), fVar5 = (float10)(*DAT_5015cb20)(0,0x42c80000),
         fVar5 < (float10)iVar2 != (fVar5 == (float10)iVar2))))))) {
      iVar2 = FUN_500573c0();
      (*DAT_5015cb20)(0x3f800000,(float)iVar2);
      lVar6 = __ftol();
      iVar3 = 1;
      iVar4 = 0;
      iVar2 = DAT_5015cca0 + 0x464;
      if (0 < DAT_5015d8c8) {
        do {
          if ((*(int *)(iVar2 + 0x78) != 0) && (iVar4 = iVar4 + 1, iVar4 == (int)lVar6)) break;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x464;
        } while (iVar3 <= DAT_5015d8c8);
      }
      bVar1 = FUN_500887e0(param_1,iVar2);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        FUN_50056d20(param_1,iVar2,3);
      }
    }
  }
  return;
}

