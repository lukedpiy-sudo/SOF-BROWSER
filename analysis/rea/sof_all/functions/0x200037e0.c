// rea decompile_all
// name: FUN_200037e0
// address: 0x200037e0
// body: available
// range: 0x200037e0-0x20003be0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200037e0(int param_1,int param_2)

{
  short *psVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  undefined2 extraout_var;
  short *psVar7;
  float unaff_EBX;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float fStack_b4;
  float local_b0 [4];
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float afStack_90 [2];
  undefined1 auStack_88 [64];
  undefined4 local_48 [16];
  undefined4 uStack_8;
  
  if ((DAT_2015eb70 & 1) == 0) {
    DAT_2015eb70 = DAT_2015eb70 | 1;
    _DAT_2015ebb8 = 0;
    _DAT_2015ebfc = 0;
    FUN_200f9f16(&DAT_20003bf0);
  }
  if (DAT_2011c768 != 0) {
    _DAT_2015ec18 = 0.0;
    _DAT_2015ec1c = 0.0;
    _DAT_2015ec0c = 0.0;
    _DAT_2015ec10 = 0.0;
    _DAT_2015ec14 = 0.0;
    _DAT_2015ec20 = 0.0;
    DAT_2011c768 = 0;
  }
  piVar5 = DAT_20225258;
  if (DAT_20225820 == 0) {
    piVar5 = (int *)FUN_20069630(1,0);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x24))
                              (CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x70)));
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  iVar6 = 0;
  local_48[0] = 0;
  psVar7 = (short *)(param_1 + 4);
  do {
    sVar4 = *psVar7;
    iVar6 = iVar6 + 1;
    psVar1 = (short *)((param_2 - param_1) + (int)psVar7);
    psVar7 = psVar7 + 1;
    local_b0[iVar6] =
         ((float)(int)*psVar1 * 0.125 - (float)(int)sVar4 * 0.125) * DAT_201e8fd0 +
         (float)(int)sVar4 * 0.125;
  } while (iVar6 < 3);
  afStack_90[1] = local_b0[3] - _DAT_2015ec08;
  uStack_98 = 0;
  local_b0[0] = 1.0 / DAT_201c1f10;
  fStack_a0 = (local_b0[1] - _DAT_2015ec00) * local_b0[0];
  fStack_9c = (local_b0[2] - _DAT_2015ec04) * local_b0[0];
  local_b0[0] = afStack_90[1] * local_b0[0];
  fVar10 = (float10)VectorLength(&fStack_a0);
  if ((float10)300.0 < fVar10) {
    fVar10 = (float10)300.0;
  }
  if ((ABS(local_b0[0]) < 0.0005) && (_DAT_2015ec14 < -30.0)) {
    DAT_2015ec24 = (ABS(_DAT_2015ec14) - 30.0) * -0.021666666;
  }
  if (-1.3 <= DAT_2015ec24) {
    if (DAT_2015ec24 == 0.0) {
      if (_DAT_2015ec20 < 0.0) {
        _DAT_2015ec20 = DAT_201c1f10 * 4.0 + _DAT_2015ec20;
      }
      if (0.0 < _DAT_2015ec20) {
        _DAT_2015ec20 = 0.0;
      }
      goto LAB_20003a64;
    }
  }
  else {
    DAT_2015ec24 = -1.3;
  }
  fVar2 = DAT_2015ec24;
  _DAT_2015ec20 = _DAT_2015ec20 - DAT_201c1f10 * 12.0;
  if (_DAT_2015ec20 < DAT_2015ec24) {
    DAT_2015ec24 = 0.0;
    _DAT_2015ec20 = fVar2;
  }
LAB_20003a64:
  if (fVar10 < (float10)DAT_201c1f10 * (float10)_DAT_2015ec1c * (float10)200.0) {
    fVar10 = ((float10)_DAT_2015ec1c * (float10)3.0 + fVar10) * (float10)0.25;
  }
  _DAT_2015ec1c = (float)fVar10;
  _DAT_2015ec18 =
       (float)(SQRT((float10)0.0033333333333333335 * fVar10) * (float10)180.0 *
               (float10)DAT_201c1f10 * (float10)0.028333333333333335 + (float10)_DAT_2015ec18);
  fStack_b4 = (float)(fVar10 * (float10)0.004666666666666667);
  sVar4 = DAT_2022592c._2_2_;
  if (DAT_20225820 == 0) {
    sVar4 = *(short *)(param_2 + 0x72);
  }
  if ((sVar4 == 3) || (sVar4 == 4)) {
    fStack_b4 = fStack_b4 * 0.5;
  }
  (**(code **)(*piVar5 + 8))(auStack_88);
  cVar3 = FUN_200a10a0(&DAT_2015ebbc);
  if (cVar3 == '\0') {
    pfVar8 = afStack_90;
    pfVar9 = (float *)&DAT_2015eb78;
    for (iVar6 = 0x11; pfVar8 = (float *)((int)pfVar8 + 4), iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar8;
      pfVar9 = pfVar9 + 1;
    }
  }
  fVar10 = (float10)fsin((float10)_DAT_2015ec18);
  uStack_8 = 0;
  FUN_200a0d50(0,(float)(fVar10 * (float10)unaff_EBX * (float10)0.9),
               (float)(ABS((float10)0.4 * fVar10 * (float10)unaff_EBX) + (float10)_DAT_2015ec20));
  FUN_200a1100(&DAT_2015eb78,local_48);
  (**(code **)*piVar5)(afStack_90 + 1);
  _DAT_2015ec00 = fStack_b4;
  _DAT_2015ec04 = local_b0[0];
  _DAT_2015ec08 = local_b0[1];
  pfVar8 = afStack_90;
  pfVar9 = (float *)&DAT_2015ebbc;
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  _DAT_2015ec14 = unaff_EBX;
  _DAT_2015ec10 = local_b0[3];
  _DAT_2015ec0c = local_b0[2];
  return;
}

