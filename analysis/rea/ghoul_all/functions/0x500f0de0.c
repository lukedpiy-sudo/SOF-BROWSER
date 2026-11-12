// rea decompile_all
// name: FUN_500f0de0
// address: 0x500f0de0
// body: available
// range: 0x500f0de0-0x500f0fa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_500f0de0(int param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = param_1;
  iVar3 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar3 != 0) {
    if (((param_1 == 0) || (piVar1 = (int *)(param_1 + 0x74), *piVar1 == 0)) ||
       (param_1 = 1, (*(byte *)(*piVar1 + 0x10) & 1) == 0)) {
      param_1 = 0;
    }
    fStack_4 = 0.0;
    fStack_c = *param_2 - *(float *)(iVar2 + 4);
    fStack_8 = param_2[1] - *(float *)(iVar2 + 8);
    fVar5 = (float10)FUN_500fe050(&fStack_c);
    if ((float10)0.1 < fVar5) {
      if (*(int *)(*(int *)(iVar2 + 0x74) + 0x550) == 0) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = 100.0;
      }
      FUN_500f0fb0(&fStack_c,fVar6,&fStack_c);
      fStack_4 = param_2[2] - *(float *)(iVar2 + 0xc);
      FUN_5003d120(&fStack_c,(float *)(iVar2 + 4),param_2);
    }
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x74) != 0)) &&
       (piVar1 = *(int **)(*(int *)(iVar2 + 0x74) + 0x354), piVar1 != (int *)0x0)) {
      if (((piVar1[1] != 0) && (iVar3 = (**(code **)(*piVar1 + 0x6c))(), iVar3 == 0)) &&
         ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x74) + 0x354) + 4) + 0x48) & 0x400000) != 0
         )) {
        return;
      }
      if (0 < *(int *)(iVar2 + 0x2ec)) {
        iVar3 = FUN_500f0fe0(iVar2,param_2,param_3);
        if ((iVar3 == 0) &&
           (iVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x354) + 0x18))
                              (iVar2,param_2,param_3,param_4,param_5,2,param_1,0,0), iVar3 == 0)) {
          return;
        }
        FUN_500f0b00(iVar2,(int)param_2);
        piVar1 = *(int **)(*(int *)(iVar2 + 0x74) + 0x354);
        if (((iVar3 == piVar1[1]) && (iVar4 = (**(code **)(*piVar1 + 0x6c))(), iVar4 != 0)) &&
           (piVar1 = *(int **)(*(int *)(iVar2 + 0x74) + 0x354),
           (*(uint *)(piVar1[1] + 0x48) & 0x8000000) == 0)) {
          (**(code **)(*piVar1 + 0x58))(iVar2,iVar3);
          return;
        }
        (**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x354) + 0x54))(iVar2,iVar3);
      }
    }
  }
  return;
}

