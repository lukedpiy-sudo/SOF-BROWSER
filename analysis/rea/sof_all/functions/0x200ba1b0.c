// rea decompile_all
// name: FUN_200ba1b0
// address: 0x200ba1b0
// body: available
// range: 0x200ba1b0-0x200ba3fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ba1b0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  
  cVar5 = '\x01';
  piVar8 = *(int **)(in_ECX + 4);
  piVar7 = (int *)piVar8[1];
  if (piVar7 != *(int **)(in_ECX + 8)) {
    do {
      piVar8 = piVar7;
      cVar5 = FUN_200bb1e0(param_2,piVar8 + 3);
      if (cVar5 == '\0') {
        piVar7 = (int *)piVar8[2];
      }
      else {
        piVar7 = (int *)*piVar8;
      }
    } while (piVar7 != *(int **)(in_ECX + 8));
  }
  uVar4 = param_2;
  if (*(char *)(in_ECX + 0xc) == '\0') {
    if (cVar5 != '\0') {
      if (piVar8 == (int *)**(undefined4 **)(in_ECX + 4)) {
        puVar6 = (undefined4 *)FUN_200ba690(&param_2,piVar7,piVar8,param_2);
        uVar4 = *puVar6;
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = uVar4;
        return;
      }
      FUN_2008e1a0();
    }
    cVar5 = FUN_200bb1e0(piVar8 + 3,uVar4);
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = piVar8;
      return;
    }
    puVar6 = (undefined4 *)FUN_200ba690(&param_2,piVar7,piVar8,param_2);
    *param_1 = *puVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  param_2 = (int *)FUN_2008e120(piVar8,0);
  *param_2 = *(int *)(in_ECX + 8);
  param_2[2] = *(int *)(in_ECX + 8);
  FUN_200bb220(param_2 + 3,uVar4);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if (((piVar8 == *(int **)(in_ECX + 4)) || (piVar7 != *(int **)(in_ECX + 8))) ||
     (cVar5 = FUN_200bb1e0(uVar4,piVar8 + 3), cVar5 != '\0')) {
    *piVar8 = (int)param_2;
    piVar7 = *(int **)(in_ECX + 4);
    if (piVar8 == piVar7) {
      piVar7[1] = (int)param_2;
      *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
    }
    else if (piVar8 == (int *)*piVar7) {
      *piVar7 = (int)param_2;
    }
  }
  else {
    piVar8[2] = (int)param_2;
    if (piVar8 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
      *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
    }
  }
  piVar7 = param_2;
  piVar8 = param_2;
  if (param_2 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
    do {
      piVar1 = (int *)piVar8[1];
      if ((char)piVar1[8] != '\0') break;
      piVar2 = *(int **)piVar1[1];
      if (piVar1 == piVar2) {
        iVar3 = ((undefined4 *)piVar1[1])[2];
        if (*(char *)(iVar3 + 0x20) == '\0') {
          *(undefined1 *)(piVar1 + 8) = 1;
          *(undefined1 *)(iVar3 + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x20) = 0;
          piVar8 = *(int **)(piVar8[1] + 4);
        }
        else {
          if (piVar8 == (int *)piVar1[2]) {
            FUN_200851e0(piVar1);
            piVar8 = piVar1;
          }
          *(undefined1 *)(piVar8[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x20) = 0;
          FUN_20086ed0(*(undefined4 *)(piVar8[1] + 4));
        }
      }
      else if ((char)piVar2[8] == '\0') {
        *(undefined1 *)(piVar1 + 8) = 1;
        *(undefined1 *)(piVar2 + 8) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x20) = 0;
        piVar8 = *(int **)(piVar8[1] + 4);
      }
      else {
        if (piVar8 == (int *)*piVar1) {
          FUN_20086ed0(piVar1);
          piVar8 = piVar1;
        }
        *(undefined1 *)(piVar8[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x20) = 0;
        FUN_200851e0(*(undefined4 *)(piVar8[1] + 4));
      }
    } while (piVar8 != *(int **)(*(int *)(in_ECX + 4) + 4));
  }
  *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x20) = 1;
  *param_1 = piVar7;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

