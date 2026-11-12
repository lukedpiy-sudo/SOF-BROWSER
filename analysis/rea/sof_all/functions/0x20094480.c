// rea decompile_all
// name: FUN_20094480
// address: 0x20094480
// body: available
// range: 0x20094480-0x200950a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20094480(void)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  float *pfVar4;
  char *in_ECX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float fStack_140;
  float *pfStack_13c;
  float fStack_138;
  float fStack_134;
  float *pfStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined4 *puStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 *puStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 *puStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  float *pfStack_b8;
  char *pcStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_90;
  float fStack_8c;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_10;
  float *pfStack_8;
  
  if ((*in_ECX != '\0') && (*(int *)(in_ECX + 0xfc) != 100000)) {
    uStack_a8 = 0x46040000;
    uStack_ac = 0x2200;
    iStack_b0 = 0x2300;
    pcStack_b4 = (char *)0x200944bc;
    (*(code *)DAT_20403c04[0x1e])();
    pcStack_b4 = in_ECX + 0x28;
    *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0xfc) + -1;
    *(int *)(in_ECX + 0x104) = *(int *)(in_ECX + 0x104) + -1;
    *(int *)(in_ECX + 0x100) = *(int *)(in_ECX + 0x100) + 1;
    *(int *)(in_ECX + 0x108) = *(int *)(in_ECX + 0x108) + 1;
    uStack_10 = 0;
    pfStack_b8 = (float *)0x20094508;
    FUN_200a0660();
    fStack_90 = *(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x10);
    fStack_8c = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x14);
    if (DAT_20404c8d != '\0') {
      fStack_90 = fStack_90 + *pfStack_8;
      fStack_8c = fStack_8c + pfStack_8[1];
    }
    pcStack_b4 = &stack0xffffff64;
    pfStack_b8 = &fStack_84;
    pcStack_bc = (char *)0x20094587;
    FUN_200a1410();
    fStack_84 = fStack_84 + fStack_90;
    uStack_7c = *(undefined4 *)(in_ECX + 4);
    pcStack_b4 = &stack0xffffff64;
    pfStack_b8 = &fStack_78;
    fStack_80 = fStack_80 + fStack_8c;
    pcStack_bc = (char *)0x200945df;
    FUN_200a1410();
    fStack_78 = fStack_78 + fStack_90;
    uStack_70 = *(undefined4 *)(in_ECX + 4);
    pcStack_b4 = &stack0xffffff64;
    pfStack_b8 = &fStack_6c;
    fStack_74 = fStack_74 + fStack_8c;
    pcStack_bc = (char *)0x20094639;
    FUN_200a1410();
    fStack_6c = fStack_6c + fStack_90;
    uStack_64 = *(undefined4 *)(in_ECX + 4);
    fStack_68 = fStack_68 + fStack_8c;
    pcStack_b4 = &stack0xffffff64;
    pfStack_b8 = &fStack_60;
    pcStack_bc = (char *)0x20094693;
    FUN_200a1410();
    fStack_60 = fStack_60 + fStack_90;
    uStack_58 = *(undefined4 *)(in_ECX + 4);
    pcVar7 = in_ECX + 0xb8;
    fStack_5c = fStack_5c + fStack_8c;
    if (*(int *)(in_ECX + 0xb8) == -1) {
      pcStack_b4 = (char *)0x1;
      pfStack_b8 = (float *)0xcf5;
      pcStack_bc = (char *)0x200946d7;
      (*(code *)DAT_20403c04[0x17])();
      pcStack_bc = pcVar7;
      if (in_ECX[0x130] == '\0') {
        uStack_c0 = 1;
        uStack_c4 = 0x20094794;
        (*(code *)DAT_20403c04[0xf])();
        uStack_c4 = *(undefined4 *)pcVar7;
        uStack_c8 = 0xde1;
        uStack_cc = 0x200947a4;
        (*(code *)DAT_20403c04[2])();
        uStack_cc = 0x2900;
        uStack_d0 = 0x2802;
        uStack_d4 = 0xde1;
        uStack_d8 = 0x200947bf;
        (*(code *)DAT_20403c04[0x20])();
        uStack_d8 = 0x2900;
        uStack_dc = 0x2803;
        uStack_e0 = 0xde1;
        fStack_e4 = 1.1628125e-19;
        (*(code *)DAT_20403c04[0x20])();
        fStack_e4 = 1.36332e-41;
        iStack_e8 = 0x2800;
        uStack_ec = 0xde1;
        uStack_f0 = 0x200947f4;
        (*(code *)DAT_20403c04[0x20])();
        uStack_f0 = 0x2601;
        fStack_f4 = 1.43507e-41;
        fStack_f8 = 4.97881e-42;
        (*(code *)DAT_20403c04[0x20])();
        fStack_100 = 1.1628206e-19;
        pvVar2 = operator_new(0x1000);
        *(void **)(in_ECX + 0xb0) = pvVar2;
        iStack_e8 = -0x20;
        do {
          iVar6 = -0x20;
          iVar5 = iStack_e8 * 0x40;
          do {
            iVar8 = __ftol();
            if (iVar8 < 0x100) {
              if (iVar8 < 0) {
                iVar8 = 0;
              }
            }
            else {
              iVar8 = 0xff;
            }
            iVar6 = iVar6 + 1;
            *(char *)(*(int *)(in_ECX + 0xb0) + iVar5 + 0x81f + iVar6) = (char)iVar8;
          } while (iVar6 < 0x20);
          iStack_e8 = iStack_e8 + 1;
        } while (iStack_e8 < 0x20);
        fStack_100 = 7.17605e-42;
        fStack_104 = 8.97672e-42;
        puStack_108 = (undefined4 *)0x0;
        fStack_10c = 8.96831e-44;
        fStack_110 = 8.96831e-44;
        puStack_114 = (undefined4 *)0x1906;
        fStack_118 = 0.0;
        fStack_11c = 4.97881e-42;
        puStack_120 = (undefined4 *)0x200948ce;
        (*(code *)DAT_20403c04[0x1f])();
        uStack_c4 = *(undefined4 *)(in_ECX + 0xb0);
        uStack_c8 = 0x200948da;
        FUN_200f9f75();
        in_ECX[0xb0] = '\0';
        in_ECX[0xb1] = '\0';
        in_ECX[0xb2] = '\0';
        in_ECX[0xb3] = '\0';
        in_ECX[0xf8] = '\0';
        in_ECX[0xf9] = '\0';
        in_ECX[0xfa] = '\0';
        in_ECX[0xfb] = '\0';
      }
      else {
        uStack_c0 = 0x10;
        uStack_c4 = 0x200946f0;
        (*(code *)DAT_20403c04[0xf])();
        iVar5 = 0x10;
        do {
          uStack_c4 = *(undefined4 *)pcVar7;
          uStack_c8 = 0xde1;
          uStack_cc = 0x20094706;
          (*(code *)DAT_20403c04[2])();
          uStack_cc = 0x2900;
          uStack_d0 = 0x2802;
          uStack_d4 = 0xde1;
          uStack_d8 = 0x20094720;
          (*(code *)DAT_20403c04[0x20])();
          uStack_d8 = 0x2900;
          uStack_dc = 0x2803;
          uStack_e0 = 0xde1;
          fStack_e4 = 1.162792e-19;
          (*(code *)DAT_20403c04[0x20])();
          fStack_e4 = 1.36332e-41;
          iStack_e8 = 0x2800;
          uStack_ec = 0xde1;
          uStack_f0 = 0x20094756;
          (*(code *)DAT_20403c04[0x20])();
          uStack_f0 = 0x2601;
          fStack_f4 = 1.43507e-41;
          fStack_f8 = 4.97881e-42;
          (*(code *)DAT_20403c04[0x20])();
          pcVar7 = pcVar7 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        in_ECX[0xf8] = '\x0f';
        in_ECX[0xf9] = '\0';
        in_ECX[0xfa] = '\0';
        in_ECX[0xfb] = '\0';
      }
    }
    else {
      pcStack_b4 = *(char **)(in_ECX + *(int *)(in_ECX + 0xf8) * 4 + 0xb8);
      pfStack_b8 = (float *)0xde1;
      pcStack_bc = (char *)0x20094907;
      (*(code *)DAT_20403c04[2])();
    }
    iVar5 = *(int *)(in_ECX + 0xf8);
    *(int *)(in_ECX + 0xf8) = iVar5 + 1;
    if (((iVar5 + 1 < 0x10) && (in_ECX[0x130] != '\0')) ||
       (in_ECX[0xf8] = '\0', in_ECX[0xf9] = '\0', in_ECX[0xfa] = '\0', in_ECX[0xfb] = '\0',
       in_ECX[0x130] != '\0')) {
      iVar5 = *(int *)(in_ECX + 0x104) + 1;
      if (iVar5 <= *(int *)(in_ECX + 0x108) + -1) {
        iVar6 = (*(int *)(in_ECX + 0x104) + 0x21) * 0x40;
        do {
          if (((-0x20 < iVar5) && (iVar5 < 0x1f)) &&
             (iVar8 = *(int *)(in_ECX + 0xfc) + 1, iVar8 <= *(int *)(in_ECX + 0x100) + -1)) {
            do {
              if ((-0x20 < iVar8) && (iVar8 < 0x1f)) {
                pbVar1 = (byte *)(*(int *)(in_ECX + 0xb0) + iVar6 + 0x20 + iVar8);
                uVar3 = (int)((uint)*(byte *)((iVar5 + 0x20) * 0x40 + *(int *)(in_ECX + 0xb0) + 0x60
                                             + iVar8) + (uint)pbVar1[-0x41] + (uint)pbVar1[0x41] +
                              (uint)pbVar1[-0x40] + (uint)pbVar1[-0x3f] + (uint)pbVar1[0x3f] +
                              (uint)pbVar1[-1] + (uint)pbVar1[1] + (uint)*pbVar1) >> 3;
                if (0xff < uVar3) {
                  uVar3 = 0xff;
                }
                *(char *)(*(int *)(in_ECX + 0xb4) + iVar6 + 0x20 + iVar8) = (char)uVar3;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 <= *(int *)(in_ECX + 0x100) + -1);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x40;
        } while (iVar5 <= *(int *)(in_ECX + 0x108) + -1);
      }
      iStack_b0 = *(int *)(in_ECX + 0x104) + 1;
      if (iStack_b0 <= *(int *)(in_ECX + 0x108) + -1) {
        iVar5 = (*(int *)(in_ECX + 0x104) + 0x21) * 0x40;
        do {
          if (((-0x20 < iStack_b0) && (iStack_b0 < 0x1f)) &&
             (iVar6 = *(int *)(in_ECX + 0xfc) + 1, iVar6 <= *(int *)(in_ECX + 0x100) + -1)) {
            do {
              if ((-0x20 < iVar6) && (iVar6 < 0x1f)) {
                pbVar1 = (byte *)(*(int *)(in_ECX + 0xb4) + iVar5 + 0x20 + iVar6);
                uVar3 = (int)((uint)*(byte *)((iStack_b0 + 0x20) * 0x40 + *(int *)(in_ECX + 0xb4) +
                                              0x60 + iVar6) + (uint)pbVar1[-0x41] +
                              (uint)pbVar1[0x41] + (uint)pbVar1[-0x40] + (uint)pbVar1[-0x3f] +
                              (uint)pbVar1[0x3f] + (uint)pbVar1[-1] + (uint)pbVar1[1] +
                             (uint)*pbVar1) >> 3;
                if (0xff < uVar3) {
                  uVar3 = 0xff;
                }
                *(char *)(*(int *)(in_ECX + 0xb0) + iVar5 + 0x20 + iVar6) = (char)uVar3;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 <= *(int *)(in_ECX + 0x100) + -1);
          }
          iStack_b0 = iStack_b0 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iStack_b0 <= *(int *)(in_ECX + 0x108) + -1);
      }
      uStack_c4 = *(undefined4 *)(in_ECX + 0xb0);
      uStack_c8 = 0x1401;
      uStack_cc = 0x1906;
      uStack_d0 = 0;
      uStack_d4 = 0x40;
      uStack_d8 = 0x40;
      uStack_dc = 0x1906;
      uStack_e0 = 0;
      fStack_e4 = 4.97881e-42;
      iStack_e8 = 0x20094b41;
      (*(code *)DAT_20403c04[0x1f])();
    }
    uStack_c4 = 0xbe2;
    uStack_c8 = 0x20094b4f;
    (*(code *)DAT_20403c04[0xb])();
    uStack_c8 = 0;
    uStack_cc = 0x20094b59;
    (*(code *)DAT_20403c04[8])();
    uStack_cc = 0x303;
    uStack_d0 = 0;
    uStack_d4 = 0x20094b69;
    (*(code *)DAT_20403c04[3])();
    uStack_d4 = 0x8037;
    uStack_d8 = 0x20094b77;
    (*(code *)DAT_20403c04[0xb])();
    uStack_d8 = 0xc0400000;
    uStack_dc = 0xc0400000;
    uStack_e0 = 0x20094b89;
    (*(code *)DAT_20403c04[0x18])();
    uStack_e0 = 0xbc0;
    fStack_e4 = 1.1629362e-19;
    (*(code *)DAT_20403c04[0xb])();
    fStack_e4 = 0.0;
    iStack_e8 = 0x204;
    uStack_ec = 0x20094ba6;
    (*(code *)*DAT_20403c04)();
    uStack_ec = 0x20094bb1;
    (*(code *)DAT_20403c04[0x33])();
    uStack_e0 = 6;
    if (in_ECX[0x130] == '\0') {
      fStack_e4 = 1.1629432e-19;
      (*(code *)DAT_20403c04[1])();
      fStack_e4 = *(float *)(in_ECX + 0xc);
      iStack_e8 = 0x3f800000;
      uStack_ec = 0x3f800000;
      uStack_f0 = 0x3f800000;
      fStack_f4 = 1.1629467e-19;
      (*(code *)DAT_20403c04[5])();
      fStack_f4 = 0.0;
      fStack_f8 = 0.0;
      (*(code *)DAT_20403c04[0x1d])();
      fStack_100 = 1.1629504e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_100 = 1.0;
      fStack_104 = 0.0;
      puStack_108 = (undefined4 *)0x20094c15;
      (*(code *)DAT_20403c04[0x1d])();
      puStack_108 = &uStack_d8;
      fStack_10c = 1.1629545e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_10c = 1.0;
      fStack_110 = 1.0;
      puStack_114 = (undefined4 *)0x20094c38;
      (*(code *)DAT_20403c04[0x1d])();
      puStack_114 = &uStack_d8;
      fStack_118 = 1.1629591e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_118 = 0.0;
      fStack_11c = 1.0;
    }
    else {
      fStack_e4 = 1.1629618e-19;
      (*(code *)DAT_20403c04[1])();
      fStack_e4 = *(float *)(in_ECX + 0xc) * 0.3333;
      iStack_e8 = 0x3f800000;
      uStack_ec = 0x3f800000;
      uStack_f0 = 0x3f800000;
      fStack_f4 = 1.1629664e-19;
      (*(code *)DAT_20403c04[5])();
      fStack_f4 = (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5;
      fStack_f8 = (float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5;
      (*(code *)DAT_20403c04[0x1d])();
      fStack_100 = 1.1629756e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_100 = (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5;
      fStack_104 = (float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5;
      puStack_108 = (undefined4 *)0x20094cff;
      (*(code *)DAT_20403c04[0x1d])();
      puStack_108 = &uStack_d8;
      fStack_10c = 1.1629848e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_10c = (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5;
      fStack_110 = (float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5;
      puStack_114 = (undefined4 *)0x20094d46;
      (*(code *)DAT_20403c04[0x1d])();
      puStack_114 = &uStack_d8;
      fStack_118 = 1.162994e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_118 = (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5;
      fStack_11c = (float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5;
      puStack_120 = (undefined4 *)0x20094d8d;
      (*(code *)DAT_20403c04[0x1d])();
      puStack_120 = &uStack_d8;
      uStack_124 = 0x20094d9d;
      (*(code *)DAT_20403c04[0x26])();
      uStack_124 = 0x20094da6;
      (*(code *)DAT_20403c04[0xc])();
      iVar5 = 4;
      pfVar4 = &fStack_f8;
      do {
        *pfVar4 = *pfVar4;
        iVar5 = iVar5 + -1;
        pfVar4[-2] = pfVar4[-2] - 1.0;
        pfVar4[-1] = pfVar4[-1] - 1.0;
        pfVar4 = pfVar4 + 3;
      } while (iVar5 != 0);
      uStack_124 = 6;
      fStack_128 = 1.1630112e-19;
      (*(code *)DAT_20403c04[1])();
      fStack_128 = (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5;
      fStack_12c = (float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5;
      pfStack_130 = (float *)0x20094e12;
      (*(code *)DAT_20403c04[0x1d])();
      pfStack_130 = &fStack_10c;
      fStack_134 = 1.1630203e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_134 = (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5;
      fStack_138 = (float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5;
      pfStack_13c = (float *)0x20094e59;
      (*(code *)DAT_20403c04[0x1d])();
      pfStack_13c = &fStack_10c;
      fStack_140 = 1.1630295e-19;
      (*(code *)DAT_20403c04[0x26])();
      fStack_140 = (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5;
      (*(code *)DAT_20403c04[0x1d])((float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5);
      (*(code *)DAT_20403c04[0x26])(&fStack_10c);
      (*(code *)DAT_20403c04[0x1d])
                ((float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5,
                 (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5);
      (*(code *)DAT_20403c04[0x26])(&fStack_10c);
      (*(code *)DAT_20403c04[0xc])();
      iVar5 = 4;
      pfVar4 = &fStack_12c;
      do {
        *pfVar4 = *pfVar4;
        iVar5 = iVar5 + -1;
        pfVar4[-2] = pfVar4[-2] + 2.0;
        pfVar4[-1] = pfVar4[-1] + 2.0;
        pfVar4 = pfVar4 + 3;
      } while (iVar5 != 0);
      (*(code *)DAT_20403c04[1])(6);
      (*(code *)DAT_20403c04[0x1d])
                ((float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5,
                 (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5);
      (*(code *)DAT_20403c04[0x26])(&fStack_140);
      (*(code *)DAT_20403c04[0x1d])
                ((float)*(int *)(in_ECX + 0xfc) * 0.015625 + 0.5,
                 (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5);
      (*(code *)DAT_20403c04[0x26])(&fStack_140);
      (*(code *)DAT_20403c04[0x1d])
                ((float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5,
                 (float)*(int *)(in_ECX + 0x108) * 0.015625 + 0.5);
      (*(code *)DAT_20403c04[0x26])(&fStack_140);
      fStack_118 = (float)*(int *)(in_ECX + 0x104) * 0.015625 + 0.5;
      fStack_11c = (float)*(int *)(in_ECX + 0x100) * 0.015625 + 0.5;
    }
    puStack_120 = (undefined4 *)0x20095041;
    (*(code *)DAT_20403c04[0x1d])();
    puStack_120 = &uStack_d8;
    uStack_124 = 0x20095051;
    (*(code *)DAT_20403c04[0x26])();
    uStack_124 = 0x2009505a;
    (*(code *)DAT_20403c04[0xc])();
    uStack_124 = 0xbe2;
    fStack_128 = 1.1630956e-19;
    (*(code *)DAT_20403c04[10])();
    fStack_128 = 1.0804e-42;
    fStack_12c = 1.079e-42;
    pfStack_130 = (float *)0x2009507a;
    (*(code *)DAT_20403c04[3])();
    pfStack_130 = (float *)0x1;
    fStack_134 = 1.1630993e-19;
    (*(code *)DAT_20403c04[8])();
    fStack_134 = 4.59948e-41;
    fStack_138 = 1.1631011e-19;
    (*(code *)DAT_20403c04[10])();
    fStack_138 = 4.21511e-42;
    pfStack_13c = (float *)0x200950a0;
    (*(code *)DAT_20403c04[10])();
  }
  return;
}

