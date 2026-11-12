// rea decompile_all
// name: FUN_500f16c0
// address: 0x500f16c0
// body: available
// range: 0x500f16c0-0x500f17ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f16c0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  iVar5 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar5 != 0) {
    if (((param_1 == 0) || (*(int *)(param_1 + 0x74) == 0)) ||
       ((*(byte *)(*(int *)(param_1 + 0x74) + 0x10) & 1) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uStack_4 = 0;
    fStack_c = *param_2 - *(float *)(param_1 + 4);
    fStack_8 = param_2[1] - *(float *)(param_1 + 8);
    fVar6 = (float10)FUN_500fe050(&fStack_c);
    if ((float10)0.1 < fVar6) {
      fVar3 = fStack_8;
      if (*(int *)(*(int *)(param_1 + 0x74) + 0x550) != 0) {
        fStack_c = fStack_c * 100.0;
        fVar3 = fStack_8 * 100.0;
      }
      fVar1 = *(float *)(param_1 + 0xc);
      *param_2 = fStack_c + *(float *)(param_1 + 4);
      param_2[1] = fVar3 + *(float *)(param_1 + 8);
      param_2[2] = (param_2[2] - fVar1) + *(float *)(param_1 + 0xc);
    }
    if (((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
       ((piVar2 = *(int **)(*(int *)(param_1 + 0x74) + 0x354), piVar2 != (int *)0x0 &&
        ((0 < *(int *)(param_1 + 0x2ec) && (!bVar4)))))) {
      switch(param_4) {
      case 1:
      case 2:
      case 4:
      case 6:
        iVar5 = (**(code **)(*piVar2 + 0x1c))
                          (param_1,param_2,param_3,2,0,s_std_tgrenade_n_a_n_5013ff38,0);
        if (iVar5 != 0) {
          FUN_500f0b00(param_1,(int)param_2);
          (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x58))(param_1,iVar5);
        }
      }
    }
  }
  return;
}

