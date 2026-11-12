// rea decompile_all
// name: FUN_500aa030
// address: 0x500aa030
// body: available
// range: 0x500aa030-0x500aa651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500aa030(char *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 auStack_44 [56];
  char *pcStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcVar3 = param_1;
  *(char **)(param_1 + 0x1b4) = (char *)(param_2 + 4);
  iVar4 = __strcmpi(s_item_ctf_flag_501442a4,(char *)(param_2 + 4));
  if (((iVar4 == 0) && (*(int *)(DAT_5015c8c8 + 0x18) != 0x40800000)) ||
     ((iVar4 = __strcmpi(s_item_control_flag_50144238,*(char **)(param_1 + 0x1b4)), iVar4 == 0 &&
      (*(int *)(DAT_5015c8c8 + 0x18) != 0x40c00000)))) {
    (*DAT_5015ca24)(s_No_flags_in_non_control_or_CTF_p_5014bacc);
    FUN_500c3880((int *)param_1);
    return;
  }
  iVar4 = __strcmpi(s_item_control_flag_50144238,*(char **)(param_1 + 0x1b4));
  if ((iVar4 == 0) && (iVar4 = (**(code **)(*DAT_5015c4d8 + 0xe8))(), iVar4 == 5)) {
    (*DAT_5015ca24)(s_Max_Control_Flag_count_of__d_rea_5014ba94,5);
    FUN_500c3880((int *)param_1);
    return;
  }
  pcVar3[0x11c] = '\0';
  pcVar3[0x11d] = '\0';
  pcVar3[0x11e] = '\0';
  pcVar3[0x11f] = -0x3f;
  pcVar3[0x120] = '\0';
  pcVar3[0x121] = '\0';
  pcVar3[0x122] = '\0';
  pcVar3[0x123] = -0x3f;
  pcVar3[0x124] = '\0';
  pcVar3[0x125] = '\0';
  pcVar3[0x126] = '\0';
  pcVar3[0x127] = -0x3f;
  pcVar3[0x128] = '\0';
  pcVar3[0x129] = '\0';
  pcVar3[0x12a] = '\0';
  pcVar3[299] = 'A';
  pcVar3[300] = '\0';
  pcVar3[0x12d] = '\0';
  pcVar3[0x12e] = '\0';
  pcVar3[0x12f] = 'A';
  pcVar3[0x130] = '\0';
  pcVar3[0x131] = '\0';
  pcVar3[0x132] = '\0';
  pcVar3[0x133] = 'A';
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  pcVar3[0x294] = '\0';
  pcVar3[0x295] = '\0';
  pcVar3[0x296] = '\0';
  pcVar3[0x297] = '\0';
  pcVar3[0x158] = '\x01';
  pcVar3[0x159] = '\0';
  pcVar3[0x15a] = '\0';
  pcVar3[0x15b] = '\0';
  pcVar7 = (char *)(-(uint)(*(char *)(param_2 + 0xb0U) != '\0') & param_2 + 0xb0U);
  if (*(int *)(param_2 + 0x44) == 3) {
    if (*(int *)(param_2 + 0x54) == 0x24) {
      if (*(int *)(param_1 + 0x318) == 1) {
        param_1 = s_ctf_flag_blue_50144c38;
        uVar9 = 8;
      }
      else {
        param_1 = s_ctf_flag_red_50144c48;
        uVar9 = 9;
      }
      (*DAT_5015cb00)(uVar9,&DAT_50133428);
      *(char **)(pcVar3 + 0x1b4) = param_1;
      pcVar7 = param_1;
    }
    param_1 = pcVar7;
    pcVar7 = param_1;
    if ((*(int *)(param_2 + 0x44) == 3) && (*(int *)(param_2 + 0x54) == 0x27)) {
      pcVar3[0x318] = '\0';
      pcVar3[0x319] = '\0';
      pcVar3[0x31a] = '\0';
      pcVar3[0x31b] = '\0';
      param_1 = s_ctf_flag_grey_5014ba84;
      iVar4 = (**(code **)(*DAT_5015c4d8 + 0xe8))();
      *(float *)(pcVar3 + 0x3d0) = (float)iVar4;
      (**(code **)(*DAT_5015c4d8 + 0xec))(*(undefined4 *)(pcVar3 + 0x1ac));
      lVar8 = __ftol();
      *(int *)(pcVar3 + 0x38c) = (int)lVar8;
      pcVar7 = param_1;
    }
  }
  param_1 = pcVar7;
  piVar1 = *(int **)(param_2 + 0xa4);
  if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
    (*DAT_5015ca24)(s_No_model_specified_for__s__can_t_5014ba5c,*(undefined4 *)(pcVar3 + 0x1b4));
  }
  else {
    FUN_500b3870((uint)pcVar3,piVar1,param_1,0);
    if ((*(int *)(param_2 + 0x44) == 2) && (iVar4 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar4 != 0))
    {
      FUN_500b4160((int)pcVar3,*(undefined4 *)(*(int *)(param_2 + 0x100) + 4),0);
    }
    if (*(int *)(param_2 + 0x54) == 0x1f) {
      FUN_500b4160((int)pcVar3,*(undefined4 *)(*(int *)(param_2 + 0xa4) + 4),0);
    }
  }
  piVar1 = *(int **)(pcVar3 + 0x164);
  if (piVar1 != (int *)0x0) {
    fVar2 = *(float *)(param_2 + 0xf0);
    uStack_4 = 0;
    if (fVar2 != 1.0) {
      (**(code **)(*piVar1 + 8))(auStack_44);
      FUN_500ed060(&stack0xffffffb8,param_1);
      (**(code **)*piVar1)(&stack0xffffffb8);
    }
    if ((*(int *)(param_2 + 0x54) == 0x24) || (*(int *)(param_2 + 0x54) == 0x27)) {
      piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
      uVar9 = (**(code **)(*piVar5 + 0x1c))(s_quake_ground_5012f83c);
      (**(code **)(*piVar1 + 0x74))(uVar9);
      pcVar3[0x124] = '\0';
      pcVar3[0x125] = '\0';
      pcVar3[0x126] = '\0';
      pcVar3[0x127] = '\0';
      piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
      uVar9 = (**(code **)(*piVar5 + 0x40))(s_ctf_flag_5014ba40);
      if ((short)uVar9 != 0) {
        piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
        uVar6 = (**(code **)(*piVar5 + 0x50))(uVar9,uStack_8,0);
        if ((short)uVar6 != 0) {
          (**(code **)(*piVar1 + 0x2c))(uVar9,uVar6,0);
        }
      }
      *(undefined4 *)(pcVar3 + 0x3cc) = *(undefined4 *)(pcVar3 + 0x318);
      pcVar3[0x11c] = '\0';
      pcVar3[0x11d] = '\0';
      pcVar3[0x11e] = -0x60;
      pcVar3[0x11f] = -0x3f;
      pcVar3[0x120] = '\0';
      pcVar3[0x121] = '\0';
      pcVar3[0x122] = -0x60;
      pcVar3[0x123] = -0x3f;
      pcVar3[0x124] = '\0';
      pcVar3[0x125] = '\0';
      pcVar3[0x126] = ' ';
      pcVar3[0x127] = -0x3f;
      pcVar3[0x128] = '\0';
      pcVar3[0x129] = '\0';
      pcVar3[0x12a] = -0x60;
      pcVar3[299] = 'A';
      pcVar3[300] = '\0';
      pcVar3[0x12d] = '\0';
      pcVar3[0x12e] = -0x60;
      pcVar3[0x12f] = 'A';
      pcVar3[0x130] = '\0';
      pcVar3[0x131] = '\0';
      pcVar3[0x132] = -0x10;
      pcVar3[0x133] = 'A';
      *(uint *)(pcVar3 + 0x34) = *(uint *)(pcVar3 + 0x34) | 0x1000;
      if (*(int *)(param_2 + 0x54) == 0x24) {
        piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
        uVar9 = (**(code **)(*piVar5 + 0x1c))(s_world_light_5014ba34);
        if ((short)uVar9 != 0) {
          (**(code **)(*piVar1 + 0x20))(uVar9,0);
        }
        iVar4 = __strcmpi(s_ctf_flag_red_50144c48,pcStack_c);
        if (iVar4 == 0) {
          piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
          goto LAB_500aa413;
        }
        piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
        pcVar7 = s_world_light_red_5014ba24;
      }
      else {
        piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
        uVar9 = (**(code **)(*piVar5 + 0x1c))(s_world_light_red_5014ba24);
        if ((short)uVar9 != 0) {
          (**(code **)(*piVar1 + 0x20))(uVar9,0);
        }
        piVar5 = (int *)(**(code **)(*piVar1 + 0x88))();
LAB_500aa413:
        pcVar7 = s_world_light_blue_5014ba10;
      }
      uVar9 = (**(code **)(*piVar5 + 0x1c))(pcVar7);
      if ((short)uVar9 != 0) {
        (**(code **)(*piVar1 + 0x20))(uVar9,0);
      }
    }
    *(float *)(pcVar3 + 0x11c) = fVar2 * *(float *)(pcVar3 + 0x11c);
    *(float *)(pcVar3 + 0x120) = fVar2 * *(float *)(pcVar3 + 0x120);
    *(float *)(pcVar3 + 0x124) = fVar2 * *(float *)(pcVar3 + 0x124);
    *(float *)(pcVar3 + 0x128) = fVar2 * *(float *)(pcVar3 + 0x128);
    *(float *)(pcVar3 + 300) = fVar2 * *(float *)(pcVar3 + 300);
    *(float *)(pcVar3 + 0x130) = fVar2 * *(float *)(pcVar3 + 0x130);
    *(undefined4 *)(pcVar3 + 0x124) = *(undefined4 *)(param_2 + 0xfc);
  }
  DAT_5015cbb0 = 0x437f0000;
  DAT_5015cbb4 = 0x437f0000;
  DAT_5015cbb8 = 0x437f0000;
  *(undefined4 *)(pcVar3 + 0x310) = *(undefined4 *)(param_2 + 0x54);
  if (*(int *)(param_2 + 0x44) == 1) {
    FUN_500f62e0((byte)*(undefined4 *)(param_2 + 0x48));
  }
  if ((*(int *)(param_2 + 0x44) != 3) ||
     ((*(int *)(param_2 + 0x54) != 0x24 && (*(int *)(param_2 + 0x54) != 0x27)))) {
    iVar4 = *(int *)(pcVar3 + 0x318);
    if (iVar4 == 0) {
      uVar9 = *(undefined4 *)(param_2 + 0x4c);
    }
    else {
      if (-1 < iVar4) goto LAB_500aa512;
      uVar9 = (*DAT_5015cb24)(0,-iVar4);
    }
    *(undefined4 *)(pcVar3 + 0x318) = uVar9;
  }
