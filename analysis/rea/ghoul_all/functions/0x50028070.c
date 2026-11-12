// rea decompile_all
// name: FUN_50028070
// address: 0x50028070
// body: available
// range: 0x50028070-0x5002900f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_50028070(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,uint param_11,
            int param_12)

{
  int iVar1;
  uint3 uVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined2 extraout_var;
  void *this_00;
  uint uVar11;
  short *psVar12;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 uVar13;
  void *unaff_EBX;
  void *unaff_EBP;
  short *psVar14;
  undefined4 *unaff_EDI;
  char *pcVar15;
  bool bVar16;
  int unaff_retaddr;
  char *pcVar17;
  int *piStack_32c;
  int iStack_328;
  undefined4 local_324;
  undefined4 uStack_320;
  short *psStack_31c;
  int *piStack_318;
  int local_314;
  short *psStack_310;
  undefined4 local_30c;
  float fStack_308;
  float fStack_304;
  float fStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  float afStack_2ec [3];
  float fStack_2e0;
  float fStack_2dc;
  float afStack_2a8 [4];
  undefined4 uStack_298;
  undefined1 auStack_294 [48];
  float afStack_264 [4];
  undefined4 uStack_254;
  float afStack_220 [4];
  undefined4 uStack_210;
  undefined4 auStack_20c [12];
  float afStack_1dc [4];
  undefined4 uStack_1cc;
  float afStack_198 [4];
  undefined4 uStack_188;
  float afStack_154 [3];
  undefined1 auStack_148 [4];
  undefined4 uStack_144;
  undefined4 uStack_100;
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [68];
  undefined4 uStack_80;
  undefined4 auStack_40 [15];
  int iStack_4;
  
  uVar2 = (uint3)uStack_320;
  local_324 = (undefined2 *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  psVar14 = (short *)0x0;
  uStack_320 = (uint)(uint3)uStack_320;
  local_314 = 0;
  local_30c = 0;
  if (param_9 < 1) {
    return 0;
  }
  _DAT_50130654 = param_2;
  if ((((param_2 == 0) || (param_3 == 0)) || (param_2 == 1)) ||
     (((param_3 == 1 || (param_2 == 2)) || (param_3 == 2)))) {
    (**(code **)(*(int *)this + 0xec))(0);
  }
  if ((param_4 != 0) && (*(int **)(param_4 + 0x164) != (int *)0x0)) {
    if ((*(int *)(param_4 + 0x294) != 0x437e0000) ||
       (uStack_320 = CONCAT13(1,uVar2), *(int *)(param_5 + 0x74) == 0)) {
      uStack_320 = uStack_320 & 0xffffff;
    }
    (**(code **)(**(int **)(param_4 + 0x164) + 0x54))(param_4);
  }
  if (param_2 != *(int *)((int)this + 0x60)) {
    psVar14 = (short *)(param_2 * 0x30 + *(int *)((int)this + 100));
  }
  psStack_310 = (short *)0x0;
  if (param_3 != *(int *)((int)this + 0x60)) {
    psStack_310 = (short *)(param_3 * 0x30 + *(int *)((int)this + 100));
  }
  afStack_2ec[2] = *param_6;
  fStack_2e0 = param_6[1];
  fStack_2dc = param_6[2];
  if (uStack_320._3_1_ != '\0') {
    if (psVar14 == (short *)0x0) goto LAB_50028f39;
    piVar6 = *(int **)(param_4 + 0x164);
    if (piVar6 == (int *)0x0) {
      piStack_32c = (int *)0x0;
    }
    else {
      piStack_32c = (int *)(**(code **)(*piVar6 + 0x88))();
    }
    iStack_328 = FUN_500a5820(&DAT_5015c79c,piVar6);
    uVar7 = CONCAT22((short)((uint)piVar6 >> 0x10),psVar14[5]);
    if ((2 < param_2) && (param_2 < 7)) {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      switch(param_2) {
      case 3:
      case 4:
        pcVar17 = s_gbolt_cap_rbicep_chest_tight_501339f4;
        break;
      case 5:
      case 6:
        pcVar17 = s_gbolt_cap_lbicep_chest_tight_501339d4;
        break;
      default:
        goto switchD_5002820d_default;
      }
      uVar7 = (**(code **)(*piVar6 + 0x1c))(pcVar17);
    }
switchD_5002820d_default:
    if (((short)uVar7 == 0) &&
       (piStack_318 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))(),
       piStack_318 != (int *)0x0)) {
      if (param_2 == 2) {
        uVar7 = (**(code **)(*piStack_318 + 0x1c))(s_abolt_chest_501339a8);
        if ((short)uVar7 == 0) {
LAB_50028284:
          pcVar17 = s_abolt_hip_r_5013399c;
          goto LAB_50028289;
        }
      }
      else if (param_2 == 0x16) {
        pcVar17 = s_sbolt_heel_r_501339b4;
LAB_50028289:
        uVar7 = (**(code **)(*piStack_318 + 0x1c))(pcVar17);
      }
      else {
        if (param_2 != 0x17) goto LAB_50028284;
        uVar7 = (**(code **)(*piStack_318 + 0x1c))(s_sbolt_heel_l_501339c4);
      }
    }
    if (((((iStack_328 != 0) && (iStack_328 = *(int *)(iStack_328 + 0x14), iStack_328 != 0)) &&
         (piStack_32c != (int *)0x0)) &&
        ((uVar8 = (**(code **)(*piStack_32c + 0x1c))(&DAT_50133404), (short)uVar8 != 0 &&
         (iVar9 = (**(code **)(*(int *)this + 0xdc))
                            (param_1,uVar7,iStack_328,&DAT_5012f948,uVar8,local_324,0,0x3f800000),
         iVar9 != 0)))) && (iStack_328 = *(int *)(iVar9 + 0x1c), iStack_328 != 0)) {
      FUN_500b5750(auStack_40);
      fStack_2fc = *(float *)(param_4 + 0x24c);
      uStack_2f8 = *(undefined4 *)(param_4 + 0x250);
      uStack_2f4 = *(undefined4 *)(param_4 + 0x254);
      FUN_500fe050(&fStack_2fc);
      FUN_500c3570(&fStack_2fc,&fStack_308);
      fStack_304 = fStack_304 * 0.017453292;
      uStack_1cc = 0;
      uStack_254 = 0;
      uStack_144 = 0;
      uStack_298 = 0;
      uStack_100 = 0;
      uStack_210 = 0;
      uStack_188 = 0;
      uStack_80 = 0;
      fStack_308 = 1.5707964;
      FUN_500c3da0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),auStack_20c);
      (**(code **)(**(int **)(param_1 + 0x164) + 200))(DAT_5015ccdc,auStack_294,uVar7,5,1);
      FUN_500ed0d0(afStack_198,afStack_2a8,afStack_220);
      FUN_500ec880(afStack_2ec,afStack_198);
      FUN_500ed5d0(afStack_2ec,3);
      FUN_500ecef0(afStack_154,0,(float)piStack_318);
      FUN_500ecef0(afStack_264,1,(float)psStack_31c);
      FUN_500ed0d0(afStack_1dc,afStack_264,afStack_2ec);
      FUN_500ed0d0(auStack_d4,afStack_154,afStack_1dc);
      (**(code **)*unaff_EDI)(auStack_d4);
    }
  }
  if (((psVar14 == (short *)0x0) || (*psVar14 == 0)) ||
     ((psVar14[1] == 0 ||
      (cVar3 = (**(code **)(**(int **)(local_324 + 6) + 0x24))(psVar14[1]), cVar3 == '\0'))))
  goto LAB_50028f39;
  iVar9 = *(int *)(param_1 + 0x2ec);
  if (iVar9 < 1) {
    if (4 < param_9) {
      if (0 < iVar9) goto LAB_500284d7;
      goto LAB_500284e0;
    }
    *(int *)(psVar14 + 0x12) = *(int *)(psVar14 + 0x12) + 10;
  }
  else {
LAB_500284d7:
    if (param_9 <= iVar9) {
LAB_500284e0:
      iVar9 = param_9;
    }
    *(int *)(psVar14 + 0x12) = *(int *)(psVar14 + 0x12) + iVar9;
  }
  iVar9 = *(int *)(psVar14 + 0x12);
  if (iVar9 < 1) {
    piStack_318 = (int *)0x0;
  }
  else if (iVar9 < 0x65) {
    piStack_318 = (int *)0x1;
  }
  else {
    piStack_318 = (int *)((200 < iVar9) + 2);
  }
  if (DAT_50159104 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x20))
              (CONCAT22((short)((uint)iVar9 >> 0x10),*psVar14),1);
  }
  if (*(int *)(psVar14 + 0x14) < (int)piStack_318) {
    FUN_5001c580(this,param_1,*(int *)(psVar14 + 0x10));
    piStack_32c = (int *)(*DAT_5015cb24)(0,2);
    if (param_12 == 1) {
      piStack_32c = (int *)0x3;
    }
    if (((*(int *)(psVar14 + 0x14) != 0) && (DAT_50159104 == '\0')) && (piStack_32c != (int *)0x3))
    {
      iStack_328 = CONCAT22(iStack_328._2_2_,*psVar14);
      piVar6 = *(int **)(local_324 + 6);
      piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
      uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc5c);
      if (((short)uVar7 != 0) &&
         (sVar5 = (**(code **)(*piVar6 + 0x30))(uVar7,iStack_328,0), sVar5 != 0)) {
        piStack_32c = (int *)0x0;
        psVar12 = (short *)((int)this + *(int *)(psVar14 + 0x14) * 8 + 0x40);
        do {
          if (sVar5 == *psVar12) break;
          piStack_32c = (int *)((int)piStack_32c + 1);
          psVar12 = psVar12 + 1;
        } while ((int)piStack_32c < 4);
        if (piStack_32c == (int *)0x3) {
          piStack_32c = (int *)(*DAT_5015cb24)(0,2);
        }
      }
    }
    if (psVar14[2] != 0) {
      if ((0 < *(int *)(param_1 + 0x2ec)) && ((param_11 & 0x100000) == 0)) {
        FUN_50084500(param_1,psVar14[2]);
      }
      if ((((psVar14 == (short *)(*(int *)((int)this + 100) + 0x270)) &&
           (*(int *)(param_1 + 0x2ec) <= param_9)) && (*(int *)((int)this + 0x1cc) == 0)) &&
         (((param_11 & 0x20000) != 0 && (DAT_50159104 == '\0')))) {
        *(undefined4 *)((int)this + 0x1cc) = 1;
        piStack_318 = (int *)0x2;
        FUN_500a3e10(local_324,psVar14[2]);
        (**(code **)(*(int *)this + 0xd4))
                  (param_1,CONCAT22(extraout_var,psVar14[2]),s_Enemy_bolt_5012fc80,
                   s_guts_bolton_50133958,s_to_gbolt_gut_f_5012fc4c,local_324,0,0x3f800000);
        FUN_500a5c10(&DAT_5015c79c,s_Enemy_bolt_5012fc80,s_guts_bolton_50133958,1,(char *)0x0,
                     (char *)0x0,'\0');
        piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar5 = (**(code **)(*piVar6 + 0x1c))(s_gbolt_gut_f_50133964);
        this_00 = (void *)FUN_500a4250(local_324,sVar5);
        if ((this_00 != (void *)0x0) &&
           ((iStack_328 != 0 &&
            (uVar11 = FUN_500a5da0(iStack_328,s_g_exit_guts_anim1_50133988), (short)uVar11 != 0))))
        {
          FUN_500a32b0(this_00,uVar11,DAT_5015ccdc,0,1,1,0,0);
          uVar7 = (**(code **)(**(int **)(iStack_328 + 0x24) + 0x30))(&DAT_5012fe04);
          if ((short)uVar7 != 0) {
            (**(code **)(**(int **)((int)this_00 + 0x1c) + 0x5c))(&DAT_501590ac,uVar7);
          }
        }
      }
    }
    psStack_31c = (short *)((int)this + ((int)piStack_32c + 0x20 + (int)piStack_318 * 4) * 2);
    sVar5 = *psStack_31c;
    uVar7 = CONCAT22((short)((uint)psStack_31c >> 0x10),sVar5);
    if (sVar5 != 0) {
      if (DAT_50159104 != '\0') goto LAB_500288a8;
      piStack_32c = (int *)CONCAT22(piStack_32c._2_2_,*psVar14);
      piVar6 = *(int **)(local_324 + 6);
      piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
      uVar8 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc5c);
      if (((short)uVar8 != 0) && (sVar5 != 0)) {
        (**(code **)(*piVar6 + 0x2c))(uVar8,uVar7,piStack_32c);
      }
      if ((*(int *)(psVar14 + 0xe) != *(int *)((int)this + 0x60)) &&
         (psVar12 = (short *)(*(int *)((int)this + 100) + *(int *)(psVar14 + 0xe) * 0x30),
         *psVar12 != 0)) {
        *(undefined4 *)(psVar12 + 0x12) = *(undefined4 *)(psVar14 + 0x12);
        *(undefined4 *)(*(int *)(psVar14 + 0xe) * 0x30 + 0x28 + *(int *)((int)this + 100)) =
             *(undefined4 *)(psVar14 + 0x14);
        (**(code **)(**(int **)(param_1 + 0x164) + 0x20))
                  (CONCAT22((short)((uint)(*(int *)(psVar14 + 0xe) * 0x30) >> 0x10),
                            *(undefined2 *)
                             (*(int *)(psVar14 + 0xe) * 0x30 + *(int *)((int)this + 100))),1);
        piVar6 = *(int **)((int)piStack_32c + 0xc);
        unaff_EBP = (void *)CONCAT22((short)((uint)unaff_EBP >> 0x10),
                                     *(undefined2 *)
                                      (*(int *)(psVar14 + 0xe) * 0x30 + *(int *)((int)this + 100)));
        unaff_EBX = (void *)CONCAT22((short)((uint)unaff_EBX >> 0x10),*local_324);
        piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
        uVar8 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc5c);
        if (((short)uVar8 != 0) && (sVar5 != 0)) {
          (**(code **)(*piVar6 + 0x2c))(uVar8,uVar7,piStack_32c);
        }
      }
    }
    if (DAT_50159104 == '\0') {
      *(int **)(psVar14 + 0x14) = piStack_318;
    }
  }
