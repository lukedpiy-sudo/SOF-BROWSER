// rea decompile_all
// name: FUN_5007a350
// address: 0x5007a350
// body: available
// range: 0x5007a350-0x5007abe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5007a350(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  bool bVar12;
  undefined1 local_85;
  int iStack_84;
  int *piStack_80;
  int iStack_7c;
  undefined4 *local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  byte abStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114b90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x4a) = local_85;
  local_78 = param_1;
  pvVar3 = operator_new(0xc);
  iVar9 = 0;
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x4b] = pvVar3;
  param_1[0x4c] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x4d) = local_85;
  pvVar3 = operator_new(0xc);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x4e] = pvVar3;
  param_1[0x4f] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x50) = local_85;
  pvVar3 = operator_new(0xc);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x51] = pvVar3;
  param_1[0x52] = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x53) = local_85;
  pvVar3 = operator_new(0xc);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x54] = pvVar3;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = local_85;
  local_4._0_1_ = 3;
  uVar4 = FUN_5006b170((undefined4 *)0x0,0);
  param_1[0x57] = uVar4;
  param_1[0x58] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x59) = local_85;
  pvVar3 = operator_new(0xc);
  *(void **)pvVar3 = pvVar3;
  *(void **)((int)pvVar3 + 4) = pvVar3;
  param_1[0x5a] = pvVar3;
  param_1[0x5b] = 0;
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x5c) = local_85;
  uVar4 = FUN_5006b170((undefined4 *)0x0,0);
  param_1[0x5d] = uVar4;
  param_1[0x5e] = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x5f) = local_85;
  uVar4 = FUN_5006b170((undefined4 *)0x0,0);
  param_1[0x60] = uVar4;
  param_1[0x61] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  puVar10 = param_1 + 0xc6;
  for (iVar8 = 100; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = param_1 + 0x62;
  for (iVar8 = 100; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  param_1[0x49] = 0;
  puVar10 = param_1;
  for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0x42] = 1;
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  (*DAT_5015cb48)(0x534e414d,param_1,0x104,0);
  iVar8 = (*DAT_5015cb64)(param_1,param_1 + 0x41,0);
  param_1[0x44] = iVar8;
  if (iVar8 == -1) {
    FUN_500adb20(&DAT_501456ec);
    FUN_500adb20(&DAT_501456d0);
    FUN_500adb20(&DAT_501456ec);
  }
  else {
    iVar8 = FUN_5007b260((int)param_1);
    if (iVar8 == 3) {
      param_1[0x42] = 0;
    }
    else {
      FUN_500adb20(&DAT_501456ec);
      FUN_500adb20(&DAT_5014569c);
      FUN_500adb20(&DAT_501456ec);
    }
  }
  (*DAT_5015cb48)(0x53435250,&uStack_70,0x20,0);
  param_1[0x44] = uStack_68;
  param_1[0x42] = uStack_70;
  param_1[0x43] = uStack_6c;
  param_1[0x45] = uStack_64;
  param_1[0x49] = uStack_60;
  iVar8 = FUN_500ba8c0(iStack_5c);
  param_1[0x46] = iVar8;
  iVar8 = FUN_500ba8c0(iStack_58);
  param_1[0x47] = iVar8;
  iVar8 = FUN_500ba8c0(iStack_54);
  param_1[0x48] = iVar8;
  (*DAT_5015cb48)(0x53464e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          (*(code *)piVar5[1])(param_1);
          goto LAB_5007a67e;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
LAB_5007a67e:
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53474e4d,&iStack_84,4,0);
  iStack_7c = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53474c42,&iStack_50,0x44,0);
      if ((DAT_5015c4e8 != 0) && (piStack_80 = (int *)*DAT_5015c4e4, piStack_80 != DAT_5015c4e4)) {
        do {
          pbVar11 = abStack_4c;
          pbVar6 = (byte *)(piStack_80[2] + 4);
          do {
            bVar1 = *pbVar11;
            bVar12 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_5007a715:
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_5007a71a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar11[1];
            bVar12 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_5007a715;
            pbVar11 = pbVar11 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_5007a71a:
          if (iVar8 == 0) {
            iVar8 = piStack_80[2];
            goto LAB_5007a740;
          }
          FUN_50049a30(&piStack_80,&uStack_74);
        } while (piStack_80 != DAT_5015c4e4);
      }
      iVar8 = 0;
LAB_5007a740:
      param_1[iStack_50 + 0x62] = iVar8;
      iStack_7c = iStack_7c + 1;
    } while (iStack_7c < iStack_84);
  }
  (*DAT_5015cb48)(0x534c4e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007a7d7;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007a7d7:
      FUN_5000a290(param_1 + 0x4a,&uStack_74,param_1[0x4b],(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53504e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007a868;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007a868:
      FUN_5000a290(param_1 + 0x4d,&uStack_74,param_1[0x4e],(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53534e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007a910;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007a910:
      FUN_5000a290(param_1 + 0x50,&uStack_74,param_1[0x51],(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53574e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007a9a5;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007a9a5:
      FUN_5000a290(param_1 + 0x56,&uStack_74,param_1[0x57],(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53494e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007aa4d;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007aa4d:
      FUN_5000a290(param_1 + 0x53,&uStack_74,param_1[0x54],(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53564e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      (*DAT_5015cb48)(0x53434944,&iStack_7c,4,0);
      piVar5 = &DAT_501451d0;
      puVar2 = PTR_FUN_501451d4;
      while (puVar2 != (undefined *)0x0) {
        if (*piVar5 == iStack_7c) {
          piStack_80 = (int *)(*(code *)piVar5[1])(param_1);
          goto LAB_5007aae2;
        }
        piVar7 = piVar5 + 3;
        piVar5 = piVar5 + 2;
        puVar2 = (undefined *)*piVar7;
      }
      (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
      piStack_80 = (int *)0x0;
LAB_5007aae2:
      FUN_500825e0(param_1 + 0x59,(int *)&piStack_80);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53454e4d,&iStack_84,4,0);
  iVar8 = 0;
  if (0 < iStack_84) {
    do {
      iStack_7c = FUN_50076110(&DAT_501451d0,param_1);
      FUN_500825e0(param_1 + 0x5c,&iStack_7c);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_84);
  }
  (*DAT_5015cb48)(0x53434e4d,&iStack_84,4,0);
  piVar7 = operator_new(iStack_84 * 4);
  (*DAT_5015cb48)(0x53434e44,piVar7,iStack_84 * 4,0);
  piVar5 = piVar7;
  if (0 < iStack_84) {
    do {
      FUN_500825e0(param_1 + 0x5f,piVar5);
      iVar9 = iVar9 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar9 < iStack_84);
  }
  FUN_50106b60((undefined *)piVar7);
  *(undefined4 **)(param_1[0x46] + 0x454) = param_1;
  ExceptionList = pvStack_c;
  return param_1;
}

