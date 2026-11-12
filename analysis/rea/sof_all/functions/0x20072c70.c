// rea decompile_all
// name: FUN_20072c70
// address: 0x20072c70
// body: available
// range: 0x20072c70-0x2007304a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20072c70(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  int *local_4;
  
  FUN_20049b90();
  piVar6 = (int *)*param_2;
  local_4 = param_2;
  if (piVar6 == *(int **)(in_ECX + 8)) {
    piVar5 = (int *)param_2[2];
  }
  else {
    piVar7 = (int *)param_2[2];
    piVar5 = piVar6;
    if (piVar7 != *(int **)(in_ECX + 8)) {
      cVar1 = *(char *)(*piVar7 + 0x25);
      piVar5 = (int *)*piVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar5 + 0x25);
        piVar7 = piVar5;
        piVar5 = (int *)*piVar5;
      }
      piVar5 = (int *)piVar7[2];
      local_4 = piVar7;
      if (piVar7 != param_2) {
        piVar6[1] = (int)piVar7;
        *piVar7 = *param_2;
        if (piVar7 == (int *)param_2[2]) {
          piVar5[1] = (int)piVar7;
        }
        else {
          piVar5[1] = piVar7[1];
          *(int **)piVar7[1] = piVar5;
          piVar7[2] = param_2[2];
          *(int **)(param_2[2] + 4) = piVar7;
        }
        if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
          *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
        }
        else {
          puVar4 = (undefined4 *)param_2[1];
          if ((int *)*puVar4 == param_2) {
            *puVar4 = piVar7;
          }
          else {
            puVar4[2] = piVar7;
          }
        }
        local_4 = param_2;
        piVar7[1] = param_2[1];
        iVar2 = piVar7[9];
        *(char *)(piVar7 + 9) = (char)param_2[9];
        *(char *)(param_2 + 9) = (char)iVar2;
        goto LAB_20072da8;
      }
    }
  }
  piVar5[1] = local_4[1];
  if (*(int **)(*(int *)(in_ECX + 4) + 4) == param_2) {
    *(int **)(*(int *)(in_ECX + 4) + 4) = piVar5;
  }
  else {
    puVar4 = (undefined4 *)param_2[1];
    if ((int *)*puVar4 == param_2) {
      *puVar4 = piVar5;
    }
    else {
      puVar4[2] = piVar5;
    }
  }
  if ((int *)**(int **)(in_ECX + 4) == param_2) {
    if (param_2[2] == *(int *)(in_ECX + 8)) {
      piVar6 = (int *)param_2[1];
    }
    else {
      cVar1 = *(char *)(*piVar5 + 0x25);
      piVar7 = (int *)*piVar5;
      piVar6 = piVar5;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar7 + 0x25);
        piVar6 = piVar3;
      }
    }
    **(int **)(in_ECX + 4) = (int)piVar6;
  }
  if (*(int **)(*(int *)(in_ECX + 4) + 8) == param_2) {
    if (*param_2 == *(int *)(in_ECX + 8)) {
      piVar6 = (int *)param_2[1];
    }
    else {
      cVar1 = *(char *)(piVar5[2] + 0x25);
      piVar7 = (int *)piVar5[2];
      piVar6 = piVar5;
      while (piVar3 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar7 + 0x25);
        piVar6 = piVar3;
      }
    }
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar6;
  }
