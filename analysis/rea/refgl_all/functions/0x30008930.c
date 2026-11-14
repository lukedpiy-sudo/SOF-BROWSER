// rea decompile_all
// name: FUN_30008930
// address: 0x30008930
// body: available
// range: 0x30008930-0x30008c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_30008930(int *param_1,float *param_2,float *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float local_c;
  float local_8;
  float local_4;
  
  if (*param_1 != -1) {
    return -1;
  }
  pfVar11 = (float *)param_1[9];
  fVar5 = (*pfVar11 * *param_2 + param_2[1] * pfVar11[1] + param_2[2] * pfVar11[2]) - pfVar11[3];
  fVar7 = (param_3[1] * pfVar11[1] + *pfVar11 * *param_3 + param_3[2] * pfVar11[2]) - pfVar11[3];
  uVar14 = (uint)(0.0 > fVar5);
  if (fVar7 < 0.0 == uVar14) {
    iVar8 = FUN_30008930((int *)param_1[uVar14 + 10],param_2,param_3);
    return iVar8;
  }
  fVar6 = fVar5 / (fVar5 - fVar7);
  local_c = (*param_3 - *param_2) * fVar6 + *param_2;
  local_8 = (param_3[1] - param_2[1]) * fVar6 + param_2[1];
  local_4 = (param_3[2] - param_2[2]) * fVar6 + param_2[2];
  iVar8 = FUN_30008930((int *)param_1[uVar14 + 10],param_2,&local_c);
  if (iVar8 < 0) {
    if (fVar7 < 0.0 == uVar14) {
      return -1;
    }
    _DAT_3004c634 = local_4;
    _DAT_3004c62c = local_c;
    _DAT_3004c630 = local_8;
    param_2 = (float *)0x0;
    uVar4 = *(ushort *)((int)param_1 + 0x3a);
    iVar8 = *(int *)(DAT_3008fc6c + 0xb8) + (uint)*(ushort *)(param_1 + 0xe) * 0x6c;
    _DAT_3004c63c = pfVar11;
    if (uVar4 != 0) {
      do {
        if ((*(uint *)(*(int *)(iVar8 + 0x34) + 0x20) & 0x80c) == 0) {
          lVar15 = __ftol();
          lVar16 = __ftol();
          if (((int)*(short *)(iVar8 + 0x10) <= (int)lVar15) &&
             ((int)*(short *)(iVar8 + 0x12) <= (int)lVar16)) {
            iVar13 = (int)lVar15 - (int)*(short *)(iVar8 + 0x10);
            iVar9 = (int)lVar16 - (int)*(short *)(iVar8 + 0x12);
            if ((iVar13 <= *(short *)(iVar8 + 0x14)) && (iVar9 <= *(short *)(iVar8 + 0x16))) {
              iVar12 = *(int *)(iVar8 + 100);
              if (iVar12 == 0) {
                return 0;
              }
              if (*(byte *)(iVar8 + 0x6a) == 0xff) {
                iVar9 = 0;
                iVar13 = 0;
              }
              else {
                iVar13 = (int)(CONCAT44(iVar13 >> 0x1f,iVar13 >> 4) /
                              (longlong)(int)(uint)*(byte *)(iVar8 + 0x6a));
                iVar9 = (iVar9 >> 4) / (int)(uint)*(byte *)(iVar8 + 0x6b);
              }
              DAT_3004c620 = 0;
              DAT_3004c624 = 0;
              _DAT_3004c628 = 0;
              if (iVar12 == 0) {
                DAT_3004c620 = 0;
                DAT_3004c624 = 0;
                _DAT_3004c628 = 0;
                return 1;
              }
              bVar2 = *(byte *)(iVar8 + 0x69);
              bVar3 = *(byte *)(iVar8 + 0x68);
              fVar5 = _DAT_3008fff4 * 0.003921569;
              iVar12 = iVar12 + ((uint)bVar3 * iVar9 + iVar13) * 3;
              pbVar10 = (byte *)(iVar8 + 0x50);
              goto LAB_30008c06;
            }
          }
        }
        iVar8 = iVar8 + 0x6c;
        param_2 = (float *)((int)param_2 + 1);
      } while ((int)param_2 < (int)(uint)uVar4);
    }
    iVar8 = FUN_30008930((int *)param_1[(0.0 <= fVar5) + 10],&local_c,param_3);
  }
  return iVar8;
  while( true ) {
    iVar9 = 0;
    do {
      pbVar1 = (byte *)(iVar12 + iVar9);
      iVar13 = iVar9 + (uint)*pbVar10 * 4;
      iVar9 = iVar9 + 1;
      *(float *)(iVar9 * 4 + 0x3004c61c) =
           (float)*pbVar1 * *(float *)(DAT_3008fd44 + iVar13 * 4) * fVar5 +
           *(float *)(iVar9 * 4 + 0x3004c61c);
    } while (iVar9 < 3);
    pbVar10 = pbVar10 + 1;
    iVar12 = (uint)bVar2 * (uint)bVar3 * 3 + iVar12;
    if (3 < (int)(pbVar10 + (-0x50 - iVar8))) break;
LAB_30008c06:
    if (*pbVar10 == 0xff) break;
  }
  pfVar11 = (float *)&DAT_3004c620;
  do {
    if (1.0 < *pfVar11) {
      *pfVar11 = 1.0;
    }
    pfVar11 = pfVar11 + 1;
  } while ((int)pfVar11 < 0x3004c62c);
  return 1;
}

