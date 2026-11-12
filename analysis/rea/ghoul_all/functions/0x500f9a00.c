// rea decompile_all
// name: FUN_500f9a00
// address: 0x500f9a00
// body: available
// range: 0x500f9a00-0x500f9f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f9a00(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int *unaff_EBP;
  int iVar7;
  float10 extraout_ST0;
  float10 fVar8;
  longlong lVar9;
  
  DAT_5018b3f0 = param_1;
  DAT_5018b41c = param_1[0x1d];
  pfVar1 = (float *)(param_1 + 0x93);
  iVar6 = 10;
  do {
    lVar9 = __ftol();
    *(short *)(iVar6 + -6 + DAT_5018b41c) = (short)lVar9;
    lVar9 = __ftol();
    iVar7 = iVar6 + 2;
    *(short *)(iVar6 + DAT_5018b41c) = (short)lVar9;
    iVar6 = iVar7;
  } while (iVar7 < 0x10);
  (**(code **)(*DAT_5015c4d8 + 0xac))(param_1);
  lVar9 = __ftol();
  *(char *)(DAT_5018b41c + 0x1a) = (char)lVar9;
  if (_DAT_5015d1c8 != 0.0) {
    *(undefined4 *)(DAT_5018b41c + 0x90) = 0;
    *(undefined4 *)(DAT_5018b41c + 0x94) = 0x42be0000;
    FUN_500f67f0((int)param_1);
    return;
  }
  FUN_500fdd70((float *)(param_1[0x1d] + 0x4fc),(float *)&DAT_5018b3f4,(float *)&DAT_5018b428,
               (float *)&DAT_5018b410);
  FUN_500f9220();
  iVar6 = param_1[0x1d];
  fVar2 = *(float *)(iVar6 + 0x4fc);
  if (180.0 < *(float *)(iVar6 + 0x4fc)) {
    fVar2 = fVar2 - 360.0;
  }
  iVar7 = -1;
  param_1[4] = (int)(fVar2 * 0.33333334);
  iVar6 = *(int *)(iVar6 + 0x500);
  param_1[6] = 0;
  param_1[5] = iVar6;
  fVar2 = _DAT_5018b428 * *pfVar1 +
          _DAT_5018b42c * (float)param_1[0x94] + _DAT_5018b430 * (float)param_1[0x95];
  if (0.0 <= fVar2) {
    iVar7 = 1;
  }
  fVar2 = ABS(fVar2);
  fVar3 = *(float *)(DAT_5015d2b4 + 0x18);
  if (fVar2 < *(float *)(DAT_5015c944 + 0x18)) {
    fVar3 = (fVar2 / *(float *)(DAT_5015c944 + 0x18)) * fVar3;
  }
  param_1[6] = (int)((float)iVar7 * fVar3 * 4.0);
  _DAT_5018b3e8 = SQRT((float)param_1[0x94] * (float)param_1[0x94] + *pfVar1 * *pfVar1);
  if (5.0 <= _DAT_5018b3e8) {
    if (param_1[0xcc] != 0) {
      if (_DAT_5018b3e8 <= 210.0) {
        _DAT_5018b400 = 0.2;
        if (_DAT_5018b3e8 <= 10.0) {
          _DAT_5018b400 = 0.1;
        }
      }
      else {
        _DAT_5018b400 = 0.3;
      }
    }
  }
  else {
    _DAT_5018b400 = 0.0;
    *(undefined4 *)(DAT_5018b41c + 0x508) = 0;
  }
  *(float *)(DAT_5018b41c + 0x508) = _DAT_5018b400 + *(float *)(DAT_5018b41c + 0x508);
  lVar9 = __ftol();
  DAT_5018b420 = (uint)lVar9;
  fVar8 = (float10)fsin(extraout_ST0 * (float10)3.141592653589793);
  _DAT_5018b424 = (float)ABS(fVar8);
  FUN_500f8d30((float)param_1);
  FUN_500f6d60((float)param_1);
  FUN_500f84f0(param_1);
  FUN_500f8590((int)param_1);
  FUN_500f67f0((int)param_1);
  if (param_1[0xcc] != 0) {
    lVar9 = __ftol();
    if ((uint)lVar9 != DAT_5018b420) {
      iVar6 = 3;
      if (225.0 < _DAT_5018b3e8) {
        iVar6 = 5;
      }
      if ((DAT_5018b420 & 1) != 0) {
        iVar6 = iVar6 + 1;
      }
      FUN_50083bb0((int)param_1,iVar6);
      if (0 < DAT_50159680) {
        FUN_5004f700((int)param_1,param_1 + 1,250.0,2);
      }
    }
  }
  if (*(int *)(param_1[0x1d] + 0x318) != DAT_5015d6c0) {
    *(int *)(param_1[0x1d] + 0x318) = DAT_5015d6c0;
    *(undefined4 *)(param_1[0x1d] + 0x31c) = 1;
  }
  iVar6 = *(int *)(param_1[0x1d] + 0x31c);
  if (((iVar6 != 0) && (iVar6 < 4)) && (((byte)DAT_5015ccd8 & 0x3f) == 0)) {
    *(int *)(param_1[0x1d] + 0x31c) = iVar6 + 1;
    uVar4 = (*DAT_5015c9f4)(s_misc_pc_up_wav_501546dc,0x3f19999a,0x40400000,0,0);
    (*DAT_5015ca48)(param_1,2,uVar4);
  }
  FUN_500f9590((int)param_1);
  FUN_500f1dc0((int)param_1);
  FUN_500f1df0((int)param_1);
  iVar6 = param_1[0x1d];
  *(float *)(iVar6 + 0x518) = *pfVar1;
  *(int *)(iVar6 + 0x51c) = param_1[0x94];
  *(int *)(iVar6 + 0x520) = param_1[0x95];
  iVar6 = param_1[0x1d];
  *(undefined4 *)(iVar6 + 0x50c) = *(undefined4 *)(iVar6 + 0x1c);
  *(undefined4 *)(iVar6 + 0x510) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar6 + 0x514) = *(undefined4 *)(iVar6 + 0x24);
  iVar6 = param_1[0x1d];
  iVar7 = 0x4b0;
  *(undefined4 *)(iVar6 + 0x4bc) = 0;
  *(undefined4 *)(iVar6 + 0x4c0) = 0;
  *(undefined4 *)(iVar6 + 0x4c4) = 0;
  do {
    pfVar1 = (float *)(iVar7 + param_1[0x1d]);
    if (0.8 <= ABS(*(float *)(iVar7 + param_1[0x1d]))) {
      *pfVar1 = *pfVar1 * 0.7;
    }
    else {
      *pfVar1 = 0.0;
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x4bc);
  if ((*(int *)(param_1[0x1d] + 0x470) != 0) && (((byte)DAT_5015ccd8 & 0x1f) == 0)) {
    (**(code **)(*DAT_5015c4d8 + 0xc4))(param_1,param_1[0xc9],0);
  }
  if ((DAT_5015ccdc < *(float *)(param_1[0x1d] + 0x568)) && (((byte)DAT_5015ccd8 & 0x1f) == 0)) {
    (**(code **)(*DAT_5015c4d8 + 0xb8))(param_1);
  }
  if (*(int *)(DAT_5018b41c + 0x5c0) == 0) {
    if (*(int *)(DAT_5018b41c + 0x5b0) < 1) {
      *(undefined4 *)(DAT_5018b41c + 100) = 0xffffffff;
    }
    else {
      param_1[0xc] = param_1[0xc] | 0x4000;
      *(undefined4 *)(DAT_5018b41c + 100) = *(undefined4 *)(DAT_5018b41c + 0x5b4);
      *(undefined1 *)(DAT_5018b41c + 0x68) = *(undefined1 *)(DAT_5018b41c + 0x5b8);
    }
  }
  else {
    *(undefined4 *)(param_1[0x1d] + 100) = 0;
  }
  (**(code **)(*DAT_5015c4d8 + 0xb0))(param_1);
  FUN_500f9960((int)param_1);
  (**(code **)(**(int **)(param_1[0x1d] + 0x34c) + 0xf4))(&stack0xffffffc4);
  if (param_1[0x116] == 0) {
    (**(code **)(*unaff_EBP + 0x120))();
    (**(code **)(*unaff_EBP + 0x11c))();
  }
  *(undefined1 *)(param_1[0x1d] + 0x79) = *(undefined1 *)(param_1[0x1d] + 0x46e);
  iVar6 = param_1[0x1d];
  if (*(int *)(iVar6 + 0x488) == 0) {
    bVar5 = *(byte *)(iVar6 + 0x7a) | 1;
  }
  else {
    bVar5 = *(byte *)(iVar6 + 0x7a) & 0xfe;
  }
  *(byte *)(iVar6 + 0x7a) = bVar5;
  if (*(int *)param_1[0x1d] != 7) {
    *(undefined1 *)(param_1[0x1d] + 0xc6) = 0;
  }
  *(undefined1 *)(DAT_5018b41c + 199) = DAT_5015d8d5;
  return;
}

