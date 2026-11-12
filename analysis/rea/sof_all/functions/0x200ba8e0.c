// rea decompile_all
// name: FUN_200ba8e0
// address: 0x200ba8e0
// body: available
// range: 0x200ba8e0-0x200bab2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ba8e0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  
  piVar4 = operator_new(0x30);
  piVar4[1] = (int)param_3;
  *(undefined1 *)(piVar4 + 0xb) = 0;
  *(undefined1 *)((int)piVar4 + 0x2d) = 0;
  *piVar4 = *(int *)(in_ECX + 8);
  piVar4[2] = *(int *)(in_ECX + 8);
  FUN_200bb250(piVar4 + 3,param_4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if ((param_3 != *(int **)(in_ECX + 4)) && (param_2 == *(int *)(in_ECX + 8))) {
    cVar3 = FUN_200bb1e0(param_4,param_3 + 3);
    if (cVar3 == '\0') {
      param_3[2] = (int)piVar4;
      if (param_3 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(int **)(*(int *)(in_ECX + 4) + 8) = piVar4;
      }
      goto LAB_200ba96e;
    }
  }
  *param_3 = (int)piVar4;
  piVar5 = *(int **)(in_ECX + 4);
  if (param_3 == piVar5) {
    piVar5[1] = (int)piVar4;
    *(int **)(*(int *)(in_ECX + 4) + 8) = piVar4;
  }
  else if (param_3 == (int *)*piVar5) {
    *piVar5 = (int)piVar4;
  }
LAB_200ba96e:
  piVar5 = piVar4;
  if (piVar4 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
    do {
      piVar6 = (int *)piVar5[1];
      if ((char)piVar6[0xb] != '\0') break;
      piVar7 = *(int **)piVar6[1];
      if (piVar6 == piVar7) {
        iVar1 = ((undefined4 *)piVar6[1])[2];
        if (*(char *)(iVar1 + 0x2c) == '\0') {
          *(undefined1 *)(piVar6 + 0xb) = 1;
          *(undefined1 *)(iVar1 + 0x2c) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x2c) = 0;
          piVar5 = *(int **)(piVar5[1] + 4);
        }
        else {
          if (piVar5 == (int *)piVar6[2]) {
            piVar5 = (int *)piVar6[2];
            piVar6[2] = *piVar5;
            if (*piVar5 != *(int *)(in_ECX + 8)) {
              *(int **)(*piVar5 + 4) = piVar6;
            }
            piVar5[1] = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int **)(*(int *)(in_ECX + 4) + 4) = piVar5;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar7) {
                *piVar7 = (int)piVar5;
              }
              else {
                piVar7[2] = (int)piVar5;
              }
            }
            *piVar5 = (int)piVar6;
            piVar6[1] = (int)piVar5;
            piVar5 = piVar6;
          }
          *(undefined1 *)(piVar5[1] + 0x2c) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x2c) = 0;
          piVar6 = *(int **)(piVar5[1] + 4);
          piVar7 = (int *)*piVar6;
          *piVar6 = piVar7[2];
          if (piVar7[2] != *(int *)(in_ECX + 8)) {
            *(int **)(piVar7[2] + 4) = piVar6;
          }
          piVar7[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
            piVar7[2] = (int)piVar6;
          }
          else {
            piVar2 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar2[2]) {
              piVar2[2] = (int)piVar7;
              piVar7[2] = (int)piVar6;
            }
            else {
              *piVar2 = (int)piVar7;
              piVar7[2] = (int)piVar6;
            }
          }
LAB_200bab0a:
          piVar6[1] = (int)piVar7;
        }
      }
      else {
        if ((char)piVar7[0xb] != '\0') {
          if (piVar5 == (int *)*piVar6) {
            iVar1 = *piVar6;
            *piVar6 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 8) != *(int *)(in_ECX + 8)) {
              *(int **)(*(int *)(iVar1 + 8) + 4) = piVar6;
            }
            *(int *)(iVar1 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
              *(int *)(*(int *)(in_ECX + 4) + 4) = iVar1;
            }
            else {
              piVar5 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar5[2]) {
                piVar5[2] = iVar1;
              }
              else {
                *piVar5 = iVar1;
              }
            }
            *(int **)(iVar1 + 8) = piVar6;
            piVar6[1] = iVar1;
            piVar5 = piVar6;
          }
          *(undefined1 *)(piVar5[1] + 0x2c) = 1;
          *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x2c) = 0;
          piVar6 = *(int **)(piVar5[1] + 4);
          piVar7 = (int *)piVar6[2];
          piVar6[2] = *piVar7;
          if (*piVar7 != *(int *)(in_ECX + 8)) {
            *(int **)(*piVar7 + 4) = piVar6;
          }
          piVar7[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 4)) {
            *(int **)(*(int *)(in_ECX + 4) + 4) = piVar7;
          }
          else {
            piVar2 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar2) {
              *piVar2 = (int)piVar7;
            }
            else {
              piVar2[2] = (int)piVar7;
            }
          }
          *piVar7 = (int)piVar6;
          goto LAB_200bab0a;
        }
        *(undefined1 *)(piVar6 + 0xb) = 1;
        *(undefined1 *)(piVar7 + 0xb) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x2c) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
    } while (piVar5 != *(int **)(*(int *)(in_ECX + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x2c) = 1;
  *param_1 = piVar4;
  return;
}

