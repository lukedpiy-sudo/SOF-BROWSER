// rea decompile_all
// name: FUN_200e8c50
// address: 0x200e8c50
// body: available
// range: 0x200e8c50-0x200e9f15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e9c8c) */
/* WARNING: Removing unreachable block (ram,0x200e9ca1) */
/* WARNING: Removing unreachable block (ram,0x200e9cb0) */
/* WARNING: Removing unreachable block (ram,0x200e9cb7) */

undefined4 FUN_200e8c50(undefined4 param_1)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint *puVar10;
  undefined4 *in_ECX;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  char *pcVar14;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [128];
  
  pcVar14 = &DAT_201594fc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6750(param_1);
    return 1;
  }
  pcVar14 = &DAT_20158b18;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e65a0(param_1);
    return 1;
  }
  pcVar14 = s_ctext_201594f4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6680(param_1);
    return 1;
  }
  pcVar14 = s_image_20139740;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e68a0(param_1);
    return 1;
  }
  pcVar14 = &DAT_201594ec;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6e10(param_1);
    return 1;
  }
  pcVar14 = s_slider_201594e4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6b10(param_1);
    return 1;
  }
  pcVar14 = s_ticker_201594dc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6be0(param_1);
    return 1;
  }
  pcVar14 = &DAT_201594d4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6d70(param_1);
    return 1;
  }
  pcVar14 = &DAT_201594cc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6cc0(param_1);
    return 1;
  }
  pcVar14 = s_backdrop_201594c0;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7060(param_1);
    return 1;
  }
  pcVar14 = &DAT_201594bc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[0x1a] = 0;
    if (in_ECX[0x1d] == in_ECX[0x1c]) {
      iVar4 = (*DAT_20403640)(in_ECX + 9);
      in_ECX[0x1d] = in_ECX[0x1d] + iVar4;
    }
    in_ECX[0x1c] = in_ECX[0x1d];
    in_ECX[0x1b] = in_ECX[0x1d];
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_201594b8;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[0x1a] = 0;
    if (in_ECX[0x1d] == in_ECX[0x1c]) {
      iVar4 = (*DAT_20403640)(in_ECX + 9);
      in_ECX[0x1d] = in_ECX[0x1d] + iVar4;
    }
    in_ECX[0x1c] = in_ECX[0x1d];
    in_ECX[0x1b] = in_ECX[0x1d];
    FUN_200eb460();
    in_ECX[0x1e] = in_ECX[0x1b];
    return 1;
  }
  pcVar14 = &DAT_201594b4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7160(param_1);
    return 1;
  }
  pcVar14 = s_center_20158298;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[6] = 1;
    in_ECX[0x1c] = in_ECX[0x1e];
    in_ECX[0x1d] = in_ECX[0x1e];
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_right_20158290;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[6] = 3;
    in_ECX[0x1c] = in_ECX[0x1e];
    in_ECX[0x1d] = in_ECX[0x1e];
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_20158288;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[6] = 2;
    in_ECX[0x1c] = in_ECX[0x1e];
    in_ECX[0x1d] = in_ECX[0x1e];
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_normal_201594ac;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    in_ECX[6] = 0;
    in_ECX[0x1c] = in_ECX[0x1e];
    in_ECX[0x1d] = in_ECX[0x1e];
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_ghoul_201594a4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6a30(param_1);
    return 1;
  }
  pcVar14 = &DAT_201594a0;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6980(param_1);
    return 1;
  }
  pcVar14 = s_bghoul_20159498;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e70e0(param_1);
    return 1;
  }
  pcVar14 = s_input_20159490;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6f90(param_1);
    return 1;
  }
  pcVar14 = s_setkey_20159488;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e8bb0(param_1);
    return 1;
  }
  pcVar14 = s_cursor_20159480;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(1);
    uVar5 = FUN_200eb440(0);
    iVar4 = FUN_200f9e13(uVar5);
    if (iVar4 < 2) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 1;
    }
    in_ECX[0x25] = &DAT_20112e40 + iVar4 * 0x1c;
    FUN_200eb460();
    *(undefined **)(*(int *)*in_ECX + 0x78) = &DAT_20112e40 + iVar4 * 0x1c;
    return 1;
  }
  pcVar14 = s_defaults_20159474;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e8920(param_1);
    return 1;
  }
  pcVar14 = &DAT_2015897c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(2);
    uVar5 = FUN_200eb440(1);
    uVar6 = FUN_200eb440(0);
    FUN_200ea4e0(uVar6,uVar5);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_2015896c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(2);
    uVar5 = FUN_200eb440(0);
    iVar4 = FUN_2004b660(0,uVar5);
    if (iVar4 != 0) {
      do {
        uVar5 = FUN_200eb440(1);
        FUN_200ea550(iVar4,uVar5);
        uVar5 = FUN_200eb440(0);
        iVar4 = FUN_2004b660(iVar4 + 1,uVar5);
      } while (iVar4 != 0);
      FUN_200eb460();
      return 1;
    }
