// rea decompile_all
// name: FUN_3000ac70
// address: 0x3000ac70
// body: available
// range: 0x3000ac70-0x3000b04e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_3000ac70(void *this,char *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  void *extraout_ECX;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*param_1 == '\0') {
    (*DAT_3008fdc8)(1,s_Mod_ForName__NULL_name_3002ecb4);
    this = extraout_ECX;
  }
  if (*param_1 == '*') {
    iVar3 = FUN_300208f7(this,(byte *)(param_1 + 1));
    if ((((iVar3 < 1) || (0x100 < iVar3)) || (DAT_3008fc6c == 0)) ||
       (*(int *)(DAT_3008fc6c + 0x70) <= iVar3)) {
      (*DAT_3008fdc8)(1,s_Bad_inline_model_number_3002ec9c);
    }
    return &DAT_3007c774 + iVar3 * 0x3d;
  }
  if ((char)DAT_3007c680 != '\0') {
    return &DAT_3007c680;
  }
  uVar7 = 0xffffffff;
  pcVar14 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  if (3 < ~uVar7 - 1) {
    uVar7 = 0xffffffff;
    pcVar14 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    iVar3 = __strcmpi(param_1 + (~uVar7 - 4),&DAT_3002ec98);
    if (iVar3 == 0) {
      iVar3 = (int)&DAT_3007c680 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar3] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      DAT_3007c678 = &DAT_3007c680;
      iVar3 = (*DAT_3008fdf4)(&DAT_3007c680,0,0);
      if (iVar3 != 0) {
        DAT_3007c770 = (undefined4 *)(*DAT_3008fdec)(0x800000,0x2fc);
        puVar13 = DAT_3007c770;
        for (iVar3 = 0x200000; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        DAT_3007c76c = 4;
        FUN_3000b050(&DAT_3007c680);
        if (0x7fffff < (int)DAT_3007c76c) {
          (*DAT_3008fdc8)(1,s_Mod_Alloc__Not_enough_room_to_lo_3002ec48);
        }
        puVar4 = (undefined4 *)(*DAT_3008fdec)(DAT_3007c76c,0x2ff);
        uVar7 = DAT_3007c76c;
        puVar13 = DAT_3007c770;
        puVar15 = puVar4;
        for (uVar8 = DAT_3007c76c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        (*DAT_3008fdf0)(DAT_3007c770);
        iVar16 = 0;
        iVar3 = DAT_3007c738;
        DAT_3007c770 = puVar4;
        if (0 < DAT_3007c734) {
          piVar5 = (int *)(DAT_3007c738 + 0x28);
          do {
            iVar17 = *piVar5;
            piVar2 = piVar5;
            while (iVar17 != 0) {
              piVar9 = (int *)(iVar17 + (int)puVar4);
              *piVar2 = (int)piVar9;
              piVar2 = piVar9;
              iVar3 = DAT_3007c738;
              iVar17 = *piVar9;
            }
            iVar16 = iVar16 + 1;
            piVar5 = piVar5 + 0x1b;
          } while (iVar16 < DAT_3007c734);
        }
        puVar13 = DAT_3007c770;
        iVar16 = 0;
        piVar5 = DAT_3007c730;
        if (0 < DAT_3007c72c) {
          do {
            if (*piVar5 != 0) {
              *piVar5 = (int)(*piVar5 + (int)puVar13);
              iVar3 = DAT_3007c738;
            }
            iVar16 = iVar16 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar16 < DAT_3007c72c);
        }
        DAT_3007c764 = (undefined1 *)((int)DAT_3007c764 + (int)DAT_3007c770);
        DAT_3007c768 = (undefined1 *)((int)DAT_3007c768 + (int)DAT_3007c770);
        if (DAT_3007c750 != 0) {
          iStack_4 = 0;
          iVar16 = DAT_3007c750;
          if (0 < DAT_3007c734) {
            iVar17 = 0;
            do {
              if ((*(int *)(iVar17 + 0x38 + iVar3) != 0) &&
                 (param_1 = (char *)0x0, 0 < *(short *)(iVar17 + 0x40 + iVar3))) {
                do {
                  iStack_8 = 0;
                  piVar5 = *(int **)(*(int *)(iVar17 + 0x3c + iVar3) + (int)param_1 * 4);
                  if (0 < *piVar5) {
                    _param_2 = 4;
                    do {
                      iStack_c = 3;
                      pfVar10 = (float *)(DAT_3007c764 +
                                         (uint)*(ushort *)(_param_2 + (int)piVar5) * 0x10);
                      iVar16 = -(int)pfVar10;
                      do {
                        iVar6 = *(int *)(iVar17 + 0x38 + iVar3) + iVar16 + 0xcc;
                        if (*pfVar10 < *(float *)(iVar6 + (int)pfVar10)) {
                          *(float *)(iVar6 + (int)pfVar10) = *pfVar10;
                          iVar3 = DAT_3007c738;
                        }
                        pfVar12 = (float *)(*(int *)(iVar17 + 0x38 + iVar3) + iVar16 + 0xd8 +
                                           (int)pfVar10);
                        if (*pfVar12 < *pfVar10) {
                          *pfVar12 = *pfVar10;
                          iVar3 = DAT_3007c738;
                        }
                        pfVar10 = pfVar10 + 1;
                        iStack_c = iStack_c + -1;
                      } while (iStack_c != 0);
                      piVar5 = *(int **)(*(int *)(iVar17 + 0x3c + iVar3) + (int)param_1 * 4);
                      iStack_8 = iStack_8 + 1;
                      _param_2 = _param_2 + 2;
                      iVar16 = DAT_3007c750;
                    } while (iStack_8 < *piVar5);
                  }
                  param_1 = param_1 + 1;
                } while ((int)param_1 < (int)*(short *)(iVar17 + 0x40 + iVar3));
              }
              iStack_4 = iStack_4 + 1;
              iVar17 = iVar17 + 0x6c;
            } while (iStack_4 < DAT_3007c734);
          }
          iVar3 = 0;
          if (0 < DAT_3007c74c) {
            iVar11 = 3;
            iVar6 = 0xcc;
            iVar17 = 0xcc;
            while( true ) {
              do {
                pfVar12 = (float *)(iVar16 + 0xc + iVar6);
                pfVar10 = (float *)(iVar16 + iVar6);
                iVar6 = iVar6 + 4;
                iVar11 = iVar11 + -1;
                *(float *)(iVar16 + 0x14 + iVar6) = *pfVar12 - *pfVar10;
                iVar16 = DAT_3007c750;
              } while (iVar11 != 0);
              iVar3 = iVar3 + 1;
              iVar6 = iVar17 + 0xf0;
              if (DAT_3007c74c <= iVar3) break;
              iVar11 = 3;
              iVar17 = iVar6;
            }
          }
        }
        return &DAT_3007c680;
      }
      if (param_2 != '\0') {
        (*DAT_3008fdc8)(1,s_Mod_NumForName___s_not_found_3002ec78,&DAT_3007c680);
      }
      puVar13 = &DAT_3007c680;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
    }
  }
  return (undefined4 *)0x0;
}

