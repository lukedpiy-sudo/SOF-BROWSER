// rea decompile_all
// name: FUN_20014510
// address: 0x20014510
// body: available
// range: 0x20014510-0x2001579c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20014510(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined *puVar11;
  char *pcVar12;
  bool bVar13;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0xffffffff;
  local_10 = 0xffafafaf;
  if (((DAT_201c1f00 == 8) && (DAT_201e7594 != '\0')) && (*param_1 != '\0')) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      pcVar2 = (char *)FUN_20055470(&param_1);
      iVar7 = 3;
      bVar13 = true;
      pcVar10 = pcVar2;
      pcVar12 = &DAT_2011f7a0;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar13 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar13);
      if (bVar13) {
        uVar3 = FUN_20055470(&param_1);
        iVar9 = FUN_200f9e9e(uVar3);
      }
      else {
        iVar7 = 3;
        bVar13 = true;
        pcVar10 = pcVar2;
        pcVar12 = &DAT_2011f79c;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar13 = *pcVar10 == *pcVar12;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar13);
        if (bVar13) {
          uVar3 = FUN_20055470(&param_1);
          iVar9 = FUN_200f9e9e(uVar3);
          iVar9 = iVar9 + DAT_2040365c;
        }
        else {
          iVar7 = 3;
          bVar13 = true;
          pcVar10 = pcVar2;
          pcVar12 = &DAT_2011f798;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar13 = *pcVar10 == *pcVar12;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          } while (bVar13);
          if (bVar13) {
            uVar3 = FUN_20055470(&param_1);
            iVar9 = FUN_200f9e9e(uVar3);
            iVar9 = iVar9 + -0xa0 + DAT_2040365c / 2;
          }
          else {
            iVar7 = 3;
            bVar13 = true;
            pcVar10 = pcVar2;
            pcVar12 = &DAT_2011f794;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar13 = *pcVar10 == *pcVar12;
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            } while (bVar13);
            if (bVar13) {
              uVar3 = FUN_20055470(&param_1);
              iVar8 = FUN_200f9e9e(uVar3);
            }
            else {
              iVar7 = 3;
              bVar13 = true;
              pcVar10 = pcVar2;
              pcVar12 = &DAT_2011f790;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar13 = *pcVar10 == *pcVar12;
                pcVar10 = pcVar10 + 1;
                pcVar12 = pcVar12 + 1;
              } while (bVar13);
              if (bVar13) {
                uVar3 = FUN_20055470(&param_1);
                iVar8 = FUN_200f9e9e(uVar3);
                iVar8 = iVar8 + DAT_20403660;
              }
              else {
                iVar7 = 3;
                bVar13 = true;
                pcVar10 = pcVar2;
                pcVar12 = &DAT_2011f78c;
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar13 = *pcVar10 == *pcVar12;
                  pcVar10 = pcVar10 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (bVar13);
                if (bVar13) {
                  uVar3 = FUN_20055470(&param_1);
                  iVar8 = FUN_200f9e9e(uVar3);
                  iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                }
                else {
                  iVar7 = 10;
                  bVar13 = true;
                  pcVar10 = pcVar2;
                  pcVar12 = s_client_sb_2011f780;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar13 = *pcVar10 == *pcVar12;
                    pcVar10 = pcVar10 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (bVar13);
                  if (bVar13) {
                    local_20 = -0x505051;
                    local_1c = 0xffffffff;
                    local_24 = -1;
                    uVar3 = FUN_20055470(&param_1);
                    iVar8 = FUN_200f9e9e(uVar3);
                    iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                    uVar3 = FUN_20055470(&param_1);
                    iVar8 = FUN_200f9e9e(uVar3);
                    iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                    if (iVar9 < DAT_20225a38) {
                      DAT_20225a38 = iVar9;
                    }
                    if (DAT_20225a40 < iVar9) {
                      DAT_20225a40 = iVar9;
                    }
                    if (iVar8 < DAT_20225a3c) {
                      DAT_20225a3c = iVar8;
                    }
                    if (DAT_20225a44 < iVar8) {
                      DAT_20225a44 = iVar8;
                    }
                    iVar4 = iVar9 + 0x9f;
                    iVar7 = iVar8 + 0x1f;
                    if (iVar4 < DAT_20225a38) {
                      DAT_20225a38 = iVar4;
                    }
                    if (DAT_20225a40 < iVar4) {
                      DAT_20225a40 = iVar4;
                    }
                    if (iVar7 < DAT_20225a3c) {
                      DAT_20225a3c = iVar7;
                    }
                    if (DAT_20225a44 < iVar7) {
                      DAT_20225a44 = iVar7;
                    }
                    uVar3 = FUN_20055470(&param_1);
                    iVar7 = FUN_200f9e9e(uVar3);
                    if ((0x1f < iVar7) || (iVar7 < 0)) {
                      Com_Error(1,s_client_>__MAX_CLIENTS_2011f768);
                    }
                    iVar4 = iVar7 * 0x15c;
                    puVar11 = &DAT_20221f1c + iVar4;
                    uVar3 = FUN_20055470(&param_1);
                    local_18 = (undefined *)FUN_200f9e9e(uVar3);
                    uVar3 = FUN_20055470(&param_1);
                    local_c = FUN_200f9e9e(uVar3);
                    uVar3 = FUN_20055470(&param_1);
                    local_8 = FUN_200f9e9e(uVar3);
                    if ((iVar7 == DAT_201e94c4) || (*(float *)(DAT_201e7574 + 0x18) != 0.0)) {
LAB_200148bc:
                      local_24 = -0xff0100;
                    }
                    else {
                      if (DAT_201e94c8 == 1) {
                        iVar7 = FUN_200f9e9e(&DAT_201e9d0c);
                        if ((iVar7 != 0) && ((&DAT_2022201c)[iVar4] != '\0')) {
                          iVar7 = __strcmpi(&DAT_20221f5c + iVar4,
                                            &DAT_20221f5c + DAT_201e94c4 * 0x15c);
                          local_24 = (-(uint)(iVar7 != 0) & 0xffff01ff) - 0xff0100;
                          goto LAB_200148c4;
                        }
                      }
                      else if (((&DAT_20222068)[iVar4] == (&DAT_20222068)[DAT_201e94c4 * 0x15c]) &&
                              (iVar7 = FUN_200f9e9e(&DAT_201e9d0c), iVar7 != 0)) goto LAB_200148bc;
                      local_24 = -0xffff01;
                    }
LAB_200148c4:
                    iVar7 = iVar9 + 0x20;
                    (*DAT_204035d4)(iVar7,iVar8,puVar11,0x400,&local_24);
                    uVar3 = FUN_20058110(0x3e);
                    (*DAT_204035d4)(iVar7,iVar8 + 8,uVar3,0x400,&local_20);
                    uVar3 = FUN_20055450(&DAT_2011f764,local_18);
                    (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 8,uVar3,0x400,&local_1c);
                    uVar3 = FUN_20058110(0x3f,local_c);
                    uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                    (*DAT_204035d4)(iVar7,iVar8 + 0x10,uVar3,0x400,&local_20);
                    uVar3 = FUN_20058110(0x40,local_8);
                    uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                    (*DAT_204035d4)(iVar7,iVar8 + 0x18,uVar3,0x400,&local_20);
                    if ((&DAT_20221fdc)[iVar4] == '\0') {
                      puVar11 = &DAT_20224a9c;
                    }
                    (*DAT_204035b8)(iVar9,iVar8,puVar11 + 0xc0,0xffffffff);
                  }
                  else {
                    iVar7 = 0xe;
                    bVar13 = true;
                    pcVar10 = pcVar2;
                    pcVar12 = s_client_ctf_sb_2011f74c;
                    do {
                      if (iVar7 == 0) break;
                      iVar7 = iVar7 + -1;
                      bVar13 = *pcVar10 == *pcVar12;
                      pcVar10 = pcVar10 + 1;
                      pcVar12 = pcVar12 + 1;
                    } while (bVar13);
                    if (bVar13) {
                      local_24 = -0x505051;
                      local_1c = 0xffffffff;
                      local_20 = -1;
                      uVar3 = FUN_20055470(&param_1);
                      iVar8 = FUN_200f9e9e(uVar3);
                      iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                      uVar3 = FUN_20055470(&param_1);
                      iVar8 = FUN_200f9e9e(uVar3);
                      iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                      if (iVar9 < DAT_20225a38) {
                        DAT_20225a38 = iVar9;
                      }
                      if (DAT_20225a40 < iVar9) {
                        DAT_20225a40 = iVar9;
                      }
                      if (iVar8 < DAT_20225a3c) {
                        DAT_20225a3c = iVar8;
                      }
                      if (DAT_20225a44 < iVar8) {
                        DAT_20225a44 = iVar8;
                      }
                      iVar4 = iVar9 + 0x9f;
                      iVar7 = iVar8 + 0x1f;
                      if (iVar4 < DAT_20225a38) {
                        DAT_20225a38 = iVar4;
                      }
                      if (DAT_20225a40 < iVar4) {
                        DAT_20225a40 = iVar4;
                      }
                      if (iVar7 < DAT_20225a3c) {
                        DAT_20225a3c = iVar7;
                      }
                      if (DAT_20225a44 < iVar7) {
                        DAT_20225a44 = iVar7;
                      }
                      uVar3 = FUN_20055470(&param_1);
                      iVar7 = FUN_200f9e9e(uVar3);
                      if ((0x1f < iVar7) || (iVar7 < 0)) {
                        Com_Error(1,s_client_>__MAX_CLIENTS_2011f768);
                      }
                      local_18 = &DAT_20221f1c + iVar7 * 0x15c;
                      uVar3 = FUN_20055470(&param_1);
                      local_8 = FUN_200f9e9e(uVar3);
                      uVar3 = FUN_20055470(&param_1);
                      local_c = FUN_200f9e9e(uVar3);
                      uVar3 = FUN_20055470(&param_1);
                      local_4 = FUN_200f9e9e(uVar3);
                      if ((iVar7 == DAT_201e94c4) || (*(float *)(DAT_201e7574 + 0x18) != 0.0)) {
                        local_20 = -0xff0100;
                      }
                      else {
                        local_20 = (-(uint)((&DAT_20222068)[iVar7 * 0x15c] !=
                                           (&DAT_20222068)[DAT_201e94c4 * 0x15c]) & 0xffff01ff) -
                                   0xff0100;
                      }
                      iVar7 = iVar9 + 0x20;
                      (*DAT_204035d4)(iVar7,iVar8,local_18,0x400,&local_20);
                      uVar3 = FUN_20058110(0x3e);
                      (*DAT_204035d4)(iVar7,iVar8 + 8,uVar3,0x400,&local_24);
                      uVar3 = FUN_20055450(&DAT_2011f764,local_8);
                      (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 8,uVar3,0x400,&local_1c);
                      uVar3 = FUN_20058110(0x3f,local_c);
                      uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                      (*DAT_204035d4)(iVar7,iVar8 + 0x10,uVar3,0x400,&local_24);
                      uVar3 = FUN_20058110(0x40,local_4);
                      uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                      (*DAT_204035d4)(iVar7,iVar8 + 0x18,uVar3,0x400,&local_24);
                      uVar3 = FUN_20055470(&param_1);
                      iVar7 = FUN_200f9e9e(uVar3);
                      if (iVar7 != 0) {
                        if (iVar7 == 1) {
                          pcVar2 = s_pics_interface2_ctfb_hudflag_2011cd58;
                          iVar7 = iVar9 + -0x20;
                        }
                        else {
                          pcVar2 = s_pics_interface2_ctfr_hudflag_2011ccf8;
                          iVar7 = iVar9 + -0x23;
                        }
                        (*DAT_204035c4)(iVar7,iVar8,0x20,0x20,&local_1c,pcVar2,0);
                      }
                      puVar11 = local_18;
                      if (local_18[0xc0] == '\0') {
                        puVar11 = &DAT_20224a9c;
                      }
                      (*DAT_204035b8)(iVar9,iVar8,puVar11 + 0xc0,0xffffffff);
                    }
                    else {
                      iVar7 = 9;
                      bVar13 = true;
                      pcVar10 = pcVar2;
                      pcVar12 = s_spect_sb_2011f740;
                      do {
                        if (iVar7 == 0) break;
                        iVar7 = iVar7 + -1;
                        bVar13 = *pcVar10 == *pcVar12;
                        pcVar10 = pcVar10 + 1;
                        pcVar12 = pcVar12 + 1;
                      } while (bVar13);
                      if (bVar13) {
                        local_18 = (undefined *)0xffafafaf;
                        local_8 = 0xffffffff;
                        local_4 = 0xff00ff00;
                        uVar3 = FUN_20055470(&param_1);
                        iVar8 = FUN_200f9e9e(uVar3);
                        iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                        uVar3 = FUN_20055470(&param_1);
                        iVar8 = FUN_200f9e9e(uVar3);
                        iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                        if (iVar9 < DAT_20225a38) {
                          DAT_20225a38 = iVar9;
                        }
                        if (DAT_20225a40 < iVar9) {
                          DAT_20225a40 = iVar9;
                        }
                        if (iVar8 < DAT_20225a3c) {
                          DAT_20225a3c = iVar8;
                        }
                        if (DAT_20225a44 < iVar8) {
                          DAT_20225a44 = iVar8;
                        }
                        iVar4 = iVar9 + 0x9f;
                        iVar7 = iVar8 + 0x1f;
                        if (iVar4 < DAT_20225a38) {
                          DAT_20225a38 = iVar4;
                        }
                        if (DAT_20225a40 < iVar4) {
                          DAT_20225a40 = iVar4;
                        }
                        if (iVar7 < DAT_20225a3c) {
                          DAT_20225a3c = iVar7;
                        }
                        if (DAT_20225a44 < iVar7) {
                          DAT_20225a44 = iVar7;
                        }
                        uVar3 = FUN_20055470(&param_1);
                        iVar7 = FUN_200f9e9e(uVar3);
                        if ((0x1f < iVar7) || (iVar7 < 0)) {
                          Com_Error(1,s_client_>__MAX_CLIENTS_2011f768);
                        }
                        puVar11 = &DAT_20221f1c + iVar7 * 0x15c;
                        uVar3 = FUN_20055470(&param_1);
                        local_c = FUN_200f9e9e(uVar3);
                        uVar3 = FUN_20055470(&param_1);
                        local_1c = FUN_200f9e9e(uVar3);
                        iVar4 = iVar9 + 0x20;
                        (*DAT_204035d4)(iVar4,iVar8,puVar11,0x400,&local_4);
                        uVar3 = FUN_20058110(0x41);
                        (*DAT_204035d4)(iVar4,iVar8 + 8,uVar3,0x400,&local_8);
                        uVar3 = FUN_20058110(0x3f,local_c);
                        uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                        (*DAT_204035d4)(iVar4,iVar8 + 0x10,uVar3,0x400,&local_18);
                        uVar3 = FUN_20058110(0x40,local_1c);
                        uVar3 = FUN_20055450(&DAT_2011f75c,uVar3);
                        (*DAT_204035d4)(iVar4,iVar8 + 0x18,uVar3,0x400,&local_18);
                        if ((&DAT_20221fdc)[iVar7 * 0x15c] == '\0') {
                          puVar11 = &DAT_20224a9c;
                        }
                        (*DAT_204035b8)(iVar9,iVar8,puVar11 + 0xc0,0xffffffff);
                      }
                      else {
                        iVar7 = 8;
                        bVar13 = true;
                        pcVar10 = pcVar2;
                        pcVar12 = &DAT_2011f738;
                        do {
                          if (iVar7 == 0) break;
                          iVar7 = iVar7 + -1;
                          bVar13 = *pcVar10 == *pcVar12;
                          pcVar10 = pcVar10 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (bVar13);
                        if (bVar13) {
                          local_4 = 0xffafafaf;
                          local_c = 0xffffffff;
                          uVar3 = FUN_20055470(&param_1);
                          iVar8 = FUN_200f9e9e(uVar3);
                          iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                          uVar3 = FUN_20055470(&param_1);
                          iVar8 = FUN_200f9e9e(uVar3);
                          iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                          if (iVar9 < DAT_20225a38) {
                            DAT_20225a38 = iVar9;
                          }
                          if (DAT_20225a40 < iVar9) {
                            DAT_20225a40 = iVar9;
                          }
                          if (iVar8 < DAT_20225a3c) {
                            DAT_20225a3c = iVar8;
                          }
                          if (DAT_20225a44 < iVar8) {
                            DAT_20225a44 = iVar8;
                          }
                          iVar4 = iVar9 + 0x9f;
                          iVar7 = iVar8 + 0x1f;
                          if (iVar4 < DAT_20225a38) {
                            DAT_20225a38 = iVar4;
                          }
                          if (DAT_20225a40 < iVar4) {
                            DAT_20225a40 = iVar4;
                          }
                          if (iVar7 < DAT_20225a3c) {
                            DAT_20225a3c = iVar7;
                          }
                          if (DAT_20225a44 < iVar7) {
                            DAT_20225a44 = iVar7;
                          }
                          uVar3 = FUN_20055470(&param_1);
                          iVar7 = FUN_200f9e9e(uVar3);
                          if ((0x1f < iVar7) || (iVar7 < 0)) {
                            Com_Error(1,s_client_>__MAX_CLIENTS_2011f768);
                          }
                          iVar7 = iVar7 * 0x15c;
                          puVar11 = &DAT_20221f1c + iVar7;
                          uVar3 = FUN_20055470(&param_1);
                          local_8 = FUN_200f9e9e(uVar3);
                          uVar3 = FUN_20058110(0x3e);
                          (*DAT_204035d4)(iVar9 + 0x20,iVar8 + 0xc,uVar3,0x400,&local_4);
                          uVar3 = FUN_20055450(&DAT_2011ee58,local_8);
                          (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 0xc,uVar3,0x400,&local_c);
                          if ((&DAT_2022201c)[iVar7] == '\0') {
                            if ((&DAT_20221fdc)[iVar7] == '\0') {
                              puVar11 = &DAT_20224a9c;
                            }
                            (*DAT_204035b8)(iVar9,iVar8,puVar11 + 0xc0,0xffffffff);
                          }
                          else {
                            iVar4 = __strcmpi(&DAT_20221f5c + iVar7,
                                              &DAT_20221f5c + DAT_201e94c4 * 0x15c);
                            (*DAT_204035b8)(iVar9,iVar8,&DAT_2022201c + iVar7,
                                            (-(uint)(iVar4 != 0) & 0xffff01ff) - 0xff0100);
                          }
                        }
                        else {
                          iVar7 = 0xf;
                          bVar13 = true;
                          pcVar10 = pcVar2;
                          pcVar12 = s_client_conq_sb_2011f728;
                          do {
                            if (iVar7 == 0) break;
                            iVar7 = iVar7 + -1;
                            bVar13 = *pcVar10 == *pcVar12;
                            pcVar10 = pcVar10 + 1;
                            pcVar12 = pcVar12 + 1;
                          } while (bVar13);
                          if (bVar13) {
                            local_4 = 0xffafafaf;
                            local_1c = 0xffffffff;
                            uVar3 = FUN_20055470(&param_1);
                            iVar8 = FUN_200f9e9e(uVar3);
                            iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                            uVar3 = FUN_20055470(&param_1);
                            iVar8 = FUN_200f9e9e(uVar3);
                            iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                            if (iVar9 < DAT_20225a38) {
                              DAT_20225a38 = iVar9;
                            }
                            if (DAT_20225a40 < iVar9) {
                              DAT_20225a40 = iVar9;
                            }
                            if (iVar8 < DAT_20225a3c) {
                              DAT_20225a3c = iVar8;
                            }
                            if (DAT_20225a44 < iVar8) {
                              DAT_20225a44 = iVar8;
                            }
                            iVar4 = iVar9 + 0x9f;
                            iVar7 = iVar8 + 0x1f;
                            if (iVar4 < DAT_20225a38) {
                              DAT_20225a38 = iVar4;
                            }
                            if (DAT_20225a40 < iVar4) {
                              DAT_20225a40 = iVar4;
                            }
                            if (iVar7 < DAT_20225a3c) {
                              DAT_20225a3c = iVar7;
                            }
                            if (DAT_20225a44 < iVar7) {
                              DAT_20225a44 = iVar7;
                            }
                            uVar3 = FUN_20055470(&param_1);
                            iVar7 = FUN_200f9e9e(uVar3);
                            if (iVar7 == 0) {
                              pcVar2 = s_pics_interface2_ctfb_hudflag_2011cd58;
                            }
                            else {
                              pcVar2 = s_pics_interface2_ctfr_hudflag_2011ccf8;
                            }
                            (*DAT_204035c4)(iVar9,iVar8,0x20,0x20,&local_1c,pcVar2,0);
                            uVar3 = FUN_20055470(&param_1);
                            uVar3 = FUN_200f9e9e(uVar3);
                            uVar5 = FUN_20058110(0x3e);
                            (*DAT_204035d4)(iVar9 + 0x20,iVar8 + 0xc,uVar5,0x400,&local_4);
                            uVar3 = FUN_20055450(&DAT_2011ee58,uVar3);
                            (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 0xc,uVar3,0x400,&local_1c);
                          }
                          else {
                            iVar7 = 0xc;
                            bVar13 = true;
                            pcVar10 = pcVar2;
                            pcVar12 = s_ctf_team_sb_2011f71c;
                            do {
                              if (iVar7 == 0) break;
                              iVar7 = iVar7 + -1;
                              bVar13 = *pcVar10 == *pcVar12;
                              pcVar10 = pcVar10 + 1;
                              pcVar12 = pcVar12 + 1;
                            } while (bVar13);
                            if (bVar13) {
                              local_18 = (undefined *)0xffafafaf;
                              local_24 = -1;
                              uVar3 = FUN_20055470(&param_1);
                              iVar8 = FUN_200f9e9e(uVar3);
                              iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                              uVar3 = FUN_20055470(&param_1);
                              iVar8 = FUN_200f9e9e(uVar3);
                              iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                              if (iVar9 < DAT_20225a38) {
                                DAT_20225a38 = iVar9;
                              }
                              if (DAT_20225a40 < iVar9) {
                                DAT_20225a40 = iVar9;
                              }
                              if (iVar8 < DAT_20225a3c) {
                                DAT_20225a3c = iVar8;
                              }
                              if (DAT_20225a44 < iVar8) {
                                DAT_20225a44 = iVar8;
                              }
                              iVar4 = iVar9 + 0x9f;
                              iVar7 = iVar8 + 0x1f;
                              if (iVar4 < DAT_20225a38) {
                                DAT_20225a38 = iVar4;
                              }
                              if (DAT_20225a40 < iVar4) {
                                DAT_20225a40 = iVar4;
                              }
                              if (iVar7 < DAT_20225a3c) {
                                DAT_20225a3c = iVar7;
                              }
                              if (DAT_20225a44 < iVar7) {
                                DAT_20225a44 = iVar7;
                              }
                              uVar3 = FUN_20055470(&param_1);
                              iVar7 = FUN_200f9e9e(uVar3);
                              if (iVar7 == 0) {
                                pcVar2 = s_pics_interface2_ctfb_hudflag_2011cd58;
                              }
                              else {
                                pcVar2 = s_pics_interface2_ctfr_hudflag_2011ccf8;
                              }
                              (*DAT_204035c4)(iVar9,iVar8,0x20,0x20,&local_24,pcVar2,0);
                              uVar3 = FUN_20055470(&param_1);
                              local_4 = FUN_200f9e9e(uVar3);
                              uVar3 = FUN_20058110(0x3e);
                              iVar7 = iVar9 + 0x20;
                              (*DAT_204035d4)(iVar7,iVar8 + 0xc,uVar3,0x400,&local_18);
                              uVar3 = FUN_20055450(&DAT_2011ee58,local_4);
                              (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 0xc,uVar3,0x400,&local_24);
                              uVar3 = FUN_20055470(&param_1);
                              local_4 = FUN_200f9e9e(uVar3);
                              uVar3 = FUN_20058110(0x42);
                              iVar4 = iVar8 + 0x16;
                            }
                            else {
                              iVar7 = 0x10;
                              bVar13 = true;
                              pcVar10 = pcVar2;
                              pcVar12 = s_control_team_sb_2011f70c;
                              do {
                                if (iVar7 == 0) break;
                                iVar7 = iVar7 + -1;
                                bVar13 = *pcVar10 == *pcVar12;
                                pcVar10 = pcVar10 + 1;
                                pcVar12 = pcVar12 + 1;
                              } while (bVar13);
                              if (!bVar13) {
                                iVar7 = 5;
                                bVar13 = true;
                                pcVar10 = pcVar2;
                                pcVar12 = &DAT_2011f704;
                                do {
                                  if (iVar7 == 0) break;
                                  iVar7 = iVar7 + -1;
                                  bVar13 = *pcVar10 == *pcVar12;
                                  pcVar10 = pcVar10 + 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (bVar13);
                                if (bVar13) {
                                  local_4 = FUN_20055470(&param_1);
                                  if (iVar9 < DAT_20225a38) {
                                    DAT_20225a38 = iVar9;
                                  }
                                  if (DAT_20225a40 < iVar9) {
                                    DAT_20225a40 = iVar9;
                                  }
                                  if (iVar8 < DAT_20225a3c) {
                                    DAT_20225a3c = iVar8;
                                  }
                                  if (DAT_20225a44 < iVar8) {
                                    DAT_20225a44 = iVar8;
                                  }
                                  iVar7 = iVar9 + 0x17;
                                  iVar4 = iVar8 + 0x17;
                                  if (iVar7 < DAT_20225a38) {
                                    DAT_20225a38 = iVar7;
                                  }
                                  if (DAT_20225a40 < iVar7) {
                                    DAT_20225a40 = iVar7;
                                  }
                                  if (iVar4 < DAT_20225a3c) {
                                    DAT_20225a3c = iVar4;
                                  }
                                  if (DAT_20225a44 < iVar4) {
                                    DAT_20225a44 = iVar4;
                                  }
                                  (*DAT_204035b8)(iVar9,iVar8,local_4,0xffffffff);
                                }
                                else {
                                  iVar7 = 7;
                                  bVar13 = true;
                                  pcVar10 = pcVar2;
                                  pcVar12 = s_string_2011f6fc;
                                  do {
                                    if (iVar7 == 0) break;
                                    iVar7 = iVar7 + -1;
                                    bVar13 = *pcVar10 == *pcVar12;
                                    pcVar10 = pcVar10 + 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (bVar13);
                                  if (bVar13) {
                                    uVar3 = FUN_20055470(&param_1);
                                    (*DAT_204035d4)(iVar9,iVar8,uVar3,0x400,&local_14);
                                  }
                                  else {
                                    iVar7 = 10;
                                    bVar13 = true;
                                    pcVar10 = pcVar2;
                                    pcVar12 = s_altstring_2011f6f0;
                                    do {
                                      if (iVar7 == 0) break;
                                      iVar7 = iVar7 + -1;
                                      bVar13 = *pcVar10 == *pcVar12;
                                      pcVar10 = pcVar10 + 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (bVar13);
                                    if (bVar13) {
                                      pcVar2 = (char *)FUN_20055470(&param_1);
                                      cVar1 = *pcVar2;
                                      iVar7 = iVar9;
                                      while (cVar1 != '\0') {
                                        (*DAT_204035c8)(iVar7,iVar8,(int)cVar1 ^ 0x80,&local_10);
                                        pcVar10 = pcVar2 + 1;
                                        iVar7 = iVar7 + 8;
                                        pcVar2 = pcVar2 + 1;
                                        cVar1 = *pcVar10;
                                      }
                                    }
                                    else {
                                      iVar7 = 3;
                                      bVar13 = true;
                                      pcVar10 = pcVar2;
                                      pcVar12 = &DAT_2011f6ec;
                                      do {
                                        if (iVar7 == 0) break;
                                        iVar7 = iVar7 + -1;
                                        bVar13 = *pcVar10 == *pcVar12;
                                        pcVar10 = pcVar10 + 1;
                                        pcVar12 = pcVar12 + 1;
                                      } while (bVar13);
                                      if (bVar13) {
                                        uVar3 = FUN_20055470(&param_1);
                                        uVar6 = FUN_200f9e9e(uVar3);
                                        local_14 = *(undefined4 *)
                                                    (&DAT_202259a8 + (uVar6 & 0xf) * 4);
                                      }
                                      else {
                                        iVar7 = 3;
                                        bVar13 = true;
                                        pcVar10 = &DAT_2011f6e8;
                                        do {
                                          if (iVar7 == 0) break;
                                          iVar7 = iVar7 + -1;
                                          bVar13 = *pcVar2 == *pcVar10;
                                          pcVar2 = pcVar2 + 1;
                                          pcVar10 = pcVar10 + 1;
                                        } while (bVar13);
                                        if (bVar13) {
                                          uVar3 = FUN_20055470(&param_1);
                                          uVar6 = FUN_200f9e9e(uVar3);
                                          local_10 = *(undefined4 *)
                                                      (&DAT_202259a8 + (uVar6 & 0xf) * 4);
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_20015789;
                              }
                              local_18 = (undefined *)0xffafafaf;
                              local_24 = -1;
                              uVar3 = FUN_20055470(&param_1);
                              iVar8 = FUN_200f9e9e(uVar3);
                              iVar9 = iVar8 + -0xa0 + DAT_2040365c / 2;
                              uVar3 = FUN_20055470(&param_1);
                              iVar8 = FUN_200f9e9e(uVar3);
                              iVar8 = iVar8 + -0x78 + DAT_20403660 / 2;
                              if (iVar9 < DAT_20225a38) {
                                DAT_20225a38 = iVar9;
                              }
                              if (DAT_20225a40 < iVar9) {
                                DAT_20225a40 = iVar9;
                              }
                              if (iVar8 < DAT_20225a3c) {
                                DAT_20225a3c = iVar8;
                              }
                              if (DAT_20225a44 < iVar8) {
                                DAT_20225a44 = iVar8;
                              }
                              iVar4 = iVar9 + 0x9f;
                              iVar7 = iVar8 + 0x1f;
                              if (iVar4 < DAT_20225a38) {
                                DAT_20225a38 = iVar4;
                              }
                              if (DAT_20225a40 < iVar4) {
                                DAT_20225a40 = iVar4;
                              }
                              if (iVar7 < DAT_20225a3c) {
                                DAT_20225a3c = iVar7;
                              }
                              if (DAT_20225a44 < iVar7) {
                                DAT_20225a44 = iVar7;
                              }
                              uVar3 = FUN_20055470(&param_1);
                              iVar7 = FUN_200f9e9e(uVar3);
                              if (iVar7 == 0) {
                                pcVar2 = s_pics_interface2_ctfb_hudflag_2011cd58;
                              }
                              else {
                                pcVar2 = s_pics_interface2_ctfr_hudflag_2011ccf8;
                              }
                              (*DAT_204035c4)(iVar9,iVar8,0x20,0x20,&local_24,pcVar2,0);
                              uVar3 = FUN_20055470(&param_1);
                              local_4 = FUN_200f9e9e(uVar3);
                              uVar3 = FUN_20058110(0x3e);
                              iVar7 = iVar9 + 0x20;
                              (*DAT_204035d4)(iVar7,iVar8 + 0x16,uVar3,0x400,&local_18);
                              uVar3 = FUN_20055450(&DAT_2011ee58,local_4);
                              (*DAT_204035d4)(iVar9 + 0x58,iVar8 + 0x16,uVar3,0x400,&local_24);
                              uVar3 = FUN_20055470(&param_1);
                              local_4 = FUN_200f9e9e(uVar3);
                              uVar3 = FUN_20058110(0x43);
                              iVar4 = iVar8 + 0xc;
                            }
                            (*DAT_204035d4)(iVar7,iVar4,uVar3,0x400,&local_18);
                            uVar3 = FUN_20055450(&DAT_2011ee58,local_4);
                            (*DAT_204035d4)(iVar9 + 0x96,iVar4,uVar3,0x400,&local_24);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_20015789:
    } while (param_1 != (char *)0x0);
  }
  return;
}

