// rea decompile_all
// name: FUN_5003b550
// address: 0x5003b550
// body: available
// range: 0x5003b550-0x5003c71e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003b550(void *this,int *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  float *pfVar8;
  int unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  float *in_stack_ffffff68;
  char *pcVar11;
  char *pcStack_68;
  char *pcStack_64;
  char *pcStack_60;
  float fVar12;
  float fVar13;
  float fStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float *pfStack_c;
  int *piStack_8;
  int iStack_4;
  
  pcStack_60 = (char *)0x5003b567;
  (**(code **)(*param_1 + 0xc4))();
  fStack_4c = (float)(uint)(*(int *)((int)this + 0x84) != 7);
  if (*(int *)((int)this + 0x84) == 1) {
    pcStack_60 = (char *)0x5003b58f;
    iVar4 = (**(code **)(*param_1 + 0x220))();
    if (*(char *)(iVar4 + 0x1c) < '\0') {
      fStack_4c = 0.0;
    }
  }
  pcStack_60 = (char *)0x5003b5a4;
  fVar9 = (float10)(**(code **)(*param_1 + 0x16c))();
  fVar10 = (float10)DAT_5015ccdc;
  pcStack_60 = (char *)0x5003b5b8;
  iVar4 = FUN_500b2350(0x5015d9c0);
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_46 = 0;
  uStack_45 = 0;
  fStack_44 = 1.75;
  if (iVar4 != param_2) {
    fStack_44 = 1.875;
  }
  pcStack_60 = (char *)0x5003b5e2;
  iVar4 = (**(code **)(*param_1 + 0x220))();
  if ((float)(fVar10 - fVar9) <
      *(float *)(iVar4 + 0x10) *
      (float)(double)CONCAT44(fStack_44,
                              CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48))))
     ) {
    fStack_4c = 0.0;
  }
  param_1[0x75] = param_1[0x75] & 0xfffffffe;
  if (*(int *)((int)this + 0x84) == 6) {
    iVar4 = *(int *)this;
    pcStack_60 = (char *)0x0;
    pcStack_64 = (char *)0x1;
    pcStack_68 = (char *)0x0;
    iVar5 = (*DAT_5015cb24)();
    pcStack_64 = (char *)((-(uint)(iVar5 != 0) & 0xfffffffe) + 1);
    pcStack_68 = (char *)0x0;
    iVar4 = (**(code **)(iVar4 + 0x20))();
    if (iVar4 != 0) {
      pcStack_60 = (char *)0x0;
      pcStack_64 = (char *)0x0;
      pcStack_68 = (char *)0x0;
      (**(code **)(*(int *)this + 0x28))();
      return;
    }
    *(undefined4 *)((int)this + 0x84) = 5;
  }
  if (*(int *)((int)this + 0x84) == 5) {
    pcStack_60 = (char *)0x5003b68f;
    piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
    if (piVar6 != (int *)0x0) {
      pcStack_60 = (char *)0x0;
      pcStack_64 = s_cch_xcchcower_mid_a_a_50138f80;
      pcStack_68 = (char *)0x1;
      iVar4 = (**(code **)(*piVar6 + 0x1c))();
      if (iVar4 != 0) {
        pcStack_60 = (char *)0x0;
        pcStack_64 = (char *)0x0;
        pcStack_68 = (char *)0x0;
        (**(code **)(*(int *)this + 0x28))();
        return;
      }
    }
    *(undefined4 *)((int)this + 0x84) = 4;
  }
  pcStack_60 = (char *)0x5003b6ea;
  piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
  pcStack_60 = s_std_raimstraf_rt_mrs_2_50137e50;
  pcStack_64 = (char *)param_2;
  pcStack_68 = (char *)0x5003b6f7;
  iVar4 = (**(code **)(*piVar6 + 0x4c))();
  if (iVar4 == 0) {
    pcStack_68 = (char *)0x5003b705;
    piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
    pcStack_68 = s_std_raimstraf_rt_l_2_5013b290;
    iVar4 = (**(code **)(*piVar6 + 0x4c))();
    if (iVar4 == 0) {
      pcStack_68 = (char *)0x5003b720;
      piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
      pcStack_68 = s_std_raimstraf_rt_p_cbn_50137da0;
      (**(code **)(*piVar6 + 0x4c))();
    }
  }
  pcStack_68 = (char *)0x5003b74b;
  piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
  pcStack_68 = s_std_rbackaim_n_mrs_2_50139ad8;
  iVar4 = (**(code **)(*piVar6 + 0x4c))();
  if (iVar4 == 0) {
    piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar4 = (**(code **)(*piVar6 + 0x4c))();
    if (iVar4 != 0) goto LAB_5003b792;
    piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar4 = (**(code **)(*piVar6 + 0x4c))();
    if (iVar4 != 0) goto LAB_5003b792;
  }
  else {
LAB_5003b792:
    iStack_4 = 1;
  }
  if ((*(char *)(param_2 + 0x1b8) < '\0') ||
     ((iVar4 = (**(code **)(*param_1 + 0x10c))(), iVar4 != 0 &&
      (*(int *)((int)this + 0x60) == DAT_5015d1ec)))) {
    FUN_500adb60(param_1,(byte *)s_Non_ideal_stuck_50142338);
    piStack_8 = *(int **)this;
    uVar7 = (**(code **)((int)piStack_8 + 0x14))(param_1,param_2,param_3,param_3,0);
    (**(code **)((int)fStack_20 + 0x28))(param_1,param_2,uVar7);
    return;
  }
  if ((*(int *)((int)this + 0x84) == 2) || (*(int *)((int)this + 0x84) == 8)) {
    if (0 < DAT_50159120) {
      iVar4 = (**(code **)(*param_1 + 0x164))();
      FUN_5004d530(&DAT_50159120,(float *)(param_2 + 4),param_3,(float *)(param_1 + 0x49),param_1,
                   param_2,iVar4);
      if (param_1[0x53] == 0) {
        FUN_500adb60(param_1,(byte *)s_Via__d_>_d____d_50142428);
        fVar1 = (float)param_1[0x4c] - *(float *)(param_2 + 4);
        fVar12 = (float)param_1[0x4d] - *(float *)(param_2 + 8);
        fVar10 = (float10)FUN_500fe050((float *)&stack0xffffffa8);
        fStack_4c = fVar1 * 18.0 + *(float *)(param_2 + 4);
        fVar2 = fVar12 * 18.0 + *(float *)(param_2 + 8);
        uStack_48 = SUB41(fVar2,0);
        uStack_47 = (undefined1)((uint)fVar2 >> 8);
        uStack_46 = (undefined1)((uint)fVar2 >> 0x10);
        uStack_45 = (undefined1)((uint)fVar2 >> 0x18);
        fStack_44 = *(float *)(param_2 + 0xc) + 0.0;
        if ((float10)10.0 <= fVar10) {
          if ((*(int *)((int)this + 0x84) == 8) ||
             (iVar4 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar4 + 0x1c) & 8) != 0)) {
LAB_5003b8fd:
            bVar3 = true;
          }
          else {
            iVar4 = (**(code **)(*param_1 + 0x184))();
            if (iVar4 != 0) {
              iVar4 = (**(code **)(*param_1 + 0x184))();
              iVar4 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),
                                   *(undefined4 *)(iVar4 + 0x4c));
              if (iVar4 != 0) goto LAB_5003b8fd;
            }
            bVar3 = false;
          }
        }
        else {
          bVar3 = false;
        }
        fStack_4c = fVar1 * 40.0 + *(float *)(param_2 + 4);
        fVar1 = fVar12 * 40.0 + *(float *)(param_2 + 8);
        uStack_48 = SUB41(fVar1,0);
        uStack_47 = (undefined1)((uint)fVar1 >> 8);
        uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
        uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
        fStack_44 = *(float *)(param_2 + 0xc) + 0.0;
        if (bVar3) {
          fVar12 = fStack_4c - *(float *)(param_2 + 4);
          fVar1 = fVar1 - *(float *)(param_2 + 8);
          FUN_500fe050((float *)&stack0xffffffa8);
          FUN_5003b3f0();
          (**(code **)(*param_1 + 200))();
          fStack_28 = *param_3 - *(float *)(param_2 + 4);
          fStack_20 = 0.0;
          fStack_24 = param_3[1] - *(float *)(param_2 + 8);
          FUN_500fe050(&fStack_28);
          fVar2 = fStack_20 * 0.0 + fStack_28 * fVar12 + fStack_24 * fVar1;
          fVar13 = fVar1;
          if (-0.717 <= fVar2) {
            if (fVar2 <= 0.717) {
              if (piStack_8 == (int *)0x0) {
                fStack_4c = fVar12 * 12.0 + *(float *)(param_2 + 4);
                fVar2 = fVar1 * 12.0 + *(float *)(param_2 + 8);
                uStack_48 = SUB41(fVar2,0);
                uStack_47 = (undefined1)((uint)fVar2 >> 8);
                uStack_46 = (undefined1)((uint)fVar2 >> 0x10);
                uStack_45 = (undefined1)((uint)fVar2 >> 0x18);
                fStack_44 = *(float *)(param_2 + 0xc) + 0.0;
              }
              fVar13 = -fVar12;
              if (fStack_20 * 0.0 + fStack_28 * fVar1 + fStack_24 * fVar13 <= 0.0) {
                fStack_34 = fVar1 * -2440.0;
                fStack_2c = *(float *)(param_2 + 0xc);
                fStack_30 = fVar13 * -2440.0;
              }
              else {
                fStack_34 = fVar1 * 2440.0;
                fStack_2c = *(float *)(param_2 + 0xc);
                fStack_30 = fVar13 * 2440.0;
              }
              fStack_34 = fStack_34 + *(float *)(param_2 + 4);
              fStack_30 = fStack_30 + *(float *)(param_2 + 8);
              fVar12 = fVar1;
            }
            else {
              fStack_34 = fVar12 * 2440.0 + *(float *)(param_2 + 4);
              fStack_30 = fVar1 * 2440.0 + *(float *)(param_2 + 8);
              fStack_2c = *(float *)(param_2 + 0xc) + 0.0;
            }
          }
          else {
            if (iStack_4 == 0) {
              fStack_4c = fVar12 * 4.0 + *(float *)(param_2 + 4);
              fVar2 = fVar1 * 4.0 + *(float *)(param_2 + 8);
              uStack_48 = SUB41(fVar2,0);
              uStack_47 = (undefined1)((uint)fVar2 >> 8);
              uStack_46 = (undefined1)((uint)fVar2 >> 0x10);
              uStack_45 = (undefined1)((uint)fVar2 >> 0x18);
              fStack_44 = *(float *)(param_2 + 0xc) + 0.0;
            }
            fStack_34 = fVar12 * -2440.0 + *(float *)(param_2 + 4);
            fStack_30 = fVar1 * -2440.0 + *(float *)(param_2 + 8);
            fStack_2c = *(float *)(param_2 + 0xc) + -0.0;
          }
          if (*(float *)(DAT_5015ccc8 + 0x18) != 0.0) {
            piStack_8 = (int *)0xfafafafa;
            FUN_50084460(param_1 + 0x4c,param_2 + 4,0xfafafafa,1,0);
            FUN_50084b00(param_1 + 0x4c,8);
            piStack_8 = (int *)0xfa000000;
            FUN_50084460(&fStack_4c,param_2 + 4,0xfa000000,1,0);
          }
          fStack_40 = *param_3 - *(float *)(param_2 + 4);
          fStack_3c = param_3[1] - *(float *)(param_2 + 8);
          fStack_38 = param_3[2] - *(float *)(param_2 + 0xc);
          FUN_500fe050(&fStack_40);
          fStack_40 = fStack_40 * 64.0 + *(float *)(param_2 + 4);
          fStack_3c = fStack_3c * 64.0 + *(float *)(param_2 + 8);
          fStack_38 = fStack_38 * 64.0 + *(float *)(param_2 + 0xc);
          if ((unaff_EDI != 0) &&
             (iVar4 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar4 + 0x1c) & 8) == 0)) {
            iVar4 = (**(code **)(*param_1 + 0x184))();
            iVar4 = FUN_50039820(this,param_1,param_2,&fStack_40,*(int **)((int)this + 0x60),
                                 *(undefined4 *)(iVar4 + 0x4c));
            if (iVar4 != 0) {
              *(float *)((int)this + 0x8c) = DAT_5015ccdc;
              FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Close_Backup_and_At_50142400);
              iVar4 = *(int *)this;
              uVar7 = (**(code **)(iVar4 + 0x1c))
                                (param_1,param_2,&fStack_4c,&fStack_34,
                                 *(undefined4 *)((int)this + 0x60),0);
              (**(code **)(iVar4 + 0x28))(param_1,param_2,uVar7);
              return;
            }
          }
          if (iStack_4 == 0) {
            fStack_4c = fVar12 * 4.0 + *(float *)(param_2 + 4);
            fVar1 = fVar13 * 4.0 + *(float *)(param_2 + 8);
            uStack_48 = SUB41(fVar1,0);
            uStack_47 = (undefined1)((uint)fVar1 >> 8);
            uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
            uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
            fStack_44 = *(float *)(param_2 + 0xc) + 0.0;
          }
          *(float *)((int)this + 0x8c) = DAT_5015ccdc;
          FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Close_Backup___Can__501423d4);
          pfVar8 = &fStack_34;
