// rea decompile_all
// name: FUN_50055780
// address: 0x50055780
// body: available
// range: 0x50055780-0x500561be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_50055780(float param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined3 extraout_var;
  float fVar9;
  float fVar10;
  uint uVar11;
  float10 fVar12;
  float10 extraout_ST0;
  longlong lVar13;
  undefined8 uVar14;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  int iStack_8;
  
  uVar8 = *(uint *)((int)param_1 + 0x45c);
  if ((uVar8 == 0) || (*(int *)(uVar8 + 0x34) != 0)) goto LAB_50056171;
  if (*(int *)(uVar8 + 0x30) != 0) {
    iVar7 = FUN_50050980((int)param_1);
    uVar8 = 0;
    if (iVar7 == 0) goto LAB_50056171;
  }
  pfVar1 = *(float **)(*(int *)((int)param_1 + 0x45c) + 0x40);
  if (pfVar1 != (float *)0x0) {
    local_44 = *(float *)((int)param_1 + 4);
    local_40 = *(float *)((int)param_1 + 8);
    local_3c = *(float *)((int)param_1 + 0xc);
    local_50 = *pfVar1;
    local_4c = pfVar1[1];
    local_48 = pfVar1[2];
    iVar7 = (*DAT_5015cad0)(&local_44,&local_50);
    if (((iVar7 == 0) ||
        (((*DAT_5015cac0)(&local_44,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x2010003,
                          auStack_38), fStack_34 != 1.0 &&
         (((iStack_8 == 0 || (*(char **)(iStack_8 + 0x1b4) == (char *)0x0)) ||
          (*(char **)(iStack_8 + 0x1b4) != s_player_50142e48)))))) &&
       ((iVar7 = FUN_500539e0((int)param_1), iVar7 != 0 &&
        (*(int *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x40) + 0x10) != 9)))) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x40) = 0;
    }
  }
  if (*(int *)(*(int *)((int)param_1 + 0x45c) + 0x40) == 0) {
    FUN_5005e930(&DAT_50159a60,(int)param_1);
  }
  iVar7 = *(int *)((int)param_1 + 0x45c);
  if (((*(int *)(iVar7 + 0x30) == 0) && (*(int *)(iVar7 + 0x40) != 0)) &&
     ((DAT_50159684 == 7 &&
      ((((iVar7 != 0 && (pfVar1 = *(float **)(iVar7 + 0x4c), pfVar1 != (float *)0x0)) &&
        (fVar10 = *(float *)((int)param_1 + 4) - *pfVar1,
        fVar4 = *(float *)((int)param_1 + 8) - pfVar1[1],
        fVar9 = *(float *)((int)param_1 + 0xc) - pfVar1[2],
        fVar10 = fVar10 * fVar10 + fVar4 * fVar4 + fVar9 * fVar9,
        fVar10 < 2500.0 != (fVar10 == 2500.0))) &&
       ((cVar5 = (**(code **)(*DAT_5015c4d8 + 0xf4))(pfVar1), cVar5 != '\0' &&
        (cVar5 = (**(code **)(*DAT_5015c4d8 + 0xf4))((int)param_1 + 4), cVar5 != '\0')))))))) {
    FUN_50055650((int)param_1);
    uVar8 = *(uint *)((int)param_1 + 0x45c);
    *(undefined4 *)(uVar8 + 0x5c) = 0;
    return uVar8 & 0xffffff00;
  }
  uVar8 = *(uint *)((int)param_1 + 0x45c);
  if (*(int *)(uVar8 + 0x40) == 0) goto LAB_50056171;
  if ((uVar8 != 0) && (DAT_50159684 == 4)) {
    iVar7 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x74) + 0x34c) + 0x54))(7);
    if (iVar7 == 0) {
      FUN_50051250((int)param_1);
      if (*(int *)(*(int *)((int)param_1 + 0x45c) + 0x3bc) == 1) {
        FUN_50051700((int)param_1);
      }
      else if (*(int *)(*(int *)((int)param_1 + 0x74) + 0x324) == 2) {
        FUN_500510c0((int)param_1);
      }
      else {
        FUN_50051120((int)param_1);
      }
    }
    else {
      iVar7 = FUN_500514d0((int)param_1);
      if ((iVar7 == 0) || (iVar7 = FUN_50051560((int)param_1), iVar7 == 0)) {
        if (*(int *)(*(int *)((int)param_1 + 0x74) + 0x324) == 2) {
          FUN_50051060((int)param_1);
        }
        else {
          FUN_50051190((int)param_1);
        }
      }
    }
  }
  if ((((*(int *)((int)param_1 + 0x45c) != 0) && (DAT_50159684 == 7)) &&
      ((*(int *)(*(int *)((int)param_1 + 0x45c) + 0x30) == 0 ||
       (iVar7 = FUN_50050b50((int)param_1), iVar7 != 0)))) && (DAT_50159464 != 0)) {
    *(int *)(*(int *)((int)param_1 + 0x45c) + 0x4c) = DAT_50159464;
    FUN_50061fb0(&DAT_50159a60,(int)param_1);
  }
  if ((*(int *)((int)param_1 + 0x45c) == 0) || (DAT_50159684 != 6)) goto LAB_50055ab7;
  iVar7 = *(int *)(*(int *)((int)param_1 + 0x45c) + 0x3bc);
  FUN_50051250((int)param_1);
  iVar2 = *(int *)((int)param_1 + 0x45c);
  iVar3 = *(int *)(iVar2 + 0x3bc);
  if ((iVar7 == iVar3) &&
     (((*(int *)(iVar2 + 0x4c) != 0 && (*(int *)(*(int *)(iVar2 + 0x4c) + 0x10) == 3)) &&
      (*(int **)(iVar2 + 0x3d4) != (int *)0x0)))) {
    iVar7 = *(int *)(**(int **)(iVar2 + 0x3d4) + 0x318);
    iVar2 = *(int *)(*(int *)((int)param_1 + 0x74) + 0x324);
    if (iVar3 == 1) {
      if (iVar7 == iVar2) goto LAB_50055aa0;
    }
    else if (iVar7 != iVar2) goto LAB_50055aa0;
  }
  else {
LAB_50055aa0:
    if (iVar3 == 1) {
      FUN_50051fd0(param_1,(int *)0x0);
    }
    else {
      FUN_50052050(param_1,(int *)0x0);
    }
  }
