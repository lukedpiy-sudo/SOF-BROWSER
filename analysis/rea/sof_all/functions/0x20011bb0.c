// rea decompile_all
// name: FUN_20011bb0
// address: 0x20011bb0
// body: available
// range: 0x20011bb0-0x20011ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20011bb0(void)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 local_100;
  short local_fc;
  short local_fa;
  short local_f8;
  short local_f2;
  byte local_f0;
  uint local_e4 [2];
  undefined2 local_da;
  undefined2 local_d8;
  short sStack_d6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_10;
  code *local_c;
  undefined1 *local_8;
  
  iVar6 = DAT_201c23f4;
  if (((DAT_201c1f00 == 8) && (*(float *)(DAT_202250a8 + 0x18) == 0.0)) &&
     (DAT_201e7f58._3_1_ == '\0')) {
    if ((*(float *)(DAT_20225098 + 0x18) == 0.0) || ((char)DAT_201e7ea4 < '\0')) {
      psVar4 = &DAT_201e7ea8;
      pfVar7 = (float *)&DAT_201e7e48;
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 1;
        *pfVar7 = (float)(int)sVar1 * 0.005493164 + pfVar7[0x459];
        pfVar7 = pfVar7 + 1;
      } while ((int)psVar4 < 0x201e7eae);
    }
    else {
      if ((int)(DAT_201c23f4 - DAT_201c23e8) < 0x40) {
        puVar9 = &local_100;
        for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        local_10 = FUN_20011a60;
        local_c = FUN_20011b00;
        local_8 = &LAB_20011b80;
        puVar9 = &DAT_201e7e94;
        puVar11 = &local_100;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        DAT_201c1f00 = 8;
        DAT_201e7f58._3_1_ = 0;
        uVar8 = DAT_201c23e8;
        while( true ) {
          uVar2 = uVar8 + 1;
          if (iVar6 <= (int)uVar2) {
            iVar6 = (int)local_f8 - (int)*(short *)(&DAT_201e7cb8 + (uVar8 - 1 & 0x3f) * 6);
            if (((0x3f < iVar6) && (iVar6 < 0xa0)) && ((local_f0 & 4) != 0)) {
              _DAT_201e7e34 = (float)iVar6 * 0.125;
              DAT_201e7e38 = __ftol();
            }
            DAT_201e7e48 = local_44;
            DAT_201e7e4c = local_40;
            _DAT_201e7e50 = local_3c;
            DAT_201e7e3c = (float)(int)local_fc * 0.125;
            DAT_201e7e40 = (float)(int)local_fa * 0.125;
            _DAT_201e7e44 = (float)(int)local_f8 * 0.125;
            return;
          }
          puVar10 = (uint *)(&DAT_201e75b4 + (uVar2 & 0x3f) * 0x18);
          puVar12 = local_e4;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          if (((local_e4[0] & 0x2000) != 0) && ((DAT_201e7ea4 & 0x40) == 0)) {
            sStack_d6 = sStack_d6 * 2;
          }
          local_da = __ftol();
          local_d8 = __ftol();
          bVar3 = (byte)local_e4[0];
          uVar8 = local_e4[0] & 0xff;
          if (((byte)local_e4[0] < 0x22) || (local_f2 == 0)) break;
          local_e4[0]._0_1_ = (char)((ulonglong)uVar8 % 10) + 10;
          for (uVar8 = uVar8 / 10; uVar8 != 0; uVar8 = uVar8 - 1) {
LAB_20011d74:
            FUN_20054750(&local_100);
            local_e4[0]._0_1_ = 10;
          }
          local_e4[0] = CONCAT31(local_e4[0]._1_3_,bVar3);
          iVar5 = (uVar2 & 0x3f) * 6;
          *(short *)(&DAT_201e7cb4 + iVar5) = local_fc;
          *(short *)(&DAT_201e7cb6 + iVar5) = local_fa;
          *(short *)(&DAT_201e7cb8 + iVar5) = local_f8;
          uVar8 = uVar2;
        }
        uVar8 = 1;
        goto LAB_20011d74;
      }
      if (*(float *)(DAT_201e7550 + 0x18) != 0.0) {
        Com_Printf(s_exceeded_CMD_BACKUP_2011f3e8);
        return;
      }
    }
  }
  return;
}

