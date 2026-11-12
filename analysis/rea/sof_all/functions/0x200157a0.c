// rea decompile_all
// name: FUN_200157a0
// address: 0x200157a0
// body: available
// range: 0x200157a0-0x20015b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200157a0(int param_1)

{
  float fVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  char *local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [3];
  int local_a4;
  float local_a0;
  int local_9c;
  uint local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [12];
  float *local_40;
  undefined1 local_38 [56];
  
  iVar8 = 0;
  fVar10 = (float10)fcos((float10)DAT_201e7f28 * (float10)0.00872664626);
  DAT_20224ff8 = 0;
  local_a0 = (float)fVar10;
  FUN_20054b30(&DAT_201e7e48,&local_94,0,0);
  psVar3 = &DAT_201e7e98;
  iVar4 = 0;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
    *(float *)((int)local_b0 + iVar4) =
         (float)(int)sVar2 * 0.125 + *(float *)((int)&DAT_201e7ebc + iVar4);
    iVar4 = iVar4 + 4;
  } while ((int)psVar3 < 0x201e7e9e);
  local_88 = 0xbf800000;
  local_84 = 0xbf800000;
  local_80 = 0xbf800000;
  local_7c = 0x3f800000;
  local_78 = 0x3f800000;
  local_74 = 0x3f800000;
  iVar4 = FUN_200f9e9e(&DAT_201e9c8c);
  local_9c = iVar4;
  iVar5 = FUN_200f9e9e(&DAT_201e9d0c);
  local_98 = (uint)(iVar5 != 0);
  if (0 < iVar4) {
    pfVar7 = (float *)(&DAT_2015f104 + param_1 * 0x18c);
    local_cc = &DAT_201ff68c;
    do {
      if ((*local_cc != '\0') && (pfVar7[-3] != (float)(DAT_201e94c4 + 1))) {
        local_c8 = pfVar7[-2];
        local_a4 = ((uint)*(byte *)((int)pfVar7 + 0x2f) - (uint)*(byte *)((int)pfVar7 + 0x2e)) +
                   -0x80;
        local_c4 = pfVar7[-1];
        local_c0 = (float)local_a4 * 0.5 + *pfVar7;
        local_bc = local_c8 - local_b0[0];
        local_b8 = local_c4 - local_b0[1];
        local_b4 = local_c0 - local_b0[2];
        fVar10 = (float10)VectorNormalize(&local_bc);
        if ((fVar10 <= (float10)1024.0) &&
           ((local_a0 <= local_bc * local_94 + local_90 * local_b8 + local_8c * local_b4 &&
            (iVar4 = FUN_2001c370(local_b0,&local_c8), iVar4 != 0)))) {
          if (pfVar7[0x40] <= pfVar7[0x41]) {
            if (pfVar7[0x41] <= pfVar7[0x42]) goto LAB_200159c0;
            fVar1 = pfVar7[0x41];
          }
          else if (pfVar7[0x40] <= pfVar7[0x42]) {
LAB_200159c0:
            fVar1 = pfVar7[0x42];
          }
          else {
            fVar1 = pfVar7[0x40];
          }
          if (fVar1 < 0.2) {
            if (local_98 != 0) {
              if ((DAT_201e94c8 == 4) || (DAT_201e94c8 == 6)) {
                if ((&DAT_20222068)[DAT_201e94c4 * 0x15c] ==
                    (&DAT_20221f0c)[(int)pfVar7[-3] * 0x15c]) goto LAB_20015a85;
              }
              else {
                iVar4 = __strcmpi(&DAT_20221f5c + DAT_201e94c4 * 0x15c,
                                  &DAT_20221e00 + (int)pfVar7[-3] * 0x15c);
                if (iVar4 == 0) goto LAB_20015a85;
              }
              goto LAB_20015ae3;
            }
            iVar4 = FUN_200f9e9e(&DAT_201e9d4c);
            if (iVar4 == 0) goto LAB_20015ae3;
          }
LAB_20015a85:
          puVar6 = (undefined4 *)FUN_20011a60(local_38,local_b0,&local_88,&local_7c,&local_c8);
          puVar9 = local_70;
          for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
          }
          if ((1 < (int)local_40) && (*local_40 == pfVar7[-3])) {
            DAT_20224ff8 = DAT_20224ff8 | 1 << ((byte)iVar8 & 0x1f);
          }
        }
      }
LAB_20015ae3:
      iVar8 = iVar8 + 1;
      local_cc = local_cc + 0x40;
      pfVar7 = pfVar7 + 99;
    } while (iVar8 < local_9c);
  }
  return;
}

