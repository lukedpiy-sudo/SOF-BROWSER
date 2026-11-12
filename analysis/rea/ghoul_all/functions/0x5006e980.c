// rea decompile_all
// name: FUN_5006e980
// address: 0x5006e980
// body: available
// range: 0x5006e980-0x5006eb0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5006e980(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 uVar7;
  
  piVar6 = *(int **)(param_1[0x1d] + 0x350);
  piVar1 = (int *)piVar6[1];
  piVar2 = (int *)*piVar6;
  if (piVar1 != piVar2) {
    piVar6[1] = (int)piVar1;
    *piVar6 = (int)piVar1;
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
        if ((int *)**(undefined4 **)(param_1[0x1d] + 0x350) == piVar2) {
          uVar5 = 3;
        }
        else if ((int *)**(int **)(piVar2[0x1d] + 0x350) == param_1) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_5006b610((int)param_1,piVar2,uVar5);
    }
    puVar3 = *(undefined4 **)(param_1[0x1d] + 0x350);
    piVar6 = (int *)*puVar3;
    if (piVar6 != (int *)0x0) {
      if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
        if ((int *)*puVar3 == piVar6) {
          uVar5 = 3;
        }
        else if ((int *)**(int **)(piVar6[0x1d] + 0x350) == param_1) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_5006b610((int)param_1,piVar6,uVar5);
    }
    if (piVar2 != (int *)0x0) {
      if (*(int *)(piVar2[0x1d] + 0x2dc) == 0) {
        if ((int *)**(int **)(piVar2[0x1d] + 0x350) == param_1) {
          uVar5 = 3;
        }
        else if ((int *)**(undefined4 **)(param_1[0x1d] + 0x350) == piVar2) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_5006b610((int)piVar2,param_1,uVar5);
    }
    iVar4 = **(int **)(param_1[0x1d] + 0x350);
    if (iVar4 != 0) {
      if (*(int *)(*(int *)(iVar4 + 0x74) + 0x2dc) == 0) {
        if ((int *)**(int **)(*(int *)(iVar4 + 0x74) + 0x350) == param_1) {
          uVar5 = 3;
        }
        else if (**(int **)(param_1[0x1d] + 0x350) == iVar4) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_5006b610(iVar4,param_1,uVar5);
    }
    if ((_DAT_5015d1c8 == 0.0) && (*(int *)(param_1[0x1d] + 0x2dc) == 0)) {
      *(undefined4 *)(param_1[0x1d] + 0x474) = 0;
      uVar7 = 0;
      *(undefined4 *)(param_1[0x1d] + 0x470) = 0;
      *(float *)(param_1[0x1d] + 0x568) = DAT_5015ccdc + 5.0;
      piVar6 = param_1;
      FUN_5006e660((int)param_1);
      (*DAT_5015ca68)(param_1,1,piVar6,uVar7);
    }
  }
  return;
}

