// rea decompile_all
// name: FUN_2003c270
// address: 0x2003c270
// body: available
// range: 0x2003c270-0x2003c4bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003c270(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  
  piVar2 = operator_new(0x24);
  piVar2[1] = (int)param_3;
  *(undefined1 *)(piVar2 + 8) = 0;
  *(undefined1 *)((int)piVar2 + 0x21) = 0;
  *piVar2 = *(int *)(in_ECX + 8);
  piVar2[2] = *(int *)(in_ECX + 8);
  FUN_2003c4c0(piVar2 + 3,param_4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if ((param_3 != *(int **)(in_ECX + 4)) && (param_2 == *(int *)(in_ECX + 8))) {
    iVar3 = FUN_20023c40(param_3 + 3);
    if (-1 < iVar3) {
      param_3[2] = (int)piVar2;
      if (param_3 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(int **)(*(int *)(in_ECX + 4) + 8) = piVar2;
      }
      goto LAB_2003c2fc;
    }
  }
  *param_3 = (int)piVar2;
  piVar4 = *(int **)(in_ECX + 4);
  if (param_3 == piVar4) {
    piVar4[1] = (int)piVar2;
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar2;
  }
  else if (param_3 == (int *)*piVar4) {
    *piVar4 = (int)piVar2;
  }
LAB_2003c2fc:
  piVar4 = piVar2;
  if (piVar2 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
    do {
      piVar5 = (int *)piVar4[1];
      if ((char)piVar5[8] != '\0') break;
      piVar6 = *(int **)piVar5[1];
      if (piVar5 == piVar6) {
        iVar3 = ((undefined4 *)piVar5[1])[2];
        if (*(char *)(iVar3 + 0x20) == '\0') {
          *(undefined1 *)(piVar5 + 8) = 1;
          *(undefined1 *)(iVar3 + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
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
          *(undefined1 *)(piVar4[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
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
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar1[2]) {
              piVar1[2] = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
            else {
              *piVar1 = (int)piVar6;
              piVar6[2] = (int)piVar5;
            }
          }
LAB_2003c498:
          piVar5[1] = (int)piVar6;
        }
      }
      else {
        if ((char)piVar6[8] != '\0') {
          if (piVar4 == (int *)*piVar5) {
            iVar3 = *piVar5;
            *piVar5 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 8) != *(int *)(in_ECX + 8)) {
              *(int **)(*(int *)(iVar3 + 8) + 4) = piVar5;
            }
            *(int *)(iVar3 + 4) = piVar5[1];
            if (piVar5 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar3;
            }
            else {
              piVar4 = (int *)piVar5[1];
              if (piVar5 == (int *)piVar4[2]) {
                piVar4[2] = iVar3;
              }
              else {
                *piVar4 = iVar3;
              }
            }
            *(int **)(iVar3 + 8) = piVar5;
            piVar5[1] = iVar3;
            piVar4 = piVar5;
          }
          *(undefined1 *)(piVar4[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
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
            piVar1 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar1) {
              *piVar1 = (int)piVar6;
            }
            else {
              piVar1[2] = (int)piVar6;
            }
          }
          *piVar6 = (int)piVar5;
          goto LAB_2003c498;
        }
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(piVar6 + 8) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0x20) = 0;
        piVar4 = *(int **)(piVar4[1] + 4);
      }
    } while (piVar4 != *(int **)(*(int *)(in_ECX + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x20) = 1;
  *param_1 = piVar2;
  return;
}

