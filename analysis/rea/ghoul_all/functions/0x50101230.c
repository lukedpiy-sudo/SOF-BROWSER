// rea decompile_all
// name: FUN_50101230
// address: 0x50101230
// body: available
// range: 0x50101230-0x50101656 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50101230(int *param_1)

{
  float *pfVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float10 fVar11;
  float10 fVar12;
  longlong lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [3];
  int iStack_64;
  int iStack_60;
  undefined4 uStack_48;
  float fStack_40;
  float afStack_38 [14];
  
  bVar2 = false;
  FUN_50065850(param_1[8]);
  pfVar1 = (float *)(param_1 + 1);
  (*DAT_5015cac0)(*param_1 + 4,0,0,pfVar1,*param_1,0x6000081,local_70);
  if (0.99 < local_70[1]) {
    fVar11 = FUN_50065970(param_1[8]);
    if (fVar11 == (float10)128.0) {
      fStack_7c = (float)param_1[4] * 256.0 + *pfVar1;
      fStack_78 = (float)param_1[5] * 256.0 + (float)param_1[2];
      fVar11 = (float10)(float)param_1[6] * (float10)256.0;
    }
    else {
      fVar11 = FUN_50065970(param_1[8]);
      fVar11 = fVar11 * (float10)3.0;
      fStack_7c = (float)(fVar11 * (float10)(float)param_1[4] + (float10)*pfVar1);
      fStack_78 = (float)(fVar11 * (float10)(float)param_1[5] + (float10)(float)param_1[2]);
      fVar11 = fVar11 * (float10)(float)param_1[6];
    }
    iVar5 = *param_1;
    fStack_74 = (float)(fVar11 + (float10)(float)param_1[3]);
    if ((*(uint *)(iVar5 + 0x1a0) & 0x1000) != 0) {
      iVar5 = DAT_5015d1ec;
    }
    (*DAT_5015cac4)(pfVar1,0,0,&fStack_7c,iVar5,0x6000081,local_70,&LAB_50100380);
    uVar3 = FUN_50065880(param_1[8]);
    if ((uVar3 & 0x1080000) == 0) {
      fVar11 = FUN_50065970(param_1[8]);
      fVar12 = FUN_50065970(param_1[8]);
      if (fVar12 < (float10)(float)(fVar11 * (float10)local_70[1] + fVar11 * (float10)local_70[1]))
      {
        FUN_50065970(param_1[8]);
      }
    }
  }
  if (((fStack_40 != 0.0) && (*(uint **)((int)fStack_40 + 0x1b4) != (uint *)0x0)) &&
     (puVar4 = FUN_50107030(*(uint **)((int)fStack_40 + 0x1b4),&DAT_50142f2c), puVar4 != (uint *)0x0
     )) {
    bVar2 = true;
  }
  iVar5 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar5 != 0) {
    (*DAT_5015ca54)(uStack_48,0x19);
    uVar6 = FUN_50065910(param_1[8]);
    uVar7 = FUN_50065940(param_1[8]);
    if (fStack_40 == DAT_5015cca0) {
      iVar5 = FUN_500659b0(param_1[8]);
      if (iVar5 == 0) {
        FUN_50084d00(pfVar1,(float *)(param_1 + 4),local_70 + 2,*param_1,uVar7,param_1[7],uVar6);
      }
      else {
        FUN_50084db0(pfVar1,(float *)(param_1 + 4),local_70 + 2,*param_1,uVar7,param_1[7],uVar6);
      }
    }
    else {
      FUN_50084c80(pfVar1,param_1 + 4,local_70 + 2,*param_1,uVar7,param_1[7],uVar6);
    }
    goto LAB_50101561;
  }
  if (bVar2) {
    uVar6 = (*DAT_5015cb24)();
    FUN_500658f0(param_1[8]);
    lVar13 = __ftol();
    uVar7 = (undefined4)lVar13;
    pfVar9 = local_70;
    pfVar10 = afStack_38;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (((*(int *)((int)fStack_40 + 0x74) == 0) && (*(int *)((int)fStack_40 + 0x450) == 0)) &&
       (iVar5 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar5 == 0)) {
      uVar14 = 0;
LAB_501014b7:
      FUN_500840d0((int)afStack_38,(float *)(param_1 + 4),uVar7,uVar14,uVar6);
    }
  }
  else {
    uVar6 = (*DAT_5015cb24)(0,1);
    FUN_500658f0(param_1[8]);
    lVar13 = __ftol();
    uVar7 = (undefined4)lVar13;
    pfVar9 = local_70;
    pfVar10 = afStack_38;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar10 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 1;
    }
    if (((*(int *)((int)fStack_40 + 0x74) == 0) && (*(int *)((int)fStack_40 + 0x450) == 0)) &&
       (iVar5 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar5 == 0)) {
      uVar14 = 1;
      goto LAB_501014b7;
    }
  }
  FUN_50100e40(param_1,(int)local_70);
LAB_50101561:
  if ((DAT_5015c794 == 0) &&
     ((((DAT_5015d8d5 != '\0' ||
        (bVar2 = FUN_500887e0(*param_1,(int)fStack_40), CONCAT31(extraout_var,bVar2) == 0)) ||
       (*(int *)(*param_1 + 0x74) != 0)) ||
      ((iVar5 = (*DAT_5015cb24)(0,10), iVar5 < 6 &&
       (iVar5 = FUN_500c4530(pfVar1,(float *)(DAT_5015d1ec + 4),local_70 + 2,12.0), iVar5 != 0))))))
  {
    lVar13 = __ftol();
    iVar5 = *param_1;
    fVar11 = FUN_500658e0(param_1[8]);
    fVar16 = (float)fVar11;
    fVar11 = FUN_500658d0(param_1[8]);
    fVar15 = (float)fVar11;
    uVar3 = FUN_500658c0(param_1[8]);
    uVar8 = FUN_50065880(param_1[8]);
    FUN_5008bb10(fStack_40,iVar5,(float)iVar5,(float *)(param_1 + 4),local_70 + 2,pfVar1,(int)lVar13
                 ,(int)lVar13,uVar8 | 0x200,uVar3,fVar15,fVar16);
  }
  FUN_501010c0(param_1,(int)local_70);
  param_1[0xb] = (int)local_70[2];
  param_1[0xc] = iStack_64;
  param_1[0xd] = iStack_60;
  DAT_5018bf80 = 0;
  return;
}

