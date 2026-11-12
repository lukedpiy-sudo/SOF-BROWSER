// rea decompile_all
// name: FUN_20073ab0
// address: 0x20073ab0
// body: available
// range: 0x20073ab0-0x20073cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20073ab0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  puVar4 = param_2;
  bVar7 = true;
  piVar6 = *(int **)(in_ECX + 4);
  piVar5 = (int *)piVar6[1];
  if (piVar5 != *(int **)(in_ECX + 8)) {
    do {
      piVar6 = piVar5;
      iVar3 = __strcmpi((char *)*puVar4,(char *)piVar6[3]);
      bVar7 = iVar3 == -1;
      if (bVar7) {
        piVar5 = (int *)*piVar6;
      }
      else {
        piVar5 = (int *)piVar6[2];
      }
    } while (piVar5 != *(int **)(in_ECX + 8));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    param_2 = (int *)FUN_20075cb0(piVar6,0);
    *param_2 = *(int *)(in_ECX + 8);
    param_2[2] = *(int *)(in_ECX + 8);
    FUN_2008e4b0(param_2 + 3,puVar4);
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    if (((piVar6 == *(int **)(in_ECX + 4)) || (piVar5 != *(int **)(in_ECX + 8))) ||
       (iVar3 = __strcmpi((char *)*puVar4,(char *)piVar6[3]), iVar3 == -1)) {
      *piVar6 = (int)param_2;
      piVar5 = *(int **)(in_ECX + 4);
      if (piVar6 == piVar5) {
        piVar5[1] = (int)param_2;
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
      else if (piVar6 == (int *)*piVar5) {
        *piVar5 = (int)param_2;
      }
    }
    else {
      piVar6[2] = (int)param_2;
      if (piVar6 == *(int **)(*(int *)(in_ECX + 4) + 8)) {
        *(int **)(*(int *)(in_ECX + 4) + 8) = param_2;
      }
    }
    piVar5 = param_2;
    piVar6 = param_2;
    if (param_2 != *(int **)(*(int *)(in_ECX + 4) + 4)) {
      do {
        piVar1 = (int *)piVar6[1];
        if ((char)piVar1[5] != '\0') break;
        piVar2 = *(int **)piVar1[1];
        if (piVar1 == piVar2) {
          iVar3 = ((undefined4 *)piVar1[1])[2];
          if (*(char *)(iVar3 + 0x14) == '\0') {
            *(undefined1 *)(piVar1 + 5) = 1;
            *(undefined1 *)(iVar3 + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
            piVar6 = *(int **)(piVar6[1] + 4);
          }
          else {
            if (piVar6 == (int *)piVar1[2]) {
              FUN_200851e0(piVar1);
              piVar6 = piVar1;
            }
            *(undefined1 *)(piVar6[1] + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
            FUN_20086ed0(*(undefined4 *)(piVar6[1] + 4));
          }
        }
        else if ((char)piVar2[5] == '\0') {
          *(undefined1 *)(piVar1 + 5) = 1;
          *(undefined1 *)(piVar2 + 5) = 1;
          *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
          piVar6 = *(int **)(piVar6[1] + 4);
        }
        else {
          if (piVar6 == (int *)*piVar1) {
            FUN_20086ed0(piVar1);
            piVar6 = piVar1;
          }
          *(undefined1 *)(piVar6[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
          FUN_200851e0(*(undefined4 *)(piVar6[1] + 4));
        }
      } while (piVar6 != *(int **)(*(int *)(in_ECX + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x14) = 1;
    *param_1 = piVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (bVar7) {
    if (piVar6 == (int *)**(undefined4 **)(in_ECX + 4)) goto LAB_20073ca3;
    FUN_2008e140();
  }
  iVar3 = __strcmpi((char *)piVar6[3],(char *)*puVar4);
  if (iVar3 != -1) {
    *param_1 = piVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_20073ca3:
  puVar4 = (undefined4 *)FUN_200750f0(&param_2,piVar5,piVar6,puVar4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

