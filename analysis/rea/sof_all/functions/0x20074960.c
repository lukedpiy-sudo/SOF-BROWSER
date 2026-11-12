// rea decompile_all
// name: FUN_20074960
// address: 0x20074960
// body: available
// range: 0x20074960-0x20074b66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20074960(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  short *psVar7;
  undefined4 *puVar8;
  int in_ECX;
  int *piVar9;
  
  psVar7 = (short *)param_2;
  bVar6 = true;
  piVar1 = *(int **)(in_ECX + 4);
  piVar9 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)(in_ECX + 8)) {
    bVar6 = *(short *)param_2 < (short)piVar2[3];
    piVar9 = piVar2;
    if (bVar6) {
      piVar2 = (int *)*piVar2;
    }
    else {
      piVar2 = (int *)piVar2[2];
    }
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    param_2 = (int *)FUN_20048940(piVar9,0);
    *param_2 = *(int *)(in_ECX + 8);
    param_2[2] = *(int *)(in_ECX + 8);
    FUN_200763b0(param_2 + 3,psVar7);
    piVar1 = param_2;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    if (((piVar9 == *(int **)(in_ECX + 4)) || (piVar2 != *(int **)(in_ECX + 8))) ||
       (*psVar7 < (short)piVar9[3])) {
      *piVar9 = (int)param_2;
      piVar2 = *(int **)(in_ECX + 4);
      if (piVar9 == piVar2) {
        piVar2[1] = (int)param_2;
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
      else if (piVar9 == (int *)*piVar2) {
        *piVar2 = (int)param_2;
      }
    }
    else {
      piVar9[2] = (int)param_2;
      if (piVar9 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
    }
    piVar9 = param_2;
    if (param_2 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar2 = (int *)piVar9[1];
        if ((char)piVar2[9] != '\0') break;
        piVar3 = *(int **)piVar2[1];
        if (piVar2 == piVar3) {
          iVar4 = ((undefined4 *)piVar2[1])[2];
          if (*(char *)(iVar4 + 0x24) == '\0') {
            *(undefined1 *)(piVar2 + 9) = 1;
            *(undefined1 *)(iVar4 + 0x24) = 1;
            *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x24) = 0;
            piVar9 = *(int **)(piVar9[1] + 4);
          }
          else {
            if (piVar9 == (int *)piVar2[2]) {
              FUN_200851e0(piVar2);
              piVar9 = piVar2;
            }
            *(undefined1 *)(piVar9[1] + 0x24) = 1;
            *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x24) = 0;
            FUN_20086ed0(*(undefined4 *)(piVar9[1] + 4));
          }
        }
        else if ((char)piVar3[9] == '\0') {
          *(undefined1 *)(piVar2 + 9) = 1;
          *(undefined1 *)(piVar3 + 9) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x24) = 0;
          piVar9 = *(int **)(piVar9[1] + 4);
        }
        else {
          if (piVar9 == (int *)*piVar2) {
            FUN_20086ed0(piVar2);
            piVar9 = piVar2;
          }
          *(undefined1 *)(piVar9[1] + 0x24) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x24) = 0;
          FUN_200851e0(*(undefined4 *)(piVar9[1] + 4));
        }
      } while (piVar9 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x24) = 1;
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar6) {
    if (piVar9 == (int *)*piVar1) goto LAB_20074b32;
    FUN_20050560();
  }
  if (*psVar7 <= (short)piVar9[3]) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = piVar9;
    return;
  }
LAB_20074b32:
  puVar8 = (undefined4 *)FUN_20075cd0(&param_2,piVar2,piVar9,psVar7);
  uVar5 = *puVar8;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}

