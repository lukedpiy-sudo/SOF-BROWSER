// rea decompile_all
// name: FUN_20063e60
// address: 0x20063e60
// body: available
// range: 0x20063e60-0x200645bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20063e60(float *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  int *piVar10;
  float local_41c;
  int aiStack_400 [128];
  undefined4 local_200 [128];
  
  if ((param_1 != *(float **)(DAT_20396dd8 + 0x60)) && (param_1[0x1e] != 0.0)) {
    param_1[0x53] = param_1[0x4a] - param_1[0x47];
    param_1[0x54] = param_1[0x4b] - param_1[0x48];
    param_1[0x55] = param_1[0x4c] - param_1[0x49];
    fVar8 = param_1[0x56];
    if ((fVar8 == 2.8026e-45) && (((uint)param_1[0x46] & 2) == 0)) {
      uVar1 = __ftol();
      if ((int)uVar1 < 1) {
        uVar1 = 1;
      }
      else if (0xff < (int)uVar1) {
        uVar1 = 0xff;
      }
      uVar2 = __ftol();
      if ((int)uVar2 < 1) {
        uVar2 = 1;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
      uVar3 = __ftol();
      if ((int)uVar3 < 1) {
        uVar3 = 1;
      }
      else if (0xff < (int)uVar3) {
        uVar3 = 0xff;
      }
      iVar4 = __ftol();
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      param_1[0xe] = (float)(((iVar4 << 8 | uVar3) << 8 | uVar2) << 8 | uVar1);
    }
    else if ((fVar8 == 4.2039e-45) || (fVar8 == 5.60519e-45)) {
      param_1[0xe] = 4.34403e-44;
    }
    else {
      param_1[0xe] = 0.0;
    }
    if (((param_1[0x56] == 4.2039e-45) || (param_1[0x56] == 5.60519e-45)) &&
       ((param_1[4] != 0.0 || ((param_1[5] != 0.0 || (param_1[6] != 0.0)))))) {
      if (((uint)param_1[0x46] & 0x38) == 0) {
        fVar8 = 0.0;
        pfVar9 = param_1 + 0x4a;
        iVar4 = 3;
        do {
          if (fVar8 < ABS(pfVar9[-3])) {
            fVar8 = ABS(pfVar9[-3]);
          }
          if (fVar8 < ABS(*pfVar9)) {
            fVar8 = ABS(*pfVar9);
          }
          pfVar9 = pfVar9 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = 3;
        pfVar9 = param_1;
        do {
          pfVar5 = pfVar9 + 1;
          iVar4 = iVar4 + -1;
          pfVar9[0x4d] = *pfVar5 - fVar8 * 1.75;
          pfVar9[0x50] = fVar8 * 1.75 + *pfVar5;
          pfVar9 = pfVar5;
        } while (iVar4 != 0);
      }
      else {
        FUN_20063c50();
      }
    }
    else {
      param_1[0x4d] = param_1[1] + param_1[0x47];
      param_1[0x4e] = param_1[2] + param_1[0x48];
      param_1[0x4f] = param_1[3] + param_1[0x49];
      param_1[0x50] = param_1[1] + param_1[0x4a];
      param_1[0x51] = param_1[2] + param_1[0x4b];
      param_1[0x52] = param_1[3] + param_1[0x4c];
    }
    if ((((((param_1 == *(float **)(DAT_20396dd8 + 0x60)) || (param_1[0x1e] == 0.0)) ||
          (param_1[0x20] == 0.0)) || ((DAT_203a1f20 == 1 || (param_1[1] != param_1[0x60])))) ||
        (((param_1[2] != param_1[0x61] ||
          ((param_1[3] != param_1[0x62] || (param_1[0x4d] != param_1[0x5a])))) ||
         (param_1[0x4e] != param_1[0x5b])))) ||
       (((((param_1[0x4f] != param_1[0x5c] || (param_1[0x50] != param_1[0x5d])) ||
          (param_1[0x51] != param_1[0x5e])) ||
         ((param_1[0x52] != param_1[0x5f] || (param_1[4] != param_1[100])))) ||
        ((param_1[5] != param_1[0x65] ||
         ((param_1[6] != param_1[0x66] || (param_1[0x56] != param_1[99])))))))) {
      pfVar9 = param_1 + 0x20;
      iVar4 = 0;
      if (param_1[0x20] != 0.0) {
        *(float *)param_1[0x21] = *pfVar9;
        *(float *)((int)*pfVar9 + 4) = param_1[0x21];
        param_1[0x21] = 0.0;
        *pfVar9 = 0.0;
      }
      param_1[0x60] = param_1[1];
      param_1[0x61] = param_1[2];
      param_1[0x62] = param_1[3];
      param_1[0x5a] = param_1[0x4d];
      param_1[0x5b] = param_1[0x4e];
      param_1[0x5c] = param_1[0x4f];
      param_1[0x5d] = param_1[0x50];
      param_1[0x5e] = param_1[0x51];
      param_1[0x5f] = param_1[0x52];
      param_1[100] = param_1[4];
      param_1[0x65] = param_1[5];
      param_1[0x66] = param_1[6];
      param_1[99] = param_1[0x56];
      param_1[0x4d] = param_1[0x4d] - 1.0;
      param_1[0x22] = 0.0;
      param_1[0x44] = 0.0;
      param_1[0x45] = 0.0;
      param_1[0x4e] = param_1[0x4e] - 1.0;
      param_1[0x4f] = param_1[0x4f] - 1.0;
      param_1[0x50] = param_1[0x50] + 1.0;
      param_1[0x51] = param_1[0x51] + 1.0;
      param_1[0x52] = param_1[0x52] + 1.0;
      iVar6 = FUN_2001aae0();
      if (0 < iVar6) {
        do {
          iVar7 = FUN_2001a5c0();
          aiStack_400[iVar4] = iVar7;
          fVar8 = (float)FUN_2001a600(local_200[iVar4]);
          if (fVar8 != 0.0) {
            if ((param_1[0x44] == 0.0) || (param_1[0x44] == fVar8)) {
              param_1[0x44] = fVar8;
            }
            else {
              if (((param_1[0x45] != 0.0) && (param_1[0x45] != fVar8)) && (DAT_203a1f20 == 1)) {
                Com_DPrintf(s_Object_touching_3_areas_at__f__f_2013a808,(double)param_1[0x4d],
                            (double)param_1[0x4e],(double)param_1[0x4f]);
              }
              param_1[0x45] = fVar8;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar6);
      }
      if (iVar6 < 0x80) {
        iVar4 = 0;
        param_1[0x22] = 0.0;
        if (0 < iVar6) {
          do {
            if (aiStack_400[iVar4] != -1) {
              iVar7 = 0;
              if (0 < iVar4) {
                do {
                  if (aiStack_400[iVar7] == aiStack_400[iVar4]) break;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar4);
              }
              if (iVar7 == iVar4) {
                if (param_1[0x22] == 8.96831e-44) {
                  param_1[0x43] = local_41c;
                  goto LAB_20064503;
                }
                *(short *)((int)param_1 + (int)param_1[0x22] * 2 + 0x8c) = (short)aiStack_400[iVar4]
                ;
                param_1[0x22] = (float)((int)param_1[0x22] + 1);
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar6);
        }
      }
      else {
        param_1[0x43] = local_41c;
LAB_20064503:
        param_1[0x22] = -NAN;
      }
      fVar8 = param_1[0x1f];
      param_1[0x1f] = (float)((int)fVar8 + 1);
      if ((param_1[0x56] != 0.0) || (*(char *)(param_1 + 0x46) < '\0')) {
        piVar10 = &DAT_20402ce0;
        while( true ) {
          if (piVar10 == (int *)0x0) {
            param_1[0x1f] = fVar8;
            return;
          }
          iVar4 = *piVar10;
          if (iVar4 == -1) break;
          if (param_1[iVar4 + 0x4d] <= (float)piVar10[1]) {
            if ((float)piVar10[1] <= param_1[iVar4 + 0x50]) break;
            piVar10 = (int *)piVar10[3];
          }
          else {
            piVar10 = (int *)piVar10[2];
          }
        }
        if (param_1[0x56] == 1.4013e-45) {
          param_1[0x21] = (float)(piVar10 + 4);
          fVar8 = (float)piVar10[4];
          *pfVar9 = fVar8;
          *(float **)((int)fVar8 + 4) = pfVar9;
          *(float **)param_1[0x21] = pfVar9;
          return;
        }
        param_1[0x21] = (float)(piVar10 + 6);
        fVar8 = (float)piVar10[6];
        *pfVar9 = fVar8;
        *(float **)((int)fVar8 + 4) = pfVar9;
        *(float **)param_1[0x21] = pfVar9;
      }
    }
  }
  return;
}

