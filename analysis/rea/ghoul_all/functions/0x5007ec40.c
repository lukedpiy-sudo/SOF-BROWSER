// rea decompile_all
// name: FUN_5007ec40
// address: 0x5007ec40
// body: available
// range: 0x5007ec40-0x500804c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007ec40(void *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  void *this;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  char *pcVar12;
  float10 fVar13;
  int iVar14;
  undefined4 uStack_88;
  undefined4 local_80;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_58;
  uint local_54;
  int *piStack_50;
  int iStack_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int iStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_50114cab;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  iVar7 = *(int *)((int)param_1 + 0x114);
  iVar14 = *(int *)((int)param_1 + 0x104);
  local_10 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  bVar1 = *(byte *)(iVar14 + iVar7);
  ExceptionList = &pvStack_c;
  *(int *)((int)param_1 + 0x114) = iVar7 + 1;
  bVar2 = *(byte *)(iVar7 + 1 + iVar14);
  *(int *)((int)param_1 + 0x114) = iVar7 + 2;
  uVar3 = *(undefined1 *)(iVar14 + iVar7 + 2);
  *(int *)((int)param_1 + 0x114) = iVar7 + 3;
  local_80 = CONCAT13(*(undefined1 *)(iVar14 + iVar7 + 3),CONCAT12(uVar3,CONCAT11(bVar2,bVar1)));
  local_60 = 0;
  local_7c = 0;
  uVar5 = local_54 >> 8;
  local_54 = local_54 & 0xffffff00;
  local_68 = (int *)0x0;
  local_6c = (int *)0x0;
  local_70 = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_78 = (undefined4 *)0x0;
  local_58 = 0;
  local_74 = 1;
  *(int *)((int)param_1 + 0x114) = iVar7 + 4;
  if ((bVar2 & 4) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_68 = (int *)0x0;
    }
    else {
      local_68 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    local_7c = (**(code **)(*local_68 + 4))();
  }
  if ((bVar2 & 2) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_6c = (int *)0x0;
    }
    else {
      local_6c = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    local_60 = (**(code **)(*local_6c + 4))();
  }
  if ((char)bVar1 < '\0') {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_70 = (int *)0x0;
    }
    else {
      local_70 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    local_58 = (**(code **)(*local_70 + 0x10))();
  }
  if ((bVar1 & 0x10) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_44 = (int *)0x0;
    }
    else {
      local_44 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    (**(code **)(*local_44 + 0x10))();
  }
  if ((bVar1 & 8) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_78 = (undefined4 *)0x0;
    }
    else {
      local_78 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
  }
  if ((bVar1 & 4) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_38 = (int *)0x0;
    }
    else {
      local_38 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    (**(code **)(*local_38 + 0xc))(&local_18);
  }
  if ((bVar1 & 2) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_3c = (int *)0x0;
    }
    else {
      local_3c = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    (**(code **)(*local_3c + 0xc))(&local_24);
  }
  if ((bVar1 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_40 = (int *)0x0;
    }
    else {
      local_40 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    local_74 = (**(code **)(*local_40 + 4))();
  }
  if ((bVar1 & 0x20) != 0) {
    local_54 = CONCAT31((int3)uVar5,1);
  }
  if ((bVar1 & 0x40) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_48 = (int *)0x0;
    }
    else {
      local_48 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
      *(int *)piVar9[1] = *piVar9;
      *(int *)(*piVar9 + 4) = piVar9[1];
      FUN_50106b60((undefined *)piVar9);
      *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
    }
    fVar13 = (float10)(**(code **)(*local_48 + 8))();
    fStack_64 = (float)fVar13;
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    piVar10 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
    *(int *)piVar10[1] = *piVar10;
    *(int *)(*piVar10 + 4) = piVar10[1];
    FUN_50106b60((undefined *)piVar10);
    *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
  }
  uVar6 = (**(code **)(*piVar9 + 4))();
  if (*(int *)((int)param_1 + 0x148) == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x144) + 4);
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_50106b60((undefined *)piVar4);
    *(int *)((int)param_1 + 0x148) = *(int *)((int)param_1 + 0x148) + -1;
  }
  iVar7 = (**(code **)(*piVar10 + 0x10))();
  if (iVar7 != 0) {
    uVar11 = 0;
    pcVar12 = (char *)0x0;
    uStack_88 = 0;
    if (((bVar1 & 0x40) == 0) && (fStack_64 = 9999.9, local_7c == 0)) {
      fStack_64 = 50.0;
    }
    piVar10 = *(int **)(iVar7 + 0x450);
    if (piVar10 == (int *)0x0) {
      FUN_500adb20((byte *)s_entity__s_had_no_ai__aborting_Ha_50145cec);
      ExceptionList = pvStack_c;
      return;
    }
    (**(code **)(*piVar10 + 0x18c))();
    piStack_50 = (int *)(**(code **)(*piVar10 + 0xd4))(iVar7);
    if (piStack_50 == (int *)0x0) {
      this = operator_new(0xe8);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        piStack_50 = (int *)0x0;
      }
      else {
        piStack_50 = FUN_500402e0(this,0,0x19,0.0,iVar7);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar10 + 0x38))(piStack_50,iVar7);
    }
    if (local_7c == 0) {
      switch(uVar6) {
      case 1:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        break;
      case 2:
        uVar11 = 3;
        uStack_88 = 0x41200000;
        break;
      case 5:
      case 0xfc:
        uVar11 = 6;
        pcVar12 = s_std_stoknees_2bk_n_n_50135e00;
        break;
      case 6:
        uVar11 = 6;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_sblown_2bk_n_n_50136278;
        break;
      case 7:
      case 0x132:
        pcVar12 = s_std_xcrouch_dwn_pk_a_50136068;
        break;
      case 8:
        pcVar12 = s_cch_xcrouch_mid_pk_a_501360c0;
        break;
      case 9:
      case 0x51:
        pcVar12 = s_cch_xcrouch_up_pk_a_50136170;
        break;
      case 0xf:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        break;
      case 0x14:
      case 0x161:
        pcVar12 = s_std_icleangun2_n_pk_n_50136b10;
        break;
      case 0x15:
        pcVar12 = s_std_ilooking_n_a_a_501361c8;
        break;
      case 0x16:
        pcVar12 = s_std_imonitorup_n_a_n_50136b68;
        break;
      case 0x17:
        pcVar12 = s_std_italk_n_a_n_50136bc0;
        break;
      case 0x18:
        pcVar12 = s_std_italkgest1_n_a_n_50136c18;
        break;
      case 0x19:
        pcVar12 = s_std_italkgest2_n_a_n_50136c70;
        break;
      case 0x1a:
        pcVar12 = s_std_italkgest3_n_a_n_50136cc8;
        break;
      case 0x1b:
        pcVar12 = s_std_iwipebrow_n_a_n_50136d20;
        break;
      case 0x1d:
        pcVar12 = s_std_ilooking_n_mrs_2_50136a08;
        break;
      case 0x1e:
        pcVar12 = s_std_xalarmpush_n_a_n_50136d78;
        break;
      case 0x1f:
        pcVar12 = s_std_istand_n_mrs_2_501369b0;
        break;
      case 0x20:
        pcVar12 = s_std_italk_n_mrs_2_50138428;
        break;
      case 0x21:
        pcVar12 = s_std_iturnvalve_frm_n_n_50138a00;
        break;
      case 0x22:
        pcVar12 = s_std_iturnvalve_n_n_n_50138a58;
        break;
      case 0x23:
        pcVar12 = s_std_iturnvalve_to_n_n_50138ab0;
        break;
      case 0x24:
        uVar11 = 4;
        pcVar12 = s_std_jdrop_n_a_a_50135f60;
        break;
      case 0x25:
        pcVar12 = s_std_mkicklow_n_a_a_50138b08;
        break;
      case 0x26:
        pcVar12 = s_std_mpistolwhip_n_p_n_50138b60;
        break;
      case 0x27:
        uVar11 = 6;
        pcVar12 = s_std_sinback_2frnt_n_n_50138bb8;
        break;
      case 0x28:
        pcVar12 = s_std_xyellpoint_fwd_a_n_50136dd0;
        break;
      case 0x29:
        pcVar12 = s_std_xyellwave_bk_a_n_50136e28;
        break;
      case 0x2a:
        uVar11 = 2;
        pcVar12 = s_std_fattitude_n_p_a_50135eb0;
        break;
      case 0x2b:
        uVar11 = 5;
        pcVar12 = s_ls_xgetkicked_n_n_n_50138c10;
        break;
      case 0x2c:
        pcVar12 = s_si_xbywall_n_n_n_50138c68;
        break;
      case 0x2d:
        uVar11 = 6;
        pcVar12 = s_std_sstumble_2bk_p_n_50138cc0;
        break;
      case 0x2e:
        uVar11 = 1;
        pcVar12 = s_std_wpush_n_n_n_50138d18;
        break;
      case 0x2f:
        pcVar12 = s_std_xafraidshake_n_n_n_501386e8;
        break;
      case 0x30:
        pcVar12 = s_std_xkickdoor_n_a_a_50138d70;
        break;
      case 0x31:
        pcVar12 = s_std_xyellatyou_n_a_a_50138dc8;
        break;
      case 0x32:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wcarry1_n_n_n_50136f88;
        break;
      case 0x33:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wnormal_n_pk_a_50135ca0;
        break;
      case 0x34:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wpatrol_n_mrs_2_50136fe0;
        break;
      case 0x35:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wbcksignal_n_n_n_50137350;
        break;
      case 0x36:
        pcVar12 = s_std_ileanlook_frm_pk_n_50138e20;
        break;
      case 0x37:
        pcVar12 = s_std_ileanlook_mid_pk_n_50138e78;
        break;
      case 0x38:
        pcVar12 = s_std_ileanlook_to_pk_n_50138ed0;
        break;
      case 0x39:
        uVar11 = 3;
        pcVar12 = s_std_jdown_n_a_a_50138f28;
        break;
      case 0x3a:
        uVar11 = 2;
        pcVar12 = s_std_f_fwd_p_2_50136538;
        break;
      case 0x3b:
        uVar11 = 2;
        pcVar12 = s_std_f_fwd_s_2_50137b38;
        break;
      case 0x3c:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_r_n_mrs_2_50137038;
        break;
      case 0x3d:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_r_n_pk_n_50135cf8;
        break;
      case 0x3e:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rgunup_n_p_2_50135da8;
        break;
      case 0x3f:
        pcVar12 = s_std_xdontshoot_n_a_n_50139ce8;
        break;
      case 0x40:
        pcVar12 = s_std_xfearwave_n_n_n_50139d40;
        break;
      case 0x41:
        uVar11 = 2;
        pcVar12 = s_std_fcornerpeak_lt_p_a_501372a0;
        break;
      case 0x42:
        uVar11 = 2;
        pcVar12 = s_std_fcornerpeak_rt_p_a_501372f8;
        break;
      case 0x43:
        pcVar12 = s_std_ialert_n_p_n_50137fb0;
        break;
      case 0x44:
        pcVar12 = s_std_icleangun2_n_mrs_2_5013a1b8;
        break;
      case 0x45:
        pcVar12 = s_std_imonitorup2_n_a_n_5013a210;
        break;
      case 0x46:
        uVar11 = 3;
        pcVar12 = s_std_jdive2prone_n_a_n_50136e80;
        break;
      case 0x47:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rafraid_n_n_n_501362d0;
        break;
      case 0x48:
        uVar11 = 6;
        pcVar12 = s_std_sblown_2bk_n_n_50136278;
        break;
      case 0x49:
        pcVar12 = s_std_xboomcrouch_n_a_n_50136ed8;
        break;
      case 0x4a:
        pcVar12 = s_std_xtumble_2frnt_n_n_50136f30;
        break;
      case 0x4b:
        uVar11 = 3;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_jrun_fwd_a_a_50138798;
        break;
      case 0x4c:
        pcVar12 = s_std_ismoke_frm_a_n_5013a2c0;
        break;
      case 0x4d:
        pcVar12 = s_std_ismoke_n_a_n_5013a318;
        break;
      case 0x4e:
        pcVar12 = s_std_ismoke_to_a_n_5013a370;
        break;
      case 0x4f:
        pcVar12 = s_std_itouchnuts_n_a_n_5013a268;
        break;
      case 0x50:
        pcVar12 = s_cch_xcrouch_up_mrs_2_50137cf0;
        break;
      case 0x52:
        pcVar12 = s_cch_a_fwd_p_2_50136328;
        break;
      case 0x53:
        pcVar12 = s_cch_a_fwd_r_2_50137198;
        break;
      case 0x54:
        uVar11 = 6;
        pcVar12 = s_cch_sonknees_2frnt_n_n_50138950;
        break;
      case 0x56:
        pcVar12 = s_cch_xcchcower_mid_a_a_50138f80;
        break;
      case 0x57:
      case 0x86:
        pcVar12 = s_cch_xcchcower2_mid_a_a_50138fd8;
        break;
      case 0x58:
        pcVar12 = s_prn_xcoverhead_n_a_a_5013a058;
        break;
      case 0x59:
        uVar11 = 6;
        pcVar12 = s_std_sviolent_n_n_n_50139fa8;
        break;
      case 0x5a:
        uVar11 = 6;
        pcVar12 = s_lb_pgenericdie_n_n_n_501376c0;
        break;
      case 0x5b:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wattitude_n_pk_a_50135f08;
        break;
      case 0x5c:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wjog_n_mrs_2_5013a3c8;
        break;
      case 0x5d:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wjoggundwn_n_p_2_5013a420;
        break;
      case 0x5e:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wjoggunup_n_p_a_5013a478;
        break;
      case 0x5f:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wpushcart_n_n_n_5013a4d0;
        break;
      case 0x60:
        uVar11 = 2;
        pcVar12 = s_std_fautosweep_n_pm_a_5013a528;
        break;
      case 0x61:
        uVar11 = 2;
        pcVar12 = s_std_fgangbanger_n_m_2_5013a580;
        break;
      case 0x62:
        uVar11 = 2;
        pcVar12 = s_std_fswatstyle_fwd_m_2_5013a5d8;
        break;
      case 99:
        uVar11 = 8;
        break;
      case 100:
        uVar11 = 2;
        pcVar12 = s_std_fviolent_dwn_m_2_5013a630;
        break;
      case 0x65:
        uVar11 = 2;
        pcVar12 = s_std_fviolent_dwn_p_n_5013a688;
        break;
      case 0x66:
        uVar11 = 3;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_jupto_n_a_a_50135e58;
        break;
      case 0x67:
        pcVar12 = s_std_mninjakick_n_a_b_5013a6e0;
        break;
      case 0x68:
        pcVar12 = s_std_mriflebutt_n_mrs_2_5013a738;
        break;
      case 0x69:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_r_dwnst_mrs_2_50139d98;
        break;
      case 0x6a:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_raimstraf_lt_mrs_2_50137df8;
        break;
      case 0x6b:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_raimstraf_lt_p_cbn_50137d48;
        break;
      case 0x6c:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_raimstraf_rt_mrs_2_50137e50;
        break;
      case 0x6d:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_raimstraf_rt_p_cbn_50137da0;
        break;
      case 0x6e:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rbackaim_n_mrs_2_50139ad8;
        break;
      case 0x6f:
        uVar11 = 1;
        uStack_88 = 0x43160000;
      case 0x55:
        pcVar12 = s_cch_xonknees_n_n_n_501389a8;
        break;
      case 0x70:
        uVar11 = 6;
        pcVar12 = s_std_sfallfwd_2frnt_n_n_5013a790;
        break;
      case 0x71:
        uVar11 = 6;
        pcVar12 = s_std_sstumble_2frnt_n_n_5013a7e8;
        break;
      case 0x72:
        pcVar12 = s_std_xcchcower_dwn_a_a_50139a80;
        break;
      case 0x73:
        pcVar12 = s_std_xchoke_n_n_n_5013a840;
        break;
      case 0x74:
        pcVar12 = s_std_xdance_n_n_n_5013a898;
        break;
      case 0x75:
        pcVar12 = s_std_xgoprone_n_a_a_5013a8f0;
        break;
      case 0x76:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_xladder_dwn_a_a_5013a948;
        break;
      case 0x77:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_xladder_up_a_a_5013a9a0;
        break;
      case 0x78:
        pcVar12 = s_std_xroll_lt_a_a_501380b8;
        break;
      case 0x79:
        pcVar12 = s_std_xroll_rt_a_a_50138060;
        break;
      case 0x7a:
        pcVar12 = s_std_xrolltocch_fwd_a_a_5013a9f8;
        break;
      case 0x7b:
        pcVar12 = s_std_xstartled_n_a_a_50139710;
        break;
      case 0x7c:
        pcVar12 = s_std_xstumble_n_a_a_5013aa50;
        break;
      case 0x7d:
        pcVar12 = s_si_isit_n_a_a_5013aaa8;
        break;
      case 0x7e:
        pcVar12 = s_si_xalertstand_up_a_a_5013ab00;
        break;
      case 0x7f:
        pcVar12 = s_prn_c_n_a_2_5013af20;
        break;
      case 0x80:
        pcVar12 = s_prn_xcoverhead_to_a_a_5013a000;
        break;
      case 0x81:
        uVar11 = 4;
        pcVar12 = s_prn_xfalling_n_n_n_5013ab58;
        break;
      case 0x82:
        uVar11 = 6;
        pcVar12 = s_prn_xfallland_n_n_n_5013abb0;
        break;
      case 0x83:
        pcVar12 = s_prn_xtostand_n_a_a_5013ac08;
        break;
      case 0x84:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_cch_raim_fwd_mrs_2_5013ac60;
        break;
      case 0x85:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_cch_raim_fwd_p_2_5013acb8;
        break;
      case 0x88:
        uVar11 = 6;
        pcVar12 = s_lb_xleanupshoot_n_p_n_5013ad68;
        break;
      case 0x89:
        pcVar12 = s_cch_a_fwd_ms_2_50137140;
        break;
      case 0x8a:
        uVar11 = 2;
        pcVar12 = s_cch_f_fwd_l_2_5013adc0;
        break;
      case 0x8b:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_cch_raim_n_l_2_5013ae18;
        break;
      case 0x8c:
        uVar11 = 2;
        pcVar12 = s_cch_tlobgrenade_n_a_n_5013ae70;
        break;
      case 0x8d:
        pcVar12 = s_std_echokeknees_to_n_n_5013b188;
        break;
      case 0x8e:
        pcVar12 = s_cch_echokeknees_n_n_n_5013b1e0;
        break;
      case 0x8f:
      case 0x13d:
        pcVar12 = s_cch_echokedeath_n_n_n_5013b708;
        break;
      case 0x90:
        pcVar12 = s_std_selectrocute_n_n_n_5013b760;
        break;
      case 0x91:
        pcVar12 = s_std_eoffladder_up_a_n_5013b7b8;
        break;
      case 0x92:
        pcVar12 = s_std_epounddoor_n_a_n_5013b810;
        break;
      case 0x93:
        uVar11 = 2;
        pcVar12 = s_std_f_fwd_r_2_50137be8;
        break;
      case 0x94:
        pcVar12 = s_std_ebustglass_n_mrs_2_5013b9c8;
        break;
      case 0x95:
        pcVar12 = s_std_ecomehere_n_a_n_5013c0a8;
        break;
      case 0x96:
        pcVar12 = s_std_efalldeath_n_n_n_5013c998;
        break;
      case 0x97:
        uVar11 = 6;
        pcVar12 = s_std_efallimpact_n_n_n_5013c9f0;
        break;
      case 0x98:
        pcVar12 = s_std_efliptable_n_a_n_5013ba20;
        break;
      case 0x99:
        pcVar12 = s_std_epushbuttons_n_n_n_5013ba78;
        break;
      case 0x9a:
        uVar11 = 1;
        pcVar12 = s_std_epushcrate_n_a_n_5013bad0;
        break;
      case 0x9b:
        pcVar12 = s_std_esignalalarm_n_a_n_5013bb28;
        break;
      case 0x9c:
        pcVar12 = s_std_etyping_n_n_n_5013bb80;
        break;
      case 0x9d:
        uVar11 = 1;
        pcVar12 = s_std_ewall2walk_n_mrs_2_5013bbd8;
        break;
      case 0x9e:
        uVar11 = 1;
        pcVar12 = s_std_ewall2walk_n_pk_n_5013bc30;
        break;
      case 0x9f:
        pcVar12 = s_std_ewallidle_n_mrs_2_5013bc88;
        break;
      case 0xa0:
        pcVar12 = s_std_ewallidle_n_pk_n_5013bce0;
        break;
      case 0xa1:
        pcVar12 = s_std_ewalllook_lt_mrs_2_5013bd38;
        break;
      case 0xa2:
        pcVar12 = s_std_ewalllook_lt_pk_n_5013bd90;
        break;
      case 0xa3:
        pcVar12 = s_std_ewalllook_rt_mrs_2_5013bde8;
        break;
      case 0xa4:
        pcVar12 = s_std_ewalllook_rt_pk_n_5013be40;
        break;
      case 0xa5:
        pcVar12 = s_std_ewrenchh_frm_n_n_5013be98;
        break;
      case 0xa6:
        pcVar12 = s_std_ewrenchh_n_n_n_5013bef0;
        break;
      case 0xa7:
        pcVar12 = s_std_ewrenchh_to_n_n_5013bf48;
        break;
      case 0xa8:
        pcVar12 = s_std_ewrenchv_frm_n_n_5013bfa0;
        break;
      case 0xa9:
        pcVar12 = s_std_ewrenchv_n_n_n_5013bff8;
        break;
      case 0xaa:
        pcVar12 = s_std_ewrenchv_to_n_n_5013c050;
        break;
      case 0xab:
        pcVar12 = s_std_ashuffle_n_p_2_50136850;
        break;
      case 0xac:
        pcVar12 = s_std_ashuffle_n_p_a_501368a8;
        break;
      case 0xad:
        pcVar12 = s_std_ashuffle_n_ms_2_50137f00;
        break;
      case 0xae:
        pcVar12 = s_std_ashuffle_n_r_2_50137f58;
        break;
      case 0xaf:
        pcVar12 = s_std_ashuffle_n_l_2_5013b5a8;
        break;
      case 0xb0:
        pcVar12 = s_std_ipiss_n_a_a_5013c100;
        break;
      case 0xb1:
        pcVar12 = s_std_athreat_dwn_p_n_5013c158;
        break;
      case 0xb2:
        pcVar12 = s_std_athreat_fwd_p_n_5013c1b0;
        break;
      case 0xb3:
        pcVar12 = s_std_athreatyel_dwn_p_n_5013c208;
        break;
      case 0xb4:
        pcVar12 = s_std_athreatyel_fwd_p_n_5013c260;
        break;
      case 0xb5:
        pcVar12 = s_std_eexaminewall_n_a_n_5013c2b8;
        break;
      case 0xb6:
        uVar11 = 2;
        pcVar12 = s_std_erageshoot_n_p_n_5013c368;
        break;
      case 0xb7:
        pcVar12 = s_std_esabremock_n_a_n_5013c3c0;
        break;
      case 0xb8:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rtostop_n_pk_n_5013c418;
        break;
      case 0xb9:
        pcVar12 = s_std_etalkboth_n_a_n_5013c470;
        break;
      case 0xba:
        pcVar12 = s_std_etalk_n_a_n_5013c4c8;
        break;
      case 0xbb:
        pcVar12 = s_std_eheadnod_n_a_n_5013c520;
        break;
      case 0xbc:
        pcVar12 = s_std_eheadshake_n_a_n_5013c578;
        break;
      case 0xbd:
        uVar11 = 3;
        pcVar12 = s_std_ejumprail_n_a_n_5013c5d0;
        break;
      case 0xbe:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wtostop_n_pk_a_5013c628;
        break;
      case 0xbf:
        pcVar12 = s_std_espin180_lt_a_n_5013c680;
        break;
      case 0xc0:
        pcVar12 = s_std_espin180_rt_a_n_5013c6d8;
        break;
      case 0xc1:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_etorun_n_p_n_5013c730;
        break;
      case 0xc2:
        pcVar12 = s_std_ilean_n_p_n_5013c788;
        break;
      case 0xc3:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wbackaim_n_ms_2_501393f8;
        break;
      case 0xc4:
        pcVar12 = s_std_etalkright_n_a_n_5013c7e0;
        break;
      case 0xc5:
        pcVar12 = s_std_eclimbledg_dwn_a_n_5013c838;
        break;
      case 0xc6:
        pcVar12 = s_std_eclimbledg_mid_a_n_5013c890;
        break;
      case 199:
        pcVar12 = s_std_eclimbledge_up_a_n_5013c8e8;
        break;
      case 200:
        pcVar12 = s_std_edropgrenade_n_a_n_5013c940;
        break;
      case 0xc9:
        pcVar12 = s_std_efrmshadow_n_mrs_2_5013ca48;
        break;
      case 0xca:
        pcVar12 = s_std_efrmshadow_n_p_n_5013caa0;
        break;
      case 0xcb:
        pcVar12 = s_std_ehandtalk_frm_p_n_5013caf8;
        break;
      case 0xcc:
        pcVar12 = s_std_ehandtalk_n_p_n_5013cb50;
        break;
      case 0xcd:
        pcVar12 = s_std_ehandtalk_to_mrs_n_5013cba8;
        break;
      case 0xce:
        pcVar12 = s_std_ehandtalk_to_p_n_5013cc00;
        break;
      case 0xcf:
        pcVar12 = s_std_ehandtalk_frm_mrs_n_5013cc58;
        break;
      case 0xd0:
        pcVar12 = s_std_eheadset_frm_p_n_5013ccb0;
        break;
      case 0xd1:
        pcVar12 = s_std_eheadset_mid_p_n_5013cd08;
        break;
      case 0xd2:
        pcVar12 = s_std_eheadset_to_p_n_5013cd60;
        break;
      case 0xd3:
        pcVar12 = s_std_esalute_frm_mrs_n_5013cdb8;
        break;
      case 0xd4:
        pcVar12 = s_std_esalute_n_mrs_n_5013ce10;
        break;
      case 0xd5:
        pcVar12 = s_std_esalute_to_mrs_n_5013ce68;
        break;
      case 0xd6:
        pcVar12 = s_std_etalkleft_n_a_n_5013cec0;
        break;
      case 0xd7:
        pcVar12 = s_std_etalklklt_frm_a_n_5013cf18;
        break;
      case 0xd8:
        pcVar12 = s_std_etalklklt_mid_a_n_5013cf70;
        break;
      case 0xd9:
        pcVar12 = s_std_etalklklt_to_a_n_5013cfc8;
        break;
      case 0xda:
        pcVar12 = s_std_etalklkrt_frm_a_n_5013d020;
        break;
      case 0xdb:
        pcVar12 = s_std_etalklkrt_mid_a_n_5013d078;
        break;
      case 0xdc:
        pcVar12 = s_std_etalklkrt_to_a_n_5013d0d0;
        break;
      case 0xdd:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_etorun_n_mrs_2_5013d128;
        break;
      case 0xde:
        pcVar12 = s_std_eturn90_lt_a_n_5013d180;
        break;
      case 0xdf:
        pcVar12 = s_std_eturn90_rt_a_n_5013d1d8;
        break;
      case 0xe0:
        pcVar12 = s_std_igunup_n_a_n_5013d230;
        break;
      case 0xe1:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_ronfire_n_n_n_5013d288;
        break;
      case 0xe2:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_ronfiretodth_n_n_n_5013d2e0;
        break;
      case 0xe3:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rtostop_n_mrs_2_5013d338;
        break;
      case 0xe4:
        uVar11 = 6;
        pcVar12 = s_std_sshoulder_lt_n_n_50136698;
        break;
      case 0xe5:
        pcVar12 = s_std_sunhurt_bk_pk_n_50139500;
        break;
      case 0xe6:
        pcVar12 = s_std_edropcrouch_n_a_a_5013d390;
        break;
      case 0xe7:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_trun_n_a_n_5013d3e8;
        break;
      case 0xe8:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_w_n_pn_n_5013d440;
        break;
      case 0xe9:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wcarry2_n_n_n_5013d498;
        break;
      case 0xea:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wtalk_lt_mrs_2_5013d4f0;
        break;
      case 0xeb:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_a4_cscramble_n_a_n_5013d548;
        break;
      case 0xec:
        pcVar12 = s_cch_enodleft_n_a_a_5013d5a0;
        break;
      case 0xed:
        pcVar12 = s_cch_enodright_n_a_a_5013d5f8;
        break;
      case 0xee:
        pcVar12 = s_cch_escantalk_lt_a_a_5013d650;
        break;
      case 0xef:
        pcVar12 = s_cch_escantalk_rt_a_a_5013d6a8;
        break;
      case 0xf0:
        pcVar12 = s_cch_iready_n_a_a_5013d700;
        break;
      case 0xf1:
        uVar11 = 2;
        pcVar12 = s_std_fautosweep_n_m_2_501383d0;
        break;
      case 0xf2:
        pcVar12 = s_std_l_n_ms_2_501397c0;
        break;
      case 0xf3:
        pcVar12 = s_std_istand_n_a_n_50135c48;
        break;
      case 0xf4:
        uVar11 = 2;
        pcVar12 = s_std_echokeshoot_n_a_n_5013d758;
        break;
      case 0xf5:
        uVar11 = 6;
        pcVar12 = s_std_sonfire_2bk_n_n_5013b080;
        break;
      case 0xf6:
        pcVar12 = s_std_etalk_frm_a_n_5013dff0;
        break;
      case 0xf7:
        pcVar12 = s_std_etalk_to_a_n_5013e048;
        break;
      case 0xf8:
        uVar11 = 3;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_jdrop_to_a_n_5013e1a8;
        break;
      case 0xf9:
        uVar11 = 2;
        pcVar12 = s_std_athreatsht_dwn_p_n_5013e200;
        break;
      case 0xfa:
        uVar11 = 6;
        pcVar12 = s_lb_pholdleg_lt_n_n_501367a0;
        break;
      case 0xfb:
        pcVar12 = s_std_xcock_n_s_2_5013e4c0;
        break;
      case 0xfd:
        uVar11 = 6;
        pcVar12 = s_std_sgut_2side_n_n_5013a108;
        break;
      case 0xfe:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_xladderfrm_up_a_a_5013e360;
        break;
      case 0xff:
        uVar11 = 5;
        pcVar12 = s_std_sgunfromhand_n_n_n_50138740;
        break;
      case 0x100:
        pcVar12 = s_cch_etostand_n_a_n_5013e3b8;
        break;
      case 0x101:
        pcVar12 = s_std_ininja_n_p_n_5013e410;
        break;
      case 0x102:
        uVar11 = 1;
        uStack_88 = 0x42c80000;
        pcVar12 = s_std_xhandspring_fwd_a_n_5013e468;
        break;
      case 0x103:
        pcVar12 = s_std_egangsalute_n_a_n_5013e780;
        break;
      case 0x104:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wbackwards_n_a_n_5013e7d8;
        break;
      case 0x105:
        uVar11 = 6;
        pcVar12 = s_std_ssabredeath_bk_n_n_5013e830;
        break;
      case 0x106:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wstealth_n_pk_n_5013e888;
        break;
      case 0x107:
        uVar11 = 3;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_jthrowstar_fwd_a_n_5013e8e0;
        break;
      case 0x108:
        pcVar12 = s_prn_a_n_a_2_5013e938;
        break;
      case 0x109:
        pcVar12 = s_std_eyell_n_a_n_5013e990;
        break;
      case 0x10a:
        pcVar12 = s_std_ialertlk_rt_mrs_2_5013e9e8;
        break;
      case 0x10b:
        pcVar12 = s_std_epushbuttonh_n_a_n_5013ea40;
        break;
      case 0x10c:
        pcVar12 = s_std_ialert_n_mrs_2_50138168;
        break;
      case 0x10d:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_rdynamic_n_a_n_5013ea98;
        break;
      case 0x10e:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_waim_fwd_p_2_50139240;
        break;
      case 0x10f:
        pcVar12 = s_std_a_fwd_p_2_50136380;
        break;
      case 0x110:
        pcVar12 = s_std_ietalkpose_n_a_n_5013eaf0;
        break;
      case 0x111:
        uVar11 = 2;
        pcVar12 = s_std_frapidsweep_lt_p_2_5013eb48;
        break;
      case 0x112:
        pcVar12 = s_std_ialerttrn_lt_p_n_5013eba0;
        break;
      case 0x113:
        pcVar12 = s_std_esuprise90_lt_a_n_5013ebf8;
        break;
      case 0x114:
        uVar11 = 2;
        pcVar12 = s_std_fautosweep_up_m_2_5013ec50;
        break;
      case 0x115:
        pcVar12 = s_std_xatkpause1_n_mrs_2_50137878;
        break;
      case 0x116:
        uVar11 = 1;
        uStack_88 = 0x40a00000;
        pcVar12 = s_lb_pcrawl_bk_p_n_5013ad10;
        break;
      case 0x117:
        pcVar12 = s_si_ewallidle_n_a_n_5013eca8;
        break;
      case 0x118:
        pcVar12 = s_si_ewalltalk_n_a_n_5013ed00;
        break;
      case 0x119:
        pcVar12 = s_std_etoaim_n_p_2_5013ed58;
        break;
      case 0x11a:
        pcVar12 = s_std_a_up_p_2_5013afd0;
        break;
      case 0x11b:
        pcVar12 = s_si_ewallfear_n_a_n_5013edb0;
        break;
      case 0x11c:
        pcVar12 = s_std_esalute_to_a_n_5013ee08;
        break;
      case 0x11d:
        pcVar12 = s_std_esalute_n_a_n_5013ee60;
        break;
      case 0x11e:
        pcVar12 = s_std_esalute_frm_a_n_5013eeb8;
        break;
      case 0x11f:
        pcVar12 = s_std_esalutations_n_a_n_5013ef10;
        break;
      case 0x120:
        pcVar12 = s_std_eclimbshaft_n_a_n_5013ef68;
        break;
      case 0x121:
        pcVar12 = s_std_xatkpause2_n_pk_n_50137980;
        break;
      case 0x122:
        uVar11 = 1;
        uStack_88 = 0x42480000;
        pcVar12 = s_cch_w_n_a_n_5013efc0;
        break;
      case 0x123:
        pcVar12 = s_cch_ewalk2cch_n_a_n_5013f018;
        break;
      case 0x124:
        pcVar12 = s_cch_etalk_dwn_p_n_5013f070;
        break;
      case 0x125:
        pcVar12 = s_std_italkpose_up_a_n_5013f0c8;
        break;
      case 0x126:
        pcVar12 = s_cch_italkpose_dwn_a_n_5013f120;
        break;
      case 0x127:
        pcVar12 = s_std_etalk_up_a_n_5013f178;
        break;
      case 0x128:
        pcVar12 = s_cch_eheadnod_n_a_n_5013f1d0;
        break;
      case 0x129:
        pcVar12 = s_cch_ecch2walk_n_a_n_5013f228;
        break;
      case 0x12a:
        pcVar12 = s_std_xatkpause1_n_pk_n_50137928;
        break;
      case 299:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wfast_n_a_n_5013f280;
        break;
      case 300:
        pcVar12 = s_std_erageidle_n_p_n_5013f2d8;
        break;
      case 0x12d:
        pcVar12 = s_cch_xcchcower_up_a_a_50139ef8;
        break;
      case 0x12e:
        pcVar12 = s_std_ietalkpose_rt_a_n_5013f330;
        break;
      case 0x12f:
        pcVar12 = s_std_ebooklook_n_a_n_5013f3e0;
        break;
      case 0x130:
        pcVar12 = s_std_ebookscan_n_a_n_5013f438;
        break;
      case 0x131:
        pcVar12 = s_std_xopendoor_n_a_n_50137b90;
        break;
      case 0x133:
        pcVar12 = s_cch_eheadset_frm_a_n_5013f490;
        break;
      case 0x134:
        pcVar12 = s_cch_eheadset_mid_a_n_5013f4e8;
        break;
      case 0x135:
        uVar11 = 6;
        pcVar12 = s_std_shead_2frnt_n_n_501364e0;
        break;
      case 0x136:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_w_n_mrs_2_5013f540;
        break;
      case 0x137:
        pcVar12 = s_std_edkraim_n_a_n_5013f598;
        break;
      case 0x138:
        pcVar12 = s_cch_ehawkknees_n_n_n_5013f5f0;
        break;
      case 0x139:
        pcVar12 = s_std_edkraimtalk_n_a_n_5013f648;
        break;
      case 0x13a:
        pcVar12 = s_std_edkrfirelk_rt_a_n_5013f6a0;
        break;
      case 0x13b:
        uVar11 = 6;
        pcVar12 = s_cch_ehawkdeath_n_n_n_5013f6f8;
        break;
      case 0x13c:
        pcVar12 = s_cch_ehawkkneetlk_n_n_n_5013f750;
        break;
      case 0x13e:
        pcVar12 = s_cch_eheadset_to_a_n_5013f800;
        break;
      case 0x13f:
        pcVar12 = s_lb_eslide_n_pk_n_5013f858;
        break;
      case 0x140:
        pcVar12 = s_std_a_fwd_p_cb_501363d8;
        break;
      case 0x141:
        pcVar12 = s_std_igunuplook_n_a_n_5013f8b0;
        break;
      case 0x142:
        uVar11 = 2;
        pcVar12 = s_std_frapid_n_p_2_5013f908;
        break;
      case 0x143:
        pcVar12 = s_std_edkraimlk_fwd_a_n_5013f960;
        break;
      case 0x144:
        pcVar12 = s_std_ewhirl_rt_a_n_5013fac0;
        break;
      case 0x145:
        uVar11 = 0;
        pcVar12 = s_std_fsweepup_frm_a_a_5013fb18;
        break;
      case 0x146:
        uVar11 = 0;
        pcVar12 = s_std_fsweepup_to_a_a_5013fb70;
        break;
      case 0x147:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_xtakecover_n_a_n_5013fbc8;
        break;
      case 0x148:
        pcVar12 = s_std_esabrebluff_n_a_a_5013fe30;
        break;
      case 0x149:
        uVar11 = 2;
        pcVar12 = s_std_eautosweep_n_pm_a_5013fe88;
        break;
      case 0x14a:
        uVar11 = 2;
        pcVar12 = s_cch_f_fwd_s_2_50137090;
        break;
      case 0x14b:
        uVar11 = 2;
        pcVar12 = s_std_f_fwd_p_cb_50136430;
        break;
      case 0x14c:
        uVar11 = 4;
        pcVar12 = s_std_soutwindow_n_a_n_50140098;
        break;
      case 0x14d:
        pcVar12 = s_std_xcrouch_dwn_mrs_2_50137c98;
        break;
      case 0x14e:
        pcVar12 = s_std_xcrouch_dwn_p_2_501400f0;
        break;
      case 0x14f:
        uVar11 = 2;
        pcVar12 = s_std_tgrenade_n_a_n_5013ff38;
        break;
      case 0x150:
        uVar11 = 2;
        pcVar12 = s_std_tunder_n_a_n_50140148;
        break;
      case 0x151:
        pcVar12 = s_cch_xcrouch_up_l_2_5013b238;
        break;
      case 0x152:
        pcVar12 = s_std_xcrouch_dwn_l_2_5013b2e8;
        break;
      case 0x153:
        pcVar12 = s_std_xcrouch_dwn_p_a_501401a0;
        break;
      case 0x154:
        uVar11 = 1;
        uStack_88 = 0x43160000;
        pcVar12 = s_std_raim_n_mrs_2_50137ea8;
        break;
      case 0x155:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_std_wfire_fwd_ms_2_501401f8;
        break;
      case 0x156:
        uVar11 = 1;
        uStack_88 = 0x41200000;
        pcVar12 = s_cch_afire_fwd_ms_2_50140250;
        break;
      case 0x157:
        uVar11 = 2;
        pcVar12 = s_std_f_fwd_m_2_50136900;
        break;
      case 0x158:
        uVar11 = 2;
        pcVar12 = s_cch_f_fwd_m_2_50137a88;
        break;
      case 0x159:
        pcVar12 = s_std_epushover_n_pk_a_501402a8;
        break;
      case 0x15a:
        pcVar12 = s_std_emerchall_n_a_a_50141220;
        break;
      case 0x15b:
        pcVar12 = s_std_emerchone_n_a_a_50141278;
        break;
      case 0x15c:
        pcVar12 = s_std_iemerchant_n_a_a_501412d0;
        break;
      case 0x15d:
        pcVar12 = s_std_emerchwave_rt_a_a_50141328;
        break;
      case 0x15e:
        pcVar12 = s_std_emerchtalk_n_a_a_50141380;
        break;
      case 0x15f:
        pcVar12 = s_std_emerchwave_lt_a_a_501413d8;
        break;
      case 0x160:
        pcVar12 = s_std_ebeg_n_a_a_50141430;
        break;
      case 0x162:
        pcVar12 = s_cch_xcchcower_n_a_n_50141488;
      }
    }
    iStack_34 = 0;
    if (local_78 != (undefined4 *)0x0) {
      FUN_50081520(param_1,iVar7,local_78,2);
      puVar8 = operator_new(0x18);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = &PTR_LAB_5012972c;
        fVar13 = FUN_5010777b(0.5);
        puVar8[2] = 5;
        *puVar8 = &PTR_FUN_501296ac;
        puVar8[4] = 0;
        puVar8[5] = iVar7;
        puVar8[1] = (float)(fVar13 * (float10)0.1);
        puVar8[3] = 10;
      }
      iStack_34 = FUN_50081380(param_1,(int)puVar8);
      local_78 = (undefined4 *)0x0;
    }
    iStack_4c = 0;
    if (0 < local_74) {
      do {
        iVar14 = iStack_34;
        if (iStack_4c != local_74 + -1) {
          iVar14 = 0;
        }
        FUN_50080d30(uVar11,local_80,piVar10,piStack_50,&local_18,&local_24,local_54,iVar7,uStack_88
                     ,fStack_64,iVar14,local_58,(bVar2 & 1) != 0,local_60,local_7c,pcVar12);
        iStack_4c = iStack_4c + 1;
      } while (iStack_4c < local_74);
    }
  }
  if (local_70 != (int *)0x0) {
    (**(code **)*local_70)(1);
  }
  if (local_6c != (int *)0x0) {
    (**(code **)*local_6c)(1);
  }
  if (local_68 != (int *)0x0) {
    (**(code **)*local_68)(1);
  }
  (**(code **)*piVar9)(1);
  (**(code **)*piVar9)(1);
  if (local_48 != (int *)0x0) {
    (**(code **)*local_48)(1);
  }
  if (local_44 != (int *)0x0) {
    (**(code **)*local_44)(1);
  }
  if (local_78 != (undefined4 *)0x0) {
    (**(code **)*local_78)(1);
  }
  if (local_40 != (int *)0x0) {
    (**(code **)*local_40)(1);
  }
  if (local_3c != (int *)0x0) {
    (**(code **)*local_3c)(1);
  }
  if (local_38 != (int *)0x0) {
    (**(code **)*local_38)(1);
  }
  ExceptionList = pvStack_c;
  return;
}

