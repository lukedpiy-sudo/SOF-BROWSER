// rea decompile_all
// name: FUN_2009e4f0
// address: 0x2009e4f0
// body: available
// range: 0x2009e4f0-0x2009e738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009e4f0(undefined4 *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  
  piVar3 = operator_new(0x18);
  piVar3[1] = (int)param_3;
  *(undefined1 *)(piVar3 + 5) = 0;
  *(undefined1 *)((int)piVar3 + 0x15) = 0;
  *piVar3 = *(int *)(in_ECX + 8);
  piVar3[2] = *(int *)(in_ECX + 8);
  FUN_2008e4b0(piVar3 + 3,param_4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if (((param_3 == *(int **)(in_ECX + 4)) || (param_2 != *(int *)(in_ECX + 8))) ||
     (*param_4 < (uint)param_3[3])) {
    *param_3 = (int)piVar3;
    piVar4 = *(int **)(in_ECX + 4);
    if (param_3 == piVar4) {
      piVar4[1] = (int)piVar3;
      *(int **)(*(int *)(in_ECX + 4) + 8) = piVar3;
    }
    else if (param_3 == (int *)*piVar4) {
      *piVar4 = (int)piVar3;
    }
  }
  else {
    param_3[2] = (int)piVar3;
    if (param_3 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
      *(int **)(*(int *)(in_ECX + 4) + 8) = piVar3;
    }
  }
  piVar4 = piVar3;
  if (piVar3 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if ((char)piVar5[5] != '\0') break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar1 = ((undefined4 *)piVar5[1])[2];
        if (*(char *)(iVar1 + 0x14) == '\0') {
          *(undefined1 *)(piVar5 + 5) = 1;
          *(undefined1 *)(iVar1 + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar4 = *(int **)(piVar4[1] + 4);
        }
        else {
          if (piVar4 == (int *)piVar5[2]) {
            piVar4 = (int *)piVar5[2];
            piVar5[2] = *piVar4;
            if (*piVar4 != *(int *)(in_ECX + 8)) {
              *(int **)(*piVar4 + 4) = piVar5;
            }
            piVar4[1] = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar4;
            }
            else {
              piVar6 = (int *)piVar5[1];
              if (piVar5 == (int *)*piVar6) {
                *piVar6 = (int)piVar4;
              }
              else {
                piVar6[2] = (int)piVar4;
              }
            }
            *piVar4 = (int)piVar5;
            piVar5[1] = (int)piVar4;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)*piVar5;
          *piVar5 = piVar6[2];
          if (piVar6[2] != *(int *)(in_ECX + 8)) {
            *(int **)(piVar6[2] + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar2 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_2009e713:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if ((char)piVar6[5] != '\0') {
          if (piVar4 == (int *)*piVar5) {
            iVar1 = *piVar5;
            *piVar5 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != *(int *)(in_ECX + 8)) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar5;
            }
            *(int *)(iVar1 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar1;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar1;
              }
              else {
                *piVar4 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar5;
            piVar5[1] = iVar1;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
          piVar5 = *(int **)(piVar4[1] + 4);
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*piVar6 != *(int *)(in_ECX + 8)) {
            *(int **)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int **)(*(int *)(in_ECX + 4) + 4) = piVar6;
          }
          else {
            piVar2 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar2) {
              *piVar2 = (int)piVar6;
            }
            else {
              piVar2[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_2009e713;
        }
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(piVar6 + 5) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x14) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)(in_ECX + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x14) = 1;
  *param_1 = piVar3;
  return;
}

