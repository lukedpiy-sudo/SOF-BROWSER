// rea decompile_all
// name: FUN_20052620
// address: 0x20052620
// body: available
// range: 0x20052460-0x2005261e inclusive
// range: 0x20052620-0x20052a0e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20052620(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 *local_bc;
  float *pfStack_b8;
  int *apiStack_b4 [2];
  float *apfStack_ac [5];
  int iStack_98;
  int iStack_94;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  float afStack_88 [3];
  float afStack_7c [3];
  float afStack_70 [2];
  float *pfStack_68;
  int *piStack_64;
  float *pfStack_60;
  int iStack_4c;
  float local_44 [3];
  undefined1 local_38 [56];
  
  local_c8 = DAT_2039022c;
  local_c4 = DAT_20390230;
  local_c0 = DAT_20390234;
  iVar11 = 0;
  local_cc = DAT_2039025c;
  local_bc = (undefined1 *)0x0;
  do {
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 4;
      *(float *)((int)local_44 + iVar10) =
           local_cc * *(float *)((int)&DAT_2039022c + iVar10) +
           *(float *)((int)&DAT_20390220 + iVar10);
      iVar10 = iVar7;
    } while (iVar7 < 0xc);
    pfVar8 = (float *)(*(code *)DAT_20390290[0x3c])
                                (local_38,&DAT_20390220,DAT_20390290 + 0x33,DAT_20390290 + 0x36,
                                 local_44);
    pfVar12 = afStack_7c;
    for (iVar10 = 0xe; piVar9 = piStack_64, iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar12 = pfVar12 + 1;
    }
    if (afStack_7c[0]._0_1_ != '\0') {
      DAT_20390234 = 0.0;
      apfStack_ac[0] = (float *)s_EmergencySnapPosition___20137634;
      apiStack_b4[1] = (int *)0x20052474;
      Com_DPrintf();
      iStack_94 = 10;
      sStack_90 = (short)DAT_20390290[1];
      sStack_8e = *(short *)((int)DAT_20390290 + 6);
      sStack_8c = (short)DAT_20390290[2];
      do {
        iVar11 = 10;
        *(short *)(DAT_20390290 + 2) = (short)iStack_94 + sStack_8c;
        do {
          iVar10 = 10;
          *(short *)((int)DAT_20390290 + 6) = sStack_8e + (short)iVar11;
          do {
            *(short *)(DAT_20390290 + 1) = (short)iVar10 + sStack_90;
            if ((0 < *DAT_20390290) && (*DAT_20390290 < 3)) {
LAB_20052596:
              DAT_20390220 = (float)(int)(short)DAT_20390290[1] * 0.125;
              DAT_20390224 = (float)(int)*(short *)((int)DAT_20390290 + 6) * 0.125;
              DAT_20390228 = (float)(int)(short)DAT_20390290[2] * 0.125;
              _DAT_2039027c = (float)(int)(short)DAT_20390290[1];
              _DAT_20390280 = (float)(int)*(short *)((int)DAT_20390290 + 6);
              _DAT_20390284 = (float)(int)(short)DAT_20390290[2];
              return;
            }
            piVar9 = DAT_20390290 + 1;
            iVar7 = 0;
            do {
              iStack_98 = (int)(short)*piVar9;
              iVar6 = iVar7 + 4;
              piVar9 = (int *)((int)piVar9 + 2);
              *(float *)((int)afStack_88 + iVar7) = (float)iStack_98 * 0.125;
              *(float *)((int)afStack_7c + iVar7) = (float)iStack_98 * 0.125;
              iVar7 = iVar6;
            } while (iVar6 < 0xc);
            apfStack_ac[0] = afStack_88;
            apiStack_b4[1] = DAT_20390290 + 0x36;
            apiStack_b4[0] = DAT_20390290 + 0x33;
            pfStack_b8 = afStack_7c;
            local_bc = local_38;
            local_c0 = 1.1277857e-19;
            pfVar8 = (float *)(*(code *)DAT_20390290[0x3c])();
            pfVar12 = afStack_70;
            for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
              *pfVar12 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              pfVar12 = pfVar12 + 1;
            }
            if (afStack_70[0]._0_1_ == '\0') goto LAB_20052596;
            iVar10 = iVar10 + -2;
          } while (-0xb < iVar10);
          iVar11 = iVar11 + -2;
        } while (-0xb < iVar11);
        iStack_94 = iStack_94 + -2;
        if (iStack_94 < -10) {
          return;
        }
      } while( true );
    }
    iVar10 = iVar11;
    if (0.0 < afStack_7c[1]) {
      DAT_20390220 = afStack_7c[2];
      DAT_20390224 = afStack_70[0];
      DAT_20390228 = afStack_70[1];
      iVar10 = 0;
    }
    if (afStack_7c[1] == 1.0) goto LAB_200529dc;
    if (((DAT_20390290[0xe] < 0x20) && (iStack_4c != 0)) && (param_1 != 0)) {
      DAT_20390290[DAT_20390290[0xe] + 0xf] = iStack_4c;
      DAT_20390290[0xe] = DAT_20390290[0xe] + 1;
    }
    local_cc = local_cc - afStack_7c[1] * local_cc;
    if (4 < iVar10) {
LAB_200529ba:
      DAT_2039022c = DAT_20390c24;
      DAT_20390230 = DAT_20390c28;
      DAT_20390234 = DAT_20390c2c;
      goto LAB_200529dc;
    }
    iVar11 = iVar10 + 1;
    (&pfStack_b8)[iVar10 * 3] = pfStack_68;
    pfVar8 = pfStack_60;
    apiStack_b4[iVar10 * 3] = piVar9;
    apfStack_ac[iVar10 * 3 + -1] = pfVar8;
    if (iVar11 == 1) {
      fStack_d8 = DAT_2039022c;
      fStack_d4 = DAT_20390230;
      fStack_d0 = DAT_20390234;
      VectorNormalize(&fStack_d8);
      iVar10 = 0;
      fVar1 = ((float)pfStack_b8 * fStack_d8 +
              (float)apiStack_b4[0] * fStack_d4 + (float)apiStack_b4[1] * fStack_d0) * 0.5 + 1.0;
      fVar2 = (float)apiStack_b4[0] * DAT_20390230;
      fVar5 = (float)apiStack_b4[1] * DAT_20390234;
      fVar4 = DAT_2039022c * (float)pfStack_b8;
      do {
        fVar3 = *(float *)((int)&DAT_2039022c + iVar10) -
                (fVar4 + fVar5 + fVar2) * 1.01 * *(float *)((int)&pfStack_b8 + iVar10);
        *(float *)((int)&DAT_2039022c + iVar10) = fVar3;
        if ((-0.1 < fVar3) && (fVar3 < 0.1)) {
          *(undefined4 *)((int)&DAT_2039022c + iVar10) = 0;
        }
        iVar10 = iVar10 + 4;
      } while (iVar10 < 0xc);
      DAT_2039022c = DAT_2039022c * fVar1;
      DAT_20390230 = DAT_20390230 * fVar1;
      DAT_20390234 = DAT_20390234 * fVar1;
    }
    else {
      if (iVar11 != 2) goto LAB_200529ba;
      fStack_d8 = DAT_2039022c;
      fStack_d4 = DAT_20390230;
      fStack_d0 = DAT_20390234;
      VectorNormalize(&fStack_d8);
      fVar1 = ((float)pfStack_b8 * fStack_d8 +
              (float)apiStack_b4[0] * fStack_d4 + (float)apiStack_b4[1] * fStack_d0) * 0.5 + 1.0;
      FUN_20055280(&pfStack_b8,apfStack_ac,&fStack_d8);
      fVar2 = DAT_2039022c * fStack_d8 + fStack_d0 * DAT_20390234 + fStack_d4 * DAT_20390230;
      DAT_2039022c = fStack_d8 * fVar2 * fVar1;
      DAT_20390230 = fStack_d4 * fVar2 * fVar1;
      DAT_20390234 = fStack_d0 * fVar2 * fVar1;
    }
    fVar1 = DAT_2039022c * local_c8 + DAT_20390230 * local_c4 + local_c0 * DAT_20390234;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) goto LAB_200529ba;
    local_bc = (undefined1 *)((int)local_bc + 1);
    if (3 < (int)local_bc) {
LAB_200529dc:
      if (*(char *)((int)DAT_20390290 + 0x11) != '\0') {
        DAT_2039022c = local_c8;
        DAT_20390230 = local_c4;
        DAT_20390234 = local_c0;
      }
      return;
    }
  } while( true );
}

