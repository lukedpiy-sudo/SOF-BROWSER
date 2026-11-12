// rea decompile_all
// name: FUN_2004aed0
// address: 0x2004aed0
// body: available
// range: 0x2004aed0-0x2004b345 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004aed0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  MMRESULT MVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar10;
  float10 extraout_ST1_02;
  
  if (DAT_203646d8 != 1) {
    FUN_2004ab80();
    DAT_203646d8 = 1;
  }
  uVar2 = DAT_20364750;
  if ((*(float *)(DAT_2036464c + 0x18) != 0.0) && (*(float *)(DAT_20364644 + 0x18) != 0.0)) {
    puVar7 = &DAT_203646e0;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    DAT_203646e0 = 0x34;
    DAT_203646e4 = uVar2;
    MVar4 = joyGetPosEx(DAT_20364744,(LPJOYINFOEX)&DAT_203646e0);
    if (MVar4 == 0) {
      uVar5 = __ftol();
      if (uVar5 == (DAT_2015ec50 & 1)) {
        fVar8 = (float10)1.0;
      }
      else {
        fVar8 = (float10)2.0;
      }
      iVar6 = 0;
      fVar9 = (float10)DAT_201c1f10 * fVar8;
      do {
        fVar1 = (float)(((float10)**(uint **)((int)&DAT_20364620 + iVar6) - (float10)32768.0) *
                       (float10)3.0517578125e-05);
        switch(*(undefined4 *)((int)&DAT_20364600 + iVar6)) {
        case 1:
          if ((*(float *)(DAT_203646c0 + 0x18) == 0.0) && (DAT_20364764 != '\0')) {
            if (*(float *)(DAT_20364714 + 0x18) < ABS(fVar1)) {
              if (0.0 <= *(float *)(DAT_201c1ef8 + 0x18)) {
                fVar10 = (float10)fVar1 * (float10)*(float *)(DAT_20364758 + 0x18) *
                         (float10)*(float *)(DAT_2015ee0c + 0x18) * fVar9 + (float10)DAT_201e8fac;
              }
              else {
                fVar10 = (float10)DAT_201e8fac -
                         (float10)fVar1 * (float10)*(float *)(DAT_20364758 + 0x18) *
                         (float10)*(float *)(DAT_2015ee0c + 0x18) * fVar9;
              }
              goto LAB_2004b329;
            }
          }
          else if (*(float *)(DAT_203646bc + 0x18) < ABS(fVar1)) {
            uVar3 = __ftol();
            *(undefined2 *)(param_1 + 10) = uVar3;
            fVar9 = extraout_ST0;
            fVar8 = extraout_ST1;
          }
          break;
        case 2:
          if ((DAT_20364764 != '\0') && (*(float *)(DAT_20364714 + 0x18) < ABS(fVar1))) {
            fVar10 = (float10)DAT_201e8fe8 * (float10)0.010526315789473684 *
                     ((float10)DAT_201e8fe8 + (float10)85.0) * (float10)0.005555555555555556;
            if (*(int *)((int)&DAT_203645e8 + iVar6) == 0) {
              fVar10 = fVar9 * fVar10 * (float10)*(float *)(DAT_20364758 + 0x18) * (float10)fVar1 *
                               (float10)*(float *)(DAT_2015ee0c + 0x18);
            }
            else {
              fVar10 = fVar8 * fVar10 * (float10)*(float *)(DAT_20364758 + 0x18) * (float10)fVar1 *
                       (float10)180.0;
            }
            fVar10 = fVar10 + (float10)DAT_201e8fac;
LAB_2004b329:
            DAT_201e8fac = (float)fVar10;
          }
          break;
        case 3:
          if (*(float *)(DAT_203646dc + 0x18) < ABS(fVar1)) {
            DAT_2015ed84 = 0;
            DAT_2015edcc = 0;
            if (DAT_2015ec9c == '\0') {
              uVar3 = __ftol();
              *(undefined2 *)(param_1 + 0xc) = uVar3;
              fVar9 = extraout_ST0_00;
              fVar8 = extraout_ST1_00;
            }
            else if (fVar1 <= 0.0) {
              if (fVar1 < 0.0) {
                DAT_2015ed84 = 1;
              }
            }
            else {
              DAT_2015edcc = 1;
            }
          }
          break;
        case 4:
          if (((DAT_2015edb0 & 1) == 0) &&
             ((*(float *)(DAT_201e7570 + 0x18) == 0.0 || (DAT_20364764 == '\0')))) {
            if (*(float *)(DAT_203646c8 + 0x18) < ABS(fVar1)) {
              fVar10 = (float10)DAT_201e8fe8 * (float10)0.010526315789473684 *
                       ((float10)DAT_201e8fe8 + (float10)85.0) * (float10)0.005555555555555556;
              if (*(int *)((int)&DAT_203645e8 + iVar6) == 0) {
                DAT_201e8fb0 = (float)(fVar9 * fVar10 * (float10)*(float *)(DAT_203646b8 + 0x18) *
                                               (float10)fVar1 *
                                               (float10)*(float *)(DAT_2015ecc4 + 0x18) +
                                      (float10)DAT_201e8fb0);
              }
              else {
                DAT_201e8fb0 = (float)(fVar8 * fVar10 * (float10)*(float *)(DAT_203646b8 + 0x18) *
                                               (float10)fVar1 * (float10)180.0 +
                                      (float10)DAT_201e8fb0);
              }
            }
          }
          else if (*(float *)(DAT_203646dc + 0x18) < ABS(fVar1)) {
            uVar3 = __ftol();
            *(undefined2 *)(param_1 + 0xc) = uVar3;
            fVar9 = extraout_ST0_02;
            fVar8 = extraout_ST1_02;
          }
          break;
        case 5:
          if (*(float *)(DAT_20364618 + 0x18) < ABS(fVar1)) {
            uVar3 = __ftol();
            *(undefined2 *)(param_1 + 0xe) = uVar3;
            fVar9 = extraout_ST0_01;
            fVar8 = extraout_ST1_01;
          }
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x18);
    }
  }
  return;
}

