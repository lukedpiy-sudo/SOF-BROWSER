// rea decompile_all
// name: FUN_200a8090
// address: 0x200a8090
// body: available
// range: 0x200a8090-0x200a82c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a8090(undefined4 *param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  
  pfVar6 = param_2;
  bVar5 = true;
  piVar1 = *(int **)(in_ECX + 4);
  piVar9 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)(in_ECX + 8)) {
    if ((float)piVar2[3] <= *param_2) {
      piVar8 = (int *)piVar2[2];
    }
    else {
      piVar8 = (int *)*piVar2;
    }
    bVar5 = (float)piVar2[3] > *param_2;
    piVar9 = piVar2;
    piVar2 = piVar8;
  }
  if (*(char *)(in_ECX + 0xc) == '\0') {
    if (bVar5) {
      if (piVar9 == (int *)*piVar1) {
        puVar7 = (undefined4 *)FUN_200a8f20(&param_2,piVar2,piVar9,param_2);
        uVar4 = *puVar7;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = uVar4;
        return;
      }
      FUN_20087510();
    }
    if ((float)piVar9[3] < *pfVar6) {
      puVar7 = (undefined4 *)FUN_200a8f20(&param_2,piVar2,piVar9,pfVar6);
      *param_1 = *puVar7;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = piVar9;
    return;
  }
  param_2 = (float *)FUN_200a9270(piVar9,0);
  *param_2 = (float)*(int *)(in_ECX + 8);
  param_2[2] = (float)*(int *)(in_ECX + 8);
  FUN_200a95b0(param_2 + 3,pfVar6);
  piVar1 = (int *)param_2;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if (((piVar9 == *(int **)(in_ECX + 4)) || (piVar2 != *(int **)(in_ECX + 8))) ||
     (*pfVar6 < (float)piVar9[3])) {
    *piVar9 = (int)param_2;
    piVar2 = *(int **)(in_ECX + 4);
    if (piVar9 == piVar2) {
      piVar2[1] = (int)param_2;
      *(float **)(*(int *)(in_ECX + 4) + 8) = param_2;
    }
    else if (piVar9 == (int *)*piVar2) {
      *piVar2 = (int)param_2;
    }
  }
  else {
    piVar9[2] = (int)param_2;
    if (piVar9 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
      *(float **)(*(int *)(in_ECX + 4) + 8) = param_2;
    }
  }
  piVar9 = (int *)param_2;
  if (param_2 != (float *)*(int **)(*(int *)(in_ECX + 4) + 4)) {
    do {
      piVar2 = (int *)piVar9[1];
      if ((char)piVar2[0xc] != '\0') break;
      piVar8 = *(int **)piVar2[1];
      if (piVar2 == piVar8) {
        iVar3 = ((undefined4 *)piVar2[1])[2];
        if (*(char *)(iVar3 + 0x30) == '\0') {
          *(undefined1 *)(piVar2 + 0xc) = 1;
          *(undefined1 *)(iVar3 + 0x30) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x30) = 0;
          piVar9 = *(int **)(piVar9[1] + 4);
        }
        else {
          if (piVar9 == (int *)piVar2[2]) {
            FUN_200851e0(piVar2);
            piVar9 = piVar2;
          }
          *(undefined1 *)(piVar9[1] + 0x30) = 1;
          *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x30) = 0;
          FUN_20086ed0(*(undefined4 *)(piVar9[1] + 4));
        }
      }
      else if ((char)piVar8[0xc] == '\0') {
        *(undefined1 *)(piVar2 + 0xc) = 1;
        *(undefined1 *)(piVar8 + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x30) = 0;
        piVar9 = *(int **)(piVar9[1] + 4);
      }
      else {
        if (piVar9 == (int *)*piVar2) {
          FUN_20086ed0(piVar2);
          piVar9 = piVar2;
        }
        *(undefined1 *)(piVar9[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar9[1] + 4) + 0x30) = 0;
        FUN_200851e0(*(undefined4 *)(piVar9[1] + 4));
      }
    } while (piVar9 != *(int **)(*(int *)(in_ECX + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x30) = 1;
  *param_1 = piVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

