// rea decompile_all
// name: FUN_30009550
// address: 0x30009550
// body: available
// range: 0x30009550-0x30009bf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30009550(int param_1,char *param_2,int param_3)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iStack_30;
  char *local_2c;
  uint local_24;
  float *pfStack_20;
  char *pcStack_1c;
  uint uStack_18;
  float afStack_14 [5];
  
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0x80c) != 0) {
    iVar9 = *(int *)(param_1 + 0x28);
    (*DAT_3008fdc8)(1,s_R_BuildLightMap_called_for_non_l_3002eba0,iVar9 + 8,iVar9 + 0x24,
                    iVar9 + 0x40,*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x2c));
  }
  local_2c = (char *)(((int)*(short *)(param_1 + 0x14) >> 4) + 1);
  local_24 = ((int)*(short *)(param_1 + 0x16) >> 4) + 1;
  if (0x3000 < local_24 * (int)local_2c) {
    (*DAT_3008fdc8)(1,s_Bad_s_blocklights_size_3002eb84);
  }
  iVar9 = *(int *)(param_1 + 100);
  if (iVar9 == 0) {
    iVar9 = local_24 * (int)local_2c * 3;
    if (0 < iVar9) {
      puVar12 = &DAT_3004c658;
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0x437f0000;
        puVar12 = puVar12 + 1;
      }
    }
    iVar9 = 0;
    do {
      if (*(char *)(iVar9 + 0x50 + param_1) == -1) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
  }
  else {
    local_24 = (uint)*(byte *)(param_1 + 0x69);
    local_2c = (char *)(uint)*(byte *)(param_1 + 0x68);
    iVar7 = local_24 * (int)local_2c;
    iVar6 = 0;
    pbVar10 = (byte *)(param_1 + 0x50);
    do {
      if (pbVar10[iVar6] == 0xff) break;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    if (iVar6 == 1) {
      do {
        if (*pbVar10 == 0xff) break;
        iVar6 = 0;
        pfVar3 = (float *)((uint)*pbVar10 * 0x10 + DAT_3008fd44);
        do {
          fVar1 = *pfVar3;
          iVar6 = iVar6 + 1;
          pfVar3 = pfVar3 + 1;
          afStack_14[iVar6] = _DAT_3008fff4 * fVar1;
        } while (iVar6 < 3);
        if (((afStack_14[1] == 1.0) && (afStack_14[2] == 1.0)) && (afStack_14[3] == 1.0)) {
          if (iVar7 != 0) {
            pbVar4 = (byte *)(iVar9 + 2);
            pfVar3 = (float *)&DAT_3004c660;
            iVar6 = iVar7;
            do {
              pfVar3[-2] = (float)pbVar4[-2];
              iVar6 = iVar6 + -1;
              pfVar3[-1] = (float)pbVar4[-1];
              *pfVar3 = (float)*pbVar4;
              pbVar4 = pbVar4 + 3;
              pfVar3 = pfVar3 + 3;
            } while (iVar6 != 0);
          }
        }
        else if (iVar7 != 0) {
          pbVar4 = (byte *)(iVar9 + 2);
          pfVar3 = (float *)&DAT_3004c660;
          iVar6 = iVar7;
          do {
            pfVar3[-2] = (float)pbVar4[-2] * afStack_14[1];
            iVar6 = iVar6 + -1;
            pfVar3[-1] = (float)pbVar4[-1] * afStack_14[2];
            *pfVar3 = (float)*pbVar4 * afStack_14[3];
            pbVar4 = pbVar4 + 3;
            pfVar3 = pfVar3 + 3;
          } while (iVar6 != 0);
        }
        pbVar10 = pbVar10 + 1;
        iVar9 = iVar7 * 3 + iVar9;
      } while ((int)(pbVar10 + (-0x50 - param_1)) < 4);
    }
    else {
      puVar12 = &DAT_3004c658;
      for (iVar6 = iVar7 * 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      do {
        if (*pbVar10 == 0xff) break;
        iVar6 = 0;
        pfVar3 = (float *)((uint)*pbVar10 * 0x10 + DAT_3008fd44);
        do {
          fVar1 = *pfVar3;
          iVar6 = iVar6 + 1;
          pfVar3 = pfVar3 + 1;
          afStack_14[iVar6] = _DAT_3008fff4 * fVar1;
        } while (iVar6 < 3);
        if (((afStack_14[1] == 1.0) && (afStack_14[2] == 1.0)) && (afStack_14[3] == 1.0)) {
          if (iVar7 != 0) {
            pfVar3 = (float *)&DAT_3004c660;
            pbVar4 = (byte *)(iVar9 + 2);
            iVar6 = iVar7;
            do {
              pfVar3[-2] = (float)pbVar4[-2] + pfVar3[-2];
              iVar6 = iVar6 + -1;
              pfVar3[-1] = (float)pbVar4[-1] + pfVar3[-1];
              *pfVar3 = (float)*pbVar4 + *pfVar3;
              pfVar3 = pfVar3 + 3;
              pbVar4 = pbVar4 + 3;
            } while (iVar6 != 0);
          }
        }
        else if (iVar7 != 0) {
          pfVar3 = (float *)&DAT_3004c660;
          pbVar4 = (byte *)(iVar9 + 2);
          iVar6 = iVar7;
          do {
            pfVar3[-2] = (float)pbVar4[-2] * afStack_14[1] + pfVar3[-2];
            iVar6 = iVar6 + -1;
            pfVar3[-1] = (float)pbVar4[-1] * afStack_14[2] + pfVar3[-1];
            *pfVar3 = (float)*pbVar4 * afStack_14[3] + *pfVar3;
            pfVar3 = pfVar3 + 3;
            pbVar4 = pbVar4 + 3;
          } while (iVar6 != 0);
        }
        iVar9 = iVar7 * 3 + iVar9;
        pbVar10 = pbVar10 + 1;
      } while ((int)(pbVar10 + (-0x50 - param_1)) < 4);
    }
    if (*(int *)(param_1 + 0x44) == DAT_3008fd90) {
      FUN_30009290(param_1);
    }
  }
  iVar9 = param_3 + (int)local_2c * -4;
  pfStack_20 = (float *)&DAT_3004c658;
  afStack_14[0] = (float)(int)**(char **)(DAT_3008fc68 + 4);
  if (afStack_14[0] == 6.72623e-44) {
    if (0 < (int)local_24) {
      pcStack_1c = (char *)local_24;
      afStack_14[0] = 6.72623e-44;
      pcVar11 = param_2;
      do {
        if (0 < (int)local_2c) {
          param_2 = local_2c;
          do {
            param_1 = FUN_3000a120(*pfStack_20);
            iStack_30 = FUN_3000a120(pfStack_20[1]);
            local_24 = FUN_3000a120(pfStack_20[2]);
            if (param_1 < 0) {
              param_1 = 0;
            }
            if (iStack_30 < 0) {
              iStack_30 = 0;
            }
            if ((int)local_24 < 0) {
              local_24 = 0;
            }
            uVar5 = param_1;
            if (param_1 <= iStack_30) {
              uVar5 = iStack_30;
            }
            if ((int)uVar5 < (int)local_24) {
              uVar5 = local_24;
            }
            if (0xff < (int)uVar5) {
              lVar13 = __ftol();
              param_1 = (int)lVar13;
              lVar13 = __ftol();
              iStack_30 = (int)lVar13;
              lVar13 = __ftol();
              local_24 = (uint)lVar13;
              lVar13 = __ftol();
              uVar5 = (uint)lVar13;
            }
            *pcVar11 = (&DAT_3004c520)[param_1];
            pcVar11[1] = (&DAT_3004c520)[iStack_30];
            pcVar11[2] = (&DAT_3004c520)[local_24];
            pcVar11[3] = (char)uVar5;
            pfStack_20 = pfStack_20 + 3;
            pcVar11 = pcVar11 + 4;
            param_2 = param_2 + -1;
          } while (param_2 != (char *)0x0);
        }
        pcVar11 = pcVar11 + iVar9;
        pcStack_1c = (char *)((int)pcStack_1c - 1);
      } while (pcStack_1c != (char *)0x0);
      return;
    }
  }
  else if (0 < (int)local_24) {
    uStack_18 = local_24;
    do {
      if (0 < (int)local_2c) {
        pcStack_1c = local_2c;
        do {
          iVar6 = FUN_3000a120(*pfStack_20);
          iVar7 = FUN_3000a120(pfStack_20[1]);
          local_24 = FUN_3000a120(pfStack_20[2]);
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          if ((int)local_24 < 0) {
            local_24 = 0;
          }
          uVar5 = iVar6;
          if (iVar6 <= iVar7) {
            uVar5 = iVar7;
          }
          if ((int)uVar5 < (int)local_24) {
            uVar5 = local_24;
          }
          if (0xff < (int)uVar5) {
            lVar13 = __ftol();
            iVar6 = (int)lVar13;
            lVar13 = __ftol();
            iVar7 = (int)lVar13;
            lVar13 = __ftol();
            local_24 = (uint)lVar13;
            lVar13 = __ftol();
            uVar5 = (uint)lVar13;
          }
          param_1._0_1_ = (char)uVar5;
          if (afStack_14[0] == 9.3887e-44) {
            cVar8 = -1 - (char)((int)(iVar7 + local_24 + iVar6) / 3);
            lVar13 = __ftol();
            param_1._0_1_ = (char)lVar13;
            lVar13 = __ftol();
            iStack_30._0_1_ = (char)lVar13;
            lVar13 = __ftol();
            cVar2 = (char)lVar13;
          }
          else if ((afStack_14[0] == 1.02295e-43) || (afStack_14[0] == 1.06499e-43)) {
            cVar2 = '\0';
            iStack_30._0_1_ = '\0';
            cVar8 = (char)param_1;
          }
          else {
            cVar2 = '\0';
            cVar8 = -1 - (char)param_1;
            iStack_30._0_1_ = '\0';
            param_1._0_1_ = '\0';
          }
          param_2[1] = (char)iStack_30;
          param_2[2] = cVar2;
          *param_2 = (char)param_1;
          param_2[3] = cVar8;
          pfStack_20 = pfStack_20 + 3;
          param_2 = param_2 + 4;
          pcStack_1c = pcStack_1c + -1;
        } while (pcStack_1c != (char *)0x0);
      }
      param_2 = param_2 + iVar9;
      uStack_18 = uStack_18 - 1;
    } while (uStack_18 != 0);
  }
  return;
}

