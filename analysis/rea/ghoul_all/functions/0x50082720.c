// rea decompile_all
// name: FUN_50082720
// address: 0x50082720
// body: available
// range: 0x50082720-0x50082afa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50082720(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  piVar8 = param_2;
  FUN_500834c0((int *)&param_2);
  piVar7 = (int *)*piVar8;
  local_4 = piVar8;
  if (piVar7 == *(int **)((int)this + 8)) {
    piVar6 = (int *)piVar8[2];
  }
  else {
    piVar3 = (int *)piVar8[2];
    piVar6 = piVar7;
    if (piVar3 != *(int **)((int)this + 8)) {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar6 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      piVar6 = (int *)piVar3[2];
      local_4 = piVar3;
      if (piVar3 != piVar8) {
        piVar7[1] = (int)piVar3;
        *piVar3 = *piVar8;
        if (piVar3 == (int *)piVar8[2]) {
          piVar6[1] = (int)piVar3;
        }
        else {
          piVar6[1] = piVar3[1];
          *(int **)piVar3[1] = piVar6;
          piVar3[2] = piVar8[2];
          *(int **)(piVar8[2] + 4) = piVar3;
        }
        if (*(int **)(*(int *)((int)this + 4) + 4) == piVar8) {
          *(int **)(*(int *)((int)this + 4) + 4) = piVar3;
        }
        else {
          piVar7 = (int *)piVar8[1];
          if ((int *)*piVar7 == piVar8) {
            *piVar7 = (int)piVar3;
          }
          else {
            piVar7[2] = (int)piVar3;
          }
        }
        local_4 = piVar8;
        piVar3[1] = piVar8[1];
        iVar2 = piVar3[8];
        *(char *)(piVar3 + 8) = (char)piVar8[8];
        *(char *)(piVar8 + 8) = (char)iVar2;
        goto LAB_50082858;
      }
    }
  }
  piVar6[1] = local_4[1];
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar8) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else {
    piVar7 = (int *)piVar8[1];
    if ((int *)*piVar7 == piVar8) {
      *piVar7 = (int)piVar6;
    }
    else {
      piVar7[2] = (int)piVar6;
    }
  }
  if ((int *)**(int **)((int)this + 4) == piVar8) {
    if (piVar8[2] == *(int *)((int)this + 8)) {
      piVar7 = (int *)piVar8[1];
    }
    else {
      cVar1 = *(char *)(*piVar6 + 0x21);
      piVar3 = (int *)*piVar6;
      piVar7 = piVar6;
      while (piVar5 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar3 + 0x21);
        piVar7 = piVar5;
      }
    }
    **(int **)((int)this + 4) = (int)piVar7;
  }
  if (*(int **)(*(int *)((int)this + 4) + 8) == piVar8) {
    if (*piVar8 == *(int *)((int)this + 8)) {
      piVar7 = (int *)piVar8[1];
    }
    else {
      cVar1 = *(char *)(piVar6[2] + 0x21);
      piVar8 = (int *)piVar6[2];
      piVar7 = piVar6;
      while (piVar3 = piVar8, cVar1 == '\0') {
        piVar8 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar8 + 0x21);
        piVar7 = piVar3;
      }
    }
    *(int **)(*(int *)((int)this + 4) + 8) = piVar7;
  }