LAB_20072da8:
  if ((char)local_4[9] == '\x01') {
    if (piVar5 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        if ((char)piVar5[9] != '\x01') break;
        piVar6 = *(int **)piVar5[1];
        if (piVar5 == piVar6) {
          piVar6 = (int *)((undefined4 *)piVar5[1])[2];
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar5[1] + 0x24) = 0;
            iVar2 = piVar5[1];
            piVar6 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar6;
            if (*piVar6 != *(int *)(in_ECX + 8)) {
              *(int *)(*piVar6 + 4) = iVar2;
            }
            piVar6[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
            }
            else {
              piVar7 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar7) {
                *piVar7 = (int)piVar6;
              }
              else {
                piVar7[2] = (int)piVar6;
              }
            }
            *piVar6 = iVar2;
            *(int **)(iVar2 + 4) = piVar6;
            piVar6 = *(int **)(piVar5[1] + 8);
          }
          if ((*(char *)(*piVar6 + 0x24) != '\x01') || (*(char *)(piVar6[2] + 0x24) != '\x01')) {
            if (*(char *)(piVar6[2] + 0x24) == '\x01') {
              *(undefined1 *)(*piVar6 + 0x24) = 1;
              iVar2 = *piVar6;
              *(undefined1 *)(piVar6 + 9) = 0;
              *piVar6 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar2 + 8) != *(int *)(in_ECX + 8)) {
                *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
              }
              *(int *)(iVar2 + 4) = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int *)(*(int *)(in_ECX + 4) + 4) = iVar2;
              }
              else {
                piVar7 = (int *)piVar6[1];
                if (piVar6 == (int *)piVar7[2]) {
                  piVar7[2] = iVar2;
                }
                else {
                  *piVar7 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar6;
              piVar6[1] = iVar2;
              piVar6 = *(int **)(piVar5[1] + 8);
            }
            *(undefined1 *)(piVar6 + 9) = *(undefined1 *)(piVar5[1] + 0x24);
            *(undefined1 *)(piVar5[1] + 0x24) = 1;
            *(undefined1 *)(piVar6[2] + 0x24) = 1;
            piVar6 = (int *)piVar5[1];
            piVar7 = (int *)piVar6[2];
            piVar6[2] = *piVar7;
            if (*piVar7 != *(int *)(in_ECX + 8)) {
              *(int **)(*piVar7 + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == (int *)*(int *)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
              *piVar7 = (int)piVar6;
            }
            else {
              piVar3 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar3) {
                *piVar3 = (int)piVar7;
                *piVar7 = (int)piVar6;
              }
              else {
                piVar3[2] = (int)piVar7;
                *piVar7 = (int)piVar6;
              }
            }
LAB_20073017:
            piVar6[1] = (int)piVar7;
            break;
          }
        }
        else {
          if ((char)piVar6[9] == '\0') {
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(piVar5[1] + 0x24) = 0;
            piVar6 = (int *)piVar5[1];
            iVar2 = *piVar6;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(int *)(iVar2 + 8) != *(int *)(in_ECX + 8)) {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
              }
              else {
                *piVar7 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar6;
            piVar6[1] = iVar2;
            piVar6 = *(int **)piVar5[1];
          }
          if ((*(char *)(piVar6[2] + 0x24) != '\x01') || (*(char *)(*piVar6 + 0x24) != '\x01')) {
            if (*(char *)(*piVar6 + 0x24) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x24) = 1;
              piVar7 = (int *)piVar6[2];
              *(undefined1 *)(piVar6 + 9) = 0;
              piVar6[2] = *piVar7;
              if (*piVar7 != *(int *)(in_ECX + 8)) {
                *(int **)(*piVar7 + 4) = piVar6;
              }
              piVar7[1] = piVar6[1];
              if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
                *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
              }
              else {
                piVar3 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar3) {
                  *piVar3 = (int)piVar7;
                }
                else {
                  piVar3[2] = (int)piVar7;
                }
              }
              *piVar7 = (int)piVar6;
              piVar6[1] = (int)piVar7;
              piVar6 = *(int **)piVar5[1];
            }
            *(undefined1 *)(piVar6 + 9) = *(undefined1 *)(piVar5[1] + 0x24);
            *(undefined1 *)(piVar5[1] + 0x24) = 1;
            *(undefined1 *)(*piVar6 + 0x24) = 1;
            piVar6 = (int *)piVar5[1];
            piVar7 = (int *)*piVar6;
            *piVar6 = piVar7[2];
            if (piVar7[2] != *(int *)(in_ECX + 8)) {
              *(int **)(piVar7[2] + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
            }
            else {
              puVar4 = (undefined4 *)piVar6[1];
              if (piVar6 == (int *)puVar4[2]) {
                puVar4[2] = piVar7;
              }
              else {
                *puVar4 = piVar7;
              }
            }
            piVar7[2] = (int)piVar6;
            goto LAB_20073017;
          }
        }
        *(undefined1 *)(piVar6 + 9) = 0;
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(piVar5 + 9) = 1;
  }
  FUN_20071610();
  FUN_200f9f75(local_4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
  *param_1 = param_2;
  return;
}

