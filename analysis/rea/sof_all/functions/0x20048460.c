// rea decompile_all
// name: FUN_20048460
// address: 0x20048460
// body: available
// range: 0x20048460-0x200486a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20048460(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *local_4;
  
  uVar3 = (uint)param_2;
  bVar9 = true;
  piVar7 = *(int **)(in_ECX + 4);
  piVar8 = (int *)piVar7[1];
  if (piVar8 != *(int **)(in_ECX + 8)) {
    do {
      piVar7 = piVar8;
      puVar4 = (undefined1 *)piVar7[4];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      iVar5 = FUN_20023c90(0,*(undefined4 *)(uVar3 + 8),puVar4,piVar7[5]);
      bVar9 = iVar5 < 0;
      if (bVar9) {
        piVar8 = (int *)*piVar7;
      }
      else {
        piVar8 = (int *)piVar7[2];
      }
    } while (piVar8 != *(int **)(in_ECX + 8));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    param_2 = (int *)FUN_20048940(piVar7,0);
    *param_2 = *(int *)(in_ECX + 8);
    param_2[2] = *(int *)(in_ECX + 8);
    FUN_200489e0(param_2 + 3,uVar3);
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    if (((piVar7 == *(int **)(in_ECX + 4)) || (piVar8 != *(int **)(in_ECX + 8))) ||
       (iVar5 = FUN_20023c40(piVar7 + 3), iVar5 < 0)) {
      *piVar7 = (int)param_2;
      piVar8 = *(int **)(in_ECX + 4);
      if (piVar7 == piVar8) {
        piVar8[1] = (int)param_2;
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
      else if (piVar7 == (int *)*piVar8) {
        *piVar8 = (int)param_2;
      }
    }
    else {
      piVar7[2] = (int)param_2;
      if (piVar7 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
    }
    piVar8 = param_2;
    piVar7 = param_2;
    if (param_2 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar1 = (int *)piVar7[1];
        if ((char)piVar1[9] != '\0') break;
        piVar2 = *(int **)piVar1[1];
        if (piVar1 == piVar2) {
          iVar5 = ((undefined4 *)piVar1[1])[2];
          if (*(char *)(iVar5 + 0x24) == '\0') {
            *(undefined1 *)(piVar1 + 9) = 1;
            *(undefined1 *)(iVar5 + 0x24) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x24) = 0;
            piVar7 = *(int **)(piVar7[1] + 4);
          }
          else {
            if (piVar7 == (int *)piVar1[2]) {
              FUN_200851e0(piVar1);
              piVar7 = piVar1;
            }
            *(undefined1 *)(piVar7[1] + 0x24) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x24) = 0;
            FUN_20086ed0(*(undefined4 *)(piVar7[1] + 4));
          }
        }
        else if ((char)piVar2[9] == '\0') {
          *(undefined1 *)(piVar1 + 9) = 1;
          *(undefined1 *)(piVar2 + 9) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x24) = 0;
          piVar7 = *(int **)(piVar7[1] + 4);
        }
        else {
          if (piVar7 == (int *)*piVar1) {
            FUN_20086ed0(piVar1);
            piVar7 = piVar1;
          }
          *(undefined1 *)(piVar7[1] + 0x24) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x24) = 0;
          FUN_200851e0(*(undefined4 *)(piVar7[1] + 4));
        }
      } while (piVar7 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x24) = 1;
    *param_1 = piVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  local_4 = piVar7;
  if (bVar9) {
    if (piVar7 == (int *)**(undefined4 **)(in_ECX + 4)) goto LAB_20048667;
    FUN_20050560();
  }
  iVar5 = FUN_20023c40(uVar3);
  if (-1 < iVar5) {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    FUN_2008c5b0(&local_4,&param_2);
    return param_1;
  }
LAB_20048667:
  puVar6 = (undefined4 *)FUN_200486f0(&param_2,piVar8,piVar7,uVar3);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

