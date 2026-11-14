// rea decompile_all
// name: FUN_300172b0
// address: 0x300172b0
// body: available
// range: 0x300172b0-0x30017758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_300172b0(void *this,char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  byte *pbStack_278;
  int *piStack_274;
  int iStack_270;
  char *local_26c;
  int iStack_268;
  byte abStack_264 [68];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [12];
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3002b87e;
  local_c = ExceptionList;
  if (param_1 != (char *)0x0) {
    iVar8 = 7;
    bVar15 = true;
    pcVar18 = param_1;
    pcVar17 = &DAT_3002fa9c;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar15 = *pcVar18 == *pcVar17;
      pcVar18 = pcVar18 + 1;
      pcVar17 = pcVar17 + 1;
    } while (bVar15);
    if ((!bVar15) && (*param_1 != '\0')) {
      puVar16 = local_20c;
      pcVar17 = s_env__s_trn_3002fa90;
      ExceptionList = &local_c;
      pcVar18 = param_1;
      FUN_3002113e(puVar16,(byte *)s_env__s_trn_3002fa90);
      iVar8 = (*DAT_3008fdf4)(local_20c,&local_26c,0,puVar16,pcVar17,pcVar18);
      if (iVar8 == -1) {
        FUN_30010fd0((byte *)s__s_isn_t_a_valid_terrain_set_nam_3002fa6c);
      }
      else {
        if (*local_26c == '\"') {
          *(uint *)this = (uint)(byte)local_26c[1];
          *(undefined4 *)((int)this + 4) = *(undefined4 *)(local_26c + 2);
          *(undefined4 *)((int)this + 8) = *(undefined4 *)(local_26c + 6);
          *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(local_26c + 10);
          *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(local_26c + 0xe);
          *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(local_26c + 0x12);
          *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(local_26c + 0x16);
          *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(local_26c + 0x1a);
          *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(local_26c + 0x1e);
          *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(local_26c + 0x22);
          *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(local_26c + 0x26);
          *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(local_26c + 0x2a);
          *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(local_26c + 0x2e);
          pbVar12 = (byte *)(local_26c + 0x33);
          *(char *)((int)this + 0x3c) = local_26c[0x32];
          iVar8 = 0;
          do {
            uVar3 = *(undefined4 *)pbVar12;
            pbVar12 = pbVar12 + 4;
            *(undefined4 *)((int)this + iVar8 * 4 + 0x40) = uVar3;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          puVar5 = (undefined4 *)((int)this + 0x4c);
          iVar8 = 3;
          do {
            pbVar13 = pbVar12;
            *puVar5 = *(undefined4 *)pbVar13;
            puVar5 = puVar5 + 1;
            iVar8 = iVar8 + -1;
            pbVar12 = pbVar13 + 4;
          } while (iVar8 != 0);
          bVar2 = pbVar13[4];
          pbVar13 = pbVar13 + 5;
          piStack_274 = (int *)CONCAT31(piStack_274._1_3_,bVar2);
          *(uint *)((int)this + 0x68) = (uint)bVar2;
          iVar8 = 0;
          do {
            uVar3 = *(undefined4 *)pbVar13;
            pbVar13 = pbVar13 + 4;
            *(undefined4 *)((int)this + iVar8 * 4 + 0x5c) = uVar3;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          iVar8 = *(int *)((int)this + 0x10);
          if (0 < iVar8) {
            puVar5 = operator_new(iVar8 * 0x3c);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar9 = puVar5;
              if (-1 < iVar8 + -1) {
                do {
                  *puVar9 = 0;
                  iVar8 = iVar8 + -1;
                  puVar9 = puVar9 + 0xf;
                } while (iVar8 != 0);
              }
            }
            *(undefined4 **)((int)this + 0x1c) = puVar5;
            iStack_270 = 0;
            if (0 < *(int *)((int)this + 0x10)) {
              piStack_274 = (int *)0x0;
              pbStack_278 = pbVar13;
              do {
                iVar8 = *(int *)((int)this + 0xc);
                piVar14 = (int *)(*(int *)((int)this + 0x1c) + (int)piStack_274);
                iVar10 = 3;
                piVar14[1] = iVar8;
                piVar14[2] = *(int *)pbStack_278;
                piVar11 = piVar14 + 3;
                pbVar12 = pbStack_278 + 4;
                do {
                  pbVar13 = pbVar12;
                  *piVar11 = *(int *)pbVar13;
                  piVar11 = piVar11 + 1;
                  iVar10 = iVar10 + -1;
                  pbVar12 = pbVar13 + 4;
                } while (iVar10 != 0);
                piVar14[6] = *(int *)(pbVar13 + 4);
                piVar14[7] = *(int *)(pbVar13 + 8);
                piVar14[8] = *(int *)(pbVar13 + 0xc);
                piVar14[9] = *(int *)(pbVar13 + 0x10);
                pbStack_278 = pbVar13 + 0x18;
                piVar14[10] = *(int *)(pbVar13 + 0x14);
                FUN_30016d20(piVar14 + 0xb,&pbStack_278);
                pvVar6 = operator_new(iVar8 * 0x44);
                iVar10 = 0;
                *piVar14 = (int)pvVar6;
                if (0 < iVar8) {
                  iStack_268 = 0;
                  do {
                    iVar7 = FUN_30016d90((void *)(*piVar14 + iStack_268),(int *)&pbStack_278);
                    if (iVar7 == 0) {
                      (*DAT_3008fdf8)(local_26c);
                      if (*(int *)((int)this + 0x1c) != 0) {
                        iVar8 = 0;
                        if (0 < *(int *)((int)this + 0x10)) {
                          iVar10 = 0;
                          do {
                            puVar4 = *(undefined **)(*(int *)((int)this + 0x1c) + iVar10);
                            if (puVar4 != (undefined *)0x0) {
                              FUN_3001f8bc(puVar4);
                            }
                            iVar8 = iVar8 + 1;
                            iVar10 = iVar10 + 0x3c;
                          } while (iVar8 < *(int *)((int)this + 0x10));
                        }
                        FUN_3001f8bc(*(undefined **)((int)this + 0x1c));
                      }
                      iVar8 = *(int *)((int)this + 0x20);
                      if (iVar8 != 0) {
                        FUN_30020fde(iVar8,8,*(int *)(iVar8 + -4),FUN_30017810);
                        FUN_3001f8bc((undefined *)(iVar8 + -4));
                      }
                      if (*(undefined **)((int)this + 0x24) == (undefined *)0x0) {
                        ExceptionList = local_c;
                        return 0;
                      }
                      FUN_3001f8bc(*(undefined **)((int)this + 0x24));
                      ExceptionList = local_c;
                      return 0;
                    }
                    iVar10 = iVar10 + 1;
                    iStack_268 = iStack_268 + 0x44;
                  } while (iVar10 < iVar8);
                }
                iStack_270 = iStack_270 + 1;
                piStack_274 = piStack_274 + 0xf;
                pbVar13 = pbStack_278;
              } while (iStack_270 < *(int *)((int)this + 0x10));
            }
          }
          pbVar13 = pbVar13 + 4;
          if (0 < (int)*(uint *)((int)this + 0x14)) {
            pvVar6 = operator_new(*(uint *)((int)this + 0x14));
            *(void **)((int)this + 0x24) = pvVar6;
            iVar8 = *(int *)((int)this + 0x14);
            if (0 < iVar8) {
              do {
                iVar10 = *(int *)pbVar13;
                pbVar13 = pbVar13 + 4;
                if (0 < iVar10) {
                  do {
                    pbVar12 = abStack_264;
                    bVar2 = *pbVar13;
                    while (bVar2 != 0) {
                      *pbVar12 = bVar2;
                      pbVar1 = pbVar13 + 1;
                      pbVar12 = pbVar12 + 1;
                      pbVar13 = pbVar13 + 1;
                      bVar2 = *pbVar1;
                    }
                    *pbVar12 = 0;
                    pbStack_278 = pbVar13 + 5;
                    FUN_30016d60(auStack_220,&pbStack_278);
                    FUN_30016d60(auStack_218,&pbStack_278);
                    iVar10 = iVar10 + -1;
                    pbVar13 = pbStack_278;
                  } while (iVar10 != 0);
                }
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          iVar8 = *(int *)((int)this + 0x18);
          piVar11 = (int *)0x0;
          pbVar13 = pbVar13 + 4;
          if (0 < iVar8) {
            piStack_274 = operator_new(iVar8 * 8 + 4);
            uStack_4 = 0;
            if (piStack_274 != (int *)0x0) {
              piVar11 = piStack_274 + 1;
              *piStack_274 = iVar8;
              FUN_300210bc(piVar11,8,iVar8,&LAB_30017800);
            }
            uStack_4 = 0xffffffff;
            *(int **)((int)this + 0x20) = piVar11;
            iStack_270 = 0;
            if (0 < *(int *)((int)this + 0x18)) {
              do {
                iVar8 = *(int *)pbVar13;
                piVar11 = (int *)(*(int *)((int)this + 0x20) + iStack_270 * 8);
                *piVar11 = iVar8;
                pbStack_278 = pbVar13 + 4;
                pvVar6 = operator_new(iVar8 * 0x5c);
                if (pvVar6 == (void *)0x0) {
                  pvVar6 = (void *)0x0;
                }
                else if (-1 < iVar8 + -1) {
                  puVar5 = (undefined4 *)((int)pvVar6 + 0x58);
                  do {
                    *puVar5 = 0;
                    puVar5 = puVar5 + 0x17;
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
                }
                piVar11[1] = (int)pvVar6;
                iVar8 = 0;
                pbVar13 = pbVar13 + 4;
                if (0 < *piVar11) {
                  iVar10 = 0;
                  do {
                    FUN_30016f40((void *)(piVar11[1] + iVar10),(int *)&pbStack_278);
                    iVar8 = iVar8 + 1;
                    iVar10 = iVar10 + 0x5c;
                    pbVar13 = pbStack_278;
                  } while (iVar8 < *piVar11);
                }
                iStack_270 = iStack_270 + 1;
              } while (iStack_270 < *(int *)((int)this + 0x18));
            }
          }
          (*DAT_3008fdf8)(local_26c);
          ExceptionList = local_c;
          return 1;
        }
        pcVar18 = s_Invalid_version_for_Terrain_Set___3002fa48;
        FUN_30010fd0((byte *)s_Invalid_version_for_Terrain_Set___3002fa48);
        (*DAT_3008fdf8)(local_26c,pcVar18,param_1);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}