LAB_200e9edc:
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_20158974;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(4);
    uVar5 = FUN_200eb440(3);
    uVar6 = FUN_200eb440(2);
    uVar7 = FUN_200eb440(1);
    uVar8 = FUN_200eb440(0);
    FUN_200ea5c0(uVar8,uVar7,uVar6,uVar5);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_filebox_2015946c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7270(param_1);
    return 1;
  }
  pcVar14 = s_filereq_20159464;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7320(param_1);
    return 1;
  }
  pcVar14 = s_loadbox_2015945c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e73d0(param_1);
    return 1;
  }
  pcVar14 = s_serverbox_20159450;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7480(param_1);
    return 1;
  }
  pcVar14 = s_serverdetail_20159440;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7530(param_1);
    return 1;
  }
  pcVar14 = s_players_2011e1a0;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e75e0(param_1);
    return 1;
  }
  pcVar14 = s_selection_20159434;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7d80(param_1);
    return 1;
  }
  pcVar14 = s_listfile_20159428;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7690(param_1);
    return 1;
  }
  pcVar14 = s_botlist_20159420;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7740(param_1);
    return 1;
  }
  pcVar14 = &DAT_2015941c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e77f0(param_1);
    return 1;
  }
  pcVar14 = s_users_20159414;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7b70(param_1);
    return 1;
  }
  pcVar14 = &DAT_2015940c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7cd0(param_1);
    return 1;
  }
  pcVar14 = s_rooms_20159404;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e7c20(param_1);
    return 1;
  }
  pcVar14 = s_translate_201593f8;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e78a0(param_1);
    return 1;
  }
  pcVar14 = s_autoscroll_201593ec;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(1);
    uVar5 = FUN_200eb440(0);
    fVar13 = (float10)FUN_200fafcc(uVar5);
    in_ECX[0x24] = (float)fVar13;
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_timeout_20139d50;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(2);
    pcVar3 = (char *)FUN_200eb440(1);
    uVar5 = FUN_200eb440(0);
    iVar4 = *(int *)*in_ECX;
    fVar13 = (float10)FUN_200fafcc(uVar5);
    *(float *)(iVar4 + 0xf8) = (float)fVar13;
    uVar11 = 0xffffffff;
    pcVar14 = pcVar3;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    local_8c = ~uVar11 - 1;
    cVar2 = FUN_2000a6c0(local_8c,1);
    if (cVar2 != '\0') {
      pcVar14 = *(char **)(iVar4 + 0x100);
      for (uVar11 = local_8c >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar11 = local_8c & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar14 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar14 = pcVar14 + 1;
      }
      *(uint *)(iVar4 + 0x104) = local_8c;
      *(undefined1 *)(local_8c + *(int *)(iVar4 + 0x100)) = 0;
      FUN_200eb460();
      return 1;
    }
    goto LAB_200e9edc;
  }
  pcVar14 = s_popup_201593e4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200e6ee0(param_1);
    return 1;
  }
  pcVar14 = s_alias_2012048c;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(2);
    uVar5 = FUN_200eb440(1);
    uVar6 = FUN_200eb440(0);
    Com_sprintf(local_80,0x80,s_alias___s____s__20159328,uVar6,uVar5);
    FUN_20018380(0,local_80);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_20130e00;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(2);
    pcVar3 = (char *)FUN_200eb440(1);
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (iVar4 == -2) {
      uVar5 = FUN_200eb440(0);
      uVar5 = FUN_20055450(s_set__s____2015930c,uVar5);
      FUN_20018380(0,uVar5);
      FUN_200eb460();
      return 1;
    }
    uVar5 = FUN_200eb440(1);
    uVar6 = FUN_200eb440(0);
    uVar5 = FUN_20055450(s_set__s__s_201200f0,uVar6,uVar5);
    FUN_20018380(0,uVar5);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_201593dc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(3);
    uVar5 = FUN_200eb440(2);
    uVar6 = FUN_200eb440(1);
    uVar7 = FUN_200eb440(0);
    uVar5 = FUN_20055450(s_set__s__s__s_20159318,uVar7,uVar6,uVar5);
    FUN_20018380(0,uVar5);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = &DAT_201593d4;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eafe0(1);
    uVar5 = FUN_200eb440(0);
    Com_sprintf(local_80,0x80,&DAT_2011d990,uVar5);
    FUN_200c79c0(local_80,1);
    FUN_200eb460();
    return 1;
  }
  pcVar14 = s_config_201593cc;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 != 0) {
    pcVar14 = s_onexit_201593c4;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200eafe0(2);
      uVar5 = FUN_200eb440(1);
      uVar6 = FUN_200eb440(0);
      FUN_200ca210(uVar6,uVar5);
      FUN_200eb460();
      return 1;
    }
    pcVar14 = s_exitcfg_201593bc;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200eafe0(1);
      uVar5 = FUN_200eb440(0);
      FUN_200ca2f0(uVar5);
      FUN_200eb460();
      return 1;
    }
    pcVar14 = s_frame_201593b4;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e8000(param_1);
      return 1;
    }
    pcVar14 = s_blank_201593ac;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e81e0(param_1);
      return 1;
    }
    pcVar14 = &DAT_20158964;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200eafe0(2);
      uVar5 = FUN_200eb440(1);
      uVar6 = FUN_200eb440(0);
      FUN_200c9cd0(uVar6,uVar5);
      FUN_200eb460();
      return 1;
    }
    pcVar14 = &DAT_201588bc;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      cVar2 = FUN_200eafe0(1);
      if (cVar2 != '\0') {
        return 1;
      }
      do {
        local_88 = *(int *)(*(int *)*in_ECX + 0xac);
        uVar5 = FUN_200eb440(0);
        FUN_200f9e13(uVar5);
        local_8c = __ftol();
        puVar10 = (uint *)in_ECX[0x18];
        if (in_ECX[0x19] - (int)puVar10 >> 2 == 0) {
          if ((in_ECX[0x17] == 0) || (local_90 = (int)puVar10 - in_ECX[0x17] >> 2, local_90 < 2)) {
            local_90 = 1;
          }
          local_84 = FUN_2008c740();
          local_84 = local_84 + local_90;
          iVar4 = local_84;
          if (local_84 < 0) {
            iVar4 = 0;
          }
          pvVar9 = operator_new(iVar4 * 4);
          local_88 = FUN_2008dea0(in_ECX[0x17],puVar10,pvVar9);
          FUN_200a9240(local_88,1,&local_8c);
          FUN_2008dea0(puVar10,in_ECX[0x18],local_88 + 4);
          FUN_2008c730(in_ECX[0x17],in_ECX[0x18]);
          FUN_200f9f75(in_ECX[0x17]);
          in_ECX[0x19] = (void *)((int)pvVar9 + local_84 * 4);
          iVar4 = FUN_2008c740();
          iVar4 = (int)pvVar9 + iVar4 * 4 + 4;
          in_ECX[0x17] = pvVar9;
        }
        else {
          FUN_2008dea0(puVar10,puVar10,puVar10 + 1);
          FUN_200a9240(in_ECX[0x18],1 - (in_ECX[0x18] - (int)puVar10 >> 2),&local_8c);
          puVar1 = (uint *)in_ECX[0x18];
          for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
            *puVar10 = local_8c;
          }
          iVar4 = in_ECX[0x18] + 4;
        }
        in_ECX[0x18] = iVar4;
        cVar2 = FUN_200eafe0(1);
      } while (cVar2 == '\0');
      return 1;
    }
    pcVar14 = s_strings_201593a4;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200eafe0(1);
      uVar6 = 4;
      uVar5 = FUN_200eb440(0);
      FUN_20057ca0(uVar5,uVar6);
      FUN_200eb460();
      return 1;
    }
    pcVar14 = s_comment_2015939c;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      do {
        cVar2 = FUN_200eafe0(1);
      } while (cVar2 == '\0');
      return 1;
    }
    pcVar14 = s_includecvar_20159390;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e82b0(param_1);
      return 1;
    }
    pcVar14 = s_include_20159388;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e83b0(param_1);
      return 1;
    }
    pcVar14 = s_cinclude_2015937c;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e84a0(param_1);
      return 1;
    }
    pcVar14 = s_cninclude_20159370;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e85c0(param_1);
      return 1;
    }
    pcVar14 = s_exinclude_20159364;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e86e0(param_1);
      return 1;
    }
    pcVar14 = s_einclude_20159358;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e8800(param_1);
      return 1;
    }
    pcVar14 = &DAT_20159354;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 == 0) {
      FUN_200e7e70(param_1);
      return 1;
    }
    pcVar14 = &DAT_2015934c;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar14);
    if (iVar4 != 0) {
      FUN_200eb490(param_1,s_Unknown_keyword_2015933c);
      FUN_200eb420();
      return 0;
    }
    goto LAB_200e9edc;
  }
  FUN_200eafe0(1);
  pcVar3 = (char *)FUN_200eb440(0);
  uVar11 = 0xffffffff;
  iVar4 = *(int *)*in_ECX;
  pcVar14 = pcVar3;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar2 != '\0');
  uVar12 = ~uVar11 - 1;
  uVar11 = FUN_2000a830();
  if (uVar11 < uVar12) {
    FUN_201075d0();
  }
  *(undefined4 *)(iVar4 + 0x30) = 0;
  if ((*(int *)(iVar4 + 0x2c) == 0) || (*(char *)(*(int *)(iVar4 + 0x2c) + -1) == '\0')) {
    if (uVar12 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200e9983;
    }
    if ((0x1f < *(uint *)(iVar4 + 0x34)) || (*(uint *)(iVar4 + 0x34) < uVar12)) {
      FUN_2000a5b0(1);
      goto LAB_200e995c;
    }
  }
  else {
    if (uVar12 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200e9983;
    }
LAB_200e995c:
    FUN_2000a840(uVar12);
  }
  pcVar14 = *(char **)(iVar4 + 0x2c);
  for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar11 = uVar12 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pcVar14 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar14 = pcVar14 + 1;
  }
  *(uint *)(iVar4 + 0x30) = uVar12;
  *(undefined1 *)(uVar12 + *(int *)(iVar4 + 0x2c)) = 0;
LAB_200e9983:
  uVar5 = FUN_200eb440(0);
  uVar5 = FUN_20055450(s_exec__s_cfg_20158724,uVar5);
  FUN_20018380(0,uVar5);
  FUN_200eb460();
  return 1;
}