LAB_50082858:
  if ((char)local_4[8] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar6[8] != '\x01') break;
        piVar7 = *(int **)piVar6[1];
        if (piVar6 == piVar7) {
          piVar7 = (int *)((undefined4 *)piVar6[1])[2];
          if ((char)piVar7[8] == '\0') {
            *(undefined1 *)(piVar7 + 8) = 1;
            *(undefined1 *)(piVar6[1] + 0x20) = 0;
            iVar2 = piVar6[1];
            piVar7 = *(int **)(iVar2 + 8);
            *(int *)(iVar2 + 8) = *piVar7;
            if (*piVar7 != *(int *)((int)this + 8)) {
              *(int *)(*piVar7 + 4) = iVar2;
            }
            piVar7[1] = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
            }
            else {
              piVar8 = *(int **)(iVar2 + 4);
              if (iVar2 == *piVar8) {
                *piVar8 = (int)piVar7;
              }
              else {
                piVar8[2] = (int)piVar7;
              }
            }
            *piVar7 = iVar2;
            *(int **)(iVar2 + 4) = piVar7;
            piVar7 = *(int **)(piVar6[1] + 8);
          }
          if ((*(char *)(*piVar7 + 0x20) != '\x01') || (*(char *)(piVar7[2] + 0x20) != '\x01')) {
            if (*(char *)(piVar7[2] + 0x20) == '\x01') {
              *(undefined1 *)(*piVar7 + 0x20) = 1;
              iVar2 = *piVar7;
              *(undefined1 *)(piVar7 + 8) = 0;
              *piVar7 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
                *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
              }
              *(int *)(iVar2 + 4) = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
              }
              else {
                piVar8 = (int *)piVar7[1];
                if (piVar7 == (int *)piVar8[2]) {
                  piVar8[2] = iVar2;
                }
                else {
                  *piVar8 = iVar2;
                }
              }
              *(int **)(iVar2 + 8) = piVar7;
              piVar7[1] = iVar2;
              piVar7 = *(int **)(piVar6[1] + 8);
            }
            *(undefined1 *)(piVar7 + 8) = *(undefined1 *)(piVar6[1] + 0x20);
            *(undefined1 *)(piVar6[1] + 0x20) = 1;
            *(undefined1 *)(piVar7[2] + 0x20) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)piVar7[2];
            piVar7[2] = *piVar8;
            if (*piVar8 != *(int *)((int)this + 8)) {
              *(int **)(*piVar8 + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == (int *)*(int *)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
              *piVar8 = (int)piVar7;
            }
            else {
              piVar3 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar3) {
                *piVar3 = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
              else {
                piVar3[2] = (int)piVar8;
                *piVar8 = (int)piVar7;
              }
            }
LAB_50082ac7:
            piVar7[1] = (int)piVar8;
            break;
          }
        }
        else {
          if ((char)piVar7[8] == '\0') {
            *(undefined1 *)(piVar7 + 8) = 1;
            *(undefined1 *)(piVar6[1] + 0x20) = 0;
            piVar7 = (int *)piVar6[1];
            iVar2 = *piVar7;
            *piVar7 = *(int *)(iVar2 + 8);
            if (*(int *)(iVar2 + 8) != *(int *)((int)this + 8)) {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
            }
            *(int *)(iVar2 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int *)(*(int *)((int)this + 4) + 4) = iVar2;
            }
            else {
              piVar8 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar8[2]) {
                piVar8[2] = iVar2;
              }
              else {
                *piVar8 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar7;
            piVar7[1] = iVar2;
            piVar7 = *(int **)piVar6[1];
          }
          if ((*(char *)(piVar7[2] + 0x20) != '\x01') || (*(char *)(*piVar7 + 0x20) != '\x01')) {
            if (*(char *)(*piVar7 + 0x20) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x20) = 1;
              piVar8 = (int *)piVar7[2];
              *(undefined1 *)(piVar7 + 8) = 0;
              piVar7[2] = *piVar8;
              if (*piVar8 != *(int *)((int)this + 8)) {
                *(int **)(*piVar8 + 4) = piVar7;
              }
              piVar8[1] = piVar7[1];
              if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
                *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
              }
              else {
                piVar3 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar3) {
                  *piVar3 = (int)piVar8;
                }
                else {
                  piVar3[2] = (int)piVar8;
                }
              }
              *piVar8 = (int)piVar7;
              piVar7[1] = (int)piVar8;
              piVar7 = *(int **)piVar6[1];
            }
            *(undefined1 *)(piVar7 + 8) = *(undefined1 *)(piVar6[1] + 0x20);
            *(undefined1 *)(piVar6[1] + 0x20) = 1;
            *(undefined1 *)(*piVar7 + 0x20) = 1;
            piVar7 = (int *)piVar6[1];
            piVar8 = (int *)*piVar7;
            *piVar7 = piVar8[2];
            if (piVar8[2] != *(int *)((int)this + 8)) {
              *(int **)(piVar8[2] + 4) = piVar7;
            }
            piVar8[1] = piVar7[1];
            if (piVar7 == *(int **)(*(int *)((int)this + 4) + 4)) {
              *(int **)(*(int *)((int)this + 4) + 4) = piVar8;
            }
            else {
              puVar4 = (undefined4 *)piVar7[1];
              if (piVar7 == (int *)puVar4[2]) {
                puVar4[2] = piVar8;
              }
              else {
                *puVar4 = piVar8;
              }
            }
            piVar8[2] = (int)piVar7;
            goto LAB_50082ac7;
          }
        }
        *(undefined1 *)(piVar7 + 8) = 0;
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 8) = 1;
  }
  FUN_500825a0((int)(local_4 + 3));
  FUN_50106b60((undefined *)local_4);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  *param_1 = param_2;
  return;
}

