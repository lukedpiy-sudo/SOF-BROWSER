// rea decompile_all
// name: FUN_5009a6b0
// address: 0x5009a6b0
// body: available
// range: 0x5009a6b0-0x5009ad5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009a6b0(int param_1)

{
  short sVar1;
  short sVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int local_b8;
  float *pfStack_b4;
  short sStack_b0;
  float *pfStack_ac;
  short sStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined4 *local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 auStack_50 [3];
  undefined4 auStack_44 [3];
  undefined1 auStack_38 [48];
  int iStack_8;
  
  pfVar3 = (float *)FUN_500b4a40(param_1,1);
  FUN_500b5750(&local_b8);
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  if ((pfVar3 != (float *)0x0) && (iVar4 = (**(code **)((int)*pfVar3 + 0x88))(), iVar4 != 0)) {
    piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x88))();
    local_78 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))(s_DUMMY01_50146508);
  }
  sVar1 = (short)local_78;
  if (sVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x324) == 0) {
    return;
  }
  iVar4 = (**(code **)((int)*pfVar3 + 0x8c))();
  if (iVar4 == 0) {
    return;
  }
  piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x8c))();
  iVar4 = (**(code **)(*piVar5 + 0x88))();
  if (iVar4 == 0) {
    return;
  }
  local_b8 = param_1;
  if ((*(byte *)(param_1 + 0x1b8) & 0x10) == 0) {
    pfStack_b4 = (float *)FUN_500b4a40(param_1,1);
    if (pfStack_b4 == (float *)0x0) {
      return;
    }
    iVar4 = (**(code **)((int)*pfStack_b4 + 0x88))();
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(code **)((int)*pfStack_b4 + 0x88))();
    sStack_b0 = (**(code **)(*piVar5 + 0x1c))(s_DUMMY01_50146508);
    pfStack_ac = *(float **)(param_1 + 0x164);
    iVar4 = *(int *)(param_1 + 0x324);
    uStack_a4 = *(undefined4 *)(iVar4 + 4);
    uStack_a0 = *(undefined4 *)(iVar4 + 8);
    uStack_8c = *(undefined4 *)(param_1 + 0x294);
    uStack_9c = *(undefined4 *)(iVar4 + 0xc);
    uStack_88 = *(undefined4 *)(param_1 + 0x21c);
    fStack_90 = -*(float *)(param_1 + 0x294);
    fStack_98 = 0.0;
    uStack_94 = 0;
    uStack_7c = 0;
    uStack_7b = 1;
    uStack_7a = 1;
    fVar6 = FUN_500b5790(&local_b8);
    pfVar3 = (float *)FUN_500b4a40(param_1,2);
    if (pfVar3 == (float *)0x0) {
      return;
    }
    if (fVar6 != 1.4013e-45) goto LAB_5009a9ba;
    iVar4 = (**(code **)((int)*pfVar3 + 0x88))();
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x88))();
    local_78 = (undefined4 *)(**(code **)(*piVar5 + 0x1c))(s_DUMMY01_50146508);
    pfStack_ac = pfStack_b4;
    sStack_a8 = sStack_b0;
    sStack_b0 = (short)local_78;
    pfStack_b4 = pfVar3;
  }
  else {
    pfStack_b4 = *(float **)(param_1 + 0x164);
    pfStack_ac = (float *)0x0;
    iVar4 = *(int *)(param_1 + 0x324);
    uStack_a4 = *(undefined4 *)(iVar4 + 4);
    uStack_a0 = *(undefined4 *)(iVar4 + 8);
    uStack_8c = *(undefined4 *)(param_1 + 0x294);
    uStack_9c = *(undefined4 *)(iVar4 + 0xc);
    uStack_88 = *(undefined4 *)(param_1 + 0x21c);
    fStack_90 = -*(float *)(param_1 + 0x294);
    fStack_98 = 0.0;
    uStack_94 = 0;
    uStack_7c = 0;
    uStack_7b = 1;
    uStack_7a = 1;
    fVar6 = (float)FUN_500b5f00(&local_b8);
    if (fVar6 != 1.4013e-45) goto LAB_5009a9ba;
    pfStack_b4 = pfVar3;
    sStack_b0 = sVar1;
    pfStack_ac = (float *)(**(code **)((int)*pfVar3 + 0x8c))();
    piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x8c))();
    piVar5 = (int *)(**(code **)(*piVar5 + 0x88))();
    sStack_a8 = (**(code **)(*piVar5 + 0x1c))(s_DUMMY02_50146500);
  }
  iVar4 = *(int *)(param_1 + 0x324);
  uStack_a4 = *(undefined4 *)(iVar4 + 4);
  uStack_a0 = *(undefined4 *)(iVar4 + 8);
  uStack_94 = *(undefined4 *)(param_1 + 0x220);
  uStack_9c = *(undefined4 *)(iVar4 + 0xc);
  uStack_88 = *(undefined4 *)(param_1 + 0x21c);
  fStack_98 = -*(float *)(param_1 + 0x224);
  uStack_7a = 1;
  uStack_7b = 0;
  uStack_7c = 1;
  uStack_8c = 0;
  fStack_90 = 0.0;
  fVar6 = FUN_500b5790(&local_b8);
