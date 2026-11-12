// rea decompile_all
// name: FUN_2006d180
// address: 0x2006d180
// body: available
// range: 0x2006d180-0x2006dfce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2006d180(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  uint unaff_EBP;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  undefined4 uVar12;
  longlong lVar11;
  int *local_41c [2];
  int *local_414;
  int local_410;
  undefined1 local_40c [8];
  undefined4 local_404;
  undefined1 local_3f9;
  undefined1 local_3f8 [4];
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ba22;
  local_c = ExceptionList;
  iVar8 = 0;
  ExceptionList = &local_c;
  local_414 = (int *)FUN_20083520(0,0);
  local_410 = 0;
  local_4 = 0;
  if (0 < param_1) {
    lVar11 = (ulonglong)unaff_EBP << 0x20;
    do {
      uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
      FUN_20107ed2(*(undefined4 *)(param_2 + iVar8 * 4),uVar12);
      pcVar4 = *(char **)(param_2 + iVar8 * 4);
      local_40c[0] = local_3f9;
      FUN_2000a5b0(0);
      uVar7 = 0xffffffff;
      pcVar9 = pcVar4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar4,~uVar7 - 1);
      local_4._0_1_ = 1;
      FUN_20073050(local_41c,local_414,local_40c);
      lVar11 = CONCAT44(uVar12,1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1);
  }
  iVar8 = FUN_20076600();
  if (iVar8 == 0) {
    FUN_20083550();
    piVar6 = local_41c[0];
    piVar2 = DAT_20403860;
    while (DAT_20403860 = piVar2, piVar6 != piVar2) {
      if (piVar6[7] != 0) {
        FUN_2006dfd0();
      }
      FUN_2006f3a0(local_41c,0);
      piVar2 = DAT_20403860;
    }
    FUN_20083550();
    FUN_2006f2e0(local_3f8,local_41c[0],piVar2);
    FUN_20083550();
    piVar2 = local_41c[0];
    while (piVar2 != DAT_204036e0) {
      FUN_2008a990();
      FUN_200702b0(local_3f8,0);
    }
    FUN_20083550();
    piVar2 = local_41c[0];
    while (piVar2 != DAT_20403a88) {
      FUN_2008a990();
      FUN_200702b0(local_3f8,0);
    }
    FUN_20083550();
    piVar2 = local_41c[0];
    while (piVar2 != DAT_204038b8) {
      FUN_2008a990();
      FUN_200702b0(local_3f8,0);
    }
  }
  else {
    iVar8 = FUN_20076600();
    if (iVar8 == 0) {
      if (*(int **)*local_414 != local_414) {
        fVar10 = (float10)FUN_200fafcc();
        DAT_20157004 = (float)fVar10;
        if (fVar10 <= (float10)100.0) {
          if (DAT_20157004 < 0.01) {
            DAT_20157004 = 0.01;
          }
        }
        else {
          DAT_20157004 = 100.0;
        }
      }
    }
    else {
      iVar8 = FUN_20076600();
      if (iVar8 == 0) {
        FUN_200c0f90();
      }
      else {
        iVar8 = FUN_20076600();
        if ((iVar8 == 0) || (iVar8 = FUN_20076600(), iVar8 == 0)) {
          FUN_20083550();
          piVar2 = local_41c[0];
          while (piVar2 != DAT_20403860) {
            FUN_200a6180();
            FUN_2006f3a0(local_3f8,0);
          }
        }
        else {
          iVar8 = FUN_20076600();
          if ((((iVar8 != 0) && (iVar8 = FUN_20076600(), iVar8 != 0)) &&
              (iVar8 = FUN_20076600(), iVar8 != 0)) &&
             ((iVar8 = FUN_20076600(), iVar8 != 0 && (iVar8 = FUN_20076600(), iVar8 != 0)))) {
            iVar8 = FUN_20076600();
            if (iVar8 == 0) {
              piVar2 = *(int **)*local_414;
              if (piVar2 != local_414) {
                local_40c[0] = (undefined1)piVar2[2];
                FUN_2000a5b0();
                FUN_2000a3a0(piVar2 + 2,0,0xffffffff);
                local_4 = CONCAT31(local_4._1_3_,2);
                iVar8 = FUN_20076600();
                if (iVar8 == 0) {
                  DAT_20403c0b = DAT_20403c0b == '\0';
                }
                else {
                  iVar8 = FUN_20076600();
                  if (iVar8 == 0) {
                    DAT_20403c0b = '\x01';
                  }
                  else {
                    iVar8 = FUN_20076600();
                    if (iVar8 == 0) {
                      DAT_20403c0b = '\0';
                    }
                  }
                }
                local_4 = local_4 & 0xffffff00;
                FUN_2000a5b0();
              }
              if (DAT_20403c0b == '\0') {
                FUN_2008ea00(s_Test_is_Off_20156f4c,0);
              }
              else {
                FUN_2008ea00(s_Test_is_On_20156f5c,0);
              }
            }
            else {
              iVar8 = FUN_20076600();
              if ((iVar8 == 0) || (iVar8 = FUN_20076600(), iVar8 == 0)) {
                if (*(int **)*local_414 != local_414) {
                  fVar10 = (float10)FUN_200fafcc();
                  _DAT_20157008 = (float)fVar10;
                  if (fVar10 <= (float10)6.0) {
                    if (_DAT_20157008 < 0.0) {
                      _DAT_20157008 = 0.0;
                    }
                  }
                  else {
                    _DAT_20157008 = 6.0;
                  }
                }
                FUN_200fabac(local_3f4,s_LIGHT_SMOOTH____4_2f_20156da4,(double)_DAT_20157008);
                FUN_2008ea00(local_3f4,0);
              }
              else {
                iVar8 = FUN_20076600();
                if ((iVar8 == 0) || (iVar8 = FUN_20076600(), iVar8 == 0)) {
                  if (*(int **)*local_414 != local_414) {
                    fVar10 = (float10)FUN_200fafcc();
                    _DAT_2015700c = (float)fVar10;
                    if (fVar10 <= (float10)1.0) {
                      if (_DAT_2015700c < 0.0) {
                        _DAT_2015700c = 0.0;
                      }
                    }
                    else {
                      _DAT_2015700c = 1.0;
                    }
                  }
                  FUN_200fabac(local_3f4,s_LIGHT_AMBIENT____4_2f_20156dbc,(double)_DAT_2015700c);
                  FUN_2008ea00(local_3f4,0);
                }
                else {
                  iVar8 = FUN_20076600();
                  if ((iVar8 == 0) || (iVar8 = FUN_20076600(), iVar8 == 0)) {
                    piVar2 = *(int **)*local_414;
                    if (piVar2 != local_414) {
                      local_40c[0] = (undefined1)piVar2[2];
                      FUN_2000a5b0();
                      FUN_2000a3a0(piVar2 + 2,0,0xffffffff);
                      local_4 = CONCAT31(local_4._1_3_,3);
                      iVar8 = FUN_20076600();
                      if (iVar8 == 0) {
                        DAT_204064ec = DAT_204064ec == '\0';
                      }
                      else {
                        iVar8 = FUN_20076600();
                        if (iVar8 == 0) {
                          DAT_204064ec = '\x01';
                        }
                        else {
                          iVar8 = FUN_20076600();
                          if (iVar8 == 0) {
                            DAT_204064ec = '\0';
                          }
                        }
                      }
                      local_4 = local_4 & 0xffffff00;
                      FUN_2000a5b0();
                    }
                    if (DAT_204064ec == '\0') {
                      FUN_2008ea00(s_PreCacheAll_is_Off_20156dd4,0);
                    }
                    else {
                      FUN_2008ea00(s_PreCacheAll_is_On_20156de8,0);
                    }
                  }
                  else {
                    uVar7 = 0xffffffff;
                    pcVar4 = s_AUTOPREP_20156ee8;
                    do {
                      if (uVar7 == 0) break;
                      uVar7 = uVar7 - 1;
                      cVar1 = *pcVar4;
                      pcVar4 = pcVar4 + 1;
                    } while (cVar1 != '\0');
                    iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),s_AUTOPREP_20156ee8,
                                         ~uVar7 - 1);
                    if (iVar8 != 0) {
                      uVar7 = 0xffffffff;
                      pcVar4 = s_AUTO_PREP_20156edc;
                      do {
                        if (uVar7 == 0) break;
                        uVar7 = uVar7 - 1;
                        cVar1 = *pcVar4;
                        pcVar4 = pcVar4 + 1;
                      } while (cVar1 != '\0');
                      iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),s_AUTO_PREP_20156edc
                                           ,~uVar7 - 1);
                      if (iVar8 != 0) {
                        uVar7 = 0xffffffff;
                        pcVar4 = s_CACHEGHB_20156ed0;
                        do {
                          if (uVar7 == 0) break;
                          uVar7 = uVar7 - 1;
                          cVar1 = *pcVar4;
                          pcVar4 = pcVar4 + 1;
                        } while (cVar1 != '\0');
                        iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                             s_CACHEGHB_20156ed0,~uVar7 - 1);
                        if (iVar8 != 0) {
                          uVar7 = 0xffffffff;
                          pcVar4 = s_CACHE_GHB_20156ec4;
                          do {
                            if (uVar7 == 0) break;
                            uVar7 = uVar7 - 1;
                            cVar1 = *pcVar4;
                            pcVar4 = pcVar4 + 1;
                          } while (cVar1 != '\0');
                          iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                               s_CACHE_GHB_20156ec4,~uVar7 - 1);
                          if (iVar8 != 0) {
                            uVar7 = 0xffffffff;
                            pcVar4 = s_FLUSHMESHCACHE_20156eb4;
                            do {
                              if (uVar7 == 0) break;
                              uVar7 = uVar7 - 1;
                              cVar1 = *pcVar4;
                              pcVar4 = pcVar4 + 1;
                            } while (cVar1 != '\0');
                            iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                 s_FLUSHMESHCACHE_20156eb4,~uVar7 - 1);
                            if (iVar8 != 0) {
                              uVar7 = 0xffffffff;
                              pcVar4 = s_FLUSH_MESH_CACHE_20156ea0;
                              do {
                                if (uVar7 == 0) break;
                                uVar7 = uVar7 - 1;
                                cVar1 = *pcVar4;
                                pcVar4 = pcVar4 + 1;
                              } while (cVar1 != '\0');
                              iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                   s_FLUSH_MESH_CACHE_20156ea0,~uVar7 - 1);
                              if (iVar8 != 0) {
                                uVar7 = 0xffffffff;
                                pcVar4 = s_SPEED_20156e98;
                                do {
                                  if (uVar7 == 0) break;
                                  uVar7 = uVar7 - 1;
                                  cVar1 = *pcVar4;
                                  pcVar4 = pcVar4 + 1;
                                } while (cVar1 != '\0');
                                iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                     s_SPEED_20156e98,~uVar7 - 1);
                                if (iVar8 != 0) {
                                  uVar7 = 0xffffffff;
                                  pcVar4 = s_LISTFILES_20156e8c;
                                  do {
                                    if (uVar7 == 0) break;
                                    uVar7 = uVar7 - 1;
                                    cVar1 = *pcVar4;
                                    pcVar4 = pcVar4 + 1;
                                  } while (cVar1 != '\0');
                                  iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                       s_LISTFILES_20156e8c,~uVar7 - 1);
                                  if (iVar8 != 0) {
                                    uVar7 = 0xffffffff;
                                    pcVar4 = s_LIST_FILES_20156e80;
                                    do {
                                      if (uVar7 == 0) break;
                                      uVar7 = uVar7 - 1;
                                      cVar1 = *pcVar4;
                                      pcVar4 = pcVar4 + 1;
                                    } while (cVar1 != '\0');
                                    iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                         s_LIST_FILES_20156e80,~uVar7 - 1);
                                    if (iVar8 != 0) {
                                      uVar7 = 0xffffffff;
                                      pcVar4 = s_SUMMARY_20156d9c;
                                      do {
                                        if (uVar7 == 0) break;
                                        uVar7 = uVar7 - 1;
                                        cVar1 = *pcVar4;
                                        pcVar4 = pcVar4 + 1;
                                      } while (cVar1 != '\0');
                                      iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                           s_SUMMARY_20156d9c,~uVar7 - 1);
                                      if (iVar8 == 0) {
                                        pcVar4 = s_foo_bar_20156d94;
                                        if (DAT_204036d4 != '\0') {
                                          FUN_200c0f90();
                                          pcVar4 = s_Server_20156d8c;
                                        }
                                        if (DAT_204036d5 != '\0') {
                                          pcVar4 = s_Client_20156d84;
                                        }
                                        if (DAT_204036d6 != '\0') {
                                          pcVar4 = &DAT_20156d7c;
                                        }
                                        FUN_200fabac(local_3f4,s__s__d_obj__d_inst_20156d64,pcVar4,
                                                     DAT_204036ec,DAT_204037d4);
                                        FUN_2008ea00(local_3f4,0);
                                      }
                                      uVar7 = 0xffffffff;
                                      pcVar4 = s_SUMMARY_20156d9c;
                                      do {
                                        if (uVar7 == 0) break;
                                        uVar7 = uVar7 - 1;
                                        cVar1 = *pcVar4;
                                        pcVar4 = pcVar4 + 1;
                                      } while (cVar1 != '\0');
                                      iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                           s_SUMMARY_20156d9c,~uVar7 - 1);
                                      if (iVar8 == 0) {
                                        pcVar4 = s_foo_bar_20156d94;
                                        if (DAT_20403a7c != '\0') {
                                          FUN_200c0f90();
                                          pcVar4 = s_Server_20156d8c;
                                        }
                                        if (DAT_20403a7d != '\0') {
                                          pcVar4 = s_Client_20156d84;
                                        }
                                        if (DAT_20403a7e != '\0') {
                                          pcVar4 = &DAT_20156d7c;
                                        }
                                        FUN_200fabac(local_3f4,s__s__d_obj__d_inst_20156d64,pcVar4,
                                                     DAT_20403a94,DAT_20403b7c);
                                        FUN_2008ea00(local_3f4,0);
                                      }
                                      uVar7 = 0xffffffff;
                                      pcVar4 = s_SUMMARY_20156d9c;
                                      do {
                                        if (uVar7 == 0) break;
                                        uVar7 = uVar7 - 1;
                                        cVar1 = *pcVar4;
                                        pcVar4 = pcVar4 + 1;
                                      } while (cVar1 != '\0');
                                      iVar8 = FUN_20023c90(0,*(undefined4 *)(*local_414 + 0x10),
                                                           s_SUMMARY_20156d9c,~uVar7 - 1);
                                      if (iVar8 == 0) {
                                        pcVar4 = s_foo_bar_20156d94;
                                        if (DAT_204038ac != '\0') {
                                          FUN_200c0f90();
                                          pcVar4 = s_Server_20156d8c;
                                        }
                                        if (DAT_204038ad != '\0') {
                                          pcVar4 = s_Client_20156d84;
                                        }
                                        if (DAT_204038ae != '\0') {
                                          pcVar4 = &DAT_20156d7c;
                                        }
                                        FUN_200fabac(local_3f4,s__s__d_obj__d_inst_20156d64,pcVar4,
                                                     DAT_204038c4,DAT_204039ac);
                                        FUN_2008ea00(local_3f4,0);
                                      }
                                      goto LAB_2006df4c;
                                    }
                                  }
                                  FUN_200fabac(local_3f4,s__d_total_ghoul_files_have_been_l_20156e58
                                               ,DAT_204058a0);
                                  FUN_2008ea00(local_3f4,0);
                                  piVar2 = (int *)*DAT_20405894;
                                  while (piVar2 != DAT_20405894) {
                                    puVar5 = (undefined1 *)piVar2[4];
                                    if (puVar5 == (undefined1 *)0x0) {
                                      puVar5 = &DAT_201116cc;
                                    }
                                    FUN_200fabac(local_3f4,&DAT_2011d990,puVar5);
                                    FUN_2008ea00(local_3f4,1);
                                    FUN_20027950();
                                  }
                                }
                                goto LAB_2006df4c;
                              }
                            }
                            FUN_200b9150();
                            FUN_2008ea00(s_Mesh_Cache_Flushed_20156e44,0);
                            goto LAB_2006df4c;
                          }
                        }
                        piVar2 = *(int **)*local_414;
                        if (piVar2 != local_414) {
                          local_40c[0] = (undefined1)piVar2[2];
                          FUN_2000a5b0();
                          FUN_2000a3a0(piVar2 + 2,0,0xffffffff);
                          uVar7 = 0xffffffff;
                          pcVar4 = &DAT_20136450;
                          do {
                            if (uVar7 == 0) break;
                            uVar7 = uVar7 - 1;
                            cVar1 = *pcVar4;
                            pcVar4 = pcVar4 + 1;
                          } while (cVar1 != '\0');
                          local_4 = CONCAT31(local_4._1_3_,5);
                          iVar8 = FUN_20023c90(0,local_404,&DAT_20136450,~uVar7 - 1);
                          if (iVar8 == 0) {
                            DAT_20156cac = DAT_20156cac == '\0';
                          }
                          else {
                            uVar7 = 0xffffffff;
                            pcVar4 = &DAT_2011d31c;
                            do {
                              if (uVar7 == 0) break;
                              uVar7 = uVar7 - 1;
                              cVar1 = *pcVar4;
                              pcVar4 = pcVar4 + 1;
                            } while (cVar1 != '\0');
                            iVar8 = FUN_20023c90(0,local_404,&DAT_2011d31c,~uVar7 - 1);
                            if (iVar8 == 0) {
                              DAT_20156cac = '\x01';
                            }
                            else {
                              uVar7 = 0xffffffff;
                              pcVar4 = &DAT_2011c4ac;
                              do {
                                if (uVar7 == 0) break;
                                uVar7 = uVar7 - 1;
                                cVar1 = *pcVar4;
                                pcVar4 = pcVar4 + 1;
                              } while (cVar1 != '\0');
                              iVar8 = FUN_20023c90(0,local_404,&DAT_2011c4ac,~uVar7 - 1);
                              if (iVar8 == 0) {
                                DAT_20156cac = '\0';
                              }
                            }
                          }
                          local_4 = local_4 & 0xffffff00;
                          FUN_2000a5b0();
                        }
                        if (DAT_20156cac == '\0') {
                          FUN_2008ea00(s_CacheGHB_is_Off_20156e20,0);
                          FUN_200697a0();
                        }
                        else {
                          FUN_2008ea00(s_CacheGHB_is_On_20156e34,0);
                        }
                        goto LAB_2006df4c;
                      }
                    }
                    if (*(int **)*local_414 != local_414) {
                      piVar2 = *(int **)*local_414 + 2;
                      local_40c[0] = (undefined1)*piVar2;
                      FUN_2000a5b0();
                      FUN_2000a3a0(piVar2,0,0xffffffff);
                      uVar7 = 0xffffffff;
                      local_4 = CONCAT31(local_4._1_3_,4);
                      pcVar4 = &DAT_20136450;
                      do {
                        if (uVar7 == 0) break;
                        uVar7 = uVar7 - 1;
                        cVar1 = *pcVar4;
                        pcVar4 = pcVar4 + 1;
                      } while (cVar1 != '\0');
                      iVar8 = FUN_20023c90(0,local_404,&DAT_20136450,~uVar7 - 1);
                      if (iVar8 == 0) {
                        DAT_20403c09 = DAT_20403c09 == '\0';
                      }
                      else {
                        uVar7 = 0xffffffff;
                        pcVar4 = &DAT_2011d31c;
                        do {
                          if (uVar7 == 0) break;
                          uVar7 = uVar7 - 1;
                          cVar1 = *pcVar4;
                          pcVar4 = pcVar4 + 1;
                        } while (cVar1 != '\0');
                        iVar8 = FUN_20023c90(0,local_404,&DAT_2011d31c,~uVar7 - 1);
                        if (iVar8 == 0) {
                          DAT_20403c09 = '\x01';
                        }
                        else {
                          uVar7 = 0xffffffff;
                          pcVar4 = &DAT_2011c4ac;
                          do {
                            if (uVar7 == 0) break;
                            uVar7 = uVar7 - 1;
                            cVar1 = *pcVar4;
                            pcVar4 = pcVar4 + 1;
                          } while (cVar1 != '\0');
                          iVar8 = FUN_20023c90(0,local_404,&DAT_2011c4ac,~uVar7 - 1);
                          if (iVar8 == 0) {
                            DAT_20403c09 = '\0';
                          }
                        }
                      }
                      local_4 = local_4 & 0xffffff00;
                      FUN_2000a5b0();
                    }
                    if (DAT_20403c09 == '\0') {
                      FUN_2008ea00(s_AutoPrep_is_Off_20156dfc,0);
                    }
                    else {
                      FUN_2008ea00(s_AutoPrep_is_On_20156e10,0);
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
LAB_2006df4c:
  piVar3 = local_414;
  local_4 = 0xffffffff;
  piVar2 = (int *)*local_414;
  piVar6 = local_41c[0];
  while (local_41c[0] = piVar2, local_41c[0] != piVar3) {
    piVar2 = (int *)*local_41c[0];
    piVar6 = (int *)FUN_2008d0b0(local_3f8,0);
    piVar6 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_20027f20();
    FUN_200f9f75();
    local_410 = local_410 + -1;
    piVar6 = local_41c[0];
  }
  local_41c[0] = piVar6;
  FUN_200f9f75();
  ExceptionList = local_c;
  return;
}

