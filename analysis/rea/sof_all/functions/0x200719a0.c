// rea decompile_all
// name: FUN_200719a0
// address: 0x200719a0
// body: available
// range: 0x200719a0-0x20071d72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200719a0(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  FUN_20073500();
  piVar7 = (int *)*param_2;
  local_4 = param_2;
  if (piVar7 == *(int **)(in_ECX + 8)) {
    piVar6 = (int *)param_2[2];
  }
  else {
    piVar8 = (int *)param_2[2];
    piVar6 = piVar7;
    if (piVar8 != *(int **)(in_ECX + 8)) {
      cVar2 = *(char *)(*piVar8 + 0xf);
      piVar6 = (int *)*piVar8;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*piVar6 + 0xf);
        piVar8 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      piVar6 = (int *)piVar8[2];
      local_4 = piVar8;
      if (piVar8 != param_2) {
        piVar7[1] = (int)piVar8;
        *piVar8 = *param_2;
        if (piVar8 == (int *)param_2[2]) {
          piVar6[1] = (int)piVar8;
        }
        else {
          piVar6[1] = piVar8[1];
          *(int **)piVar8[1] = piVar6;
          piVar8[2] = param_2[2];
          *(int **)(param_2[2] + 4) = piVar8;
        }
        if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar8;
        }
        else {
          puVar5 = (undefined4 *)param_2[1];
          if ((int *)*puVar5 == param_2) {
            *puVar5 = piVar8;
          }
          else {
            puVar5[2] = piVar8;
          }
        }
        local_4 = param_2;
        piVar8[1] = param_2[1];
        uVar1 = *(undefined1 *)((int)piVar8 + 0xe);
        *(undefined1 *)((int)piVar8 + 0xe) = *(undefined1 *)((int)param_2 + 0xe);
        *(undefined1 *)((int)param_2 + 0xe) = uVar1;
        goto LAB_20071ad8;
      }
    }
  }
  piVar6[1] = local_4[1];
  if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
  }
  else {
    puVar5 = (undefined4 *)param_2[1];
    if ((int *)*puVar5 == param_2) {
      *puVar5 = piVar6;
    }
    else {
      puVar5[2] = piVar6;
    }
  }
  if ((int *)**(int **)(in_ECX + 4) == param_2) {
    if (param_2[2] == *(int *)(in_ECX + 8)) {
      piVar7 = (int *)param_2[1];
    }
    else {
      cVar2 = *(char *)(*piVar6 + 0xf);
      piVar8 = (int *)*piVar6;
      piVar7 = piVar6;
      while (piVar4 = piVar8, cVar2 == '\0') {
        piVar8 = (int *)*piVar4;
        cVar2 = *(char *)((int)piVar8 + 0xf);
        piVar7 = piVar4;
      }
    }
    **(int **)(in_ECX + 4) = (int)piVar7;
  }
  if (*(int **)(*(int *)(in_ECX + 4) + 8) == param_2) {
    if (*param_2 == *(int *)(in_ECX + 8)) {
      piVar7 = (int *)param_2[1];
    }
    else {
      cVar2 = *(char *)(piVar6[2] + 0xf);
      piVar8 = (int *)piVar6[2];
      piVar7 = piVar6;
      while (piVar4 = piVar8, cVar2 == '\0') {
        piVar8 = (int *)piVar4[2];
        cVar2 = *(char *)((int)piVar8 + 0xf);
        piVar7 = piVar4;
      }
    }
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar7;
  }
