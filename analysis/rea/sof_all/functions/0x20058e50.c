// rea decompile_all
// name: FUN_20058e50
// address: 0x20058e50
// body: available
// range: 0x20058e50-0x2005905c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20058e50(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  pbVar6 = param_2;
  bVar10 = true;
  piVar2 = *(int **)(in_ECX + 4);
  piVar8 = (int *)piVar2[1];
  piVar9 = piVar2;
  if (piVar8 != *(int **)(in_ECX + 8)) {
    bVar1 = *param_2;
    param_2 = (byte *)CONCAT31(param_2._1_3_,bVar1);
    do {
      piVar9 = piVar8;
      bVar10 = bVar1 < *(byte *)(piVar9 + 3);
      if (bVar10) {
        piVar8 = (int *)*piVar9;
      }
      else {
        piVar8 = (int *)piVar9[2];
      }
    } while (piVar8 != *(int **)(in_ECX + 8));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    param_2 = (byte *)FUN_20075cb0(piVar9,0);
    *(int *)param_2 = *(int *)(in_ECX + 8);
    *(int *)((int)param_2 + 8) = *(int *)(in_ECX + 8);
    FUN_2008e4b0((int *)((int)param_2 + 0xc),pbVar6);
    piVar2 = (int *)param_2;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    if (((piVar9 == *(int **)(in_ECX + 4)) || (piVar8 != *(int **)(in_ECX + 8))) ||
       (*pbVar6 < *(byte *)(piVar9 + 3))) {
      *piVar9 = (int)param_2;
      piVar8 = *(int **)(in_ECX + 4);
      if (piVar9 == piVar8) {
        piVar8[1] = (int)param_2;
        *(byte **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
      else if (piVar9 == (int *)*piVar8) {
        *piVar8 = (int)param_2;
      }
    }
    else {
      piVar9[2] = (int)param_2;
      if (piVar9 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(byte **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
    }
    piVar8 = (int *)param_2;
    if (param_2 != (byte *)*(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar9 = (int *)piVar8[1];
        if ((char)piVar9[5] != '\0') break;
        piVar3 = *(int **)piVar9[1];
        if (piVar9 == piVar3) {
          iVar4 = ((undefined4 *)piVar9[1])[2];
          if (*(char *)(iVar4 + 0x14) == '\0') {
            *(undefined1 *)(piVar9 + 5) = 1;
            *(undefined1 *)(iVar4 + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            piVar8 = *(int **)(piVar8[1] + 4);
          }
          else {
            if (piVar8 == (int *)piVar9[2]) {
              FUN_200851e0(piVar9);
              piVar8 = piVar9;
            }
            *(undefined1 *)(piVar8[1] + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            FUN_20086ed0(*(undefined4 *)(piVar8[1] + 4));
          }
        }
        else if ((char)piVar3[5] == '\0') {
          *(undefined1 *)(piVar9 + 5) = 1;
          *(undefined1 *)(piVar3 + 5) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          piVar8 = *(int **)(piVar8[1] + 4);
        }
        else {
          if (piVar8 == (int *)*piVar9) {
            FUN_20086ed0(piVar9);
            piVar8 = piVar9;
          }
          *(undefined1 *)(piVar8[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          FUN_200851e0(*(undefined4 *)(piVar8[1] + 4));
        }
      } while (piVar8 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x14) = 1;
    *param_1 = piVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar10) {
    if (piVar9 == (int *)*piVar2) goto LAB_20059028;
    FUN_2008e140();
  }
  if (*pbVar6 <= *(byte *)(piVar9 + 3)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = piVar9;
    return;
  }
LAB_20059028:
  puVar7 = (undefined4 *)FUN_200590e0(&param_2,piVar8,piVar9,pbVar6);
  uVar5 = *puVar7;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}