LAB_500288a8:
  if (param_9 < *(int *)(param_1 + 0x2ec)) {
    FUN_5001e5a0(this,&DAT_501337d0,param_1);
  }
  else if ((psVar14[3] != 0) &&
          ((((*(float *)(DAT_5015cc9c + 0x18) != 0.0 || ((param_11 & 0x28000) != 0)) ||
            (500 < *(int *)(psVar14 + 0x12))) &&
           ((*(int *)(*(int *)(psVar14 + 0x10) + 8) != 0 && (DAT_501590ec == '\0')))))) {
    piStack_32c = (int *)0x0;
    if (*(int *)(*(int *)(psVar14 + 0x10) + 8) == 6) {
      (**(code **)(*(int *)this + 0xec))(0);
      FUN_50011db0(this,param_1,5,1.0,0);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar5 = (**(code **)(*piVar6 + 0x1c))(s_sbolt_mouth_5012f8c8);
      if (sVar5 != 0) {
        uVar4 = (*DAT_5015cb24)(1,3);
        uStack_2f0 = 0;
        afStack_2ec[0] = 0.0;
        afStack_2ec[1] = 0.0;
        FUN_50084270(param_7,&uStack_2f0,uVar4,1,' ',0,0,0,0x23);
        uVar4 = (*DAT_5015cb24)(3,6);
        FUN_50084270(param_7,&uStack_2f0,uVar4,4,' ',0,0,0,0x23);
        FUN_500847f0(param_1,sVar5);
        uVar7 = (*DAT_5015c9f4)(s_impact_gore_headexp_wav_50133970,0x3f19999a,0x3f800000,0,0);
        (*DAT_5015ca48)(param_1,4,uVar7);
      }
    }
    (**(code **)(*(int *)this + 200))(param_1);
    if (*(int *)(*(int *)(psVar14 + 0x10) + 8) != 6) {
      piStack_32c = FUN_5001d0d0(this,param_1,param_2,param_6,&local_314,'\x01');
    }
    sVar5 = psVar14[5];
    if ((sVar5 != 0) && (local_314 != 0)) {
      if (*(int *)(psVar14 + 8) == 0) {
        (**(code **)(*(int *)this + 0xd4))
                  (param_1,sVar5,s_Enemy_bolt_5012fc80,s_g_cap1_5012fc6c,s_to_gbolt_5012fc74,
                   local_314,0,0x3f800000);
      }
      else {
        iVar9 = *(int *)(psVar14 + 8) + 0x48e;
        if (psVar14[10] == 0) {
          (**(code **)(*(int *)this + 0xd4))
                    (param_1,sVar5,s_Enemy_bolt_5012fc80,iVar9,s_to_gbolt_5012fc74);
        }
        else {
          (**(code **)(*(int *)this + 0xd8))(param_1,sVar5,s_Enemy_bolt_5012fc80,iVar9,psVar14[10]);
        }
      }
    }
    if (((psVar14[4] != 0) && (piStack_32c != (int *)0x0)) &&
       ((int *)piStack_32c[0x59] != (int *)0x0)) {
      (**(code **)(*(int *)piStack_32c[0x59] + 0x20))(psVar14[4],1);
      uVar11 = (uint)local_324 >> 0x10;
      local_324 = (undefined2 *)CONCAT22((short)uVar11,psVar14[4]);
      piVar6 = *(int **)((int)unaff_EBP + 0x164);
      piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
      local_314 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc68);
      if ((short)local_314 != 0) {
        piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
        uVar7 = (**(code **)(*piVar10 + 0x50))(local_314,s_c_blood_5012fc60,0);
        if ((short)uVar7 != 0) {
          (**(code **)(*piVar6 + 0x2c))(local_314,uVar7,psStack_31c);
        }
      }
    }
    FUN_5001c730(this,param_1,param_2,param_2,(int)piStack_32c);
    FUN_5001c340(this,param_1,*(int *)(psVar14 + 0x10),(int)piStack_32c);
    sVar5 = psVar14[3];
    local_30c = 1;
    uVar13 = extraout_var_01;
    if (sVar5 != 0) {
      piVar6 = *(int **)(local_324 + 6);
      piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
      local_314 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc68);
      uVar13 = extraout_var_02;
      if ((short)local_314 != 0) {
        piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
        uVar7 = (**(code **)(*piVar10 + 0x50))(local_314,s_c_blood_5012fc60,0);
        uVar13 = extraout_var_03;
        if ((short)uVar7 != 0) {
          (**(code **)(*piVar6 + 0x2c))(local_314,uVar7,CONCAT22(extraout_var_00,sVar5));
          uVar13 = extraout_var_04;
        }
      }
    }
    uVar7 = CONCAT22(uVar13,psVar14[6]);
    if (psVar14[6] != 0) {
      iVar9 = *(int *)(psVar14 + 8);
      if (iVar9 == 0) {
        (**(code **)(*(int *)this + 0xd4))
                  (param_1,uVar7,s_Enemy_bolt_5012fc80,s_g_cap1_5012fc6c,s_to_gbolt_5012fc74,
                   local_324,0,0x3f800000);
      }
      else {
        iVar1 = *(int *)this;
        if (psVar14[10] == 0) {
          (**(code **)(iVar1 + 0xd4))
                    (param_1,uVar7,s_Enemy_bolt_5012fc80,iVar9 + 0x48e,s_to_gbolt_5012fc74);
        }
        else {
          (**(code **)(iVar1 + 0xdc))
                    (param_1,uVar7,iVar9,iVar9 + 0x48e,
                     CONCAT22((short)((uint)iVar1 >> 0x10),psVar14[10]));
        }
      }
      if (*(int *)(psVar14 + 8) != 0) {
        iVar9 = 0xc;
        bVar16 = true;
        pcVar17 = (char *)(*(int *)(psVar14 + 8) + 0x48e);
        pcVar15 = s_g_half_head_5013342c;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar16 = *pcVar17 == *pcVar15;
          pcVar17 = pcVar17 + 1;
          pcVar15 = pcVar15 + 1;
        } while (bVar16);
        if (bVar16) {
          piVar6 = *(int **)(param_1 + 0x164);
          piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_50133428);
          if (((short)uVar7 != 0) &&
             (uVar7 = (**(code **)(*piVar6 + 0x30))(uVar7,0,0), (short)uVar7 != 0)) {
            piVar6 = (int *)(**(code **)(**(int **)(unaff_retaddr + 0x164) + 0x88))();
            (**(code **)(*piVar6 + 0x58))(uVar7,auStack_c4);
            iVar9 = FUN_500a4250(unaff_EBX,psVar14[6]);
            piVar6 = *(int **)(iVar9 + 0x1c);
            piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
            piStack_32c = (int *)(**(code **)(*piVar10 + 0x1c))(&DAT_5015911c);
            piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_50133428);
            if ((short)uVar7 != 0) {
              piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar8 = (**(code **)(*piVar10 + 0x50))(uVar7,auStack_c4,0);
              if ((short)uVar8 != 0) {
                (**(code **)(*piVar6 + 0x2c))(uVar7,uVar8,uStack_320);
              }
            }
          }
          piVar6 = *(int **)(unaff_retaddr + 0x164);
          piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_50133424);
          if (((short)uVar7 != 0) &&
             (uVar7 = (**(code **)(*piVar6 + 0x30))(uVar7,0,0), (short)uVar7 != 0)) {
            piVar6 = (int *)(**(code **)(**(int **)(iStack_4 + 0x164) + 0x88))();
            (**(code **)(*piVar6 + 0x58))(uVar7,auStack_148);
            iVar9 = FUN_500a4250(unaff_EBP,psVar14[6]);
            piVar6 = *(int **)(iVar9 + 0x1c);
            piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
            (**(code **)(*piVar10 + 0x1c))(&DAT_5015911c);
            piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_50133424);
            if ((short)uVar7 != 0) {
              piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar8 = (**(code **)(*piVar10 + 0x50))(uVar7,auStack_148,0);
              if ((short)uVar8 != 0) {
                (**(code **)(*piVar6 + 0x2c))(uVar7,uVar8,local_324);
              }
            }
          }
          iVar9 = FUN_500a4250(piStack_32c,psVar14[6]);
          piVar6 = *(int **)(iVar9 + 0x1c);
          piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar7 = (**(code **)(*piVar10 + 0x40))(&DAT_5012fc5c);
          if ((short)uVar7 != 0) {
            piVar10 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar8 = (**(code **)(*piVar10 + 0x50))(uVar7,s_gz_half_head_50133414,0);
            if ((short)uVar8 != 0) {
              (**(code **)(*piVar6 + 0x2c))(uVar7,uVar8,0);
            }
          }
        }
      }
      FUN_50084640(param_1,psVar14[6],100);
    }
    if ((piStack_32c != (int *)0x0) || (*(int *)(*(int *)(psVar14 + 0x10) + 8) == 6)) {
      if (psVar14[1] != 0) {
        (**(code **)(**(int **)(local_324 + 6) + 0x20))(psVar14[1],0);
      }
      if (*psVar14 != 0) {
        (**(code **)(**(int **)(local_324 + 6) + 0x20))(*psVar14,0);
      }
      if ((psStack_310 != (short *)0x0) && (*psStack_310 != 0)) {
        (**(code **)(**(int **)(local_324 + 6) + 0x20))(*psStack_310,0);
      }
      if (psVar14[3] != 0) {
        (**(code **)(**(int **)(local_324 + 6) + 0x20))(psVar14[3],1);
      }
    }
  }
LAB_50028f39:
  if ((*(int *)((int)this + 0x44) == -1) && (*(int *)(param_1 + 0x2ec) < param_9)) {
    sVar5 = psVar14[6];
    if ((sVar5 == 0) && (sVar5 = psVar14[2], sVar5 == 0)) {
      *(undefined4 *)(param_1 + 0x234) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      iVar9 = *(int *)((int)this + 100);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x164) + 100))
                (&DAT_501590c4,CONCAT22((short)((uint)*(int *)(param_1 + 0x2ec) >> 0x10),sVar5),5);
      iVar9 = *(int *)((int)this + 100);
    }
    *(int *)((int)this + 0x44) = ((int)psVar14 - iVar9) / 0x30;
  }
  if ((((*(int *)(param_1 + 0x2ec) < param_9) && (psVar14 != (short *)0x0)) && (*psVar14 != 0)) &&
     ((sVar5 = psVar14[2], sVar5 != 0 || (sVar5 = psVar14[6], sVar5 != 0)))) {
    FUN_50084640(param_1,sVar5,0x32);
  }
  return local_30c;
}

