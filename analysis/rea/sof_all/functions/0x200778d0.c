// rea decompile_all
// name: FUN_200778d0
// address: 0x200778d0
// body: available
// range: 0x200778d0-0x200786a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200778d0(float *param_1,uint param_2,float param_3,float param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float *in_ECX;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float local_24;
  float local_20 [2];
  float local_18 [6];
  
  piVar4 = (int *)FUN_2008bce0();
  param_4._0_1_ = *(undefined1 *)((int)in_ECX + 0x92);
  FUN_200bdca0(&param_4,1);
  if (in_ECX[0x25] == *(float *)(param_2 + 0x94)) {
    param_4 = (float)((uint)param_4._1_3_ << 8);
    FUN_200bdca0(&param_4,1);
  }
  else {
    param_4 = (float)CONCAT31(param_4._1_3_,1);
    FUN_200bdca0(&param_4,1);
    FUN_20087570(in_ECX + 0x25,4);
  }
  param_4._0_1_ = *(undefined1 *)(in_ECX + 0x29);
  FUN_200bdca0(&param_4,1);
  param_4._0_1_ = *(undefined1 *)((int)in_ECX + 0xa5);
  FUN_200bdca0(&param_4,1);
  iVar8 = piVar4[1];
  if (iVar8 != 0) {
    if (*(short *)(in_ECX + 0x24) == *(short *)(param_2 + 0x90)) {
      param_4._0_1_ = 0;
      FUN_200bdca0(&param_4,1);
    }
    else {
      param_4._0_1_ = 1;
      FUN_200bdca0(&param_4,1);
      FUN_20087570(in_ECX + 0x24,iVar8);
    }
  }
  iVar8 = *piVar4;
  if (iVar8 != 0) {
    if (*(short *)((int)in_ECX + 0xaa) == *(short *)(param_2 + 0xaa)) {
      param_4._0_1_ = 0;
      FUN_200bdca0(&param_4,1);
    }
    else {
      param_4._0_1_ = 1;
      FUN_200bdca0(&param_4,1);
      FUN_20087570((short *)((int)in_ECX + 0xaa),iVar8);
    }
  }
  uVar9 = param_2;
  if (in_ECX[0x2b] == *(float *)(param_2 + 0xac)) {
    param_4 = (float)((uint)param_4._1_3_ << 8);
    FUN_200bdca0(&param_4,1);
  }
  else {
    param_4 = (float)CONCAT31(param_4._1_3_,1);
    FUN_200bdca0(&param_4,1);
    FUN_20087570(in_ECX + 0x2b,2);
  }
  if ((in_ECX[0x26] == *(float *)(uVar9 + 0x98)) && (in_ECX[0x27] == *(float *)(uVar9 + 0x9c))) {
    param_4._0_1_ = 0;
    uVar10 = CONCAT44(1,&param_4);
  }
  else {
    param_4._0_1_ = 1;
    FUN_200bdca0(&param_4,1);
    fVar5 = (float)__ftol();
    if (fVar5 == 0.0) {
      param_4._0_1_ = 0;
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4._0_1_ = 1;
      FUN_200bdca0(&param_4,1);
      param_3 = fVar5;
      if ((int)fVar5 < 0) {
        param_4._0_1_ = 1;
        FUN_200bdca0(&param_4,1);
        param_3 = (float)-(int)param_3;
      }
      else {
        param_4._0_1_ = 0;
        FUN_200bdca0(&param_4,1);
      }
      param_1 = (float *)0x0;
      iVar8 = 0x100;
      do {
        if ((int)param_3 < iVar8) break;
        iVar8 = iVar8 << 8;
        param_1 = (float *)((int)param_1 + 1);
      } while (iVar8 != 0);
      FUN_200bdca0(&param_1,2);
      uVar10 = CONCAT44((int)param_1 * 8 + 8,&param_3);
    }
    FUN_200bdca0(uVar10);
    fVar5 = (float)__ftol();
    if (fVar5 == 0.0) {
      param_4._0_1_ = 0;
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4._0_1_ = 1;
      FUN_200bdca0(&param_4,1);
      param_3 = fVar5;
      if ((int)fVar5 < 0) {
        param_4._0_1_ = 1;
        FUN_200bdca0(&param_4,1);
        param_3 = (float)-(int)param_3;
      }
      else {
        param_4._0_1_ = 0;
        FUN_200bdca0(&param_4,1);
      }
      param_1 = (float *)0x0;
      iVar8 = 0x100;
      do {
        if ((int)param_3 < iVar8) break;
        iVar8 = iVar8 << 8;
        param_1 = (float *)((int)param_1 + 1);
      } while (iVar8 != 0);
      FUN_200bdca0(&param_1,2);
      uVar10 = CONCAT44((int)param_1 * 8 + 8,&param_3);
    }
  }
  FUN_200bdca0(uVar10);
  if (*(char *)(in_ECX + 0x29) != '\0') {
    if (in_ECX[0x28] == *(float *)(uVar9 + 0xa0)) {
      param_4._0_1_ = 0;
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4._0_1_ = 1;
      FUN_200bdca0(&param_4,1);
      if (*(float *)(uVar9 + 0xa0) <= 1e+10) {
        param_4._0_1_ = 0;
        FUN_200bdca0(&param_4,1);
        uVar10 = CONCAT44(0x20,in_ECX + 0x28);
      }
      else {
        param_4._0_1_ = 1;
        uVar10 = CONCAT44(1,&param_4);
      }
    }
    FUN_200bdca0(uVar10);
  }
  if ((((*(char *)((int)in_ECX + 0xa6) == *(char *)(uVar9 + 0xa6)) &&
       (*(char *)((int)in_ECX + 0xa7) == *(char *)(uVar9 + 0xa7))) &&
      (*(char *)(in_ECX + 0x2a) == *(char *)(uVar9 + 0xa8))) &&
     (*(char *)((int)in_ECX + 0xa9) == *(char *)(uVar9 + 0xa9))) {
    param_4 = (float)((uint)param_4._1_3_ << 8);
    uVar10 = CONCAT44(1,&param_4);
  }
  else {
    param_4._0_1_ = 1;
    FUN_200bdca0(&param_4,1);
    if (*(char *)((int)in_ECX + 0xa6) == *(char *)(uVar9 + 0xa6)) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(8,(char *)((int)in_ECX + 0xa6));
    }
    FUN_200bdca0(uVar10);
    if (*(char *)((int)in_ECX + 0xa7) == *(char *)(uVar9 + 0xa7)) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(8,(int)in_ECX + 0xa7);
    }
    FUN_200bdca0(uVar10);
    if (*(char *)(in_ECX + 0x2a) == *(char *)(uVar9 + 0xa8)) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(8,in_ECX + 0x2a);
    }
    FUN_200bdca0(uVar10);
    if (*(char *)((int)in_ECX + 0xa9) == *(char *)(uVar9 + 0xa9)) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(8,(int)in_ECX + 0xa9);
    }
  }
  FUN_200bdca0(uVar10);
  cVar2 = FUN_200a10a0();
  if (cVar2 == '\0') {
    param_4._0_1_ = 1;
    FUN_200bdca0(&param_4,1);
    uVar10 = CONCAT44(&local_24,in_ECX);
    FUN_20090020();
    FUN_20090020(uVar9,local_20,uVar10);
    if (local_24 == local_20[0]) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(0x20,&local_24);
    }
    FUN_200bdca0(uVar10);
    local_18[2] = in_ECX[2];
    local_18[1] = in_ECX[1];
    local_18[0] = *in_ECX;
    param_1 = (float *)SQRT(local_18[0] * local_18[0] +
                            local_18[1] * local_18[1] + local_18[2] * local_18[2]);
    if ((1.01 <= (float)param_1) || ((float)param_1 <= 0.99)) {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      uVar10 = CONCAT44(0x20,&param_1);
    }
    else {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      uVar10 = CONCAT44(1,&param_4);
    }
    FUN_200bdca0(uVar10);
    local_18[0] = in_ECX[0xc];
    local_18[3] = *(float *)(uVar9 + 0x30);
    local_18[2] = in_ECX[0xe];
    local_18[1] = in_ECX[0xd];
    local_18[5] = *(float *)(uVar9 + 0x38);
    local_18[4] = *(float *)(uVar9 + 0x34);
    if (((local_18[0] == local_18[3]) && (local_18[1] == local_18[4])) &&
       (local_18[2] == local_18[5])) {
      param_4 = (float)((uint)param_4._1_3_ << 8);
      FUN_200bdca0(&param_4,1);
    }
    else {
      param_4 = (float)CONCAT31(param_4._1_3_,1);
      FUN_200bdca0(&param_4,1);
      iVar8 = 0;
      do {
        pfVar6 = (float *)((int)local_18 + iVar8);
        if (*(float *)((int)local_18 + iVar8) == *(float *)((int)local_18 + iVar8 + 0xc)) {
          param_4 = (float)((uint)param_4._1_3_ << 8);
          uVar10 = CONCAT44(1,&param_4);
        }
        else {
          param_4._0_1_ = 1;
          FUN_200bdca0(&param_4,1);
          if ((*pfVar6 < -64.0) || (64.0 < *pfVar6)) {
            param_4 = (float)((uint)param_4._1_3_ << 8);
            FUN_200bdca0(&param_4,1);
            uVar10 = CONCAT44(0x20,pfVar6);
          }
          else {
            param_4 = (float)CONCAT31(param_4._1_3_,1);
            FUN_200bdca0(&param_4,1);
            FUN_200fc6f3((double)((*pfVar6 + 64.0) * 16.0));
            param_3 = (float)__ftol();
            if ((int)param_3 < 0) {
              param_3 = 0.0;
              uVar10 = CONCAT44(0xb,&param_3);
            }
            else {
              if (0x7ff < (int)param_3) {
                param_3 = 2.86846e-42;
              }
              uVar10 = CONCAT44(0xb,&param_3);
            }
          }
        }
        FUN_200bdca0(uVar10);
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0xc);
    }
  }
  else {
    param_4 = (float)((uint)param_4._1_3_ << 8);
    FUN_200bdca0(&param_4,1);
  }
  cVar2 = FUN_200877c0();
  if (cVar2 == '\0') {
    param_4 = (float)CONCAT31(param_4._1_3_,1);
    FUN_200bdca0(&param_4,1);
    uVar9 = 0;
    do {
      fVar5 = in_ECX[0x2d];
      if ((fVar5 == 0.0) || ((uint)((int)in_ECX[0x2e] - (int)fVar5) <= uVar9)) goto LAB_200780ab;
      param_1 = (float *)0x0;
      uVar7 = uVar9;
      do {
        if (((fVar5 == 0.0) || ((uint)((int)in_ECX[0x2e] - (int)fVar5) <= uVar7)) ||
           ((*(byte *)((int)in_ECX[0x2d] + uVar9) ^ *(byte *)(uVar9 + *(int *)(param_2 + 0xb4))) !=
            (*(byte *)((int)in_ECX[0x2d] + uVar7) ^ *(byte *)(uVar7 + *(int *)(param_2 + 0xb4)))))
        break;
        uVar7 = uVar7 + 1;
        param_1 = (float *)((int)param_1 + 1);
      } while ((int)param_1 < 0x25);
      param_1 = (float *)((int)param_1 + -6);
      param_4._1_3_ = (uint3)((uint)fVar5 >> 8);
      if ((int)param_1 < 0) {
        param_4 = (float)((uint)param_4._1_3_ << 8);
        FUN_200bdca0(&param_4,1);
        param_1 = (float *)0x0;
        do {
          fVar5 = in_ECX[0x2d];
          if ((fVar5 == 0.0) || ((uint)((int)in_ECX[0x2e] - (int)fVar5) <= uVar9)) break;
          param_4 = (float)CONCAT31(param_4._1_3_,
                                    *(byte *)(*(int *)(param_2 + 0xb4) + uVar9) ^
                                    *(byte *)((int)fVar5 + uVar9));
          FUN_200bdca0(&param_4,1);
          uVar9 = uVar9 + 1;
          param_1 = (float *)((int)param_1 + 1);
        } while ((int)param_1 < 4);
      }
      else {
        param_4._0_1_ = 1;
        FUN_200bdca0(&param_4,1);
        param_4 = (float)CONCAT31(param_4._1_3_,
                                  *(byte *)(*(int *)(param_2 + 0xb4) + uVar9) ^
                                  *(byte *)((int)in_ECX[0x2d] + uVar9));
        FUN_200bdca0(&param_4,1);
        FUN_200bdca0(&param_1,5);
        uVar9 = uVar9 + 6 + (int)param_1;
      }
    } while( true );
  }
  param_4 = (float)((uint)param_4._1_3_ << 8);
  FUN_200bdca0(&param_4,1);
