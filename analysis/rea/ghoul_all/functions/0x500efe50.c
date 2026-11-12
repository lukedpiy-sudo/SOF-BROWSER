// rea decompile_all
// name: FUN_500efe50
// address: 0x500efe50
// body: available
// range: 0x500efe50-0x500f09f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined1 __cdecl FUN_500efe50(int param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  void *pvVar14;
  undefined1 uVar15;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar16;
  undefined4 **ppuVar17;
  byte *pbVar18;
  undefined4 unaff_EDI;
  float *pfVar19;
  bool bVar20;
  char *pcVar21;
  undefined4 uVar22;
  char *pcVar23;
  int iVar24;
  undefined4 *apuStack_40c [14];
  undefined4 uStack_3d4;
  undefined4 uStack_3c0;
  char acStack_3bc [84];
  undefined1 auStack_368 [50];
  undefined1 uStack_336;
  float afStack_330 [14];
  undefined1 auStack_2f8 [4];
  undefined1 auStack_2f4 [4];
  undefined1 auStack_2f0 [12];
  undefined4 uStack_2e4;
  undefined1 auStack_2ce [16];
  undefined1 auStack_2be [100];
  char acStack_25a [54];
  float afStack_224 [19];
  undefined4 uStack_1d8;
  undefined1 local_1d4 [48];
  char acStack_1a4 [4];
  undefined1 auStack_1a0 [68];
  undefined4 uStack_15c;
  undefined1 auStack_158 [4];
  undefined1 auStack_154 [46];
  undefined1 auStack_126 [58];
  undefined1 auStack_ec [96];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [92];
  byte *pbStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_501158da;
  pvStack_c = ExceptionList;
  bVar20 = true;
  bVar2 = false;
  iVar16 = 1;
  ExceptionList = &pvStack_c;
  do {
    pcVar23 = s_impact_gore_impact_d_wav_50133c90;
    puVar4 = local_1d4;
    uVar22 = 100;
    iVar24 = iVar16;
    FUN_500fe2b0();
    (*DAT_5015c9f4)(local_1d4,puVar4,uVar22,pcVar23,iVar24);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 4);
  iVar16 = 1;
  do {
    pcVar23 = s_impact_player_hit_d_wav_501544a4;
    puVar4 = local_1d4;
    uVar22 = 100;
    iVar24 = iVar16;
    FUN_500fe2b0();
    (*DAT_5015c9f4)(local_1d4,puVar4,uVar22,pcVar23,iVar24);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 5);
  (*DAT_5015c9f4)(s_impact_player_armor_wav_5015448c);
  (*DAT_5015c9f4)(s_impact_gore_sizzle_wav_50133c78);
  iVar16 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (((iVar16 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x74) + 0x354) != 0)) {
    bVar2 = true;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xf0))(1);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x7c) = 0;
  FUN_500a5d30(&DAT_5015c79c,param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x354) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xffbfffff;
  iVar16 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar16 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  apuStack_40c[2] = (undefined4 *)0x0;
  uStack_3c0 = 0;
  uStack_2e4 = 0;
  uStack_1d8 = 0;
  if ((*(int *)(param_1 + 0x74) != 0) &&
     (piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x80))();
  }
  puVar4 = FUN_500fe320(param_2,&DAT_50144e38);
  pcVar21 = s__s_gpm_501450cc;
  pcVar23 = acStack_3bc;
  uVar22 = 100;
  FUN_500fe2b0();
  piVar5 = (int *)(*DAT_5015cae4)(acStack_3bc,pcVar23,uVar22,pcVar21,puVar4);
  if (((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x44))(), cVar3 == '\0')) &&
     (DAT_5018b358 != '\0')) {
    iVar16 = 0;
    do {
      cVar3 = (&DAT_5018b358)[iVar16];
      acStack_3bc[iVar16] = cVar3;
      iVar16 = iVar16 + 1;
    } while (cVar3 != '\0');
    (**(code **)*piVar5)(&DAT_5018b358);
    bVar20 = false;
  }
  puVar6 = (undefined4 *)0x0;
  if (piVar5 != (int *)0x0) {
    pcVar21 = s_fem_play_50152234;
    pcVar23 = (char *)(**(code **)(*piVar5 + 0x20))();
    iVar16 = __strcmpi(pcVar23,pcVar21);
    if (iVar16 == 0) {
      apuStack_40c[1] = operator_new(0x1ec);
      uStack_4 = 0;
      if (apuStack_40c[1] == (undefined4 *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x354) = 0;
      }
      else {
        puVar6 = FUN_50037080(apuStack_40c[1]);
        *(undefined4 **)(*(int *)(param_1 + 0x74) + 0x354) = puVar6;
      }
    }
    else {
      apuStack_40c[1] = operator_new(0x1ec);
      uStack_4 = 1;
      if (apuStack_40c[1] == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_50033550(apuStack_40c[1]);
      }
      *(undefined4 **)(*(int *)(param_1 + 0x74) + 0x354) = puVar6;
    }
    cVar3 = '\x01';
    uStack_4 = 0xffffffff;
    pcVar21 = (char *)(**(code **)(*piVar5 + 0x20))();
    pcVar23 = acStack_3bc;
    uVar15 = 0;
    pcVar7 = (char *)(**(code **)(*piVar5 + 0x24))();
    pcVar8 = (char *)(**(code **)(*piVar5 + 0x18))();
    puVar6 = FUN_500a5c10(&DAT_5015c79c,pcVar8,pcVar7,uVar15,pcVar23,pcVar21,cVar3);
    if ((puVar6 == (undefined4 *)0x0) && (bVar20)) {
      if (DAT_5018b358 == '\0') {
        (*DAT_5015cb10)(s_No_default_player_model__50154470);
      }
      iVar16 = 0;
      do {
        cVar3 = (&DAT_5018b358)[iVar16];
        acStack_3bc[iVar16] = cVar3;
        iVar16 = iVar16 + 1;
      } while (cVar3 != '\0');
      cVar3 = 'X';
      (**(code **)*piVar5)();
      piVar11 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0xf0))(1);
      }
      apuStack_40c[0] = operator_new(0x1ec);
      puStack_8 = (undefined1 *)0x2;
      if (apuStack_40c[0] == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_50033550(apuStack_40c[0]);
      }
      pcVar8 = (char *)0x1;
      puStack_8 = (undefined1 *)0xffffffff;
      *(undefined4 **)(*(int *)(param_1 + 0x74) + 0x354) = puVar6;
      pcVar23 = (char *)(**(code **)(*piVar5 + 0x20))();
      uVar15 = SUB41(&uStack_3c0,0);
      pcVar7 = (char *)0x0;
      uVar22 = (**(code **)(*piVar5 + 0x24))();
      pcVar21 = (char *)(**(code **)(*piVar5 + 0x18))(uVar22);
      puVar6 = FUN_500a5c10(&DAT_5015c79c,pcVar21,pcVar7,uVar15,pcVar23,pcVar8,cVar3);
      if (puVar6 == (undefined4 *)0x0) {
        (*DAT_5015cb10)(s_Couldn_t_set_up_default_player_m_50154448);
      }
    }
    iVar16 = *(int *)(*(int *)(param_1 + 0x74) + 0x354);
    if (iVar16 != 0) {
      *(int *)(iVar16 + 8) = param_1;
    }
    apuStack_40c[2] = FUN_500a5d10(puVar6,param_1);
    piVar11 = *(int **)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x34) = 0x400000;
    piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
    uVar22 = (**(code **)(*piVar9 + 0x1c))(s_quake_ground_5012f83c);
    (**(code **)(*piVar11 + 0x74))(uVar22);
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(apuStack_40c + 1);
    FUN_500ecdc0(afStack_330);
    ppuVar17 = apuStack_40c;
    pfVar19 = afStack_224;
    for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar19 = (float)*ppuVar17;
      ppuVar17 = ppuVar17 + 1;
      pfVar19 = pfVar19 + 1;
    }
    FUN_500ecef0(afStack_330,2,-1.5707964);
    FUN_500ed0d0(apuStack_40c,afStack_330,afStack_224);
    uStack_3d4 = 0xc1c00000;
    (**(code **)**(undefined4 **)(param_1 + 0x164))(apuStack_40c);
    if (*(int *)(*(int *)(param_1 + 0x74) + 0x354) == 0) {
      (**(code **)(*piVar5 + 0x48))(1);
      ExceptionList = pvStack_c;
      return 0;
    }
    for (iVar16 = (**(code **)(*piVar5 + 0x14))(); 0 < iVar16; iVar16 = iVar16 + -1) {
      cVar3 = (**(code **)(*piVar5 + 0x40))(iVar16,auStack_368);
      uVar15 = uStack_336;
      if (cVar3 != '\0') {
        piVar11 = *(int **)(param_1 + 0x164);
        piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar22 = (**(code **)(*piVar9 + 0x1c))(auStack_368);
        if ((short)uVar22 != 0) {
          (**(code **)(*piVar11 + 0x20))(uVar22,uVar15);
        }
      }
    }
    for (iVar16 = (**(code **)(*piVar5 + 0xc))(); 0 < iVar16; iVar16 = iVar16 + -1) {
      cVar3 = (**(code **)(*piVar5 + 0x38))(iVar16,auStack_2f0);
      if (cVar3 != '\0') {
        if (acStack_25a[0] == '\0') {
          FUN_50011e40(param_1,unaff_EBX,auStack_2f0);
        }
        else {
          piVar11 = *(int **)(param_1 + 0x164);
          piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
          iVar16 = (**(code **)(*piVar9 + 0x1c))(acStack_25a);
          piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
          uVar22 = (**(code **)(*piVar9 + 0x40))(auStack_2f4);
          if ((short)uVar22 != 0) {
            piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
            uVar10 = (**(code **)(*piVar9 + 0x50))(uVar22,auStack_2be,0);
            if ((short)uVar10 != 0) {
              (**(code **)(*piVar11 + 0x2c))(uVar22,uVar10,unaff_EBP);
            }
          }
        }
      }
    }
    if ((char)((uint)unaff_EDI >> 0x10) != '\0') {
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__tightchest_50135560);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,0);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__bosschest_5013532c);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,0);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__maskchest_501351cc);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,0);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__bulkychest_5013548c);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,0);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__chest_b_t_501353b8);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,0);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__armorchest_50135258);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,1);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__bosships_50134b88);
      if (((short)uVar22 != 0) && (cVar3 = (**(code **)(*piVar11 + 0x24))(uVar22), cVar3 != '\0')) {
        piVar11 = *(int **)(param_1 + 0x164);
        piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar22 = (**(code **)(*piVar9 + 0x1c))(s__CAP_CHEST_HIPS_BULKY_50154430);
        if ((short)uVar22 != 0) {
          (**(code **)(*piVar11 + 0x20))(uVar22,1);
        }
        piVar11 = *(int **)(param_1 + 0x164);
        piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar22 = (**(code **)(*piVar9 + 0x1c))(s__CAP_HIPS_CHEST_BOSS_50154418);
        if ((short)uVar22 != 0) {
          (**(code **)(*piVar11 + 0x20))(uVar22,1);
        }
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__tighthips_50134c78);
      if (((short)uVar22 != 0) && (cVar3 = (**(code **)(*piVar11 + 0x24))(uVar22), cVar3 != '\0')) {
        piVar11 = *(int **)(param_1 + 0x164);
        piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar22 = (**(code **)(*piVar9 + 0x1c))(s__CAP_CHEST_HIPS_BULKY_50154430);
        if ((short)uVar22 != 0) {
          (**(code **)(*piVar11 + 0x20))(uVar22,1);
        }
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x1c))(s__armorchest_50135258);
      if ((short)uVar22 != 0) {
        (**(code **)(*piVar11 + 0x20))(uVar22,1);
      }
      piVar11 = *(int **)(param_1 + 0x164);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      (**(code **)(*piVar9 + 0x1c))(s__armorchest_50135258);
      piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
      uVar22 = (**(code **)(*piVar9 + 0x40))(&DAT_50133b34);
      if ((short)uVar22 != 0) {
        piVar9 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar10 = (**(code **)(*piVar9 + 0x50))(uVar22,s_b_dm_armor_5015433c,0);
        if ((short)uVar10 != 0) {
          (**(code **)(*piVar11 + 0x2c))(uVar22,uVar10,unaff_EBP);
        }
      }
    }
    iVar16 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
    uVar22 = (**(code **)(*piVar5 + 0x28))();
    (**(code **)(iVar16 + 0xcc))(param_1,uVar22);
    for (iVar16 = (**(code **)(*piVar5 + 0x10))(); 0 < iVar16; iVar16 = iVar16 + -1) {
      iVar24 = iVar16;
      cVar3 = (**(code **)(*piVar5 + 0x3c))(iVar16,auStack_154);
      if ((cVar3 != '\0') && (piVar11 = (int *)(*DAT_5015cae4)(auStack_ec), piVar11 != (int *)0x0))
      {
        cVar3 = (**(code **)(*piVar11 + 0x44))();
        iVar16 = iVar24;
        if ((cVar3 != '\0') &&
           (pcVar23 = (char *)(**(code **)(*piVar11 + 0x20))(), iVar16 = iVar24, *pcVar23 != '\0'))
        {
          (**(code **)(*piVar11 + 0x38))(1,auStack_2f8);
          iVar16 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
          uVar22 = (**(code **)(*piVar11 + 0x20))(auStack_126,iVar24,auStack_2ce,uStack_15c);
          uVar22 = (**(code **)(*piVar11 + 0x18))(uVar22);
          (**(code **)(iVar16 + 0xd0))(param_1,auStack_158,uVar22);
          iVar16 = iVar24;
        }
        (**(code **)(*piVar11 + 0x48))(1);
      }
    }
    (**(code **)(*piVar5 + 0x34))(auStack_88);
    cVar3 = '\0';
    (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0xa0))
              (param_1,&DAT_5015911c,1,7,auStack_8c);
    (**(code **)(*piVar5 + 0x30))(auStack_1a0);
    if (cVar3 != '\0') {
      pcVar23 = FUN_500fe320(pbStack_2c,(byte *)s_teamname_50144e40);
      __strcmpi(acStack_1a4,pcVar23);
    }
    (**(code **)(*piVar5 + 0x48))(1);
    puVar6 = apuStack_40c[2];
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x88))(param_1);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x7c) = puVar6[3];
  (**(code **)(*(int *)puVar6[3] + 0x54))(param_1);
  if (bVar2) {
    pcVar23 = FUN_500fe320(param_2,&DAT_50144e38);
    iVar16 = __strcmpi((char *)(*(int *)(param_1 + 0x74) + 0x3d8),pcVar23);
    if (iVar16 != 0) goto LAB_500f0897;
    pcVar23 = FUN_500fe320(param_2,(byte *)s_teamname_50144e40);
    iVar16 = __strcmpi((char *)(*(int *)(param_1 + 0x74) + 0x43c),pcVar23);
    if (iVar16 != 0) goto LAB_500f0897;
    pbVar18 = (byte *)(*(int *)(param_1 + 0x74) + 0x2cc);
    pbVar12 = (byte *)(*(int *)(param_1 + 0x74) + 0x358);
    do {
      bVar1 = *pbVar12;
      bVar20 = bVar1 < *pbVar18;
      if (bVar1 != *pbVar18) {
LAB_500f088a:
        iVar16 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_500f088f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar20 = bVar1 < pbVar18[1];
      if (bVar1 != pbVar18[1]) goto LAB_500f088a;
      pbVar12 = pbVar12 + 2;
      pbVar18 = pbVar18 + 2;
    } while (bVar1 != 0);
    iVar16 = 0;
LAB_500f088f:
    if (iVar16 != 0) goto LAB_500f0897;
    uVar15 = 1;
  }
  else {
LAB_500f0897:
    uVar15 = 0;
  }
  if (*(int *)(param_1 + 0x2ec) < 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x54))
              (param_1,s_lb_sautofire_end_n_n_50137a30);
  }
  else if (*(int *)(DAT_5015c8c8 + 0x18) == 0x40800000) {
    if (*(int *)(param_1 + 0x3cc) == 1) {
      uVar13 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pvVar14 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar13);
      piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
      uVar22 = FUN_500a51d0(pvVar14,*(uint *)(param_1 + 0x164));
      pcVar23 = s_ctf_flag_blue_50144c38;
    }
    else {
      if (*(int *)(param_1 + 0x3cc) != 2) goto LAB_500f0974;
      uVar13 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pvVar14 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar13);
      piVar5 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
      uVar22 = FUN_500a51d0(pvVar14,*(uint *)(param_1 + 0x164));
      pcVar23 = s_ctf_flag_red_50144c48;
    }
    (**(code **)(*piVar5 + 0xd0))
              (param_1,s_abolt_hip_r_5013399c,s_items_ctf_flag_5014507c,s_flag_hold_idle_5014508c,
               s_to_abolt_hip_r_501516bc,uVar22,pcVar23,0x3f800000);
  }
LAB_500f0974:
  FUN_500fe2b0();
  FUN_500fe320(param_2,&DAT_50144e38);
  FUN_500fe2b0();
  FUN_500fe320(param_2,(byte *)s_teamname_50144e40);
  FUN_500fe2b0();
  ExceptionList = pvStack_c;
  return uVar15;
}