LAB_50055ab7:
  if (((*(int *)((int)param_1 + 0x45c) == 0) ||
      (*(int *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x400) + 0x210) < 3)) ||
     (iVar7 = FUN_50059510(&DAT_50159680,(int)param_1,512.0), iVar7 == 0)) {
    if (((*(int *)((int)param_1 + 0x45c) == 0) ||
        (*(int *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x400) + 0x210) < 3)) ||
       (iVar7 = FUN_50059510(&DAT_50159680,(int)param_1,1024.0), iVar7 == 0)) {
      FUN_5005e290((int)param_1);
      *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 1000) = 0;
    }
  }
  else {
    FUN_50050890((int)param_1,iVar7);
    if (*(int *)(*(int *)((int)param_1 + 0x45c) + 1000) == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 1000) = 1;
    }
  }
  FUN_50050ea0((int)param_1);
  iVar7 = *(int *)((int)param_1 + 0x45c);
  pfVar1 = *(float **)(iVar7 + 0x40);
  fVar10 = *(float *)((int)param_1 + 4) - *pfVar1;
  fVar9 = *(float *)((int)param_1 + 8) - pfVar1[1];
  fVar4 = *(float *)((int)param_1 + 0xc) - pfVar1[2];
  if (fVar9 * fVar9 + fVar4 * fVar4 + fVar10 * fVar10 <
      (float)((-(uint)(pfVar1[4] != 1.4013e-44) & 0x36b) + 0x19)) {
    if (pfVar1[4] == 2.8026e-45) {
      *(float *)(iVar7 + 0x28) = DAT_5015ccdc + 1.0;
      *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x58) = 1;
    }
    else {
      *(undefined4 *)(iVar7 + 0x58) = 0;
    }
    iVar7 = *(int *)((int)param_1 + 0x45c);
    if (*(int *)(iVar7 + 0x40) == *(int *)(iVar7 + 0x4c)) {
      *(undefined4 *)(iVar7 + 0x4c) = 0;
    }
    FUN_5005ecb0(&DAT_50159a60,(int)param_1);
    *(float *)(*(int *)((int)param_1 + 0x45c) + 0x54) = DAT_5015ccdc + 30.0;
  }
  iVar7 = *(int *)((int)param_1 + 0x45c);
  if (((DAT_5015ccdc + 29.0 <= *(float *)(iVar7 + 0x54)) ||
      (*(float *)(iVar7 + 0x54) <= DAT_5015ccdc + 10.0)) ||
     (((iVar7 = FUN_50053cf0((int)param_1), iVar7 == 0 &&
       (iVar7 = *(int *)((int)param_1 + 0x45c), *(int *)(iVar7 + 0x58) != 1)) &&
      (((*(int *)(*(int *)(iVar7 + 0x40) + 0x10) != 2 ||
        (DAT_5015ccdc + 26.0 <= *(float *)(iVar7 + 0x54))) &&
       (DAT_5015ccdc + 15.0 <= *(float *)(iVar7 + 0x54))))))) {
    if (((*(float *)(iVar7 + 0x28) < DAT_5015ccdc != (*(float *)(iVar7 + 0x28) == DAT_5015ccdc)) &&
        (*(float *)(iVar7 + 0x54) < DAT_5015ccdc + 29.0)) &&
       (DAT_5015ccdc + 10.0 < *(float *)(iVar7 + 0x54))) {
      FUN_50054070((int)param_1);
    }
  }
  else {
    *(float *)(*(int *)((int)param_1 + 0x45c) + 0x28) = DAT_5015ccdc + 1.0;
  }
  iVar7 = *(int *)((int)param_1 + 0x45c);
  if ((*(int *)(iVar7 + 0x30) == 0) && (*(float *)(iVar7 + 0x54) < DAT_5015ccdc)) {
    *(undefined4 *)(iVar7 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    lVar13 = __ftol();
    *(short *)(param_2 + 6) = (short)lVar13;
    lVar13 = __ftol();
    *(short *)(param_2 + 4) = (short)lVar13;
    *(undefined2 *)(param_2 + 8) = 0;
    return CONCAT31((int3)((ulonglong)lVar13 >> 8),1);
  }
  if (((*(undefined4 **)(iVar7 + 0x40))[4] == 4) &&
     (iVar7 = FUN_5005e1d0(*(undefined4 **)(iVar7 + 0x40)), iVar7 == 0)) {
    iVar7 = *(int *)((int)param_1 + 0x45c);
    if (*(int *)(iVar7 + 0x30) == 0) {
      pfVar1 = *(float **)(iVar7 + 0x40);
      if (iVar7 != 0) {
        local_44 = *pfVar1 - *(float *)((int)param_1 + 4);
        local_40 = pfVar1[1] - *(float *)((int)param_1 + 8);
        local_3c = pfVar1[2] - *(float *)((int)param_1 + 0xc);
        FUN_500c3570(&local_44,&local_50);
        *(float *)(*(int *)((int)param_1 + 0x74) + 0x4fc) = local_50;
        *(float *)(*(int *)((int)param_1 + 0x45c) + 0x24) = local_4c;
        FUN_500504d0(*(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x400) + 0x20c),
                     (int)param_1);
      }
    }
    else {
      FUN_50050600((int)param_1);
      uVar14 = FUN_5004fb40((int)param_1,*(int *)(*(int *)((int)param_1 + 0x45c) + 0x30));
      if ((int)uVar14 == 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x74) + 0x48c) = 0;
        *(undefined4 *)(*(int *)((int)param_1 + 0x74) + 0x490) = 0;
      }
      else {
        FUN_500501d0((int)param_1);
      }
    }
    uVar8 = DAT_5015c96c;
    iVar7 = 1;
    fVar10 = (float)(DAT_5015cca0 + 0x464);
    fVar9 = fVar10;
    if (0 < DAT_5015d8c8) {
      do {
        if ((((fVar9 != param_1) && (*(int *)((int)fVar9 + 0x45c) != 0)) &&
            (fVar10 = *(float *)(*(int *)((int)fVar9 + 0x45c) + 0x40), fVar10 != 0.0)) &&
           (fVar10 == *(float *)(*(int *)((int)param_1 + 0x45c) + 0x40))) {
          iVar7 = *(int *)((int)param_1 + 0x45c);
          if (iVar7 != 0) {
            pfVar1 = *(float **)(iVar7 + 0x40);
            fVar10 = 0.0;
            if (pfVar1 != (float *)0x0) {
              fVar10 = *pfVar1 - *(float *)((int)param_1 + 4);
              fVar9 = pfVar1[1] - *(float *)((int)param_1 + 8);
              fVar9 = fVar10 * fVar10 +
                      fVar9 * fVar9 + (pfVar1[2] - pfVar1[2]) * (pfVar1[2] - pfVar1[2]);
              fVar10 = (float)CONCAT22((short)((uint)pfVar1 >> 0x10),
                                       (ushort)(fVar9 < 65536.0) << 8 | (ushort)NAN(fVar9) << 10 |
                                       (ushort)(fVar9 == 65536.0) << 0xe);
              if (fVar9 < 65536.0) goto LAB_50055f2d;
            }
          }
          break;
        }
        iVar7 = iVar7 + 1;
        fVar10 = (float)((int)fVar9 + 0x464);
        fVar9 = fVar10;
      } while (iVar7 <= DAT_5015d8c8);
    }
    iVar7 = *(int *)((int)param_1 + 0x45c);
    if (iVar7 != 0) {
      pfVar1 = *(float **)(iVar7 + 0x40);
      fVar10 = 0.0;
      if (pfVar1 != (float *)0x0) {
        fVar10 = *pfVar1 - *(float *)((int)param_1 + 4);
        fVar9 = pfVar1[1] - *(float *)((int)param_1 + 8);
        fVar9 = fVar10 * fVar10 + fVar9 * fVar9 + (pfVar1[2] - pfVar1[2]) * (pfVar1[2] - pfVar1[2]);
        fVar10 = (float)CONCAT22((short)((uint)pfVar1 >> 0x10),
                                 (ushort)(fVar9 < 16384.0) << 8 | (ushort)NAN(fVar9) << 10 |
                                 (ushort)(fVar9 == 16384.0) << 0xe);
        if (fVar9 < 16384.0) {
LAB_50055f2d:
          *(float *)(iVar7 + 0x5c) = -*(float *)(DAT_5015c96c + 0x18);
          *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x60) = 0;
          return uVar8 & 0xffffff00;
        }
      }
    }
    *(undefined4 *)(iVar7 + 0x5c) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x60) = 0;
    return (uint)fVar10 & 0xffffff00;
  }
  iVar7 = *(int *)((int)param_1 + 0x45c);
  if (*(int *)(iVar7 + 0x30) == 0) {
    pfVar1 = *(float **)(iVar7 + 0x40);
    if (iVar7 != 0) {
      local_44 = *pfVar1 - *(float *)((int)param_1 + 4);
      local_40 = pfVar1[1] - *(float *)((int)param_1 + 8);
      local_3c = pfVar1[2] - *(float *)((int)param_1 + 0xc);
      FUN_500c3570(&local_44,&local_50);
      *(float *)(*(int *)((int)param_1 + 0x74) + 0x4fc) = local_50;
      *(float *)(*(int *)((int)param_1 + 0x45c) + 0x24) = local_4c;
      FUN_500504d0(*(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x400) + 0x20c),
                   (int)param_1);
    }
    uVar8 = FUN_500525e0((int)param_1,*(float **)(*(int *)((int)param_1 + 0x45c) + 0x40));
    if (*(int *)(*(int *)((int)param_1 + 0x45c) + 0x3f0) != 0) {
      bVar6 = FUN_50054860((int)param_1);
      uVar8 = 0;
      if (CONCAT31(extraout_var,bVar6) != 0) {
        *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x3f0) = 0;
        uVar8 = *(uint *)((int)param_1 + 0x45c);
        *(float *)(uVar8 + 0x3f8) = DAT_5015ccdc + 2.0;
        return uVar8 & 0xffffff00;
      }
    }
  }
  else {
    FUN_50050600((int)param_1);
    FUN_500524f0((int)param_1,*(float **)(*(int *)((int)param_1 + 0x45c) + 0x40));
    uVar14 = FUN_5004fb40((int)param_1,*(int *)(*(int *)((int)param_1 + 0x45c) + 0x30));
    if ((int)uVar14 == 0) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x74) + 0x48c) = 0;
      iVar7 = *(int *)((int)param_1 + 0x74);
      *(undefined4 *)(iVar7 + 0x490) = 0;
    }
    else {
      uVar14 = FUN_500501d0((int)param_1);
      iVar7 = (int)uVar14;
    }
    fVar10 = *(float *)(*(int *)((int)param_1 + 0x45c) + 0x88);
    uVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),
                     (ushort)(fVar10 < DAT_5015ccdc) << 8 |
                     (ushort)(NAN(fVar10) || NAN(DAT_5015ccdc)) << 10 |
                     (ushort)(fVar10 == DAT_5015ccdc) << 0xe);
    if (fVar10 < DAT_5015ccdc) {
      iVar7 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x74) + 0x34c) + 0x54))(6);
      if (iVar7 == 0) {
        iVar7 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x74) + 0x34c) + 0x54))(1);
        uVar8 = 0;
        if (iVar7 == 0) goto LAB_50056171;
      }
      if ((*(int *)(*(int *)((int)param_1 + 0x45c) + 0x8c) != 0) ||
         (fVar12 = (float10)(*DAT_5015cb20)(0,0x41200000), fVar12 < (float10)5.0)) {
        iVar7 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x74) + 0x34c) + 0x54))(6);
        if (iVar7 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = 6;
        }
        uVar8 = FUN_50054790((int)param_1,iVar7);
        uVar11 = uVar8;
        if (uVar8 == 4) {
          *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x8c) = 1;
          return 0;
        }
      }
      else {
        uVar8 = (*DAT_5015cb20)(0x41700000,0x41f00000);
        *(float *)(*(int *)((int)param_1 + 0x45c) + 0x88) =
             (float)(extraout_ST0 + (float10)DAT_5015ccdc);
        uVar11 = 0;
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x8c) = 0;
      if (uVar11 == 1) {
        fVar12 = (float10)(*DAT_5015cb20)(0x41700000,0x41f00000);
        uVar8 = *(uint *)((int)param_1 + 0x45c);
        *(float *)(uVar8 + 0x88) = (float)(fVar12 + (float10)DAT_5015ccdc);
      }
    }
  }
LAB_50056171:
  return uVar8 & 0xffffff00;
}