LAB_5003c6ea:
          iVar4 = *(int *)this;
          uVar7 = (**(code **)(iVar4 + 0x10))(param_1,param_2,&fStack_4c,pfVar8,0);
          (**(code **)(iVar4 + 0x28))(param_1,param_2,uVar7);
          return;
        }
      }
    }
    if (unaff_EDI != 0) {
      iVar4 = (**(code **)(*param_1 + 0x184))();
      iVar4 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),
                           *(undefined4 *)(iVar4 + 0x4c));
      if (iVar4 != 0) {
        piStack_8 = (int *)(**(code **)(*param_1 + 0x18c))();
        iVar4 = (**(code **)(*param_1 + 0x220))();
        if (((((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (piStack_8 != (int *)0x0)) &&
            ((*(float *)((int)this + 0x90) + 3.0 < *(float *)((int)this + 0x8c) ||
             (*(float *)((int)this + 0x8c) < *(float *)((int)this + 0x90))))) &&
           (iVar4 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),1),
           iVar4 != 0)) {
          FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Close_No_Backup__Cr_501423a4);
          *(float *)((int)this + 0x90) = DAT_5015ccdc;
          uVar7 = (**(code **)(*piStack_8 + 0x24))();
          (**(code **)(*(int *)this + 0x28))
                    (param_1,param_2,uVar7,param_2 + 4,param_3,*(undefined4 *)((int)this + 0x60),0,0
                     ,0,0);
          return;
        }
        FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Close_No_Backup__St_50142378);
        *(float *)((int)this + 0x8c) = DAT_5015ccdc;
        piStack_8 = *(int **)this;
        uVar7 = (**(code **)((int)piStack_8 + 0x1c))
                          (param_1,param_2,param_2 + 4,param_3,*(undefined4 *)((int)this + 0x60),0);
        (**(code **)((int)fStack_24 + 0x28))(param_1,param_2,uVar7);
        return;
      }
    }
    pcVar11 = s_NonIdeal_Too_Close_No_Backup__St_50142348;
    *(float *)((int)this + 0x8c) = DAT_5015ccdc;
