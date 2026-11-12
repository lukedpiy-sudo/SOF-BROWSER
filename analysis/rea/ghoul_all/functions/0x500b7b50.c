// rea decompile_all
// name: FUN_500b7b50
// address: 0x500b7b50
// body: available
// range: 0x500b7b50-0x500b80db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500b7b50(float *param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  uint local_110;
  float local_10c;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  char local_dc [4];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_ac;
  float local_a4 [3];
  float local_98 [8];
  float local_78;
  float afStack_74 [15];
  char cStack_38;
  char cStack_37;
  
  iVar5 = 0;
  local_100 = param_1[0x93];
  local_fc = param_1[0x94];
  local_f8 = param_1[0x95];
  pfVar4 = param_1 + 0x93;
  local_78 = param_1[0x95];
  local_110 = 0;
  local_10c = param_2;
  param_1[0xcc] = 0.0;
  local_104 = 0;
  while( true ) {
    iVar6 = 0;
    pfVar2 = param_1;
    do {
      iVar1 = iVar6 + 1;
      local_98[iVar6 + 3] = local_10c * pfVar2[0x93] + pfVar2[1];
      iVar6 = iVar1;
      pfVar2 = pfVar2 + 1;
    } while (iVar1 < 3);
    if (param_1[0x56] == 7.00649e-45) {
      local_a4[2] = param_1[0x49];
      pfVar2 = local_98;
      pfVar3 = local_a4;
      local_a4[0] = -8.0;
      local_a4[1] = -8.0;
      local_98[0] = 8.0;
      local_98[1] = 8.0;
      local_98[2] = 8.0;
    }
    else {
      pfVar2 = param_1 + 0x4a;
      pfVar3 = param_1 + 0x47;
    }
    (*DAT_5015cac0)(param_1 + 1,pfVar3,pfVar2,local_98 + 3,param_1,param_3,local_dc);
    fVar9 = fStack_ac;
    if (local_dc[0] != '\0') break;
    if (param_1[0x56] == 7.00649e-45) {
      pfVar2 = local_98;
      pfVar3 = local_a4;
    }
    else {
      pfVar2 = param_1 + 0x4a;
      pfVar3 = param_1 + 0x47;
    }
    (*DAT_5015cac0)(&fStack_d4,pfVar3,pfVar2,&fStack_d4,param_1,param_3,&cStack_38);
    if ((cStack_37 != '\0') || (cStack_38 != '\0')) {
      if (((0.0 < fStack_d8) && ((fStack_d8 < 1.0 && (0.7 < fStack_c0)))) &&
         ((*(int *)((int)fVar9 + 0x158) == 3 || (*(int *)((int)fVar9 + 0x158) == 4)))) {
        param_1[0xcc] = fStack_ac;
        param_1[0xcd] = *(float *)((int)fStack_ac + 0x7c);
      }
      FUN_500fe050(pfVar4);
      iVar5 = 3;
      *pfVar4 = *pfVar4 * -1.0;
      param_1[0x94] = param_1[0x94] * -1.0;
      param_1[0x95] = param_1[0x95] * -1.0;
      do {
        fVar7 = (float10)(*DAT_5015cb20)(0xbf800000,0x3f800000);
        iVar5 = iVar5 + -1;
        *pfVar4 = (float)(fVar7 + (float10)*pfVar4);
        pfVar4 = pfVar4 + 1;
      } while (iVar5 != 0);
      return 7;
    }
    iVar6 = iVar5;
    if (0.0 < fStack_d8) {
      param_1[1] = fStack_d4;
      param_1[2] = fStack_d0;
      param_1[3] = fStack_cc;
      local_100 = *pfVar4;
      local_fc = param_1[0x94];
      local_f8 = param_1[0x95];
      iVar6 = 0;
    }
    if (fStack_d8 == 1.0) {
      return local_110;
    }
    if (0.7 < fStack_c0) {
      local_110 = local_110 | 1;
      if ((*(int *)((int)fVar9 + 0x158) == 3) || (*(int *)((int)fVar9 + 0x158) == 4)) {
        param_1[0xcc] = fVar9;
        param_1[0xcd] = *(float *)((int)fVar9 + 0x7c);
        if ((param_1[0x1d] == 0.0) && ((0 < (int)param_1[0xbb] && (param_1[0x95] <= -100.0)))) {
          if (param_1[0x95] <= -200.0) {
            if (param_1[0x95] <= -400.0) {
              uVar8 = 0xc;
            }
            else {
              uVar8 = 0xb;
            }
          }
          else {
            uVar8 = 10;
          }
          FUN_50083bb0((int)param_1,uVar8);
        }
      }
    }
    if (fStack_c0 == 0.0) {
      local_110 = local_110 | 2;
    }
    uVar8 = FUN_500b77d0((int)param_1,(int)local_dc);
    if ((char)uVar8 == '\0') {
      return local_110;
    }
    if (param_1[0x1e] == 0.0) {
      return local_110;
    }
    local_10c = local_10c - fStack_d8 * local_10c;
    if (4 < iVar6) break;
    iVar5 = iVar6 + 1;
    afStack_74[iVar6 * 3] = fStack_c8;
    afStack_74[iVar6 * 3 + 1] = fStack_c4;
    afStack_74[iVar6 * 3 + 2] = fStack_c0;
    if (param_1[0x67] != 1.4013e-45) {
      iVar6 = 0;
      if (0 < iVar5) {
        pfVar2 = afStack_74;
        do {
          if (fStack_d8 == 0.0) {
            fVar9 = 1.1;
          }
          else {
            fVar9 = 1.0;
          }
          FUN_500b7950(&local_100,pfVar2,&fStack_f4,fVar9);
          iVar1 = 0;
          pfVar3 = afStack_74 + 1;
          do {
            if ((iVar1 != iVar6) &&
               (fVar9 = fStack_f0 * *pfVar3 + fStack_f4 * pfVar3[-1] + fStack_ec * pfVar3[1],
               fVar9 < 0.0 != (fVar9 == 0.0))) break;
            iVar1 = iVar1 + 1;
            pfVar3 = pfVar3 + 3;
          } while (iVar1 < iVar5);
          if (iVar1 == iVar5) break;
          iVar6 = iVar6 + 1;
          pfVar2 = pfVar2 + 3;
        } while (iVar6 < iVar5);
      }
      if (iVar6 == iVar5) {
        if (iVar5 != 2) {
          *pfVar4 = DAT_5018bf0c;
          param_1[0x94] = DAT_5018bf10;
          param_1[0x95] = DAT_5018bf14;
          return 7;
        }
        FUN_500fe0f0(afStack_74,afStack_74 + 3,&fStack_e8);
        fVar9 = fStack_e8 * *pfVar4 + fStack_e4 * param_1[0x94] + fStack_e0 * param_1[0x95];
        *pfVar4 = fStack_e8 * fVar9;
        param_1[0x94] = fStack_e4 * fVar9;
        param_1[0x95] = fStack_e0 * fVar9;
      }
      else {
        *pfVar4 = fStack_f4;
        param_1[0x94] = fStack_f0;
        param_1[0x95] = fStack_ec;
      }
    }
    if (local_78 * param_1[0x95] < 0.0) {
      param_1[0x95] = 0.0;
      return local_110;
    }
    local_104 = local_104 + 1;
    if (3 < local_104) {
      return local_110;
    }
  }
  *pfVar4 = DAT_5018bf0c;
  param_1[0x94] = DAT_5018bf10;
  param_1[0x95] = DAT_5018bf14;
  return 3;
}

