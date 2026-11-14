// rea decompile_all
// name: FUN_30014480
// address: 0x30014480
// body: available
// range: 0x30014480-0x30014b71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30014480(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int unaff_EDI;
  undefined4 *puVar9;
  float10 fVar10;
  longlong lVar11;
  float fVar12;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [3];
  float local_7c [7];
  undefined4 local_60 [13];
  undefined4 local_2c;
  
  local_a0 = 0.0;
  if (DAT_300a3730 != 0) {
    local_7c[0] = (float)DAT_3008fed8;
    puVar9 = local_60;
    for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    lVar11 = __ftol();
    local_2c = (undefined4)lVar11;
    DAT_3008fed8 = local_60;
    FUN_30006170('\0');
    if (3.0 <= *(float *)(DAT_3008fc84 + 0x18)) {
      DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
      if ((DAT_300a4588 & 1) == 0) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      FUN_300062a0(0x1e01);
    }
    else {
      DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
      if ((DAT_300a4588 & 4) == 0) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      DAT_300a4610 = 0x306;
      DAT_300a43fc = 0x300;
      if ((DAT_300a4388 == 0x306) && (DAT_300a45d8 == 0x300)) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      DAT_300a46e0 = DAT_300a46e0 | 1;
      if ((DAT_300a4588 & 1) != 0) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      FUN_300062a0(0x2100);
      (*DAT_300a43c8)();
      if ((*(float *)(DAT_3008fce0 + 0x18) != 0.0) || (*(float *)(DAT_3008fd8c + 0x18) != 0.0)) {
        (*DAT_300a4614)();
        DAT_300a46e0 = DAT_300a46e0 | 0x100;
        if ((DAT_300a4588 & 0x100) != 0) {
          *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
        }
      }
    }
    fVar12 = 1.0;
    (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    FUN_3001b650();
    iVar2 = 0;
    if (0 < DAT_300a3730) {
      do {
        iVar1 = (&DAT_300a1728)[iVar2];
        iVar7 = *(int *)(iVar1 + 0x34);
        if (iVar7 != 0) {
          iVar4 = iVar2;
          if (*(int *)(iVar7 + 0x28) != 0) {
            if (((*(uint *)(iVar7 + 0x20) & 0x1000) == 0) ||
               (*(char *)(*(int *)(iVar7 + 0x2c) + 0x55) == '\0')) {
              iVar3 = DAT_3008fed8[0xd];
            }
            else {
              lVar11 = __ftol();
              iVar3 = (int)lVar11;
            }
            for (iVar3 = iVar3 % *(int *)(iVar7 + 0x24); iVar3 != 0; iVar3 = iVar3 + -1) {
              iVar7 = *(int *)(iVar7 + 0x28);
            }
          }
          iVar7 = *(int *)(iVar7 + 0x2c);
          if (*(int *)(*(int *)(iVar7 + 0x5c) + 0x40) == 8) {
            (&DAT_300a1728)[unaff_EDI] = iVar1;
            unaff_EDI = unaff_EDI + 1;
          }
          else {
            FUN_300062f0(*(int *)(*(int *)(iVar7 + 0x5c) + 0x50));
            iVar1 = (&DAT_300a1728)[iVar2];
            iVar3 = *(int *)(iVar1 + 0x28);
            pfVar8 = (float *)(iVar3 + 8);
            iVar2 = iVar4;
            if (*(float *)(DAT_3008fc84 + 0x18) == 2.0) {
              iVar6 = 0;
              if (0 < *(int *)(iVar3 + 4)) {
                do {
                  FUN_30011660(pfVar8,(float *)&DAT_3008fd04,afStack_88);
                  fVar10 = FUN_30003670(afStack_88,(float *)&DAT_3008fd7c);
                  iVar2 = iVar4;
                  if (fVar10 < (float10)*(float *)(DAT_3008fc70 + 0x18)) break;
                  iVar6 = iVar6 + 1;
                  pfVar8 = pfVar8 + 7;
                } while (iVar6 < *(int *)(iVar3 + 4));
              }
              if (iVar6 == *(int *)(iVar3 + 4)) goto LAB_300147c9;
            }
            iVar4 = iVar3 + 8;
            FUN_300127d0(iVar1,(float *)&stack0xffffff48,&fStack_9c);
            fStack_9c = -(fStack_9c * *(float *)(iVar7 + 100)) + *(float *)(iVar7 + 0x74);
            (*DAT_300a4710)(6);
            iVar1 = 0;
            if (0 < *(int *)(iVar3 + 4)) {
              do {
                (*DAT_300a42f4)(*(float *)(iVar4 + 0xc) * *(float *)(iVar7 + 0x60) + fVar12,
                                *(float *)(iVar4 + 0x10) * *(float *)(iVar7 + 100) + local_a0);
                (*DAT_300a4520)(iVar4);
                iVar1 = iVar1 + 1;
                iVar4 = iVar4 + 0x1c;
              } while (iVar1 < *(int *)(iVar3 + 4));
            }
            (*DAT_300a45f4)();
          }
        }
LAB_300147c9:
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_300a3730);
      if (unaff_EDI != 0) {
        fVar5 = 0.0;
        fVar12 = 0.0;
        iVar2 = 0;
        if (0 < unaff_EDI) {
          do {
            iVar1 = (&DAT_300a1728)[iVar2];
            if (*(int *)(iVar1 + 0x34) != 0) {
              if ((*(uint *)(*(int *)(iVar1 + 0x34) + 0x20) & 0x20000) == 0) {
                pfVar8 = *(float **)(iVar1 + 4);
                local_7c[0] = 0.0;
                local_7c[1] = 0.0;
                local_7c[2] = 1.0;
                fStack_a8 = *pfVar8;
                fStack_a4 = pfVar8[1];
                local_a0 = pfVar8[2];
                iVar1 = iVar2;
                FUN_3001e110(&fStack_a8,local_7c);
                if (fStack_a8 * fStack_a8 + fStack_a4 * fStack_a4 + local_a0 * local_a0 < 0.1) {
                  (&DAT_300a1728)[(int)fVar5] = (&DAT_300a1728)[iVar2];
                  fVar12 = (float)((int)fVar5 + 1);
                }
                fVar5 = fVar12;
                iVar7 = *(int *)((&DAT_300a1728)[iVar2] + 0x34);
                if (*(int *)(iVar7 + 0x28) != 0) {
                  if (((*(uint *)(iVar7 + 0x20) & 0x1000) == 0) ||
                     (*(char *)(*(int *)(iVar7 + 0x2c) + 0x55) == '\0')) {
                    iVar4 = DAT_3008fed8[0xd];
                  }
                  else {
                    lVar11 = __ftol();
                    iVar4 = (int)lVar11;
                  }
                  for (iVar4 = iVar4 % *(int *)(iVar7 + 0x24); iVar4 != 0; iVar4 = iVar4 + -1) {
                    iVar7 = *(int *)(iVar7 + 0x28);
                  }
                }
                FUN_300062f0(*(int *)(*(int *)(*(int *)(iVar7 + 0x2c) + 0x5c) + 0x50));
                fVar10 = FUN_300169a0(&fStack_a8);
                FUN_3001e0e0(&fStack_a8,(float)fVar10);
                fStack_98 = fStack_a8;
                fStack_94 = fStack_a4;
                fStack_90 = local_a0;
                FUN_3001e110(&fStack_98,*(float **)((&DAT_300a1728)[iVar2] + 4));
                fVar10 = FUN_300169a0(&fStack_98);
                FUN_3001e0e0(&fStack_98,(float)fVar10);
                iVar7 = (&DAT_300a1728)[iVar2];
                iVar4 = *(int *)(iVar7 + 0x28);
                pfVar8 = (float *)(iVar4 + 8);
                (*DAT_300a4710)(6);
                iVar3 = 0;
                iVar2 = iVar1;
                if (0 < *(int *)(iVar4 + 4)) {
                  do {
                    FUN_30014c30((float *)&DAT_3008fecc,pfVar8,*(float **)(iVar7 + 4),
                                 (float *)&stack0xffffff54,&fStack_9c,&fStack_8c);
                    (*DAT_300a42f4)(fStack_8c,afStack_88[0]);
                    (*DAT_300a4520)(pfVar8);
                    iVar3 = iVar3 + 1;
                    pfVar8 = pfVar8 + 7;
                    iVar2 = iVar1;
                  } while (iVar3 < *(int *)(iVar4 + 4));
                }
                (*DAT_300a45f4)();
                fVar12 = fVar5;
              }
              else {
                (&DAT_300a1728)[(int)fVar5] = iVar1;
                fVar5 = (float)((int)fVar5 + 1);
                fVar12 = fVar5;
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < unaff_EDI);
          if (fVar5 != 0.0) {
            (*DAT_300a4460)(0x2000,0x2500,0x2402);
            (*DAT_300a4460)(0x2001,0x2500,0x2402);
            DAT_300a46e0 = DAT_300a46e0 | 0x40;
            if ((DAT_300a4588 & 0x40) != 0) {
              *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
            }
            FUN_3000d880(DAT_3008fcd4,0xc61);
            FUN_3001b650();
            iVar2 = 0;
            if (0 < (int)fVar5) {
              do {
                if (*(int *)((&DAT_300a1728)[iVar2] + 0x34) != 0) {
                  iVar1 = FUN_30014b80(*(int *)((&DAT_300a1728)[iVar2] + 0x34));
                  FUN_300062f0(*(int *)(*(int *)(iVar1 + 0x5c) + 0x50));
                  FUN_30014be0((&DAT_300a1728)[iVar2]);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)fVar5);
            }
            FUN_3000d740(DAT_3008fcd4,0xc60);
            FUN_3000d740(DAT_3008fcd4,0xc61);
          }
        }
      }
    }
    if (*(float *)(DAT_3008fc84 + 0x18) < 3.0) {
      FUN_3000d740(DAT_3008fcd4,0xbe2);
      DAT_300a4610 = 0x302;
      DAT_300a43fc = 0x303;
      if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
        *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
      }
      (*DAT_300a43c8)(1);
      if ((*(float *)(DAT_3008fce0 + 0x18) != 0.0) || (*(float *)(DAT_3008fd8c + 0x18) != 0.0)) {
        FUN_3000d740(DAT_3008fcd4,0x8037);
      }
    }
    FUN_3001b650();
    DAT_300a3730 = 0;
    DAT_3008fed8 = (undefined4 *)fStack_8c;
  }
  return;
}

