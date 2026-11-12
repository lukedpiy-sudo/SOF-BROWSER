// rea decompile_all
// name: FUN_200eff50
// address: 0x200eff50
// body: available
// range: 0x200eff50-0x200f0311 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eff50(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
    iVar6 = param_2[7];
    if (param_2[5] != 0) {
      FUN_200edf60(param_1,0xf,param_2[5],param_3,param_2[6],param_2[8],0,0x14);
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar6 + 4)) {
      do {
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar6 + 8) + iVar5 * 4));
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar5 * 4));
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar6 + 4));
    }
    FUN_200f9d32(*(undefined4 *)(iVar6 + 8));
    FUN_200f9d32(*(undefined4 *)(iVar6 + 0x10));
    FUN_200f9d32(*(undefined4 *)(iVar6 + 0xc));
  }
  else if (iVar6 == 1) {
    if (param_2[4] != 0) {
      FUN_200edf60(param_1,0x10,param_2[4],param_3,param_2[6],param_2[8],0,8);
    }
  }
  else if (iVar6 == 2) {
    if (param_2[4] != 0) {
      FUN_200edf60(param_1,0x11,param_2[4],param_3,param_2[6],param_2[8],
                   *(undefined4 *)(param_3 + 4),0xc);
    }
  }
  else {
    if (iVar6 == 3) {
      iVar6 = param_2[7];
      if (param_2[4] != 0) {
        FUN_200edf60(param_1,0x14,param_2[4],param_3,param_2[6],param_2[8],0,0x14);
      }
      iVar5 = 0;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          FUN_200f9d32(*(undefined4 *)(*(int *)(iVar6 + 8) + iVar5 * 4));
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar6 + 4));
      }
    }
    else {
      if (iVar6 == 4) {
        puVar2 = (undefined4 *)param_2[7];
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x15,param_2[4],param_3,param_2[6],param_2[8],0,0x1c);
        }
        iVar6 = 0;
        if (0 < (int)puVar2[3]) {
          do {
            FUN_200f9d32(*(undefined4 *)(puVar2[4] + iVar6 * 4));
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)puVar2[3]);
        }
        FUN_200f9d32(puVar2[4]);
        FUN_200f9d32(puVar2[1]);
        FUN_200f9d32(puVar2[2]);
        FUN_200f9d32(*puVar2);
        goto LAB_200f02a4;
      }
      if (iVar6 == 10) {
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x16,param_2[4],param_3,param_2[6],param_2[8],0,0x10);
        }
        goto LAB_200f02a4;
      }
      if (iVar6 == 0xb) goto LAB_200f02a4;
      if (iVar6 == 5) {
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x12,param_2[4],param_3,param_2[6],param_2[8],0,0xc);
        }
        goto LAB_200f02a4;
      }
      if (iVar6 == 6) {
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x17,param_2[4],param_3,param_2[6],param_2[8],0,0x10);
        }
        goto LAB_200f02a4;
      }
      if (iVar6 == 7) {
        FUN_200f9d32(*(undefined4 *)param_2[7]);
        goto LAB_200f02a4;
      }
      if (iVar6 == 8) {
        piVar3 = (int *)param_2[7];
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x18,param_2[4],param_3,param_2[6],param_2[8],0,0x10);
        }
        iVar6 = 0;
        if (0 < *piVar3) {
          do {
            FUN_200f9d32(*(undefined4 *)(piVar3[1] + iVar6 * 4));
            iVar6 = iVar6 + 1;
          } while (iVar6 < *piVar3);
        }
        goto LAB_200f02a4;
      }
      if (iVar6 == 9) {
        if (param_2[4] != 0) {
          FUN_200edf60(param_1,0x1a,param_2[4],param_3,param_2[6],param_2[8],0,0xc);
        }
        goto LAB_200f02a4;
      }
      if (iVar6 != 0xc) goto LAB_200f02a4;
      iVar6 = param_2[7];
      if (param_2[4] != 0) {
        FUN_200edf60(param_1,0x1b,param_2[4],param_3,param_2[6],param_2[8],0,0x10);
      }
      iVar5 = 0;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          FUN_200f9d32(*(undefined4 *)(*(int *)(iVar6 + 8) + iVar5 * 4));
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar6 + 4));
      }
    }
    FUN_200f9d32(*(undefined4 *)(iVar6 + 8));
    FUN_200f9d32(*(undefined4 *)(iVar6 + 0xc));
  }
LAB_200f02a4:
  piVar3 = *(int **)(param_1 + 900);
  piVar4 = (int *)0x0;
  piVar7 = piVar3;
  if (piVar3 != (int *)0x0) {
    while (piVar7 != param_2) {
      piVar1 = piVar7 + 9;
      piVar4 = piVar7;
      piVar7 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar3 == piVar7) {
      *(int *)(param_1 + 900) = piVar7[9];
    }
    if (*(int **)(param_1 + 0x388) == piVar7) {
      *(int **)(param_1 + 0x388) = piVar4;
    }
    if (piVar4 != (int *)0x0) {
      piVar4[9] = piVar7[9];
    }
    FUN_200f9d32(piVar7[7]);
    FUN_200f9d32(piVar7[2]);
    FUN_200f9d32(piVar7[3]);
    FUN_200f9d32(piVar7);
  }
  return;
}