LAB_5009a9ba:
  iVar4 = *(int *)(param_1 + 0x324);
  pfVar9 = (float *)(param_1 + 4);
  fStack_74 = *(float *)(iVar4 + 4) - *pfVar9;
  fStack_70 = *(float *)(iVar4 + 8) - *(float *)(param_1 + 8);
  fStack_6c = *(float *)(iVar4 + 0xc) - *(float *)(param_1 + 0xc);
  FUN_500c3bb0(pfVar9,(float *)(param_1 + 0x10),pfVar3,local_78,s_DUMMY01_50146508,(undefined4 *)0x0
               ,(undefined4 *)0x0);
  FUN_500fe050(&fStack_74);
  if (fStack_68 * fStack_74 + fStack_60 * fStack_6c + fStack_64 * fStack_70 <= 0.9) {
    if (fVar6 == 2.8026e-45) {
      uVar7 = (*DAT_5015c9f4)(s_Enemy_MGun_trnslow_wav_5014aeb0);
      *(undefined4 *)(param_1 + 0x3c) = uVar7;
      *(undefined4 *)(param_1 + 0x40) = 0xf8;
    }
  }
  else {
    iVar4 = (*DAT_5015c9f4)(s_Enemy_MGun_trnslow_wav_5014aeb0);
    if (*(int *)(param_1 + 0x3c) == iVar4) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      uVar7 = (*DAT_5015c9f4)(s_Enemy_MGun_trnstop_wav_5014ae98,0x3f19999a,0x3f800000,0,0);
      (*DAT_5015ca48)(param_1,2,uVar7);
    }
    if ((((*(void **)(param_1 + 0x210) != (void *)0x0) &&
         (iVar4 = FUN_500b6a30(*(void **)(param_1 + 0x210),2), iVar4 != 0)) &&
        (*(float *)(iVar4 + 0x1c) < DAT_5015ccdc)) && (*(float *)(iVar4 + 0x10) < DAT_5015ccdc)) {
      if (3.0 <= *(float *)(iVar4 + 0x18)) {
        *(undefined4 *)(iVar4 + 0x18) = 0;
        if (*(float *)(iVar4 + 0x14) < 5.0) {
          *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) + 1.0;
          *(float *)(iVar4 + 0x10) = DAT_5015ccdc + 0.5;
          return;
        }
        *(undefined4 *)(iVar4 + 0x14) = 0;
        *(float *)(iVar4 + 0x10) = DAT_5015ccdc;
        *(float *)(iVar4 + 0x1c) = DAT_5015ccdc + 3.0;
        return;
      }
      *(float *)(iVar4 + 0x18) = *(float *)(iVar4 + 0x18) + 1.0;
      iVar4 = *(int *)(param_1 + 0x324);
      fStack_54 = *(float *)(iVar4 + 0xc) + 20.0;
      uStack_58 = *(undefined4 *)(iVar4 + 8);
      uStack_5c = *(undefined4 *)(iVar4 + 4);
      (*DAT_5015cac0)(pfVar9,0,0,&uStack_5c,param_1,0x60000b9,auStack_38);
      if ((iStack_8 == 0) || (*(int *)(iStack_8 + 0x74) == 0)) {
        (*DAT_5015cac0)(pfVar9,0,0,*(int *)(param_1 + 0x324) + 4,param_1,0x60000b9,auStack_38);
      }
      if ((iStack_8 != 0) && (*(int *)(iStack_8 + 0x74) != 0)) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        FUN_500c3bb0(pfVar9,(float *)(param_1 + 0x10),pfVar3,(undefined4 *)0x0,s__LEFTFLASH_5014af1c
                     ,auStack_50,(undefined4 *)0x0);
        FUN_500c3bb0(pfVar9,(float *)(param_1 + 0x10),pfVar3,(undefined4 *)0x0,
                     s__FLASHRIGHT_5014af10,auStack_44,(undefined4 *)0x0);
        FUN_500659c0(&DAT_50159b18,0x15,param_1,auStack_50,&fStack_68,(float *)0x0,(undefined4 *)0x0
                    );
        FUN_500659c0(&DAT_50159b18,0x15,param_1,auStack_44,&fStack_68,(float *)0x0,(undefined4 *)0x0
                    );
        piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x88))();
        sVar1 = (**(code **)(*piVar5 + 0x1c))(s__LEFTFLASH_5014af1c);
        piVar5 = (int *)(**(code **)((int)*pfVar3 + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__FLASHRIGHT_5014af10);
        if (sVar1 != 0) {
          iVar11 = 0;
          iVar10 = 1;
          uVar7 = 1;
          iVar4 = param_1;
          pfVar9 = pfVar3;
          iVar8 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
          FUN_50085470(&DAT_5015c518,iVar8,iVar4,(int *)pfVar9,sVar1,uVar7,iVar10,iVar11);
        }
        if (sVar2 != 0) {
          iVar11 = 0;
          iVar10 = 1;
          uVar7 = 1;
          iVar4 = param_1;
          iVar8 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
          FUN_50085470(&DAT_5015c518,iVar8,iVar4,(int *)pfVar3,sVar2,uVar7,iVar10,iVar11);
        }
        uVar7 = (*DAT_5015c9f4)(s_Weapons_Autoshot_fire_wav_5014aedc,0x3f666666,0x3f800000,0,0);
        (*DAT_5015ca48)(param_1,2,uVar7);
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      return;
    }
  }
  return;
}

