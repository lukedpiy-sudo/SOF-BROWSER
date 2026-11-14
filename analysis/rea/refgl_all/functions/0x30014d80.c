// rea decompile_all
// name: FUN_30014d80
// address: 0x30014d80
// body: available
// range: 0x30014d80-0x3001506d inclusive
// range: 0x30015070-0x3001543c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_30014d80(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  
  iVar6 = DAT_3008fc6c;
  if ((*(float *)(DAT_3008ffb8 + 0x18) == 0.0) || ((DAT_3008fd3c & 2) != 0)) {
    return;
  }
  DAT_30090010 = DAT_3008fd04;
  DAT_30090018 = DAT_3008fd0c;
  DAT_3008fc78 = DAT_3008fc6c;
  pfVar11 = local_60;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar11 = 0.0;
    pfVar11 = pfVar11 + 1;
  }
  DAT_30090014 = DAT_3008fd08;
  lVar14 = __ftol();
  local_2c = (float)lVar14;
  DAT_3008fed8 = local_60;
  iVar4 = 0;
  if (0 < *(int *)(iVar6 + 0xcc)) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar10 = (undefined4 *)(*(int *)(iVar6 + 0xd0) + 0x44 + iVar5);
      iVar5 = iVar5 + 0xf0;
      *puVar10 = 0;
      *(undefined2 *)(puVar10 + 1) = 0;
      iVar6 = DAT_3008fc78;
    } while (iVar4 < *(int *)(DAT_3008fc78 + 0xcc));
  }
  DAT_3008ffdc = 0xffffffff;
  DAT_3008ffd8 = 0xffffffff;
  if (*(float *)(DAT_3008ff2c + 0x18) == 0.0) {
    uVar17 = 0x3f800000;
    uVar16 = 0x3f800000;
    uVar15 = 0x3f800000;
    (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
  }
  else {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
    if (((byte)DAT_300a4588 & 8) == 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    uVar17 = 0x3ecccccd;
    uVar16 = 0x3f800000;
    uVar15 = 0x3f800000;
    (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3ecccccd);
    DAT_300a46e0 = DAT_300a46e0 | 1;
    if (((byte)DAT_300a4588 & 1) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
  }
  puVar10 = &DAT_30090028;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  DAT_30090428 = 0;
  FUN_300190a0();
  DAT_300a3730 = 0;
  DAT_300a3734 = 0;
  DAT_300a2728 = FUN_30014120;
  if (((DAT_300a458c != 0) && (*(float *)(DAT_3008ffb4 + 0x18) == 0.0)) && ((DAT_3008fd3c & 4) == 0)
     ) {
    DAT_300a2728 = (code *)&LAB_30015b10;
  }
  if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
    DAT_300a2728 = FUN_300159f0;
    (*DAT_300a44ec)(0xde1);
  }
  FUN_30015db0(*(int **)(DAT_3008fc6c + 0xa0));
  iVar6 = 0;
  DAT_300a1630 = 0;
  if (0 < DAT_3004c508) {
    pfVar11 = (float *)&DAT_30034e54;
    do {
      if ((pfVar11[-1] == 0.0) || (*(char *)(pfVar11 + 2) != '\0')) {
LAB_30014fbe:
        *pfVar11 = 0.0;
      }
      else {
        fVar7 = *pfVar11;
        if (fVar7 != 0.0) {
          DAT_300a1630 = DAT_300a1630 + 1;
          do {
            if ((*(byte *)(*(int *)((int)fVar7 + 0x34) + 0x20) & 8) == 0) {
              (*DAT_300a2728)();
            }
            else {
              FUN_30014120(fVar7);
            }
            fVar7 = *(float *)((int)fVar7 + 0x2c);
          } while (fVar7 != 0.0);
          goto LAB_30014fbe;
        }
      }
      iVar6 = iVar6 + 1;
      pfVar11 = pfVar11 + 0x1e;
    } while (iVar6 < DAT_3004c508);
  }
  FUN_30006170('\0');
  if (DAT_300a45ec == 0) {
    FUN_30015440();
  }
  FUN_30014480();
  if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
    (*DAT_300a45fc)(0xde1);
  }
  if (*(float *)(DAT_3008ff2c + 0x18) != 0.0) {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
    if (((byte)DAT_300a4588 & 1) == 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_3000d880(DAT_3008fcd4,0xb71);
  }
  FUN_300190e0();
  FUN_30016ab0();
  if (*(float *)(DAT_3008fc74 + 0x18) != 0.0) {
    (*DAT_300a44ec)(0xde1);
    if ((*(int *)(DAT_3008fc74 + 0x18) == 0x3f800000) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7, ((byte)DAT_300a4588 & 8) == 0)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    iVar6 = 0x3f800000;
    (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000,uVar15,uVar16,uVar17,unaff_EDI);
    pfVar11 = (float *)&DAT_30090028;
    do {
      for (fVar7 = *pfVar11; fVar7 != 0.0; fVar7 = *(float *)((int)fVar7 + 0x30)) {
        iVar4 = *(int *)((int)fVar7 + 0x28);
        if ((*(int *)(DAT_3008fc74 + 0x18) != 0x40800000) && (iVar5 = 2, 2 < *(int *)(iVar4 + 4))) {
          iVar12 = iVar4 + 0x40;
          do {
            FUN_3001b650();
            (*DAT_300a4710)(3);
            (*DAT_300a4520)(iVar4 + 8);
            (*DAT_300a4520)(iVar12 + -0x1c);
            (*DAT_300a4520)(iVar12);
            (*DAT_300a4520)(iVar4 + 8);
            (*DAT_300a45f4)();
            iVar5 = iVar5 + 1;
            iVar12 = iVar12 + 0x1c;
          } while (iVar5 < *(int *)(iVar4 + 4));
        }
        if ((3.0 <= *(float *)(DAT_3008fc74 + 0x18)) && (*(int *)((int)fVar7 + 100) != 0)) {
          fVar8 = (float)(uint)*(byte *)((int)fVar7 + 0x68);
          fVar3 = (float)(uint)*(byte *)((int)fVar7 + 0x69);
          fVar2 = *(float *)(iVar4 + -0x14 + *(int *)(iVar4 + 4) * 0x1c);
          fVar20 = *(float *)(iVar4 + 8);
          pfVar1 = (float *)(iVar4 + -0x14 + *(int *)(iVar4 + 4) * 0x1c);
          local_60[0] = pfVar1[1] - *(float *)(iVar4 + 0xc);
          local_60[1] = pfVar1[2] - *(float *)(iVar4 + 0x10);
          local_60[2] = *(float *)(iVar4 + 0x24) - *(float *)(iVar4 + 8);
          local_60[3] = *(float *)(iVar4 + 0x28) - *(float *)(iVar4 + 0xc);
          fStack_50 = *(float *)(iVar4 + 0x2c) - *(float *)(iVar4 + 0x10);
          fVar13 = FUN_3001d310(local_60 + 2);
          fVar19 = (float)fVar13;
          fVar13 = FUN_3001d310((float *)&stack0xffffff9c);
          fVar9 = fVar3;
          fVar18 = fVar8;
          if ((float10)fVar19 <= fVar13) {
            if (((uint)fVar3 <= (uint)fVar8) && (fVar18 = fVar3, (uint)fVar3 < (uint)fVar8))
            goto LAB_30015223;
          }
          else if (((uint)fVar8 <= (uint)fVar3) && (fVar18 = fVar3, (uint)fVar8 < (uint)fVar3)) {
LAB_30015223:
            fVar9 = fVar8;
            fVar18 = fVar3;
          }
          fVar19 = 1.0 / (float)(int)fVar9;
          fVar2 = (fVar2 - fVar20) * fVar19;
          local_60[0] = local_60[0] * fVar19;
          local_60[1] = fVar19 * local_60[1];
          fVar20 = 1.0 / (float)(int)fVar18;
          local_60[2] = local_60[2] * fVar20;
          local_60[3] = local_60[3] * fVar20;
          fStack_50 = fVar20 * fStack_50;
          if ((*(char *)((int)fVar7 + 0x6a) == '\x01') && (*(char *)((int)fVar7 + 0x6b) == '\x01'))
          {
            uVar16 = 0x3f800000;
            uVar15 = 0;
          }
          else {
            uVar16 = 0;
            uVar15 = 0x3f800000;
          }
          fVar20 = fVar9;
          (*DAT_300a4490)(uVar15,0,uVar16);
          iVar12 = 0;
          iVar5 = iVar6;
          if (fVar9 != 0.0) {
            do {
              fVar19 = (float)iVar12;
              local_60[2] = fVar20 * fVar19 + *(float *)(iVar4 + 8);
              local_60[3] = fVar7 * fVar19 + *(float *)(iVar4 + 0xc);
              fStack_50 = fVar19 * (float)pfVar11 + *(float *)(iVar4 + 0x10);
              fStack_4c = fVar20 * fVar19 + *(float *)(iVar4 + 0x24);
              fStack_48 = fVar7 * fVar19 + *(float *)(iVar4 + 0x28);
              fStack_44 = fVar19 * (float)pfVar11 + *(float *)(iVar4 + 0x2c);
              FUN_3001b650();
              (*DAT_300a4710)(1);
              (*DAT_300a4520)(local_60 + 1);
              (*DAT_300a4520)(local_60 + 3);
              (*DAT_300a45f4)();
              iVar12 = iVar12 + 1;
              iVar5 = iVar6;
            } while (iVar12 < (int)fVar9);
          }
          iVar12 = 0;
          iVar6 = iVar5;
          if (0 < iVar5) {
            do {
              fVar20 = (float)iVar12;
              fStack_40 = fVar2 * fVar20 + *(float *)(iVar4 + 8);
              fStack_3c = local_60[0] * fVar20 + *(float *)(iVar4 + 0xc);
              fStack_38 = fVar20 * local_60[1] + *(float *)(iVar4 + 0x10);
              fStack_34 = fVar2 * fVar20 + *pfVar1;
              fStack_30 = local_60[0] * fVar20 + pfVar1[1];
              local_2c = fVar20 * local_60[1] + pfVar1[2];
              FUN_3001b650();
              (*DAT_300a4710)(1);
              (*DAT_300a4520)(&fStack_44);
              (*DAT_300a4520)(&fStack_3c);
              (*DAT_300a45f4)();
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar5);
          }
          (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
        }
      }
      pfVar11 = pfVar11 + 1;
    } while ((int)pfVar11 < 0x30090228);
    DAT_300a46e0 = DAT_300a46e0 | 8;
    if (((byte)DAT_300a4588 & 8) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a45fc)(0xde1);
  }
  return;
}

