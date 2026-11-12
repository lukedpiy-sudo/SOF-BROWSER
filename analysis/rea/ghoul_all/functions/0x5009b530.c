// rea decompile_all
// name: FUN_5009b530
// address: 0x5009b530
// body: available
// range: 0x5009b530-0x5009bba8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __cdecl FUN_5009b530(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  short sVar8;
  float *pfVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 uVar15;
  float fVar16;
  undefined4 *puStack_a0;
  int iStack_9c;
  int iStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  int *local_84;
  float *pfStack_80;
  int *piStack_7c;
  float fStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  int iStack_20;
  
  FUN_500b5750(&local_84);
  iVar12 = 0;
  pfVar9 = (float *)FUN_500b4a40((int)param_1,1);
  param_1[0xad] = (int)(DAT_5015ccdc + 0.1);
  if (pfVar9 != (float *)0x0) {
    iVar10 = (**(code **)((int)*pfVar9 + 0x88))();
    if (iVar10 != 0) {
      piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
      piStack_88 = (int *)(**(code **)(*piVar11 + 0x1c))();
    }
  }
  if ((void *)param_1[0x84] != (void *)0x0) {
    iVar12 = FUN_500b6a30((void *)param_1[0x84],2);
  }
  if (((short)piStack_88 != 0) && (param_1[0xc9] != 0)) {
    iVar10 = (**(code **)((int)*pfVar9 + 0x8c))();
    if (iVar10 != 0) {
      piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x8c))();
      iVar10 = (**(code **)(*piVar11 + 0x88))();
      if (iVar10 != 0) {
        iVar12 = param_1[0xc9];
        param_1[0x90] = *(int *)(iVar12 + 4);
        param_1[0x91] = *(int *)(iVar12 + 8);
        param_1[0x92] = *(int *)(iVar12 + 0xc);
        local_84 = param_1;
        param_1[0x92] = (int)((float)param_1[0x92] + 30.0);
        pfStack_80 = pfVar9;
        piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
        uVar7 = (**(code **)(*piVar11 + 0x1c))();
        piStack_7c = (int *)param_1[0x59];
        pfStack_80 = (float *)CONCAT22(pfStack_80._2_2_,uVar7);
        piVar11 = (int *)(**(code **)(*piStack_7c + 0x88))();
        uVar15 = 0x50;
        uVar7 = (**(code **)(*piVar11 + 0x1c))();
        iStack_74 = param_1[0x91];
        iStack_70 = param_1[0x92];
        piStack_7c = (int *)CONCAT22(piStack_7c._2_2_,uVar7);
        fStack_78 = (float)param_1[0x90];
        uStack_6c = 0xbea0d97c;
        uStack_68 = 0x3f490fdb;
        uStack_64 = 0xc57a0000;
        uStack_60 = 0x457a0000;
        fStack_5c = 0.04;
        uStack_50 = 0;
        uStack_4f = 1;
        uStack_4e = 1;
        FUN_500b5790((int *)&piStack_8c);
        uStack_50 = 1;
        uStack_4f = 0;
        piStack_88 = (int *)FUN_500b4a40((int)param_1,2);
        piVar11 = (int *)(**(code **)(*piStack_88 + 0x88))();
        uVar7 = (**(code **)(*piVar11 + 0x1c))(s_DUMMY02_50146500);
        piStack_88 = (int *)CONCAT22(piStack_88._2_2_,uVar7);
        FUN_500b5790((int *)&piStack_90);
        piStack_8c = (int *)FUN_500b4a40((int)param_1,4);
        piVar11 = (int *)(**(code **)(*piStack_8c + 0x88))();
        uVar7 = (**(code **)(*piVar11 + 0x1c))(s_DUMMY03_50146550);
        piStack_8c = (int *)CONCAT22(piStack_8c._2_2_,uVar7);
        FUN_500b5790((int *)&piStack_94);
        fStack_78 = fStack_78 - 20.0;
        piStack_94 = param_1;
        piStack_90 = (int *)FUN_500b4a40((int)param_1,3);
        piVar11 = (int *)(**(code **)(*piStack_90 + 0x88))();
        uVar7 = (**(code **)(*piVar11 + 0x1c))(s_DUMMY02_50146500);
        piStack_90 = (int *)CONCAT22(piStack_90._2_2_,uVar7);
        FUN_500b5790(&iStack_98);
        piStack_94 = (int *)FUN_500b4a40((int)param_1,5);
        piVar11 = (int *)(**(code **)(*piStack_94 + 0x88))();
        uVar7 = (**(code **)(*piVar11 + 0x1c))(s_DUMMY03_50146550);
        piStack_94 = (int *)CONCAT22(piStack_94._2_2_,uVar7);
        FUN_500b5790(&iStack_9c);
        iVar12 = param_1[0xc9];
        pfVar1 = (float *)(param_1 + 1);
        pfVar2 = (float *)(param_1 + 4);
        fVar16 = *(float *)(iVar12 + 4) - *pfVar1;
        fVar3 = *(float *)(iVar12 + 8);
        fVar4 = (float)param_1[2];
        fVar5 = *(float *)(iVar12 + 0xc);
        fVar6 = (float)param_1[3];
        FUN_500c3bb0(pfVar1,pfVar2,pfVar9,puStack_a0,s_DUMMY01_50146508,(undefined4 *)0x0,
                     (undefined4 *)0x0);
        FUN_500fe050((float *)&stack0xffffff48);
        if (0.95 < fStack_5c * fVar16 + fStack_58 * (fVar3 - fVar4) + fStack_54 * (fVar5 - fVar6)) {
          (*DAT_5015cac0)(pfVar1,0,0,param_1[0xc9] + 4,param_1,0x60000b9,&uStack_50);
          if (iStack_20 == 0) {
            param_1[0xad] = (int)(DAT_5015ccdc + 0.1);
          }
          else if (*(int *)(iStack_20 + 0x74) != 0) {
            param_1[0xf] = 0;
            pfVar9 = (float *)FUN_500b4a40((int)param_1,2);
            if (pfVar9 != (float *)0x0) {
              FUN_500c3bb0(pfVar1,pfVar2,pfVar9,(undefined4 *)0x0,s__FLASHTOPRIGHT_5014af5c,
                           (undefined4 *)&stack0xffffff54,(undefined4 *)0x0);
              FUN_500659c0(&DAT_50159b18,0x15,(int)param_1,(undefined4 *)&stack0xffffff54,
                           (undefined4 *)&stack0xffffff48,pfVar9,(undefined4 *)0x0);
              piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
              sVar8 = (**(code **)(*piVar11 + 0x1c))(s__FLASHTOPRIGHT_5014af5c);
              if (sVar8 != 0) {
                iVar14 = 0;
                iVar10 = 1;
                uVar13 = 1;
                piVar11 = param_1;
                iVar12 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
                FUN_50085470(&DAT_5015c518,iVar12,(int)piVar11,(int *)pfVar9,sVar8,uVar13,iVar10,
                             iVar14);
              }
            }
            pfVar9 = (float *)FUN_500b4a40((int)param_1,3);
            if (pfVar9 != (float *)0x0) {
              FUN_500c3bb0(pfVar1,pfVar2,pfVar9,(undefined4 *)0x0,s__FLASHTOPRIGHT_5014af5c,
                           (undefined4 *)&stack0xffffff54,(undefined4 *)0x0);
              FUN_500659c0(&DAT_50159b18,0x15,(int)param_1,(undefined4 *)&stack0xffffff54,
                           (undefined4 *)&stack0xffffff48,pfVar9,(undefined4 *)0x0);
              piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
              sVar8 = (**(code **)(*piVar11 + 0x1c))(s__FLASHTOPRIGHT_5014af5c);
              if (sVar8 != 0) {
                iVar14 = 0;
                iVar10 = 1;
                uVar13 = 1;
                piVar11 = param_1;
                iVar12 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
                FUN_50085470(&DAT_5015c518,iVar12,(int)piVar11,(int *)pfVar9,sVar8,uVar13,iVar10,
                             iVar14);
              }
            }
            pfVar9 = (float *)FUN_500b4a40((int)param_1,4);
            if (pfVar9 != (float *)0x0) {
              FUN_500c3bb0(pfVar1,pfVar2,pfVar9,(undefined4 *)0x0,s__FLASHTOPLEFT_5014af4c,
                           (undefined4 *)&stack0xffffff54,(undefined4 *)0x0);
              FUN_500659c0(&DAT_50159b18,0x15,(int)param_1,(undefined4 *)&stack0xffffff54,
                           (undefined4 *)&stack0xffffff48,pfVar9,(undefined4 *)0x0);
              piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
              sVar8 = (**(code **)(*piVar11 + 0x1c))(s__FLASHTOPLEFT_5014af4c);
              if (sVar8 != 0) {
                iVar14 = 0;
                iVar10 = 1;
                uVar13 = 1;
                piVar11 = param_1;
                iVar12 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
                FUN_50085470(&DAT_5015c518,iVar12,(int)piVar11,(int *)pfVar9,sVar8,uVar13,iVar10,
                             iVar14);
              }
            }
            pfVar9 = (float *)FUN_500b4a40((int)param_1,5);
            if (pfVar9 != (float *)0x0) {
              FUN_500c3bb0(pfVar1,pfVar2,pfVar9,(undefined4 *)0x0,s__FLASHTOPLEFT_5014af4c,
                           (undefined4 *)&stack0xffffff54,(undefined4 *)0x0);
              FUN_500659c0(&DAT_50159b18,0x15,(int)param_1,(undefined4 *)&stack0xffffff54,&fStack_5c
                           ,pfVar9,(undefined4 *)0x0);
              piVar11 = (int *)(**(code **)((int)*pfVar9 + 0x88))();
              sVar8 = (**(code **)(*piVar11 + 0x1c))(s__FLASHTOPLEFT_5014af4c);
              if (sVar8 != 0) {
                iVar14 = 0;
                iVar10 = 1;
                uVar13 = 1;
                iVar12 = (*DAT_5015c9f8)(s_weapons_othermz_autogun_5014aef8);
                FUN_50085470(&DAT_5015c518,iVar12,(int)param_1,(int *)pfVar9,sVar8,uVar13,iVar10,
                             iVar14);
              }
            }
            return 1;
          }
        }
        return uVar15;
      }
    }
  }
  if (iVar12 != 0) {
    *(undefined4 *)(iVar12 + 0x14) = 0;
  }
  return 0;
}

