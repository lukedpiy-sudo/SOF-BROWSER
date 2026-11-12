// rea decompile_all
// name: FUN_500b8df0
// address: 0x500b8df0
// body: available
// range: 0x500b8df0-0x500b92f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b8df0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined3 extraout_var;
  int *piVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 unaff_ESI;
  int iVar12;
  float10 fVar13;
  float in_stack_fffffff4;
  float in_stack_fffffff8;
  float in_stack_fffffffc;
  
  if (param_1[0xa0] == 0.0) {
    param_1[0xa0] = 100.0;
  }
  if (param_1[0x56] == 7.00649e-45) {
    FUN_500b9300((int)param_1);
  }
  fVar2 = param_1[0xcc];
  pfVar1 = param_1 + 0x93;
  iVar12 = 3;
  pfVar11 = pfVar1;
  iVar8 = DAT_5015c96c;
  do {
    if (*pfVar11 <= *(float *)(iVar8 + 0x18)) {
      if (*pfVar11 < -*(float *)(iVar8 + 0x18)) {
        *pfVar11 = -*(float *)(iVar8 + 0x18);
        iVar8 = DAT_5015c96c;
      }
    }
    else {
      *pfVar11 = *(float *)(iVar8 + 0x18);
      iVar8 = DAT_5015c96c;
    }
    pfVar11 = pfVar11 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  uVar10 = (uint)(fVar2 != 0.0);
  if (((int *)param_1[0x114] == (int *)0x0) ||
     (iVar8 = (**(code **)(*(int *)param_1[0x114] + 0x44))(), iVar8 != 0)) {
    if ((param_1[0x96] != 0.0) || ((param_1[0x97] != 0.0 || (param_1[0x98] != 0.0)))) {
      iVar8 = 3;
      pfVar11 = param_1 + 0x96;
      do {
        if ((-1.0 < *pfVar11) && (*pfVar11 < 1.0)) {
          *pfVar11 = 0.0;
        }
        pfVar11 = pfVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      param_1[4] = param_1[0x96] * 0.1 + param_1[4];
      param_1[5] = param_1[0x97] * 0.1 + param_1[5];
      param_1[6] = param_1[0x98] * 0.1 + param_1[6];
      FUN_500b8cf0((int)param_1,uVar10);
    }
    if ((((uVar10 == 0) && (((uint)param_1[0x68] & 1) == 0)) &&
        ((((uint)param_1[0x68] & 2) == 0 || ((int)param_1[0xe3] < 3)))) && (param_1[0xe3] == 0.0)) {
      fVar2 = *(float *)(DAT_5015c964 + 0x18);
      in_stack_fffffffc = *(float *)(DAT_5015c960 + 0x18);
      *pfVar1 = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * *(float *)(DAT_5015c968 + 0x18) *
                0.1 + *pfVar1;
      param_1[0x94] = *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * fVar2 * 0.1 + param_1[0x94];
      param_1[0x95] =
           param_1[0x95] - *(float *)(DAT_5015d29c + 0x18) * param_1[0xa2] * in_stack_fffffffc * 0.1
      ;
    }
    fVar2 = param_1[0x68];
    if ((((uint)fVar2 & 1) != 0) && (param_1[0x95] != 0.0)) {
      fVar4 = ABS(param_1[0x95]);
      fVar5 = fVar4;
      if (fVar4 < param_1[0xa0]) {
        fVar5 = param_1[0xa0];
      }
      fVar5 = fVar4 - param_1[0xa1] * 200.0 * fVar5 * 0.1;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      param_1[0x95] = (fVar5 / fVar4) * param_1[0x95];
    }
    if ((((uint)fVar2 & 2) != 0) && (param_1[0x95] != 0.0)) {
      fVar4 = ABS(param_1[0x95]);
      fVar5 = fVar4;
      if (fVar4 < param_1[0xa0]) {
        fVar5 = param_1[0xa0];
      }
      fVar5 = fVar4 - (float)(int)param_1[0xe3] * fVar5 * 0.1;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      param_1[0x95] = (fVar5 / fVar4) * param_1[0x95];
    }
    if (((param_1[0x95] != 0.0) || (param_1[0x94] != 0.0)) || (*pfVar1 != 0.0)) {
      if ((((uVar10 != 0) || (((uint)fVar2 & 3) != 0)) &&
          (((double)(int)param_1[0xbb] < 0.0 == ((double)(int)param_1[0xbb] == 0.0) ||
           (bVar6 = FUN_500b1010((float)param_1), CONCAT31(extraout_var,bVar6) != 0)))) &&
         (fVar2 = SQRT(param_1[0x94] * param_1[0x94] + *pfVar1 * *pfVar1), fVar2 != 0.0)) {
        if ((int)param_1[0xbb] < 0) {
          fVar4 = param_1[0xa1] * 600.0 * 0.5;
        }
        else {
          fVar4 = param_1[0xa0] * param_1[0xa1] * 600.0 * 0.1;
        }
        fVar4 = fVar2 - fVar4;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        *pfVar1 = (fVar4 / fVar2) * *pfVar1;
        param_1[0x94] = (fVar4 / fVar2) * param_1[0x94];
      }
      piVar3 = (int *)param_1[0x114];
      if (((param_1[0x56] == 7.00649e-45) && (uVar10 != 0)) &&
         (((piVar3 != (int *)0x0 &&
           (piVar9 = (int *)(**(code **)(*piVar3 + 0x18c))(), piVar9 != (int *)0x0)) &&
          ((fVar13 = (float10)(**(code **)(*piVar9 + 0xfc))(),
           (float10)1.5 < (float10)DAT_5015ccdc - fVar13 ||
           (cVar7 = (**(code **)(*piVar9 + 0x34))(), cVar7 != '\0')))))) {
        if (param_1[0x95] <= 0.0) {
          *pfVar1 = *pfVar1 * 0.5;
          param_1[0x94] = param_1[0x94] * 0.5;
          fVar2 = param_1[0x95] * 0.5;
        }
        else {
          *pfVar1 = *pfVar1 * 0.2;
          param_1[0x94] = param_1[0x94] * 0.2;
          fVar2 = param_1[0x95] * 0.2;
        }
        param_1[0x95] = fVar2;
      }
      FUN_500b7b50(param_1,0.1,(-(uint)(piVar3 != (int *)0x0) & 0x2020000) + 3);
      (*DAT_5015cb28)(param_1);
      if (param_1[0x56] != 7.00649e-45) {
        FUN_500c3a90();
      }
    }
  }
  if (param_1[0x114] != 0.0) {
    FUN_500c3e40((float)param_1,unaff_ESI,in_stack_fffffff4,in_stack_fffffff8,in_stack_fffffffc);
  }
  FUN_500b7650((int)param_1);
  return;
}

