// rea decompile_all
// name: FUN_200d8230
// address: 0x200d8230
// body: available
// range: 0x200d8230-0x200d885b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200d8230(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  
  cVar2 = FUN_200eafe0(1);
  do {
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      return 1;
    }
    pcVar11 = &DAT_20158e0c;
    pcVar3 = (char *)FUN_200eb440(0);
    iVar4 = __strcmpi(pcVar3,pcVar11);
    if (iVar4 == 0) {
      FUN_200eafe0(1);
      uVar12 = 0;
      uVar10 = 0;
      puVar9 = &DAT_2011c4ac;
      uVar5 = FUN_200eb440(0);
      iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
      in_ECX[0x44] = iVar4;
    }
    else {
      pcVar11 = s_pitch_20158e04;
      pcVar3 = (char *)FUN_200eb440(0);
      iVar4 = __strcmpi(pcVar3,pcVar11);
      if (iVar4 == 0) {
        FUN_200eafe0(1);
        uVar12 = 0;
        uVar10 = 0;
        puVar9 = &DAT_2011c4ac;
        uVar5 = FUN_200eb440(0);
        iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
        in_ECX[0x45] = iVar4;
      }
      else {
        pcVar11 = &DAT_20158dfc;
        pcVar3 = (char *)FUN_200eb440(0);
        iVar4 = __strcmpi(pcVar3,pcVar11);
        if (iVar4 == 0) {
          FUN_200eafe0(1);
          uVar12 = 0;
          uVar10 = 0;
          puVar9 = &DAT_2011c4ac;
          uVar5 = FUN_200eb440(0);
          iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
          in_ECX[0x46] = iVar4;
        }
        else {
          pcVar11 = s_scale_20158b04;
          pcVar3 = (char *)FUN_200eb440(0);
          iVar4 = __strcmpi(pcVar3,pcVar11);
          if (iVar4 == 0) {
            FUN_200eafe0(1);
            if ((((*(char *)((int)in_ECX + 99) == '\0') || ((char)in_ECX[0x19] == '\0')) ||
                (in_ECX[0x20] == 2)) || (in_ECX[0x20] == 3)) {
              uVar5 = FUN_200eb440(0);
              fVar8 = (float10)FUN_200fafcc(uVar5);
            }
            else {
              fVar1 = *(float *)(**(int **)in_ECX[1] + 0xac);
              uVar5 = FUN_200eb440(0);
              fVar8 = (float10)FUN_200fafcc(uVar5);
              fVar8 = fVar8 * (float10)fVar1;
            }
            in_ECX[7] = (int)(float)fVar8;
            iVar4 = __ftol();
            in_ECX[10] = iVar4;
            iVar4 = __ftol();
            in_ECX[0xb] = iVar4;
          }
          else {
            pcVar11 = s_oneshot_20158df4;
            pcVar3 = (char *)FUN_200eb440(0);
            iVar4 = __strcmpi(pcVar3,pcVar11);
            if (iVar4 == 0) {
              *(undefined1 *)(in_ECX + 0x2e) = 0;
            }
            else {
              pcVar11 = s_control_20158dec;
              pcVar3 = (char *)FUN_200eb440(0);
              iVar4 = __strcmpi(pcVar3,pcVar11);
              if (iVar4 == 0) {
                *(undefined1 *)(in_ECX + 0x2f) = 1;
              }
              else {
                pcVar11 = &DAT_20158de4;
                pcVar3 = (char *)FUN_200eb440(0);
                iVar4 = __strcmpi(pcVar3,pcVar11);
                if (iVar4 == 0) {
                  FUN_200eafe0(1);
                  uVar5 = FUN_200eb440(0);
                  fVar8 = (float10)FUN_200fafcc(uVar5);
                  in_ECX[0x31] = (int)(float)fVar8;
                  *(undefined1 *)((int)in_ECX + 0xba) = 1;
                }
                else {
                  pcVar11 = s_animate_20158ddc;
                  pcVar3 = (char *)FUN_200eb440(0);
                  iVar4 = __strcmpi(pcVar3,pcVar11);
                  if (iVar4 == 0) {
                    *(undefined1 *)((int)in_ECX + 0xb9) = 1;
                    *(undefined1 *)((int)in_ECX + 0xba) = 1;
                  }
                  else {
                    pcVar11 = s_rotate_20158dd4;
                    pcVar3 = (char *)FUN_200eb440(0);
                    iVar4 = __strcmpi(pcVar3,pcVar11);
                    if (iVar4 == 0) {
                      FUN_200eafe0(3);
                      uVar5 = FUN_200eb440(0);
                      fVar8 = (float10)FUN_200fafcc(uVar5);
                      in_ECX[0x39] = (int)(float)fVar8;
                      uVar5 = FUN_200eb440(1);
                      fVar8 = (float10)FUN_200fafcc(uVar5);
                      in_ECX[0x3a] = (int)(float)fVar8;
                      uVar5 = FUN_200eb440(2);
                      fVar8 = (float10)FUN_200fafcc(uVar5);
                      in_ECX[0x3b] = (int)(float)fVar8;
                    }
                    else {
                      pcVar11 = s_rotation_20158dc8;
                      pcVar3 = (char *)FUN_200eb440(0);
                      iVar4 = __strcmpi(pcVar3,pcVar11);
                      if (iVar4 == 0) {
                        FUN_200eafe0(3);
                        uVar5 = FUN_200eb440(0);
                        fVar8 = (float10)FUN_200fafcc(uVar5);
                        in_ECX[0x3c] = (int)(float)fVar8;
                        uVar5 = FUN_200eb440(1);
                        fVar8 = (float10)FUN_200fafcc(uVar5);
                        in_ECX[0x3d] = (int)(float)fVar8;
                        uVar5 = FUN_200eb440(2);
                        fVar8 = (float10)FUN_200fafcc(uVar5);
                        in_ECX[0x3e] = (int)(float)fVar8;
                      }
                      else {
                        pcVar11 = s_mousex_20158dc0;
                        pcVar3 = (char *)FUN_200eb440(0);
                        iVar4 = __strcmpi(pcVar3,pcVar11);
                        if (iVar4 == 0) {
                          FUN_200eafe0(2);
                          uVar12 = 0;
                          uVar10 = 0;
                          puVar9 = &DAT_2011c4ac;
                          uVar5 = FUN_200eb440(0);
                          iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
                          in_ECX[0x47] = iVar4;
                          uVar5 = FUN_200eb440(1);
                          fVar8 = (float10)FUN_200fafcc(uVar5);
                          in_ECX[0x48] = (int)(float)fVar8;
                          *(undefined1 *)(in_ECX + 0x18) = 1;
                        }
                        else {
                          pcVar11 = s_mousey_20158db8;
                          pcVar3 = (char *)FUN_200eb440(0);
                          iVar4 = __strcmpi(pcVar3,pcVar11);
                          if (iVar4 == 0) {
                            FUN_200eafe0(2);
                            uVar12 = 0;
                            uVar10 = 0;
                            puVar9 = &DAT_2011c4ac;
                            uVar5 = FUN_200eb440(0);
                            iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
                            in_ECX[0x49] = iVar4;
                            uVar5 = FUN_200eb440(1);
                            fVar8 = (float10)FUN_200fafcc(uVar5);
                            in_ECX[0x4a] = (int)(float)fVar8;
                            *(undefined1 *)(in_ECX + 0x18) = 1;
                          }
                          else {
                            pcVar11 = s_gbolt_20158db0;
                            pcVar3 = (char *)FUN_200eb440(0);
                            iVar4 = __strcmpi(pcVar3,pcVar11);
                            if (iVar4 == 0) {
                              (**(code **)(*in_ECX + 0x44))(param_1);
                            }
                            else {
                              pcVar11 = s_bgbolt_20158da8;
                              pcVar3 = (char *)FUN_200eb440(0);
                              iVar4 = __strcmpi(pcVar3,pcVar11);
                              if (iVar4 == 0) {
                                (**(code **)(*in_ECX + 0x48))(param_1);
                              }
                              else {
                                pcVar11 = &DAT_20158da4;
                                pcVar3 = (char *)FUN_200eb440(0);
                                iVar4 = __strcmpi(pcVar3,pcVar11);
                                if (iVar4 == 0) {
                                  FUN_200eafe0(1);
                                  pcVar3 = (char *)FUN_200eb440(0);
                                  uVar6 = 0xffffffff;
                                  pcVar11 = pcVar3;
                                  do {
                                    if (uVar6 == 0) break;
                                    uVar6 = uVar6 - 1;
                                    cVar2 = *pcVar11;
                                    pcVar11 = pcVar11 + 1;
                                  } while (cVar2 != '\0');
                                  uVar6 = ~uVar6 - 1;
                                  if (0xfffffffd < uVar6) {
                                    FUN_201075d0();
                                  }
                                  iVar4 = in_ECX[0x33];
                                  in_ECX[0x34] = 0;
                                  if ((iVar4 == 0) || (*(char *)(iVar4 + -1) == '\0')) {
                                    if (uVar6 != 0) {
                                      if ((0x1f < (uint)in_ECX[0x35]) ||
                                         ((uint)in_ECX[0x35] < uVar6)) {
                                        if (iVar4 != 0) {
                                          if (*(char *)(iVar4 + -1) == '\0') {
                                            FUN_200f9f75((char *)(iVar4 + -1));
                                          }
                                          else {
                                            *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
                                          }
                                        }
                                        in_ECX[0x33] = 0;
                                        in_ECX[0x34] = 0;
                                        in_ECX[0x35] = 0;
                                        goto LAB_200d8799;
                                      }
                                      goto LAB_200d87a1;
                                    }
                                    if (iVar4 != 0) {
                                      if (*(char *)(iVar4 + -1) != '\0') {
                                        *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
                                        in_ECX[0x33] = 0;
                                        in_ECX[0x34] = 0;
                                        in_ECX[0x35] = 0;
                                        goto LAB_200d8822;
                                      }
                                      FUN_200f9f75((char *)(iVar4 + -1));
                                    }
                                    in_ECX[0x33] = 0;
                                    in_ECX[0x34] = 0;
                                    in_ECX[0x35] = 0;
                                  }
                                  else if (uVar6 == 0) {
                                    *(char *)(iVar4 + -1) = *(char *)(iVar4 + -1) + -1;
                                    in_ECX[0x33] = 0;
                                    in_ECX[0x34] = 0;
                                    in_ECX[0x35] = 0;
                                  }
                                  else {
LAB_200d8799:
                                    FUN_2000a840(uVar6);
LAB_200d87a1:
                                    pcVar11 = (char *)in_ECX[0x33];
                                    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
                                      pcVar3 = pcVar3 + 4;
                                      pcVar11 = pcVar11 + 4;
                                    }
                                    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                                      *pcVar11 = *pcVar3;
                                      pcVar3 = pcVar3 + 1;
                                      pcVar11 = pcVar11 + 1;
                                    }
                                    in_ECX[0x34] = uVar6;
                                    *(undefined1 *)(uVar6 + in_ECX[0x33]) = 0;
                                  }
                                }
                                else {
                                  pcVar11 = s_cvar2_20158d9c;
                                  pcVar3 = (char *)FUN_200eb440(0);
                                  iVar4 = __strcmpi(pcVar3,pcVar11);
                                  if (iVar4 == 0) {
                                    FUN_200eafe0(1);
                                    uVar12 = 0;
                                    uVar10 = 0;
                                    puVar9 = &DAT_2015ee44;
                                    uVar5 = FUN_200eb440(0);
                                    iVar4 = Cvar_Get(uVar5,puVar9,uVar10,uVar12);
                                    in_ECX[0x4b] = iVar4;
                                  }
                                  else {
                                    cVar2 = FUN_200cf890(param_1);
                                    if (cVar2 == '\0') {
                                      FUN_200eb490(param_1,s_Unrecognised_ghoul_keyword_20158d80);
                                      return 0;
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
              }
            }
          }
        }
      }
    }
LAB_200d8822:
    cVar2 = FUN_200eafe0(1);
  } while( true );
}

