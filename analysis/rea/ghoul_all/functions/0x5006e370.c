// rea decompile_all
// name: FUN_5006e370
// address: 0x5006e370
// body: available
// range: 0x5006e370-0x5006e65d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5006e370(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int local_4;
  
  piVar3 = param_1;
  iVar5 = 1;
  puVar1 = *(undefined4 **)(param_1[0x1d] + 0x350);
  puVar1[1] = 0;
  *puVar1 = 0;
  if (0 < DAT_5015d8c8) {
    iVar7 = 0x464;
    do {
      piVar6 = (int *)(iVar7 + DAT_5015cca0);
      if ((*(int *)(iVar7 + 0x78 + DAT_5015cca0) != 0) && (piVar6[0x1d] != 0)) {
        if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
          if ((int *)**(undefined4 **)(param_1[0x1d] + 0x350) == piVar6) {
            uVar9 = 3;
          }
          else if ((int *)**(int **)(piVar6[0x1d] + 0x350) == param_1) {
            uVar9 = 2;
          }
          else {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = 0;
        }
        FUN_5006b610((int)param_1,piVar6,uVar9);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x464;
    } while (iVar5 <= DAT_5015d8c8);
  }
  if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
    piVar6 = (int *)0x0;
    iVar5 = FUN_5006b5c0();
    if (1 < iVar5) {
      uVar4 = FUN_50107636();
      iVar5 = (int)uVar4 % DAT_5015d8c8 + 1;
      do {
        iVar7 = iVar5 + 1;
        piVar6 = (int *)(DAT_5015cca0 + iVar5 * 0x464);
        if (DAT_5015d8c8 < iVar7) {
          iVar7 = 1;
        }
        iVar5 = iVar7;
      } while ((((piVar6[0x1e] == 0) || (*(int *)(piVar6[0x1d] + 0x2dc) != 0)) ||
               (piVar6[0x1d] == 0)) || (piVar6 == param_1));
    }
    piVar8 = *(int **)(param_1[0x1d] + 0x350);
    piVar8[1] = (int)piVar6;
    *piVar8 = (int)piVar6;
    puVar1 = *(undefined4 **)(param_1[0x1d] + 0x350);
    piVar6 = (int *)*puVar1;
    if (piVar6 != (int *)0x0) {
      if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
        if ((int *)*puVar1 == piVar6) {
          uVar9 = 3;
        }
        else if ((int *)**(int **)(piVar6[0x1d] + 0x350) == param_1) {
          uVar9 = 2;
        }
        else {
          uVar9 = 1;
        }
      }
      else {
        uVar9 = 0;
      }
      FUN_5006b610((int)param_1,piVar6,uVar9);
    }
    param_1 = (int *)0x1;
    if (0 < DAT_5015d8c8) {
      local_4 = 0x464;
      do {
        piVar6 = (int *)(local_4 + DAT_5015cca0);
        if (((piVar6[0x1e] != 0) && (iVar5 = piVar6[0x1d], iVar5 != 0)) && (piVar6 != piVar3)) {
          if (*(int *)(iVar5 + 0x2dc) == 0) {
            if ((int *)**(int **)(iVar5 + 0x350) == piVar3) {
              uVar9 = 3;
            }
            else if ((int *)**(int **)(piVar3[0x1d] + 0x350) == piVar6) {
              uVar9 = 2;
            }
            else {
              uVar9 = 1;
            }
          }
          else {
            uVar9 = 0;
          }
          FUN_5006b610((int)piVar6,piVar3,uVar9);
          if (**(int **)(piVar6[0x1d] + 0x350) == 0) {
            piVar8 = (int *)0x0;
            iVar5 = FUN_5006b5c0();
            if (1 < iVar5) {
              uVar4 = FUN_50107636();
              iVar5 = (int)uVar4 % DAT_5015d8c8 + 1;
              do {
                iVar7 = iVar5 + 1;
                piVar8 = (int *)(DAT_5015cca0 + iVar5 * 0x464);
                if (DAT_5015d8c8 < iVar7) {
                  iVar7 = 1;
                }
                iVar5 = iVar7;
              } while (((piVar8[0x1e] == 0) || (*(int *)(piVar8[0x1d] + 0x2dc) != 0)) ||
                      ((piVar8[0x1d] == 0 || (piVar8 == piVar6))));
            }
            piVar2 = *(int **)(piVar6[0x1d] + 0x350);
            piVar2[1] = (int)piVar8;
            *piVar2 = (int)piVar8;
            puVar1 = *(undefined4 **)(piVar6[0x1d] + 0x350);
            piVar8 = (int *)*puVar1;
            if (piVar8 != (int *)0x0) {
              if (*(int *)(piVar6[0x1d] + 0x2dc) == 0) {
                if ((int *)*puVar1 == piVar8) {
                  uVar9 = 3;
                }
                else if ((int *)**(int **)(piVar8[0x1d] + 0x350) == piVar6) {
                  uVar9 = 2;
                }
                else {
                  uVar9 = 1;
                }
              }
              else {
                uVar9 = 0;
              }
              FUN_5006b610((int)piVar6,piVar8,uVar9);
            }
            if ((_DAT_5015d1c8 == 0.0) && (*(int *)(piVar6[0x1d] + 0x2dc) == 0)) {
              *(undefined4 *)(piVar6[0x1d] + 0x474) = 0;
              uVar10 = 0;
              *(undefined4 *)(piVar6[0x1d] + 0x470) = 0;
              *(float *)(piVar6[0x1d] + 0x568) = DAT_5015ccdc + 5.0;
              piVar8 = piVar6;
              FUN_5006e660((int)piVar6);
              (*DAT_5015ca68)(piVar6,1,piVar8,uVar10);
            }
          }
        }
        param_1 = (int *)((int)param_1 + 1);
        local_4 = local_4 + 0x464;
      } while ((int)param_1 <= DAT_5015d8c8);
    }
  }
  return;
}

