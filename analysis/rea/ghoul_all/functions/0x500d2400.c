// rea decompile_all
// name: FUN_500d2400
// address: 0x500d2400
// body: available
// range: 0x500d2400-0x500d2788 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500d2400(int param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  int *piVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  if ((*(float *)(param_1 + 4) == *param_2) && (*(float *)(param_1 + 8) == param_2[1])) {
LAB_500d24a6:
    if (param_5 != (float *)0x0) {
      *param_5 = 0.0;
    }
    return 1;
  }
  fStack_18 = *param_2 - *(float *)(param_1 + 4);
  fStack_14 = param_2[1] - *(float *)(param_1 + 8);
  fStack_10 = param_2[2] - *(float *)(param_1 + 0xc);
  FUN_500c3570(&fStack_18,&fStack_c);
  if (180.0 < *(float *)(param_1 + 0x14)) {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) - 360.0;
  }
  fVar3 = ABS(fStack_8 - *(float *)(param_1 + 0x14));
  if (fVar3 < 9.0 != (fVar3 == 9.0)) {
    *(float *)(param_1 + 0x14) = fStack_8;
    goto LAB_500d24a6;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = fVar3;
  }
  lVar6 = __ftol();
  bVar2 = 180.0 <= (double)((uint)lVar6 & 0xffff) * 0.0054931640625;
  if (bVar2) {
    fVar3 = *(float *)(param_1 + 0x14) - 9.0;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x14) + 9.0;
  }
  bVar2 = !bVar2;
  *(float *)(param_1 + 0x14) = fVar3;
  lVar6 = __ftol();
  *(float *)(param_1 + 0x14) = (float)((uint)lVar6 & 0xffff) * 0.005493164;
  if (param_3 == 0) {
    return 0;
  }
  lVar6 = __ftol();
  fVar3 = (float)((uint)lVar6 & 0xffff) * 0.005493164;
  if (180.0 < fVar3) {
    fVar3 = ABS(360.0 - fVar3);
  }
  fVar3 = fVar3 * 0.5;
  lVar6 = __ftol();
  param_5 = (float *)((float)((uint)lVar6 & 0xffff) * 0.005493164);
  if (180.0 < (float)param_5) {
    param_5 = (float *)ABS(360.0 - (float)param_5);
  }
  fVar4 = (100.0 / fVar3) * ABS((float)param_5 - fVar3);
  if ((param_4 != 0) && ((*(byte *)(iVar5 + 0x194) & 0x40) != 0)) {
    if (90.0 <= fVar4) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
      if ((*(byte *)(iVar5 + 0x194) & 0x10) != 0) {
        iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
        if ((*(uint *)(iVar5 + 0x194) & 0x20) != 0) {
          *(uint *)(iVar5 + 0x194) = *(uint *)(iVar5 + 0x194) & 0xffffffdf;
          if ((*(int *)(iVar5 + 0x44) != 0) &&
             (piVar1 = *(int **)(*(int *)(iVar5 + 0x44) + 0x1c), piVar1 != (int *)0x0)) {
            FUN_500b41d0(piVar1,s_barrel_still_5012fa0c,0);
          }
        }
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
      iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
      if ((*(byte *)(iVar5 + 0x194) & 0x10) != 0) {
        FUN_500d2c00(param_1,0);
      }
      FUN_500d5990(param_1,0);
    }
  }
  if (fVar3 <= (float)param_5) {
    fVar3 = fVar4 * 16.0 * 0.01;
    if (!bVar2) {
      fVar3 = -fVar3;
    }
    if (180.0 < *(float *)(param_1 + 0x18)) {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - 360.0;
    }
    fVar4 = ABS(*(float *)(param_1 + 0x18) - fVar3);
    if (fVar4 < 2.0 != (fVar4 == 2.0)) goto LAB_500d2772;
  }
  else {
    fVar3 = fVar4 * 40.0 * 0.01;
    if (bVar2) {
      fVar3 = -fVar3;
    }
    if (180.0 < *(float *)(param_1 + 0x18)) {
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - 360.0;
    }
    fVar4 = ABS(*(float *)(param_1 + 0x18) - fVar3);
    if (fVar4 < 2.0 != (fVar4 == 2.0)) {
      *(float *)(param_1 + 0x18) = fVar3;
      return 0;
    }
  }
  if (*(float *)(param_1 + 0x18) < fVar3) {
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 2.0;
    return 0;
  }
  fVar3 = *(float *)(param_1 + 0x18) - 2.0;
LAB_500d2772:
  *(float *)(param_1 + 0x18) = fVar3;
  return 0;
}

