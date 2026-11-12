// rea decompile_all
// name: FUN_5001c730
// address: 0x5001c730
// body: available
// range: 0x5001c730-0x5001cdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001c730(void *this,int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  char cVar4;
  void *this_00;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  undefined2 extraout_var;
  int iVar12;
  undefined2 extraout_var_00;
  int unaff_EBX;
  int unaff_EBP;
  byte *pbVar13;
  int *piVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  bool bVar18;
  int iStack_160;
  int iStack_15c;
  undefined4 auStack_150 [2];
  undefined1 auStack_148 [4];
  undefined1 auStack_144 [64];
  undefined4 auStack_104 [31];
  undefined1 auStack_88 [136];
  
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  iVar11 = *(int *)((int)this + 0x60);
  if (param_2 != iVar11) {
    do {
      if (this_00 == (void *)0x0) {
        return;
      }
      piVar14 = (int *)(param_2 * 0x30);
      sVar1 = *(short *)((int)piVar14 + *(int *)((int)this + 100));
      if (sVar1 != 0) {
        if ((param_4 == 0) ||
           (cVar4 = (**(code **)(**(int **)((int)this_00 + 0xc) + 0x24))
                              (CONCAT22((short)((uint)iVar11 >> 0x10),sVar1)), cVar4 == '\0')) {
          if ((DAT_50159104 == '\0') &&
             ((param_4 != 0 &&
              (cVar4 = (**(code **)(**(int **)((int)this_00 + 0xc) + 0x24))
                                 (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                                           *(undefined2 *)
                                            ((int)piVar14 + *(int *)((int)this + 100) + 2))),
              cVar4 != '\0')))) {
            (**(code **)(**(int **)(param_4 + 0x164) + 0x20))
                      (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                                *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100))),1);
            unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100)));
            iVar11 = (*DAT_5015cb24)(0,2);
            iVar12 = (*DAT_5015cb24)(0,2);
            piVar6 = *(int **)(param_4 + 0x164);
            sVar1 = *(short *)((int)this + (iVar12 + 0x24 + iVar11 * 4) * 2);
            piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar7 = (**(code **)(*piVar8 + 0x40))(&DAT_5012fc5c);
            if (((short)uVar7 != 0) && (sVar1 != 0)) {
              (**(code **)(*piVar6 + 0x2c))(uVar7,sVar1,iStack_160);
            }
          }
        }
        else {
          (**(code **)(**(int **)(param_4 + 0x164) + 0x20))
                    (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                              *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100))),1);
        }
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x20))
                  (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                            *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100))),0);
      }
      sVar1 = *(short *)((int)piVar14 + *(int *)((int)this + 100) + 6);
      if (sVar1 != 0) {
        if ((param_4 != 0) &&
           (cVar4 = (**(code **)(**(int **)((int)this_00 + 0xc) + 0x24))(sVar1), cVar4 != '\0')) {
          (**(code **)(**(int **)(param_4 + 0x164) + 0x20))
                    (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                              *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100) + 6)),1);
        }
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x20))
                  (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                            *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100) + 6)),0);
      }
      if (*(short *)((int)piVar14 + *(int *)((int)this + 100) + 0xc) != 0) {
        iStack_160 = 0;
        if ((param_4 != 0) && (*(int **)(param_4 + 0x164) != (int *)0x0)) {
          iStack_160 = FUN_500a5820(&DAT_5015c79c,*(int **)(param_4 + 0x164));
        }
        puVar5 = (undefined4 *)
                 FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 0xc));
        while (puVar5 != (undefined4 *)0x0) {
          if (iStack_160 != 0) {
            iVar11 = puVar5[9] + 0x48e;
            iStack_15c = (**(code **)(*(int *)this + 0xdc))
                                   (param_1,CONCAT22((short)((uint)iVar11 >> 0x10),
                                                     *(undefined2 *)
                                                      ((int)piVar14 +
                                                      *(int *)((int)this + 100) + 0xc)),puVar5[9],
                                    iVar11,*(undefined2 *)(puVar5 + 8),iStack_160,0,0x3f800000);
          }
          if ((((iStack_15c != 0) && ((int *)puVar5[7] != (int *)0x0)) && (puVar5[9] != 0)) &&
             (pcVar10 = (char *)(puVar5[9] + 0x48e), pcVar10 != (char *)0x0)) {
            iVar11 = 0xc;
            bVar17 = true;
            pcVar15 = s_g_half_head_5013342c;
            do {
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              bVar17 = *pcVar10 == *pcVar15;
              pcVar10 = pcVar10 + 1;
              pcVar15 = pcVar15 + 1;
            } while (bVar17);
            if (bVar17) {
              piVar6 = (int *)(**(code **)(*(int *)puVar5[7] + 0x88))();
              uVar7 = (**(code **)(*piVar6 + 0x40))(&DAT_50133428);
              if (((short)uVar7 != 0) &&
                 (uVar7 = (**(code **)(*piVar14 + 0x30))(uVar7,0,0), (short)uVar7 != 0)) {
                piVar6 = (int *)(**(code **)(*(int *)puVar5[7] + 0x88))();
                (**(code **)(*piVar6 + 0x58))(uVar7,auStack_104);
                piVar6 = *(int **)(unaff_EBX + 0x1c);
                piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
                uVar7 = (**(code **)(*piVar8 + 0x40))(&DAT_50133428);
                if ((short)uVar7 != 0) {
                  piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
                  uVar9 = (**(code **)(*piVar8 + 0x50))(uVar7,auStack_104,0);
                  if ((short)uVar9 != 0) {
                    (**(code **)(*piVar6 + 0x2c))(uVar7,uVar9,0);
                  }
                }
              }
              piVar6 = (int *)puVar5[7];
              piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar7 = (**(code **)(*piVar8 + 0x40))(&DAT_50133424);
              if (((short)uVar7 != 0) &&
                 (uVar7 = (**(code **)(*piVar6 + 0x30))(uVar7,0,0), (short)uVar7 != 0)) {
                piVar6 = (int *)(**(code **)(*(int *)puVar5[7] + 0x88))();
                (**(code **)(*piVar6 + 0x58))(uVar7,auStack_88);
                piVar6 = *(int **)(unaff_EBP + 0x1c);
                piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
                uVar7 = (**(code **)(*piVar8 + 0x40))(&DAT_50133424);
                if ((short)uVar7 != 0) {
                  piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
                  uVar9 = (**(code **)(*piVar8 + 0x50))(uVar7,auStack_88,0);
                  if ((short)uVar9 != 0) {
                    (**(code **)(*piVar6 + 0x2c))(uVar7,uVar9,0);
                  }
                }
              }
              piVar6 = *(int **)((int)this_00 + 0x1c);
              piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar7 = (**(code **)(*piVar8 + 0x40))(&DAT_5012fc5c);
              if ((short)uVar7 != 0) {
                piVar8 = (int *)(**(code **)(*piVar6 + 0x88))();
                uVar9 = (**(code **)(*piVar8 + 0x50))(uVar7,s_gz_half_head_50133414,0);
                if ((short)uVar9 != 0) {
                  (**(code **)(*piVar6 + 0x2c))(uVar7,uVar9,0);
                }
              }
            }
          }
          FUN_500a3f30(this_00,puVar5);
          puVar5 = (undefined4 *)
                   FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 0xc));
        }
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x20))
                  (CONCAT22((short)((uint)*(int *)((int)this + 100) >> 0x10),
                            *(undefined2 *)((int)piVar14 + *(int *)((int)this + 100) + 0xc)),0);
      }
      if (*(short *)((int)piVar14 + *(int *)((int)this + 100) + 10) != 0) {
        if ((param_4 != 0) && (*(int **)(param_4 + 0x164) != (int *)0x0)) {
          FUN_500a5820(&DAT_5015c79c,*(int **)(param_4 + 0x164));
        }
        puVar5 = (undefined4 *)
                 FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 10));
        uVar3 = extraout_var;
        while (puVar5 != (undefined4 *)0x0) {
          iVar12 = 8;
          bVar17 = false;
          iVar11 = 0;
          bVar18 = true;
          pbVar13 = (byte *)(puVar5[9] + 0x48e);
          pbVar16 = &DAT_5012f948;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar17 = *pbVar13 < *pbVar16;
            bVar18 = *pbVar13 == *pbVar16;
            pbVar13 = pbVar13 + 1;
            pbVar16 = pbVar16 + 1;
          } while (bVar18);
          if (!bVar18) {
            iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          }
          if ((iVar11 == 0) && (piVar6 = FUN_500c3690(), piVar6 != (int *)0x0)) {
            auStack_104[0] = 0;
            FUN_500a6090(&DAT_5015c79c,(int)piVar6,s_Enemy_Bolt_50133408,&DAT_5012f948,(char *)0x0,
                         (char *)0x0);
            if (((int *)puVar5[7] != (int *)0x0) &&
               (puVar2 = (undefined4 *)piVar6[0x59], puVar2 != (undefined4 *)0x0)) {
              (**(code **)(*(int *)puVar5[7] + 8))(auStack_144);
              (**(code **)*puVar2)(auStack_148);
            }
            FUN_500c3bb0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),(float *)puVar5[7],
                         (undefined4 *)0x0,&DAT_50133404,piVar6 + 1,auStack_150);
            piVar6[0x6e] = piVar6[0x6e] | 0x10000;
            FUN_500aa670((char *)piVar6);
            piVar6[0xa2] = 0x3f800000;
          }
          FUN_500a3f30(this_00,puVar5);
          puVar5 = (undefined4 *)
                   FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 10));
          uVar3 = extraout_var_00;
        }
        (**(code **)(**(int **)((int)this_00 + 0xc) + 0x20))
                  (CONCAT22(uVar3,*(undefined2 *)((int)piVar14 + *(int *)((int)this + 100) + 10)),0)
        ;
      }
      if (*(short *)((int)piVar14 + *(int *)((int)this + 100) + 4) != 0) {
        iVar11 = 0;
        if ((param_4 != 0) && (*(int **)(param_4 + 0x164) != (int *)0x0)) {
          iVar11 = FUN_500a5820(&DAT_5015c79c,*(int **)(param_4 + 0x164));
        }
        puVar5 = (undefined4 *)
                 FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 4));
        while (puVar5 != (undefined4 *)0x0) {
          if (iVar11 != 0) {
            (**(code **)(*(int *)this + 0xd8))
                      (param_1,CONCAT22((short)((uint)(puVar5[9] + 0x48e) >> 0x10),
                                        *(undefined2 *)
                                         ((int)piVar14 + *(int *)((int)this + 100) + 4)),
                       s_Enemy_bolt_5012fc80,puVar5[9] + 0x48e,*(undefined2 *)(puVar5 + 8),iVar11,0,
                       0x3f800000);
          }
          FUN_500a3f30(this_00,puVar5);
          puVar5 = (undefined4 *)
                   FUN_500a4250(this_00,*(short *)((int)piVar14 + *(int *)((int)this + 100) + 4));
        }
      }
      param_2 = *(int *)((int)piVar14 + *(int *)((int)this + 100) + 0x18);
      if (param_2 == param_3) {
        return;
      }
      this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
      iVar11 = *(int *)((int)this + 0x60);
    } while (param_2 != iVar11);
  }
  return;
}

