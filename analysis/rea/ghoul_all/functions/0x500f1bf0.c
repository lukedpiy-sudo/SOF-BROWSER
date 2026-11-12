// rea decompile_all
// name: FUN_500f1bf0
// address: 0x500f1bf0
// body: available
// range: 0x500f1bf0-0x500f1db2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f1bf0(int param_1,float *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = param_1;
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar4 != 0) {
    if (((param_1 == 0) || (piVar1 = (int *)(param_1 + 0x74), *piVar1 == 0)) ||
       (param_1 = 1, (*(byte *)(*piVar1 + 0x10) & 1) == 0)) {
      param_1 = 0;
    }
    fStack_4 = 0.0;
    fStack_c = *param_2 - *(float *)(iVar3 + 4);
    fStack_8 = param_2[1] - *(float *)(iVar3 + 8);
    fVar5 = (float10)FUN_500fe050(&fStack_c);
    if ((float10)0.1 < fVar5) {
      if (*(int *)(*(int *)(iVar3 + 0x74) + 0x550) == 0) {
        FUN_500f0fb0(&fStack_c,1.0,&fStack_c);
      }
      else {
        fStack_c = fStack_c * 100.0;
        fStack_8 = fStack_8 * 100.0;
      }
      fStack_4 = param_2[2] - *(float *)(iVar3 + 0xc);
      FUN_5003d120(&fStack_c,(float *)(iVar3 + 4),param_2);
    }
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x74) != 0)) &&
       ((piVar1 = *(int **)(*(int *)(iVar3 + 0x74) + 0x354), piVar1 != (int *)0x0 &&
        (0 < *(int *)(iVar3 + 0x2ec))))) {
      if (((piVar1[1] != 0) && (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 == 0)) &&
         (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x74) + 0x354) + 4) + 0x38) == 5)) {
        return;
      }
      iVar4 = FUN_500f0fe0(iVar3,param_2,param_3);
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x74) + 0x354) + 0x24))
                            (iVar3,param_2,param_3,param_4,2,param_1,0,0), iVar4 == 0)) {
        return;
      }
      FUN_500f0b00(iVar3,(int)param_2);
      if ((*(uint *)(iVar4 + 0x48) & 0x1000000) != 0) {
        (**(code **)(**(int **)(*(int *)(iVar3 + 0x74) + 0x354) + 0x50))();
        return;
      }
      iVar2 = **(int **)(*(int *)(iVar3 + 0x74) + 0x354);
      if (*(int *)(iVar4 + 0x38) == 2) {
        (**(code **)(iVar2 + 0x58))();
        return;
      }
      (**(code **)(iVar2 + 0x54))(iVar3,iVar4);
    }
  }
  return;
}