LAB_20071ad8:
  if (*(char *)((int)local_4 + 0xe) == '\x01') {
    if (piVar6 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        if (*(char *)((int)piVar6 + 0xe) != '\x01') break;
        piVar7 = *(int **)piVar6[1];
        if (piVar6 == piVar7) {
          piVar7 = (int *)((undefined4 *)piVar6[1])[2];
          if (*(char *)((int)piVar7 + 0xe) == '\0') {
            *(undefined1 *)((int)piVar7 + 0xe) = 1;
            *(undefined1 *)(piVar6[1] + 0xe) = 0;
            iVar3 = piVar6[1];
            piVar7 = *(int **)(iVar3 + 8);
            *(int *)(iVar3 + 8) = *piVar7;
            if (*piVar7 != *(int *)(in_ECX + 8)) {
              *(int *)(*piVar7 + 4) = iVar3;
            }
            piVar7[1] = *(int *)(iVar3 + 4);
            if (iVar3 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
            }
            else {
              piVar8 = *(int **)(iVar3 + 4);
              if (iVar3 == *piVar8) {
                *piVar8 = (int)piVar7;
              }
              else {
                piVar8[2] = (int)piVar7;
              }
            }
            *piVar7 = iVar3;
            *(int **)(iVar3 + 4) = piVar7;
            piVar7 = *(int **)(piVar6[1] + 8);
          }
          if ((*(char *)(*piVar7 + 0xe) != '\x01') || (*(char *)(piVar7[2] + 0xe) != '\x01')) {
            if (*(char *)(piVar7[2] + 0xe) == '\x01') {
              *(undefined1 *)(*piVar7 + 0xe) = 1;
              iVar3 = *piVar7;
              *(undefined1 *)((int)piVar7 + 0xe) = 0;
              *piVar7 = *(int *)(iVar3 + 8);
              if (*(int *)(iVar3 + 8) != *(int *)(in_ECX + 8)) {
                *(int **)(*(int *)(iVar3 + 8) + 4) = piVar7;
              }
              *(int *)(iVar3 + 4) = piVar7[1];
              if (piVar7 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int *)(*(int *)(in_ECX + 4) + 4) = iVar3;
              }
              else {
                piVar8 = (int *)piVar7[1];
                if (piVar7 == (int *)piVar8[2]) {
                  piVar8[2] = iVar3;
                }
                else {
                  *piVar8 = iVar3;
                }
              }
              *(int **)(iVar3 + 8) = piVar7;
              piVar7[1] = iVar3;
              piVar7 = *(int **)(piVar6[1] + 8);
            }
            *(undefined1 *)((int)piVar7 + 0xe) = *(undefined1 *)(piVar6[1] + 0xe);
            *(undefined1 *)(piVar6[1] + 0xe) = 1;
            *(undefined1 *)(piVar7[2] + 0xe) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)piVar7[2];
            piVar7[2] = *piVar8;
            if (*piVar8 != *(int *)(in_ECX + 8)) {
              *(int **)(*piVar8 + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == (int *)*(int *)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar8;
              *piVar8 = (int)piVar7;
            }
            else {
              piVar4 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar4) {
                *piVar4 = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
              else {
                piVar4[2] = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
            }
LAB_20071d47:
            piVar7[1] = (int)piVar8;
            break;
          }
        }
        else {
          if (*(char *)((int)piVar7 + 0xe) == '\0') {
            *(undefined1 *)((int)piVar7 + 0xe) = 1;
            *(undefined1 *)(piVar6[1] + 0xe) = 0;
            piVar7 = (int *)piVar6[1];
            iVar3 = *piVar7;
            *piVar7 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != *(int *)(in_ECX + 8)) {
              *(int **)(*(int *)(iVar3 + 8) + 4) = piVar7;
            }
            *(int *)(iVar3 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar3;
            }
            else {
              piVar8 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar8[2]) {
                piVar8[2] = iVar3;
              }
              else {
                *piVar8 = iVar3;
              }
            }
            *(int **)(iVar3 + 8) = piVar7;
            piVar7[1] = iVar3;
            piVar7 = *(int **)piVar6[1];
          }
          if ((*(char *)(piVar7[2] + 0xe) != '\x01') || (*(char *)(*piVar7 + 0xe) != '\x01')) {
            if (*(char *)(*piVar7 + 0xe) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xe) = 1;
              piVar8 = (int *)piVar7[2];
              *(undefined1 *)((int)piVar7 + 0xe) = 0;
              piVar7[2] = *piVar8;
              if (*piVar8 != *(int *)(in_ECX + 8)) {
                *(int **)(*piVar8 + 4) = piVar7;
              }
              piVar8[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int **)(*(int *)(in_ECX + 4) + 4) = piVar8;
              }
              else {
                piVar4 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar4) {
                  *piVar4 = (int)piVar8;
                }
                else {
                  piVar4[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar7;
              piVar7[1] = (int)piVar8;
              piVar7 = *(int **)piVar6[1];
            }
            *(undefined1 *)((int)piVar7 + 0xe) = *(undefined1 *)(piVar6[1] + 0xe);
            *(undefined1 *)(piVar6[1] + 0xe) = 1;
            *(undefined1 *)(*piVar7 + 0xe) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)*piVar7;
            *piVar7 = piVar8[2];
            if (piVar8[2] != *(int *)(in_ECX + 8)) {
              *(int **)(piVar8[2] + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar8;
            }
            else {
              puVar5 = (undefined4 *)piVar7[1];
              if (piVar7 == (int *)puVar5[2]) {
                puVar5[2] = piVar8;
              }
              else {
                *puVar5 = piVar8;
              }
            }
            piVar8[2] = (int)piVar7;
            goto LAB_20071d47;
          }
        }
        *(undefined1 *)((int)piVar7 + 0xe) = 0;
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)((int)piVar6 + 0xe) = 1;
  }
  FUN_200f9f75(local_4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
  *param_1 = param_2;
  return;
}

