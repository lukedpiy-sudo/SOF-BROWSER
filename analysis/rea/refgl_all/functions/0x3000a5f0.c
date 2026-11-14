// rea decompile_all
// name: FUN_3000a5f0
// address: 0x3000a5f0
// body: available
// range: 0x3000a5f0-0x3000aa32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_3000a5f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float **ppfVar3;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  float *pfVar16;
  float10 fVar17;
  int iStack_72c;
  float local_728 [3];
  int iStack_71c;
  float ***pppfStack_718;
  int iStack_714;
  float local_710 [3];
  float ***pppfStack_704;
  float **appfStack_700 [64];
  float afStack_600 [192];
  float afStack_300 [192];
  
  if (0x3c < param_1) {
    (*DAT_3008fdc8)(1,s_numverts____i_3002ec1c,param_1);
  }
  local_710[2] = 9999.0;
  local_710[1] = 9999.0;
  local_710[0] = 9999.0;
  local_728[2] = -9999.0;
  local_728[1] = -9999.0;
  local_728[0] = -9999.0;
  pfVar9 = param_2;
  iVar15 = param_1;
  if (0 < param_1) {
    do {
      iVar11 = 0;
      do {
        if (*pfVar9 < *(float *)((int)local_710 + iVar11)) {
          *(float *)((int)local_710 + iVar11) = *pfVar9;
        }
        if (*(float *)((int)local_728 + iVar11) < *pfVar9) {
          *(float *)((int)local_728 + iVar11) = *pfVar9;
        }
        iVar11 = iVar11 + 4;
        pfVar9 = pfVar9 + 1;
      } while (iVar11 < 0xc);
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iVar15 = 0;
  while( true ) {
    fVar17 = FUN_3002079d((double)((local_710[iVar15] + local_728[iVar15]) * 0.5 * 0.015625 + 0.5));
    fVar1 = (float)(fVar17 * (float10)64.0);
    if ((8.0 <= local_728[iVar15] - fVar1) && (8.0 <= fVar1 - local_710[iVar15])) break;
    iVar15 = iVar15 + 1;
    if (2 < iVar15) {
      puVar12 = (undefined4 *)(*(int *)(DAT_3008fc78 + 0xf0) + *(int *)(DAT_3008fc78 + 0xec));
      local_728[1] = 0.0;
      *puVar12 = *(undefined4 *)(DAT_3007c67c + 0x28);
      fVar2 = 0.0;
      fVar7 = 0.0;
      fVar1 = 0.0;
      local_728[2] = 0.0;
      *(undefined4 *)(DAT_3007c67c + 0x28) = *(undefined4 *)(DAT_3008fc78 + 0xec);
      *(int *)(DAT_3008fc78 + 0xec) = *(int *)(DAT_3008fc78 + 0xec) + param_1 * 0x1c + 0x40;
      puVar12[1] = param_1 + 2;
      iVar15 = 0;
      if (0 < param_1) {
        local_728[1] = 0.0;
        fVar2 = 0.0;
        fVar7 = 0.0;
        local_728[2] = 0.0;
        pfVar9 = (float *)(puVar12 + 0xb);
        iVar11 = param_1;
        do {
          pfVar9[-2] = *param_2;
          pfVar9[-1] = param_2[1];
          *pfVar9 = param_2[2];
          iVar11 = iVar11 + -1;
          pfVar16 = *(float **)(DAT_3007c67c + 0x34);
          fVar6 = *param_2 * *pfVar16 + pfVar16[2] * param_2[2] + pfVar16[1] * param_2[1];
          fVar8 = *param_2 * pfVar16[4] + pfVar16[6] * param_2[2] + pfVar16[5] * param_2[1];
          fVar2 = fVar6 + fVar2;
          fVar7 = fVar8 + fVar7;
          fVar1 = fVar1 + *param_2;
          local_728[1] = local_728[1] + param_2[1];
          local_728[2] = local_728[2] + param_2[2];
          pfVar9[1] = fVar6;
          pfVar9[2] = fVar8;
          pfVar9 = pfVar9 + 7;
          iVar15 = param_1;
          param_2 = param_2 + 3;
        } while (iVar11 != 0);
      }
      fVar6 = 1.0 / (float)param_1;
      puVar12[2] = fVar6 * fVar1;
      puVar12[3] = local_728[1] * fVar6;
      puVar12[4] = local_728[2] * fVar6;
      puVar12[5] = (1.0 / (float)param_1) * fVar2;
      puVar12[6] = (1.0 / (float)param_1) * fVar7;
      puVar14 = puVar12 + 9;
      puVar12 = puVar12 + iVar15 * 7 + 9;
      for (iVar11 = 7; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar12 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + 1;
      }
      return;
    }
  }
  iVar11 = 0;
  pfVar9 = param_2 + iVar15;
  if (0 < param_1) {
    do {
      fVar2 = *pfVar9;
      iVar11 = iVar11 + 1;
      pfVar9 = pfVar9 + 3;
      (&pppfStack_704)[iVar11] = (float ***)(fVar2 - fVar1);
    } while (iVar11 < param_1);
  }
  pfVar9 = pfVar9 + -iVar15;
  iStack_72c = 0;
  (&pppfStack_704)[iVar11 + 1] = (float ***)appfStack_700[0];
  iStack_71c = 0;
  *pfVar9 = *param_2;
  pfVar9[1] = param_2[1];
  pfVar9[2] = param_2[2];
  iStack_714 = 0;
  if (0 < param_1) {
    pfVar9 = afStack_300;
    pfVar16 = afStack_600;
    do {
      pppfStack_704 = (float ***)(&pppfStack_704 + iStack_714 + 1);
      if (0.0 <= (float)(&pppfStack_704)[iStack_714 + 1]) {
        *pfVar16 = *param_2;
        pfVar16[1] = param_2[1];
        pfVar16[2] = param_2[2];
        iStack_71c = iStack_71c + 1;
        pfVar16 = pfVar16 + 3;
      }
      if ((float)*pppfStack_704 < 0.0 != ((float)*pppfStack_704 == 0.0)) {
        *pfVar9 = *param_2;
        pfVar9[1] = param_2[1];
        pfVar9[2] = param_2[2];
        iStack_72c = iStack_72c + 1;
        pfVar9 = pfVar9 + 3;
      }
      if ((((float)*pppfStack_704 != 0.0) &&
          (pppfStack_718 = (float ***)(&pppfStack_704 + iStack_714 + 2),
          (float)(&pppfStack_704)[iStack_714 + 2] != 0.0)) &&
         (0.0 < (float)*pppfStack_704 != 0.0 < (float)*pppfStack_718)) {
        ppfVar3 = *pppfStack_704;
        ppfVar4 = *pppfStack_718;
        ppfVar5 = *pppfStack_704;
        iVar15 = 0;
        pfVar10 = pfVar9;
        pfVar13 = pfVar16;
        do {
          iVar11 = iVar15 + 1;
          fVar1 = (param_2[iVar15 + 3] - param_2[iVar15]) *
                  ((float)ppfVar5 / ((float)ppfVar3 - (float)ppfVar4)) + param_2[iVar15];
          *pfVar10 = fVar1;
          *pfVar13 = fVar1;
          iVar15 = iVar11;
          pfVar10 = pfVar10 + 1;
          pfVar13 = pfVar13 + 1;
        } while (iVar11 < 3);
        iStack_71c = iStack_71c + 1;
        pfVar16 = pfVar16 + 3;
        iStack_72c = iStack_72c + 1;
        pfVar9 = pfVar9 + 3;
      }
      iStack_714 = iStack_714 + 1;
      param_2 = param_2 + 3;
    } while (iStack_714 < param_1);
  }
  FUN_3000a5f0(iStack_71c,afStack_600);
  FUN_3000a5f0(iStack_72c,afStack_300);
  return;
}

