// rea decompile_all
// name: FUN_30012990
// address: 0x30012990
// body: available
// range: 0x30012990-0x30012d4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30012990(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  undefined4 *puVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  ulonglong uVar10;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  if (*(int *)(DAT_3008fb98 + 0x18) != 0x40400000) {
    local_10 = *param_2 - DAT_3008fd04;
    local_c = param_2[1] - DAT_3008fd08;
    local_8 = (float)((float10)param_2[2] - (float10)DAT_3008fd0c);
    fVar9 = (float10)local_10 * (float10)local_10 +
            (float10)local_c * (float10)local_c +
            ((float10)param_2[2] - (float10)DAT_3008fd0c) * (float10)local_8;
    fVar1 = (float)fVar9;
    if ((*(int *)(DAT_3008fb94 + 0x2c) != param_1) && (0 < *(int *)(param_1 + 0x4c))) {
      pcVar6 = (char *)(param_1 + 0x44);
      puVar7 = (undefined4 *)(param_1 + 0x2c);
      do {
        if (*pcVar6 == '\0') {
          pfVar2 = (float *)*puVar7;
          fVar5 = (DAT_3008fd04 * *pfVar2 + DAT_3008fd08 * pfVar2[1] + DAT_3008fd0c * pfVar2[2]) -
                  pfVar2[3];
          fVar4 = pfVar2[3] - (*param_2 * *pfVar2 + pfVar2[1] * param_2[1] + pfVar2[2] * param_2[2])
          ;
          if ((((fVar5 < 0.0) && (0.0 < fVar4)) || ((0.0 < fVar5 && (fVar4 < 0.0)))) ||
             (fVar4 = (fVar1 * fVar4 * fVar4) / (fVar5 * fVar5 + fVar4 * fVar4), fVar4 == -1.0)) {
            *pcVar6 = '\x01';
          }
          else if ((float10)fVar4 < fVar9) {
            fVar9 = (float10)fVar4;
          }
        }
        puVar7 = puVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while ((int)(pcVar6 + (-0x44 - param_1)) < *(int *)(param_1 + 0x4c));
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    if ((uVar3 & 1) != 0) {
      uVar10 = __ftol();
      fVar9 = extraout_ST0 +
              (float10)*(float *)(param_1 + 0x54 +
                                 (int)((longlong)
                                       ((ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 |
                                       uVar10 & 0xffffffff) % 10) * 4);
    }
    if ((float10)0.0 <= fVar9 - (float10)_DAT_300a1644) {
      fVar9 = (fVar9 - (float10)_DAT_300a1644) / (float10)_DAT_300a1648;
      if ((float10)_DAT_300a163c < fVar9) {
        fVar9 = (float10)_DAT_300a163c;
      }
    }
    else {
      fVar9 = (float10)0.0;
    }
    if ((uVar3 & 2) != 0) {
      fVar8 = ((float10)*(float *)(param_1 + 0xe0) - (float10)param_2[2]) /
              (float10)*(float *)(param_1 + 0xec);
      fVar9 = fVar8 * fVar8 * fVar9;
    }
    fVar9 = fVar9 * (float10)0.003921569;
    if ((float10)0.01 < fVar9) {
      if ((float10)1.0 < fVar9) {
        fVar9 = (float10)1.0;
      }
      if (param_4 != (float *)0x0) {
        *param_4 = (float)fVar9;
      }
      DAT_300a46e0 = DAT_300a46e0 | 0x10;
      DAT_300a46c0 = 0x46180400;
      DAT_300a4214 = 0;
      DAT_300a4768 = (float)(ABS((float10)DAT_3008fd7c * (float10)local_10 +
                                 (float10)DAT_3008fd80 * (float10)local_c +
                                 (float10)DAT_3008fd84 * (float10)local_8) / fVar9);
      if (((byte)DAT_300a4588 & 0x10) != 0) {
        *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
      }
      switch(param_3) {
      case 0:
        local_10 = (float)(_DAT_300a1650 & 0xff) * 0.003921569;
        local_c = (float)(_DAT_300a1650 >> 8 & 0xff) * 0.003921569;
        local_8 = (float)DAT_300a1652 * 0.003921569;
        local_4 = 0x3f800000;
        break;
      case 1:
      case 2:
        local_4 = 0x3f800000;
        local_8 = 0.0;
        local_c = 0.0;
        local_10 = 0.0;
        break;
      case 3:
        local_10 = (float)(_DAT_300a1650 & 0xff) * 0.003921569;
        local_c = (float)(_DAT_300a1650 >> 8 & 0xff) * 0.003921569;
        local_8 = (float)DAT_300a1652 * 0.003921569;
        local_4 = 0;
      }
      DAT_300a4504 = local_4;
      DAT_300a44f8 = local_10;
      DAT_300a44fc = local_c;
      DAT_300a4500 = local_8;
      return;
    }
  }
  return;
}

