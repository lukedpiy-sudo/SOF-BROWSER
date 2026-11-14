// rea decompile_all
// name: FUN_30016390
// address: 0x30016390
// body: available
// range: 0x30016390-0x300166d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30016390(int param_1)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  undefined4 *puVar24;
  float *pfVar25;
  uint uVar26;
  float10 fVar27;
  float10 fVar28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar18 = *(int *)(DAT_3008fc78 + 0x94);
  puVar24 = (undefined4 *)(*(int *)(DAT_3008fc78 + 0xf0) + *(int *)(DAT_3008fc78 + 0xec));
  uVar26 = (uint)*(ushort *)(param_1 + 10);
  *puVar24 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(DAT_3008fc78 + 0xec);
  *(uint *)(DAT_3008fc78 + 0xec) = *(int *)(DAT_3008fc78 + 0xec) + uVar26 * 0x1c + 8;
  puVar24[1] = uVar26;
  local_1c = 0.0;
  if (uVar26 != 0) {
    pfVar22 = (float *)(puVar24 + 4);
    do {
      iVar19 = *(int *)(*(int *)(DAT_3008fc78 + 0xc0) +
                       (*(int *)(param_1 + 0xc) + (int)local_1c) * 4);
      if (iVar19 < 1) {
        pfVar25 = (float *)(*(int *)(DAT_3008fc78 + 0x8c) +
                           (uint)*(ushort *)(iVar18 + iVar19 * -4 + 2) * 0xc);
      }
      else {
        pfVar25 = (float *)(*(int *)(DAT_3008fc78 + 0x8c) +
                           (uint)*(ushort *)(iVar18 + iVar19 * 4) * 0xc);
      }
      pfVar20 = *(float **)(param_1 + 0x34);
      fVar1 = pfVar20[2];
      fVar2 = pfVar25[2];
      fVar3 = pfVar20[1];
      fVar4 = pfVar25[1];
      sVar16 = *(short *)((int)pfVar20[0xb] + 0x44);
      fVar5 = *pfVar20;
      fVar6 = *pfVar25;
      fVar7 = pfVar20[3];
      fVar8 = pfVar20[6];
      fVar9 = pfVar25[2];
      fVar10 = pfVar20[5];
      fVar11 = pfVar25[1];
      fVar12 = pfVar20[4];
      fVar13 = *pfVar25;
      fVar14 = pfVar20[7];
      sVar17 = *(short *)((int)pfVar20[0xb] + 0x46);
      pfVar22[-2] = *pfVar25;
      pfVar22[-1] = pfVar25[1];
      *pfVar22 = pfVar25[2];
      pfVar22[1] = (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7) / (float)(int)sVar16;
      pfVar22[2] = (fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14) / (float)(int)sVar17
      ;
      pfVar20 = *(float **)(param_1 + 0x34);
      fVar27 = (((float10)*pfVar20 * (float10)*pfVar25 +
                 (float10)pfVar20[1] * (float10)pfVar25[1] +
                 (float10)pfVar20[2] * (float10)pfVar25[2] + (float10)pfVar20[3]) -
               (float10)(int)*(short *)(param_1 + 0x10)) * (float10)0.0625;
      if ((*(int *)(param_1 + 100) != 0) && (bVar15 = *(byte *)(param_1 + 0x6a), bVar15 != 1)) {
        if (bVar15 == 0xff) {
          fVar27 = (float10)0.0;
        }
        else {
          fVar27 = FUN_3002079d((double)(fVar27 / (float10)bVar15));
        }
      }
      iVar19 = *(int *)(param_1 + 0x18);
      iVar21 = *(int *)(param_1 + 0x34);
      fVar28 = (((float10)*(float *)(iVar21 + 0x10) * (float10)*pfVar25 +
                 (float10)*(float *)(iVar21 + 0x14) * (float10)pfVar25[1] +
                 (float10)*(float *)(iVar21 + 0x18) * (float10)pfVar25[2] +
                (float10)*(float *)(iVar21 + 0x1c)) - (float10)(int)*(short *)(param_1 + 0x12)) *
               (float10)0.0625;
      if ((*(int *)(param_1 + 100) != 0) && (bVar15 = *(byte *)(param_1 + 0x6b), bVar15 != 1)) {
        if (bVar15 == 0xff) {
          fVar28 = (float10)0.0;
        }
        else {
          fVar28 = FUN_3002079d((double)(fVar28 / (float10)bVar15));
        }
      }
      iVar21 = *(int *)(param_1 + 0x1c);
      pfVar22[3] = (float)((fVar27 + (float10)iVar19 + (float10)0.5) * (float10)0.0078125);
      local_1c = (float)((int)local_1c + 1);
      pfVar22[4] = (float)((fVar28 + (float10)iVar21 + (float10)0.5) * (float10)0.0078125);
      pfVar22 = pfVar22 + 7;
    } while ((int)local_1c < (int)uVar26);
  }
  local_20 = 4096.0;
  fVar1 = -4096.0;
  local_18 = 4096.0;
  local_1c = -4096.0;
  if (*(float *)(DAT_3008fff8 + 0x18) != 0.0) {
    if (uVar26 != 0) {
      pfVar22 = (float *)(puVar24 + 6);
      uVar23 = uVar26;
      do {
        if (pfVar22[-1] < local_20) {
          local_20 = pfVar22[-1];
        }
        if (fVar1 < pfVar22[-1]) {
          fVar1 = pfVar22[-1];
        }
        if (*pfVar22 < local_18) {
          local_18 = *pfVar22;
        }
        if (local_1c < *pfVar22) {
          local_1c = *pfVar22;
        }
        pfVar22 = pfVar22 + 7;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    fVar27 = FUN_3002079d((double)((fVar1 + local_20) * 0.5));
    fVar28 = FUN_3002079d((double)((local_1c + local_18) * 0.5));
    if (uVar26 != 0) {
      pfVar22 = (float *)(puVar24 + 6);
      do {
        uVar26 = uVar26 - 1;
        pfVar22[-1] = pfVar22[-1] - (float)fVar27;
        *pfVar22 = *pfVar22 - (float)fVar28;
        pfVar22 = pfVar22 + 7;
      } while (uVar26 != 0);
      return;
    }
  }
  return;
}