LAB_5003c03a:
    FUN_500adb60(param_1,(byte *)pcVar11);
    piStack_8 = *(int **)this;
    uVar7 = (**(code **)((int)piStack_8 + 0x14))(param_1,param_2,param_3,param_3,0);
    (**(code **)((int)fStack_20 + 0x28))(param_1,param_2,uVar7);
    return;
  }
  if (DAT_50159120 < 1) {
    fStack_4c = *param_3 - *(float *)(param_2 + 4);
    fVar1 = param_3[1] - *(float *)(param_2 + 8);
    uStack_48 = SUB41(fVar1,0);
    uStack_47 = (undefined1)((uint)fVar1 >> 8);
    uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
    uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
    fStack_44 = param_3[2] - *(float *)(param_2 + 0xc);
    FUN_500fe050(&fStack_4c);
    pfVar8 = &fStack_4c;
    fStack_4c = fStack_4c * 10.0 + *(float *)(param_2 + 4);
    fVar1 = (float)CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48))) * 10.0 +
            *(float *)(param_2 + 8);
    uStack_48 = SUB41(fVar1,0);
    uStack_47 = (undefined1)((uint)fVar1 >> 8);
    uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
    uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
    fStack_44 = fStack_44 * 10.0 + *(float *)(param_2 + 0xc);
    goto LAB_5003c6ea;
  }
  pfStack_c = (float *)(param_2 + 4);
  iVar4 = (**(code **)(*param_1 + 0x164))();
  FUN_5004ca30(&DAT_50159120,pfStack_c,param_3,(float *)(param_1 + 0x49),param_1,param_2,1,iVar4);
  FUN_500adb60(param_1,(byte *)s_Via__d_>_d____d_50142428);
  if (param_1[0x53] != 0) {
    if ((unaff_EDI != 0) && (iVar4 = (**(code **)(*param_1 + 0x184))(), iVar4 != 0)) {
      iVar4 = (**(code **)(*param_1 + 0x184))();
      iVar4 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),
                           *(undefined4 *)(iVar4 + 0x4c));
      if (iVar4 != 0) {
        FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Far__Blocked__Attac_50142314);
        piStack_8 = *(int **)this;
        uVar7 = (**(code **)((int)piStack_8 + 0x1c))
                          (param_1,param_2,pfStack_c,param_3,*(undefined4 *)((int)this + 0x60),0);
        (**(code **)((int)fStack_24 + 0x28))(param_1,param_2,uVar7);
        return;
      }
    }
    pcVar11 = s_NonIdeal_Too_Far__Blocked__Stand_501422f0;
    goto LAB_5003c03a;
  }
  fStack_38 = 0.0;
  fStack_40 = (float)param_1[0x4c] - *pfStack_c;
  fStack_3c = (float)param_1[0x4d] - pfStack_c[1];
  FUN_500fe050(&fStack_40);
  fStack_20 = 0.0;
  fStack_4c = fStack_40 * 10.0 + *pfStack_c;
  fVar1 = fStack_3c * 10.0 + pfStack_c[1];
  uStack_48 = SUB41(fVar1,0);
  uStack_47 = (undefined1)((uint)fVar1 >> 8);
  uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
  uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
  fStack_44 = fStack_38 * 10.0 + pfStack_c[2];
  fStack_28 = *param_3 - *pfStack_c;
  fStack_24 = param_3[1] - pfStack_c[1];
  fVar10 = (float10)FUN_500fe050(&fStack_28);
  iVar4 = *(int *)((int)this + 0x84);
  if (((iVar4 == 4) || (piStack_8 == (int *)0x0)) || ((float10)448.0 < fVar10)) {
    fStack_34 = fStack_40 * 500.0;
    fStack_30 = fStack_3c * 500.0;
    fStack_2c = fStack_38 * 500.0;
LAB_5003c2c9:
    fStack_34 = fStack_34 + *pfStack_c;
    fStack_30 = fStack_30 + pfStack_c[1];
    fStack_2c = fStack_2c + pfStack_c[2];
  }
  else {
    fVar1 = fStack_28 * fStack_40 + fStack_24 * fStack_3c + fStack_20 * fStack_38;
    if (fVar1 < -0.717) {
      if (iStack_4 == 0) {
        fStack_4c = fStack_40 * 4.0 + *pfStack_c;
        fVar1 = fStack_3c * 4.0 + pfStack_c[1];
        uStack_48 = SUB41(fVar1,0);
        uStack_47 = (undefined1)((uint)fVar1 >> 8);
        uStack_46 = (undefined1)((uint)fVar1 >> 0x10);
        uStack_45 = (undefined1)((uint)fVar1 >> 0x18);
        fStack_44 = fStack_38 * 4.0 + pfStack_c[2];
      }
      fStack_34 = fStack_40 * -2440.0;
      fStack_30 = fStack_3c * -2440.0;
      fStack_2c = fStack_38 * -2440.0;
      goto LAB_5003c2c9;
    }
    if (0.717 < fVar1) {
      fStack_34 = fStack_40 * 2440.0;
      fStack_30 = fStack_3c * 2440.0;
      fStack_2c = fStack_38 * 2440.0;
      goto LAB_5003c2c9;
    }
    fVar1 = -fStack_40;
    fStack_38 = 0.0;
    fStack_40 = fStack_3c;
    fStack_2c = pfStack_c[2];
    if (fStack_20 * 0.0 + fStack_28 * fStack_3c + fStack_24 * fVar1 <= 0.0) {
      fStack_34 = fStack_3c * -2440.0 + *pfStack_c;
      fStack_30 = fVar1 * -2440.0 + pfStack_c[1];
      fStack_3c = fVar1;
    }
    else {
      fStack_34 = fStack_3c * 2440.0 + *pfStack_c;
      fStack_30 = fVar1 * 2440.0 + pfStack_c[1];
      fStack_3c = fVar1;
    }
  }
  fVar1 = pfStack_c[1] -
          (float)CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)));
  fStack_1c = *pfStack_c - *param_3;
  fStack_18 = pfStack_c[1] - param_3[1];
  if ((*pfStack_c - fStack_4c) * (*pfStack_c - fStack_4c) + fVar1 * fVar1 <= 2.0) {
    if (iVar4 == 4) {
      piVar6 = (int *)(**(code **)(*param_1 + 0x18c))();
      uStack_48 = SUB41(piVar6,0);
      uStack_47 = (undefined1)((uint)piVar6 >> 8);
      uStack_46 = (undefined1)((uint)piVar6 >> 0x10);
      uStack_45 = (undefined1)((uint)piVar6 >> 0x18);
      if ((piVar6 != (int *)0x0) &&
         ((iVar4 = (**(code **)(*piVar6 + 0x1c))
                             (param_2,param_3,param_3,2,1,s_cch_xcchcower_mid_a_a_50138f80,0),
          iVar4 != 0 ||
          (iVar4 = (**(code **)(*(int *)CONCAT13(uStack_45,
                                                 CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                               + 0x1c))
                             (param_2,param_3,param_3,2,1,s_cch_xcchcower2_mid_a_a_50138fd8,0),
          iVar4 != 0)))) {
        (**(code **)(*(int *)this + 0x28))
                  (param_1,param_2,iVar4,param_3,param_3,*(undefined4 *)((int)this + 0x60),0,0,0,0);
      }
      goto LAB_5003c5b9;
    }
  }
  else if (((2500.0 < fStack_1c * fStack_1c + fStack_18 * fStack_18) || (iVar4 == 4)) &&
          ((iVar4 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar4 + 0x1c) & 2) == 0 ||
           (*(int *)((int)this + 0x84) == 4)))) {
    *(float *)((int)this + 0x8c) = DAT_5015ccdc;
    FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Far__Move_501422d8);
    iVar4 = *(int *)this;
    in_stack_ffffff68 = &fStack_4c;
    uVar7 = (**(code **)(iVar4 + 0x10))(param_1,param_2,in_stack_ffffff68,&fStack_34,0);
    (**(code **)(iVar4 + 0x28))(param_1,param_2,uVar7);
    goto LAB_5003c5b9;
  }
  if ((unaff_EDI != 0) && (iVar4 = (**(code **)(*param_1 + 0x184))(), iVar4 != 0)) {
    iVar4 = (**(code **)(*param_1 + 0x184))();
    iVar4 = FUN_50039820(this,param_1,param_2,param_3,*(int **)((int)this + 0x60),
                         *(undefined4 *)(iVar4 + 0x4c));
    if (iVar4 != 0) {
      piStack_8 = *(int **)this;
      uVar7 = (*(code *)piStack_8[7])
                        (param_1,param_2,pfStack_c,param_3,*(undefined4 *)((int)this + 0x60),0);
      (**(code **)((int)fStack_24 + 0x28))(param_1,param_2,uVar7);
      FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Far__Attack_501422bc);
      *(float *)((int)this + 0x8c) = DAT_5015ccdc;
      in_stack_ffffff68 = param_3;
      goto LAB_5003c5b9;
    }
  }
  piStack_8 = (int *)(**(code **)(*param_1 + 0x18c))();
  if ((piStack_8 == (int *)0x0) ||
     (((*(float *)((int)this + 0x8c) <= *(float *)((int)this + 0x90) + 3.0 &&
       (*(float *)((int)this + 0x8c) < *(float *)((int)this + 0x90) ==
        (*(float *)((int)this + 0x8c) == *(float *)((int)this + 0x90)))) ||
      (iVar4 = (**(code **)(*param_1 + 0x220))(), (*(byte *)(iVar4 + 0x1c) & 0x10) != 0)))) {
    FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Far__No_Attack_50142274);
    piStack_8 = *(int **)this;
    *(float *)((int)this + 0x8c) = DAT_5015ccdc;
    in_stack_ffffff68 = &fStack_4c;
    uVar7 = (*(code *)piStack_8[5])(param_1,param_2,in_stack_ffffff68,param_3,0);
    (**(code **)((int)fStack_20 + 0x28))(param_1,param_2,uVar7);
  }
  else {
    *(float *)((int)this + 0x90) = DAT_5015ccdc;
    uVar7 = (**(code **)(*piStack_8 + 0x1c))();
    in_stack_ffffff68 = (float *)0x0;
    (**(code **)(*(int *)this + 0x28))(param_1,param_2,uVar7,&pcStack_68,param_3,0,0,0,0);
    FUN_500adb60(param_1,(byte *)s_NonIdeal_Too_Far__No_Attack__Cro_50142294);
  }
LAB_5003c5b9:
  fVar1 = fStack_4c;
  if (*(float *)(DAT_5015ccc8 + 0x18) == 0.0) {
    return;
  }
  uStack_48 = 0xfa;
  uStack_47 = 0xfa;
  uStack_46 = 0xfa;
  uStack_45 = 0xfa;
  fStack_4c = -1.661535e+35;
  FUN_50084460(in_stack_ffffff68,fVar1,0xfafafafa,1,0);
  FUN_50084b00(in_stack_ffffff68,4);
  FUN_50084460(&stack0xffffff74,fVar1,fStack_4c,1,0);
  return;
}

