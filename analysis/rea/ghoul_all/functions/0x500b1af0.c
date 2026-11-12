// rea decompile_all
// name: FUN_500b1af0
// address: 0x500b1af0
// body: available
// range: 0x500b1af0-0x500b1ed9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b1af0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *extraout_ECX;
  int iVar6;
  float fVar7;
  int *piVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 *puVar13;
  int iStack00000004;
  float *pfStack00000008;
  float fStack0000000c;
  float fStack0000001c;
  int *local_8;
  
  FUN_501074f0();
  piVar8 = DAT_5015cca0;
  fVar7 = 0.0;
  puVar13 = (undefined4 *)0x0;
  local_8 = DAT_5015cca0;
  if (DAT_5015d1ec != 0) {
    extraout_ECX[0x46] = 0.0;
    extraout_ECX[0x47] = 0.0;
    FUN_5004c4b0(&DAT_50159120,(int *)(extraout_ECX + 4),extraout_ECX + 5);
    if (0 < DAT_5015c938) {
      pfVar10 = (float *)(piVar8 + 3);
      do {
        if (0x3f < (int)extraout_ECX[0x46]) break;
        if ((((pfVar10[0x1b] != 0.0) && ((int *)pfVar10[0x111] != (int *)0x0)) &&
            (0 < (int)pfVar10[0xb8])) && (((uint)pfVar10[0x6b] & 0x10) == 0)) {
          fVar2 = pfVar10[-2] - *(float *)(DAT_5015d1ec + 4);
          fVar3 = pfVar10[-1] - *(float *)(DAT_5015d1ec + 8);
          fVar4 = *pfVar10 - *(float *)(DAT_5015d1ec + 0xc);
          iVar5 = (**(code **)(*(int *)pfVar10[0x111] + 0x44))();
          if ((iVar5 != 0) || (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 * 16.0 < 1048576.0)) {
            extraout_ECX[(int)extraout_ECX[0x46] + 6] = fVar7;
            extraout_ECX[0x46] = (float)((int)extraout_ECX[0x46] + 1);
          }
          iVar5 = (**(code **)(*(int *)pfVar10[0x111] + 0x44))();
          if (iVar5 != 0) {
            iVar5 = (*DAT_5015cad0)(DAT_5015d1ec + 4,pfVar10 + -2);
            if (iVar5 != 0) {
              extraout_ECX[0x47] = (float)((int)extraout_ECX[0x47] + 1);
            }
            (**(code **)(*(int *)pfVar10[0x111] + 0xcc))(local_8);
          }
        }
        fVar7 = (float)((int)fVar7 + 1);
        local_8 = local_8 + 0x119;
        pfVar10 = pfVar10 + 0x119;
      } while ((int)fVar7 < DAT_5015c938);
    }
    if (DAT_5015ccdc + 0.1 < *extraout_ECX) {
      *extraout_ECX = (DAT_5015ccdc - 0.5) - 0.1;
    }
    if (*extraout_ECX <= DAT_5015ccdc - 0.5) {
      fVar7 = 0.0;
      pfVar10 = (float *)(DAT_5015d1ec + 4);
      fStack0000001c = 999999.0;
      fStack0000000c = -NAN;
      iStack00000004 = 0;
      piVar8 = DAT_5015cca0;
      pfStack00000008 = pfVar10;
      if (0 < DAT_5015c938) {
        do {
          if (piVar8[0x1e] != 0) {
            if (((char)piVar8[0x46] < '\0') && (iVar5 = FUN_500f7430((int)piVar8), iVar5 != 0)) {
              iVar5 = FUN_500f7430((int)piVar8);
              iVar6 = 6;
              bVar12 = true;
              pcVar9 = *(char **)(iVar5 + 0x1b4);
              pcVar11 = s_freed_5014cf28;
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar12 = *pcVar9 == *pcVar11;
                pcVar9 = pcVar9 + 1;
                pcVar11 = pcVar11 + 1;
              } while (bVar12);
              pfVar10 = pfStack00000008;
              if (bVar12) {
                FUN_500c3880(piVar8);
                pfVar10 = pfStack00000008;
                goto LAB_500b1e30;
              }
            }
            if ((((int *)piVar8[0x114] != (int *)0x0) && (0 < piVar8[0xbb])) &&
               (iVar5 = (**(code **)(*(int *)piVar8[0x114] + 0x44))(), iVar5 != 0)) {
              fVar2 = (pfVar10[1] - (float)piVar8[2]) * (pfVar10[1] - (float)piVar8[2]) +
                      (*pfVar10 - (float)piVar8[1]) * (*pfVar10 - (float)piVar8[1]) +
                      (pfVar10[2] - (float)piVar8[3]) * (pfVar10[2] - (float)piVar8[3]) * 9.0;
              if ((fVar7 != 0.0) && (fVar2 < fStack0000001c)) {
                fStack0000000c = fVar7;
                fStack0000001c = fVar2;
              }
              iVar5 = (*DAT_5015cad0)(DAT_5015d1ec + 4,piVar8 + 1);
              piVar1 = (int *)piVar8[0x114];
              if (iVar5 == 0) {
                if (*(float *)(DAT_5015ccac + 0x18) == 0.0) {
                  (**(code **)(*piVar1 + 0x2c))(1);
                }
                else {
                  (**(code **)(*piVar1 + 0x2c))(0);
                }
                *(float *)(&stack0x00000024 + (int)puVar13 * 8) = fVar7;
                *(float *)(&stack0x00000020 + (int)puVar13 * 8) = fVar2;
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              }
              else {
                (**(code **)(*piVar1 + 0x2c))(0);
                iStack00000004 = iStack00000004 + 1;
              }
            }
          }
LAB_500b1e30:
          fVar7 = (float)((int)fVar7 + 1);
          piVar8 = piVar8 + 0x119;
        } while ((int)fVar7 < DAT_5015c938);
      }
      FUN_50107a3c((int *)&stack0x00000020,puVar13,8,&LAB_500b1ad0);
      if ((iStack00000004 < 7) && (iVar5 = 0, 0 < (int)puVar13)) {
        iVar6 = 7 - iStack00000004;
        do {
          if (iVar6 <= iVar5) break;
          (**(code **)(*(int *)DAT_5015cca0[*(int *)(&stack0x00000024 + iVar5 * 8) * 0x119 + 0x114]
                      + 0x2c))(0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)puVar13);
      }
      if (fStack0000000c != -NAN) {
        extraout_ECX[0x5a] = fStack0000000c;
        *extraout_ECX = DAT_5015ccdc;
        return;
      }
      extraout_ECX[0x5a] = 0.0;
      *extraout_ECX = DAT_5015ccdc;
    }
  }
  return;
}

