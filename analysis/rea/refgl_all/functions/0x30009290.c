// rea decompile_all
// name: FUN_30009290
// address: 0x30009290
// body: available
// range: 0x30009290-0x30009508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30009290(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  longlong lVar21;
  float local_3c;
  uint local_30;
  float local_2c;
  uint local_28;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_2c = 16.0;
  pfVar12 = *(float **)(param_1 + 0x34);
  local_30 = ((int)*(short *)(param_1 + 0x14) >> 4) + 1;
  uVar17 = ((int)*(short *)(param_1 + 0x16) >> 4) + 1;
  if (*(int *)(param_1 + 100) != 0) {
    if (*(byte *)(param_1 + 0x6a) == 0xff) {
      return;
    }
    local_30 = (uint)*(byte *)(param_1 + 0x68);
    uVar17 = (uint)*(byte *)(param_1 + 0x69);
    local_2c = (float)*(byte *)(param_1 + 0x6a) * 16.0;
  }
  local_1c = 0;
  if (0 < DAT_3008fd50) {
    local_18 = 0;
    do {
      if ((*(uint *)(param_1 + 0x48) & 1 << ((byte)local_1c & 0x1f)) != 0) {
        pfVar20 = (float *)(local_18 + DAT_3008fd54);
        pfVar13 = *(float **)(param_1 + 4);
        fVar14 = (*pfVar13 * *pfVar20 + pfVar13[1] * pfVar20[1] + pfVar13[2] * pfVar20[2]) -
                 pfVar13[3];
        fVar15 = pfVar20[6] - ABS(fVar14);
        if (64.0 <= fVar15) {
          sVar11 = *(short *)(param_1 + 0x10);
          pfVar19 = (float *)&DAT_3004c658;
          fVar14 = -fVar14;
          fVar1 = *pfVar13;
          fVar2 = *pfVar20;
          fVar3 = pfVar13[1];
          fVar4 = pfVar20[1];
          fVar5 = pfVar13[2];
          fVar6 = pfVar20[2];
          fVar7 = pfVar12[2];
          fVar8 = pfVar12[1];
          fVar9 = *pfVar12;
          fVar10 = pfVar12[3];
          local_20 = uVar17;
          if (0 < (int)uVar17) {
            do {
              lVar21 = __ftol();
              iVar18 = (int)lVar21;
              if (iVar18 < 0) {
                iVar18 = -iVar18;
              }
              local_3c = 0.0;
              if (0 < (int)local_30) {
                local_28 = local_30;
                do {
                  local_14 = FUN_3000a120((((fVar14 * fVar1 + fVar2) * fVar9 +
                                            (fVar14 * fVar3 + fVar4) * fVar8 +
                                            (fVar14 * fVar5 + fVar6) * fVar7 + fVar10) -
                                          (float)(int)sVar11) - local_3c);
                  if (local_14 < 0) {
                    local_14 = -local_14;
                  }
                  if (iVar18 < local_14) {
                    local_14 = (iVar18 >> 1) + local_14;
                  }
                  else {
                    local_14 = (local_14 >> 1) + iVar18;
                  }
                  if ((float)local_14 < fVar15 - 64.0) {
                    fVar16 = fVar15 - (float)local_14;
                    *pfVar19 = fVar16 * pfVar20[3] + *pfVar19;
                    pfVar19[1] = fVar16 * pfVar20[4] + pfVar19[1];
                    pfVar19[2] = fVar16 * pfVar20[5] + pfVar19[2];
                  }
                  local_3c = local_3c + local_2c;
                  pfVar19 = pfVar19 + 3;
                  local_28 = local_28 - 1;
                } while (local_28 != 0);
              }
              local_20 = local_20 - 1;
            } while (local_20 != 0);
          }
        }
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x1c;
    } while (local_1c < DAT_3008fd50);
  }
  return;
}