LAB_500aa512:
  pcVar3[0x2d4] = '\0';
  pcVar3[0x2d5] = '\0';
  pcVar3[0x2d6] = '\0';
  pcVar3[0x2d7] = '\0';
  switch(*(undefined4 *)(param_2 + 0x44)) {
  case 0:
    *(code **)(pcVar3 + 0x2c0) = FUN_500a8aa0;
    break;
  case 1:
    *(undefined1 **)(pcVar3 + 0x2c0) = &LAB_500a8c50;
    break;
  case 2:
    if (100 < *(int *)(pcVar3 + 0x318)) {
      pcVar3[0x318] = 'd';
      pcVar3[0x319] = '\0';
      pcVar3[0x31a] = '\0';
      pcVar3[0x31b] = '\0';
    }
    *(code **)(pcVar3 + 0x2c0) = FUN_500a9350;
    break;
  case 3:
    if (*(int *)(param_2 + 0x54) == 0x24) {
      *(undefined1 **)(pcVar3 + 0x2c0) = &LAB_500a9ad0;
    }
    else if (*(int *)(param_2 + 0x54) == 0x27) {
      *(undefined1 **)(pcVar3 + 0x2c0) = &LAB_500a96f0;
    }
    else {
      *(undefined1 **)(pcVar3 + 0x2c0) = &LAB_500a9190;
    }
    break;
  case 4:
    *(code **)(pcVar3 + 0x2c0) = FUN_50096c00;
    break;
  case 5:
    *(code **)(pcVar3 + 0x2c0) = FUN_500a9ec0;
  }
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (((iVar4 != 0) &&
      (((*(int *)(param_2 + 0x44) == 2 || (*(int *)(param_2 + 0x44) == 1)) &&
       ((*(uint *)(pcVar3 + 0x1b8) & 0x10000) == 0)))) &&
     (iVar4 = (**(code **)(*DAT_5015c4d8 + 0x6c))(), iVar4 != 0)) {
    *(uint *)(pcVar3 + 0x30) = *(uint *)(pcVar3 + 0x30) | 0x2000;
    if (*(int *)(param_2 + 0x44) == 1) {
      if (*(int *)(param_2 + 0x48) == 9) {
        pcVar3[0x18] = '\0';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = -0x4c;
        pcVar3[0x1b] = -0x3e;
      }
      else {
        pcVar3[0x18] = '\0';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = -0x4c;
        pcVar3[0x1b] = 'B';
      }
    }
    pcVar3[0x288] = '\0';
    pcVar3[0x289] = '\0';
    pcVar3[0x28a] = '\0';
    pcVar3[0x28b] = '\0';
    *(float *)(pcVar3 + 0xc) = *(float *)(pcVar3 + 0xc) + 6.0;
  }
  (*DAT_5015cb28)(pcVar3);
  FUN_5006a560(&DAT_5015c7b8,(int)pcVar3);
  iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar4 != 0) {
    (**(code **)(*DAT_5015c4d8 + 0x18))(pcVar3,param_2);
  }
  return;
}

