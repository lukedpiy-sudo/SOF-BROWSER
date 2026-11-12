// rea decompile_all
// name: FUN_500eef20
// address: 0x500eef20
// body: available
// range: 0x500eef20-0x500ef6c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500eef20(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  char *pcVar20;
  undefined *puStack_388;
  undefined1 auStack_37c [4];
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [8];
  undefined1 auStack_36c [4];
  undefined1 auStack_368 [4];
  undefined1 auStack_364 [68];
  char acStack_320 [4];
  undefined1 auStack_31c [4];
  undefined1 auStack_318 [38];
  undefined1 auStack_2f2 [4];
  char acStack_2ee [170];
  undefined1 auStack_244 [40];
  char acStack_21c [24];
  undefined1 local_204 [64];
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [42];
  undefined1 auStack_18e [62];
  undefined1 auStack_150 [96];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [100];
  undefined1 auStack_88 [108];
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_5011589c;
  pvStack_c = ExceptionList;
  puVar16 = local_204;
  pcVar20 = s__s_gpm_501450cc;
  uVar19 = 100;
  ExceptionList = &pvStack_c;
  FUN_500fe2b0();
  piVar2 = (int *)(*DAT_5015cae4)(local_204,puVar16,uVar19,pcVar20,param_1);
  uVar12 = 0;
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x44))();
    if (cVar1 == '\0') {
      uVar12 = (**(code **)(*piVar2 + 0x48))(1);
    }
    else {
      FUN_500fe2b0();
      (**(code **)(*DAT_5015d28c + 0x58))(auStack_364);
      FUN_500fe2b0();
      (**(code **)(*DAT_5015d28c + 0x58))(auStack_368);
      FUN_500fe2b0();
      puVar16 = auStack_36c;
      (**(code **)(*DAT_5015d28c + 0x58))();
      puVar18 = auStack_244;
      (**(code **)(*piVar2 + 0x30))();
      FUN_500fe2b0();
      (**(code **)(*DAT_5015d28c + 0x58))(auStack_374);
      FUN_500fe2b0();
      (**(code **)(*DAT_5015d28c + 0x58))(auStack_378);
      piVar3 = FUN_500c3690();
      pcVar17 = s_fem_play_50152234;
      pcVar20 = (char *)(**(code **)(*piVar2 + 0x20))();
      iVar4 = __strcmpi(pcVar20,pcVar17);
      if (iVar4 == 0) {
        puVar5 = operator_new(0x1ec);
        uStack_1c = 0;
        if (puVar5 == (undefined4 *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_50037080(puVar5);
        }
      }
      else {
        puVar5 = operator_new(0x1ec);
        uStack_1c = 1;
        if (puVar5 == (undefined4 *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = FUN_50033550(puVar5);
        }
      }
      cVar1 = '\0';
      uStack_1c = 0xffffffff;
      pcVar17 = (char *)(**(code **)(*piVar2 + 0x20))();
      pcVar20 = acStack_21c;
      uVar15 = 0;
      pcVar7 = (char *)(**(code **)(*piVar2 + 0x24))();
      pcVar8 = (char *)(**(code **)(*piVar2 + 0x18))();
      puVar5 = FUN_500a5c10(&DAT_5015c79c,pcVar8,pcVar7,uVar15,pcVar20,pcVar17,cVar1);
      if (piVar6 != (int *)0x0) {
        piVar6[2] = (int)piVar3;
      }
      if (puVar5 == (undefined4 *)0x0) {
        uVar19 = (**(code **)(*piVar2 + 0x24))();
        uVar19 = (**(code **)(*piVar2 + 0x18))(uVar19);
        (*DAT_5015cb10)(s_Couldn_t_find_player_model__s__s_50154348,uVar19);
      }
      if (*(char *)(puVar5 + 10) == '\0') {
        pcVar20 = (char *)(**(code **)(*piVar2 + 0x28))();
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc5c);
        FUN_500a5290(puVar5,&DAT_5012fc68);
        FUN_500a5290(puVar5,&DAT_5012fc68);
        if ((pcVar20 != (char *)0x0) && (*pcVar20 != '\0')) {
          FUN_500fe2b0();
          FUN_500a5290(puVar5,&DAT_50133424);
          if (*(float *)(DAT_5015cccc + 0x18) - 0.1 < 2.0) {
            FUN_50107654(auStack_37c,&DAT_50152058);
            FUN_500a5290(puVar5,&DAT_50133424);
          }
          if (*(float *)(DAT_5015cccc + 0x18) - 0.1 < 0.0) {
            FUN_50107654(auStack_37c,&DAT_5015204c);
            FUN_500a5290(puVar5,&DAT_50133424);
          }
        }
        FUN_500a5290(puVar5,&DAT_50133b34);
        iVar4 = (**(code **)(*piVar2 + 0xc))();
        if (0 < iVar4) {
          iVar4 = (**(code **)(*piVar2 + 0xc))();
          puStack_388 = operator_new(iVar4 * 100);
          iVar4 = (**(code **)(*piVar2 + 0xc))();
          puVar9 = operator_new(iVar4 * 100);
          puVar14 = (undefined1 *)0x1;
          iVar4 = (**(code **)(*piVar2 + 0xc))();
          if (0 < iVar4) {
            puVar10 = puVar9 + -(int)auStack_318;
            pcVar20 = puStack_388 + -(int)puVar9;
            do {
              cVar1 = (**(code **)(*piVar2 + 0x38))(puVar14,auStack_318);
              if (cVar1 == '\0') {
                puVar16[(int)puVar10] = 0;
                *puVar10 = 0;
              }
              else {
                iVar4 = 0;
                pcVar17 = pcVar20;
                if (puVar18 != (undefined1 *)0x1 && -1 < (int)(puVar18 + -1)) {
                  do {
                    if (((((puVar16[(int)pcVar20] != '\0') && (*pcVar20 != '\0')) &&
                         (iVar11 = __strcmpi(puVar16 + (int)pcVar20,acStack_2ee), iVar11 == 0)) &&
                        (iVar11 = __strcmpi(pcVar20,acStack_320), iVar11 == 0)) ||
                       (iVar11 = __strcmpi(s_b_dm_armor_5015433c,acStack_2ee), iVar11 == 0)) {
                      (*DAT_5015ca24)(s_Narrowly_avoiding_re_register_on_50154304,acStack_320,
                                      acStack_2ee);
                      pcVar20 = pcVar17;
                      goto LAB_500ef467;
                    }
                    iVar4 = iVar4 + 1;
                    pcVar20 = pcVar20 + 100;
                  } while (iVar4 < (int)(puVar18 + -1));
                }
                FUN_500a5290(puVar5,acStack_320);
                pcVar20 = pcVar17;
LAB_500ef467:
                pcVar17 = acStack_2ee;
                do {
                  cVar1 = *pcVar17;
                  pcVar17[(int)puStack_388] = cVar1;
                  pcVar17 = pcVar17 + 1;
                } while (cVar1 != '\0');
                pcVar17 = acStack_320;
                do {
                  cVar1 = *pcVar17;
                  pcVar17[(int)puVar9] = cVar1;
                  pcVar17 = pcVar17 + 1;
                  piVar6 = piVar3;
                } while (cVar1 != '\0');
              }
              puStack_388 = puStack_388 + 100;
              puVar10 = puVar10 + 100;
              puVar9 = puVar9 + 100;
              puVar14 = puVar18 + 1;
              puVar18 = puVar14;
              iVar4 = (**(code **)(*piVar2 + 0xc))();
            } while ((int)puVar14 <= iVar4);
          }
          FUN_50106b60(puStack_388);
          FUN_50106b60(puVar9);
        }
        FUN_500a4de0(puVar5);
      }
      FUN_500a5d10(puVar5,(int)piVar3);
      piVar3[0xd] = 0x400000;
      if (piVar6 != (int *)0x0) {
        for (iVar4 = (**(code **)(*piVar2 + 0x10))(); 0 < iVar4; iVar4 = iVar4 + -1) {
          cVar1 = (**(code **)(*piVar2 + 0x3c))(iVar4,auStack_1b8);
          if ((cVar1 != '\0') &&
             (piVar13 = (int *)(*DAT_5015cae4)(auStack_150), piVar13 != (int *)0x0)) {
            FUN_500fe2b0();
            (**(code **)(*DAT_5015d28c + 0x58))(auStack_88);
            cVar1 = (**(code **)(*piVar13 + 0x44))();
            if ((cVar1 != '\0') &&
               (pcVar20 = (char *)(**(code **)(*piVar13 + 0x20))(), *pcVar20 != '\0')) {
              (**(code **)(*piVar13 + 0x38))(1,auStack_31c);
              iVar11 = *piVar6;
              uVar19 = (**(code **)(*piVar13 + 0x20))(auStack_18e,puVar18,auStack_2f2,uStack_1c4);
              uVar19 = (**(code **)(*piVar13 + 0x18))(uVar19);
              (**(code **)(iVar11 + 0xd0))(puVar16,auStack_1c0,uVar19);
            }
            (**(code **)(*piVar13 + 0x48))(1);
          }
        }
        (**(code **)(*piVar2 + 0x34))(auStack_ec);
        puVar16 = auStack_f0;
        (**(code **)(*piVar6 + 0xa0))(piVar3,&DAT_5015911c,1,7);
        (**(code **)(*piVar6 + 0x88))(piVar3);
        (**(code **)(**(int **)(puVar16 + 0xc) + 0x54))(piVar3);
        (**(code **)(*piVar2 + 0x48))(1);
        (**(code **)(*piVar6 + 0xf0))(1);
        uVar19 = FUN_500c3880(piVar3);
        ExceptionList = pvStack_c;
        return CONCAT31((int3)((uint)uVar19 >> 8),1);
      }
      (**(code **)(*piVar2 + 0x48))(1);
      uVar12 = FUN_500c3880(piVar3);
    }
  }
  ExceptionList = pvStack_c;
  return uVar12 & 0xffffff00;
}

