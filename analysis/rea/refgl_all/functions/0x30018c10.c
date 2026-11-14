// rea decompile_all
// name: FUN_30018c10
// address: 0x30018c10
// body: available
// range: 0x30018c10-0x30019094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30018c10(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iStack_818;
  float local_808;
  float local_804;
  int aiStack_800 [64];
  float afStack_700 [64];
  float afStack_600 [192];
  float afStack_300 [192];
  
  if (0x3e < param_1) {
    (*DAT_3008fdc8)(1,s_ClipSkyPolygon__MAX_CLIP_VERTS_3002ffe8);
  }
  if (param_3 == 6) {
    local_808 = 0.0;
    fVar1 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    DAT_300a41dc = DAT_300a41dc + 1;
    local_804 = 0.0;
    if (0 < param_1) {
      pfVar7 = param_2 + 2;
      iVar8 = param_1;
      do {
        fVar1 = fVar1 + pfVar7[-2];
        fVar2 = fVar2 + pfVar7[-1];
        fVar3 = fVar3 + *pfVar7;
        pfVar7 = pfVar7 + 3;
        iVar8 = iVar8 + -1;
        local_808 = fVar2;
        local_804 = fVar3;
      } while (iVar8 != 0);
    }
    fVar2 = ABS(fVar1);
    fVar3 = ABS(local_808);
    if ((fVar2 <= fVar3) || (fVar2 <= ABS(local_804))) {
      if ((fVar3 <= ABS(local_804)) || (fVar3 <= fVar2)) {
        iVar8 = 5;
        if (0.0 <= local_804) {
          iVar8 = 4;
        }
      }
      else if (0.0 <= local_808) {
        iVar8 = 2;
      }
      else {
        iVar8 = 3;
      }
    }
    else if (0.0 <= fVar1) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
    }
    if (0 < param_1) {
      iVar9 = (&DAT_3002ff60)[iVar8 * 3];
      do {
        if (iVar9 < 1) {
          fVar1 = -*(float *)((int)param_2 - (iVar9 * 4 + 4));
        }
        else {
          fVar1 = param_2[iVar9 + -1];
        }
        if (0.001 <= fVar1) {
          fVar1 = 1.0 / fVar1;
          iVar12 = *(int *)(iVar8 * 0xc + 0x3002ff58);
          if (iVar12 < 0) {
            fVar2 = -(fVar1 * *(float *)((int)param_2 - (iVar12 * 4 + 4)));
          }
          else {
            fVar2 = fVar1 * param_2[iVar12 + -1];
          }
          iVar12 = *(int *)(iVar8 * 0xc + 0x3002ff5c);
          if (iVar12 < 0) {
            fVar1 = -(fVar1 * *(float *)((int)param_2 - (iVar12 * 4 + 4)));
          }
          else {
            fVar1 = fVar1 * param_2[iVar12 + -1];
          }
          if (fVar2 < (float)(&DAT_300a4198)[iVar8]) {
            (&DAT_300a4198)[iVar8] = fVar2;
          }
          if (fVar1 < (float)(&DAT_300a41b0)[iVar8]) {
            (&DAT_300a41b0)[iVar8] = fVar1;
          }
          if ((float)(&DAT_300a4128)[iVar8] < fVar2) {
            (&DAT_300a4128)[iVar8] = fVar2;
          }
          if (fVar1 <= (float)(&DAT_300a4140)[iVar8]) {
            (&DAT_300a41d4)[iVar8] = 1;
            DAT_300a41d0 = 1;
          }
          else {
            (&DAT_300a4140)[iVar8] = fVar1;
            (&DAT_300a41d4)[iVar8] = 1;
            DAT_300a41d0 = 1;
          }
        }
        param_2 = param_2 + 3;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return;
    }
  }
  else {
    bVar6 = false;
    bVar5 = false;
    iVar8 = param_3 * 0xc;
    iVar9 = 0;
    if (0 < param_1) {
      pfVar7 = param_2 + 1;
      do {
        fVar1 = *pfVar7 * *(float *)(&DAT_3002fecc + iVar8) +
                pfVar7[1] * *(float *)(&DAT_3002fed0 + iVar8) +
                pfVar7[-1] * *(float *)(&DAT_3002fec8 + iVar8);
        if (fVar1 <= 0.1) {
          if (-0.1 <= fVar1) {
            aiStack_800[iVar9] = 2;
          }
          else {
            bVar6 = true;
            aiStack_800[iVar9] = 1;
          }
        }
        else {
          bVar5 = true;
          aiStack_800[iVar9] = 0;
        }
        afStack_700[iVar9] = fVar1;
        iVar9 = iVar9 + 1;
        pfVar7 = pfVar7 + 3;
      } while (iVar9 < param_1);
      iVar8 = 0;
      if ((bVar5) && (bVar6)) {
        iVar12 = 0;
        afStack_700[iVar9] = afStack_700[0];
        aiStack_800[iVar9] = aiStack_800[0];
        iStack_818 = 0;
        pfVar7 = param_2 + iVar9 * 3;
        *pfVar7 = *param_2;
        pfVar7[1] = param_2[1];
        pfVar7[2] = param_2[2];
        pfVar7 = afStack_600;
        do {
          iVar9 = aiStack_800[iVar8];
          if (iVar9 == 0) {
            *pfVar7 = *param_2;
            pfVar7[1] = param_2[1];
            iStack_818 = iStack_818 + 1;
            pfVar7[2] = param_2[2];
            pfVar7 = pfVar7 + 3;
          }
          else {
            if (iVar9 != 1) {
              if (iVar9 != 2) goto LAB_30018fc0;
              *pfVar7 = *param_2;
              pfVar7[1] = param_2[1];
              pfVar7[2] = param_2[2];
              iStack_818 = iStack_818 + 1;
              pfVar7 = pfVar7 + 3;
            }
            afStack_300[iVar12 * 3] = *param_2;
            afStack_300[iVar12 * 3 + 1] = param_2[1];
            afStack_300[iVar12 * 3 + 2] = param_2[2];
            iVar12 = iVar12 + 1;
          }
LAB_30018fc0:
          if (((iVar9 != 2) && (aiStack_800[iVar8 + 1] != 2)) && (aiStack_800[iVar8 + 1] != iVar9))
          {
            fVar1 = afStack_700[iVar8];
            fVar2 = afStack_700[iVar8 + 1];
            fVar3 = afStack_700[iVar8];
            iVar9 = 0;
            pfVar11 = afStack_300 + iVar12 * 3;
            pfVar13 = pfVar7;
            do {
              iVar10 = iVar9 + 1;
              fVar4 = (param_2[iVar9 + 3] - param_2[iVar9]) * (fVar3 / (fVar1 - fVar2)) +
                      param_2[iVar9];
              *pfVar13 = fVar4;
              *pfVar11 = fVar4;
              iVar9 = iVar10;
              pfVar11 = pfVar11 + 1;
              pfVar13 = pfVar13 + 1;
            } while (iVar10 < 3);
            pfVar7 = pfVar7 + 3;
            iStack_818 = iStack_818 + 1;
            iVar12 = iVar12 + 1;
          }
          iVar8 = iVar8 + 1;
          param_2 = param_2 + 3;
          if (param_1 <= iVar8) {
            FUN_30018c10(iStack_818,afStack_600,param_3 + 1);
            FUN_30018c10(iVar12,afStack_300,param_3 + 1);
            return;
          }
        } while( true );
      }
    }
    FUN_30018c10(param_1,param_2,param_3 + 1);
  }
  return;
}