LAB_200780ab:
  if (in_ECX[0x39] == *(float *)(param_2 + 0xe4)) {
    FUN_20083550();
    fVar5 = in_ECX[0x36];
    FUN_20083550();
    pfVar6 = (float *)FUN_20087880(local_20,param_1,fVar5,param_4);
    if (*pfVar6 != fVar5) goto LAB_20078109;
  }
  else {
LAB_20078109:
    param_4 = (float)CONCAT31(param_4._1_3_,1);
    FUN_200bdca0(&param_4,1);
    param_1 = *(float **)in_ECX[0x36];
    if (param_1 != (float *)in_ECX[0x36]) {
      do {
        fVar5 = *(float *)(param_2 + 0xd8);
        FUN_20083330(local_20,param_1 + 3);
        if (local_20[0] == fVar5) {
          pfVar6 = param_1 + 3;
          if (*(short *)(param_1 + 3) == 0) {
            param_4 = (float)((uint)param_4._1_3_ << 8);
            uVar10 = CONCAT44(1,&param_4);
          }
          else {
            param_4 = (float)CONCAT31(param_4._1_3_,1);
            FUN_200bdca0(&param_4,1);
            param_3 = 0.0;
            sVar3 = 0x10;
            do {
              if (*(short *)pfVar6 < sVar3) break;
              sVar3 = sVar3 << 4;
              param_3 = (float)((int)param_3 + 1);
            } while (sVar3 != 0);
            FUN_200bdca0(&param_3,2);
            uVar10 = CONCAT44((int)param_3 * 4 + 4,pfVar6);
          }
          FUN_200bdca0(uVar10);
          if (piVar4[1] != 0) {
            FUN_200bdca0((int)param_1 + 0xe,piVar4[1]);
          }
        }
        FUN_200850b0();
      } while (param_1 != (float *)in_ECX[0x36]);
    }
    param_3 = 0.0;
    param_4 = (float)((uint)param_4 & 0xffffff00);
    FUN_200bdca0(&param_4,1);
    param_1 = (float *)**(int **)(param_2 + 0xd8);
    if (param_1 != (float *)*(int **)(param_2 + 0xd8)) {
      do {
        fVar5 = in_ECX[0x36];
        FUN_20083330(local_20,(int)param_1 + 0xc);
        if (local_20[0] == fVar5) {
          psVar1 = (short *)((int)param_1 + 0xc);
          if (*(short *)((int)param_1 + 0xc) == 0) {
            param_4 = (float)((uint)param_4._1_3_ << 8);
            uVar10 = CONCAT44(1,&param_4);
          }
          else {
            param_4 = (float)CONCAT31(param_4._1_3_,1);
            FUN_200bdca0(&param_4,1);
            param_3 = 0.0;
            sVar3 = 0x10;
            do {
              if (*psVar1 < sVar3) break;
              sVar3 = sVar3 << 4;
              param_3 = (float)((int)param_3 + 1);
            } while (sVar3 != 0);
            FUN_200bdca0(&param_3,2);
            uVar10 = CONCAT44((int)param_3 * 4 + 4,psVar1);
          }
          FUN_200bdca0(uVar10);
          if (piVar4[1] != 0) {
            FUN_200bdca0((int)param_1 + 0xe,piVar4[1]);
          }
        }
        FUN_200850b0();
      } while (param_1 != (float *)*(float *)(param_2 + 0xd8));
    }
    param_3 = 0.0;
  }
  param_4 = (float)((uint)param_4 & 0xffffff00);
  FUN_200bdca0(&param_4,1);
  if (in_ECX[0x34] == *(float *)(param_2 + 0xd0)) {
    FUN_20083550();
    fVar5 = in_ECX[0x31];
    FUN_20083550();
    pfVar6 = (float *)FUN_20087940(local_20,param_1,fVar5,param_4);
    if (*pfVar6 == fVar5) goto LAB_2007868f;
  }
  param_4 = (float)CONCAT31(param_4._1_3_,1);
  FUN_200bdca0(&param_4,1);
  param_1 = *(float **)in_ECX[0x31];
  if (param_1 != (float *)in_ECX[0x31]) {
    do {
      FUN_20082f90(&param_3,param_1 + 3);
      if ((param_3 == *(float *)(param_2 + 0xc4)) ||
         (*(short *)(param_1 + 6) != *(short *)((int)param_3 + 0x18))) {
        param_4 = (float)CONCAT31(param_4._1_3_,1);
        FUN_200bdca0(&param_4,1);
        if (piVar4[2] != 0) {
          FUN_200bdca0(param_1 + 3,piVar4[2]);
        }
        if (piVar4[1] != 0) {
          FUN_200bdca0(param_1 + 4,piVar4[1]);
        }
        if (piVar4[3] != 0) {
          FUN_200bdca0(param_1 + 6,piVar4[3]);
        }
      }
      FUN_20027950();
    } while (param_1 != (float *)in_ECX[0x31]);
  }
  param_4 = (float)((uint)param_4 & 0xffffff00);
  FUN_200bdca0(&param_4,1);
  param_1 = (float *)**(int **)(param_2 + 0xc4);
  if (param_1 != (float *)*(int **)(param_2 + 0xc4)) {
    do {
      iVar8 = (int)param_1 + 0xc;
      param_4 = (float)FUN_20086e00();
      if ((param_4 == in_ECX[0x31]) ||
         (cVar2 = FUN_20087590(iVar8,(int)param_4 + 0xc), cVar2 != '\0')) {
        pfVar6 = &param_3;
        param_3 = in_ECX[0x31];
      }
      else {
        pfVar6 = &param_4;
      }
      if (*pfVar6 == in_ECX[0x31]) {
        param_4 = (float)CONCAT31(param_4._1_3_,1);
        FUN_200bdca0(&param_4,1);
        if (piVar4[2] != 0) {
          FUN_200bdca0((int)param_1 + 0xc,piVar4[2]);
        }
        if (piVar4[1] != 0) {
          FUN_200bdca0((int)param_1 + 0x10,piVar4[1]);
        }
      }
      FUN_20027950();
    } while (param_1 != (float *)*(float *)(param_2 + 0xc4));
  }
LAB_2007868f:
  param_2 = param_2 & 0xffffff00;
  FUN_200bdca0(CONCAT44(1,&param_2));
  return;
}

