// rea decompile_all
// name: FUN_2001b1f0
// address: 0x2001b1f0
// body: available
// range: 0x2001b1f0-0x2001b506 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2001b1f0(int param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float local_c [3];
  
  pfVar6 = param_5;
  pfVar5 = param_4;
  if (DAT_20244c7c < param_2 != (DAT_20244c7c == param_2)) {
    return;
  }
  if (param_1 < 0) {
    FUN_2001b130(-1 - param_1);
    return;
  }
  iVar1 = DAT_20246d64 + param_1 * 0x3c;
  pfVar7 = *(float **)(iVar1 + 0x24);
  if (*(byte *)(pfVar7 + 4) < 3) {
    uVar8 = (uint)*(byte *)(pfVar7 + 4);
    fVar3 = param_4[uVar8] - pfVar7[3];
    param_4 = (float *)(param_5[uVar8] - pfVar7[3]);
    fVar2 = *(float *)(&DAT_20248d74 + uVar8 * 4);
  }
  else {
    fVar3 = (*pfVar7 * *param_4 + param_4[2] * pfVar7[2] + param_4[1] * pfVar7[1]) - pfVar7[3];
    param_4 = (float *)((*pfVar7 * *param_5 + param_5[2] * pfVar7[2] + param_5[1] * pfVar7[1]) -
                       pfVar7[3]);
    if (DAT_20248e08 == 0) {
      fVar2 = ABS(_DAT_20248d7c * pfVar7[2]) +
              ABS(_DAT_20248d78 * pfVar7[1]) + ABS(_DAT_20248d74 * *pfVar7);
    }
    else {
      fVar2 = 0.0;
    }
  }
  if ((fVar2 <= fVar3) && (fVar2 <= (float)param_4)) {
    FUN_2001b1f0(*(undefined4 *)(iVar1 + 0x30),param_2,param_3,pfVar5,param_5);
    return;
  }
  if ((fVar3 < -fVar2) && ((float)param_4 < -fVar2)) {
    FUN_2001b1f0(*(undefined4 *)(iVar1 + 0x34),param_2,param_3,pfVar5,param_5);
    return;
  }
  if ((float)param_4 <= fVar3) {
    param_5 = (float *)0x0;
    if ((float)param_4 < fVar3) {
      fVar4 = 1.0 / (fVar3 - (float)param_4);
      param_4 = (float *)(fVar4 * ((fVar3 - fVar2) - 0.03125));
      fVar4 = (fVar2 + fVar3 + 0.03125) * fVar4;
      goto LAB_2001b398;
    }
    param_4 = (float *)0x0;
  }
  else {
    param_5 = (float *)0x1;
    fVar4 = 1.0 / (fVar3 - (float)param_4);
    param_4 = (float *)(fVar4 * (fVar2 + fVar3 + 0.03125));
    fVar4 = ((fVar3 - fVar2) + 0.03125) * fVar4;
LAB_2001b398:
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
      goto LAB_2001b411;
    }
    if (fVar4 <= 1.0) goto LAB_2001b411;
  }
  fVar4 = 1.0;
LAB_2001b411:
  iVar10 = (int)pfVar6 - (int)pfVar5;
  iVar9 = 3;
  pfVar7 = pfVar5;
  do {
    iVar9 = iVar9 + -1;
    *(float *)(&stack0xfffffff0 + -(int)pfVar5 + (int)(pfVar7 + 1)) =
         (*(float *)(iVar10 + (int)pfVar7) - *pfVar7) * fVar4 + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar9 != 0);
  FUN_2001b1f0(*(undefined4 *)(iVar1 + 0x30 + (int)param_5 * 4),param_2,
               (param_3 - param_2) * fVar4 + param_2,pfVar5,local_c);
  if (0.0 <= (float)param_4) {
    if (1.0 < (float)param_4) {
      param_4 = (float *)0x3f800000;
    }
  }
  else {
    param_4 = (float *)0x0;
  }
  iVar9 = 3;
  pfVar7 = pfVar5;
  do {
    iVar9 = iVar9 + -1;
    *(float *)((int)pfVar7 + (int)local_c + -(int)pfVar5) =
         (*(float *)((int)pfVar7 + iVar10) - *pfVar7) * (float)param_4 + *pfVar7;
    pfVar7 = pfVar7 + 1;
  } while (iVar9 != 0);
  FUN_2001b1f0(*(undefined4 *)(iVar1 + 0x30 + ((uint)param_5 ^ 1) * 4),
               (param_3 - param_2) * (float)param_4 + param_2,param_3,local_c,pfVar6);
  return;
}

