// rea decompile_all
// name: FUN_200339c0
// address: 0x200339c0
// body: available
// range: 0x200339c0-0x20034cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200339c0(int param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  if (param_1 != 0) {
    FUN_200335c0(param_1);
  }
  if (param_2 == 0.0) {
    return 0;
  }
  switch(in_ECX[0x6f]) {
  case 0.0:
    return 1;
  case 1.4013e-45:
    fVar1 = param_2 * 10.0 + *in_ECX;
    *in_ECX = fVar1;
    if (in_ECX[1] < fVar1) {
      in_ECX[1] = fVar1;
      return 0;
    }
    break;
  case 2.8026e-45:
    fVar1 = param_2 * 10.0 + in_ECX[1];
    in_ECX[1] = fVar1;
    if (fVar1 < *in_ECX) {
      *in_ECX = fVar1;
      return 0;
    }
    break;
  case 4.2039e-45:
    fVar1 = param_2 * 10.0 + in_ECX[2];
    in_ECX[2] = fVar1;
    if (in_ECX[3] < fVar1) {
      in_ECX[3] = fVar1;
      return 0;
    }
    break;
  case 5.60519e-45:
    fVar1 = param_2 * 10.0 + in_ECX[3];
    in_ECX[3] = fVar1;
    if (fVar1 < in_ECX[2]) {
      in_ECX[2] = fVar1;
      return 0;
    }
    break;
  case 7.00649e-45:
    fVar1 = param_2 * 10.0 + in_ECX[4];
    in_ECX[4] = fVar1;
    if (in_ECX[5] < fVar1) {
      in_ECX[5] = fVar1;
      return 0;
    }
    break;
  case 8.40779e-45:
    fVar1 = param_2 * 10.0 + in_ECX[5];
    in_ECX[5] = fVar1;
    if (fVar1 < in_ECX[4]) {
      in_ECX[4] = fVar1;
      return 0;
    }
    break;
  case 9.80909e-45:
    fVar1 = param_2 * 10.0 + in_ECX[6];
    in_ECX[6] = fVar1;
    if (in_ECX[7] < fVar1) {
      in_ECX[7] = fVar1;
      return 0;
    }
    break;
  case 1.12104e-44:
    fVar1 = param_2 * 10.0 + in_ECX[7];
    in_ECX[7] = fVar1;
    if (fVar1 < in_ECX[6]) {
      in_ECX[6] = fVar1;
      return 0;
    }
    break;
  case 1.26117e-44:
    fVar1 = param_2 * 10.0 + in_ECX[8];
    in_ECX[8] = fVar1;
    if (in_ECX[9] < fVar1) {
      in_ECX[9] = fVar1;
      return 0;
    }
    break;
  case 1.4013e-44:
    fVar1 = param_2 * 10.0 + in_ECX[9];
    in_ECX[9] = fVar1;
    if (fVar1 < in_ECX[8]) {
      in_ECX[8] = fVar1;
      return 0;
    }
    break;
  case 1.54143e-44:
    fVar1 = param_2 * 10.0 + in_ECX[10];
    in_ECX[10] = fVar1;
    if (in_ECX[0xb] < fVar1) {
      in_ECX[0xb] = fVar1;
      return 0;
    }
    break;
  case 1.68156e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0xb];
    in_ECX[0xb] = fVar1;
    if (fVar1 < in_ECX[10]) {
      in_ECX[10] = fVar1;
      return 0;
    }
    break;
  case 1.82169e-44:
    fVar1 = (float)__ftol();
    in_ECX[0xc] = fVar1;
    if ((int)fVar1 < 0) {
      do {
        fVar1 = (float)((int)fVar1 + 5);
      } while ((int)fVar1 < 0);
      in_ECX[0xc] = fVar1;
    }
    fVar1 = in_ECX[0xc];
    if (4 < (int)fVar1) {
      do {
        fVar1 = (float)((int)fVar1 + -5);
      } while (4 < (int)fVar1);
      in_ECX[0xc] = fVar1;
      return 0;
    }
    break;
  case 1.96182e-44:
    param_2 = param_2 + in_ECX[0xd];
    in_ECX[0xd] = param_2;
    if (in_ECX[0xe] < param_2) {
      in_ECX[0xe] = param_2;
    }
    goto LAB_20033c60;
  case 2.10195e-44:
    param_2 = param_2 + in_ECX[0xe];
    in_ECX[0xe] = param_2;
    if (param_2 < in_ECX[0xd]) {
      in_ECX[0xd] = param_2;
    }
LAB_20033c60:
    if (0.0 <= in_ECX[0xd]) {
      if (1000.0 < in_ECX[0xd]) {
        in_ECX[0xd] = 1000.0;
      }
    }
    else {
      in_ECX[0xd] = 0.0;
    }
    if (in_ECX[0xe] < 0.0) {
      in_ECX[0xe] = 0.0;
    }
    if (1000.0 < in_ECX[0xe]) {
      in_ECX[0xe] = 1000.0;
      return 0;
    }
    break;
  case 2.24208e-44:
    param_2 = param_2 + in_ECX[0xf];
    in_ECX[0xf] = param_2;
    if (in_ECX[0x10] < param_2) {
      in_ECX[0x10] = param_2;
    }
    goto LAB_20033cf8;
  case 2.38221e-44:
    param_2 = param_2 + in_ECX[0x10];
    in_ECX[0x10] = param_2;
    if (param_2 < in_ECX[0xf]) {
      in_ECX[0xf] = param_2;
    }
LAB_20033cf8:
    if (0.0 <= in_ECX[0xf]) {
      if (1000.0 < in_ECX[0xf]) {
        in_ECX[0xf] = 1000.0;
      }
    }
    else {
      in_ECX[0xf] = 0.0;
    }
    if (in_ECX[0x10] < 0.0) {
      in_ECX[0x10] = 0.0;
    }
    if (1000.0 < in_ECX[0x10]) {
      in_ECX[0x10] = 1000.0;
      return 0;
    }
    break;
  case 2.52234e-44:
    if (in_ECX[0xc] == 1.4013e-45) {
      fVar1 = (float)__ftol();
      in_ECX[0x15] = fVar1;
      if ((int)fVar1 < 0) {
        do {
          fVar1 = (float)((int)fVar1 + 4);
        } while ((int)fVar1 < 0);
        in_ECX[0x15] = fVar1;
      }
      fVar1 = in_ECX[0x15];
      if (3 < (int)fVar1) {
        do {
          fVar1 = (float)((int)fVar1 + -4);
        } while (3 < (int)fVar1);
        in_ECX[0x15] = fVar1;
        return 0;
      }
    }
    else {
      fVar1 = (float)__ftol();
      in_ECX[0x15] = fVar1;
      if ((int)fVar1 < 0) {
        do {
          fVar1 = (float)((int)fVar1 + 4);
        } while ((int)fVar1 < 0);
        in_ECX[0x15] = fVar1;
      }
      fVar1 = in_ECX[0x15];
      if (3 < (int)fVar1) {
        do {
          fVar1 = (float)((int)fVar1 + -4);
        } while (3 < (int)fVar1);
        in_ECX[0x15] = fVar1;
        return 0;
      }
    }
    break;
  case 2.66247e-44:
    param_2 = param_2 + in_ECX[0x11];
    in_ECX[0x11] = param_2;
    if (in_ECX[0x12] < param_2) {
      in_ECX[0x12] = param_2;
    }
    goto LAB_20033d90;
  case 2.8026e-44:
    param_2 = param_2 + in_ECX[0x12];
    in_ECX[0x12] = param_2;
    if (param_2 < in_ECX[0x11]) {
      in_ECX[0x11] = param_2;
    }
LAB_20033d90:
    if (0.0 <= in_ECX[0x11]) {
      if (1000.0 < in_ECX[0x11]) {
        in_ECX[0x11] = 1000.0;
      }
    }
    else {
      in_ECX[0x11] = 0.0;
    }
    if (in_ECX[0x12] < 0.0) {
      in_ECX[0x12] = 0.0;
    }
    if (1000.0 < in_ECX[0x12]) {
      in_ECX[0x12] = 1000.0;
      return 0;
    }
    break;
  case 2.94273e-44:
    param_2 = param_2 + in_ECX[0x13];
    in_ECX[0x13] = param_2;
    if (in_ECX[0x14] < param_2) {
      in_ECX[0x14] = param_2;
    }
    goto LAB_20033e28;
  case 3.08286e-44:
    param_2 = param_2 + in_ECX[0x14];
    in_ECX[0x14] = param_2;
    if (param_2 < in_ECX[0x13]) {
      in_ECX[0x13] = param_2;
    }
LAB_20033e28:
    if (0.0 <= in_ECX[0x13]) {
      if (1000.0 < in_ECX[0x13]) {
        in_ECX[0x13] = 1000.0;
      }
    }
    else {
      in_ECX[0x13] = 0.0;
    }
    if (in_ECX[0x14] < 0.0) {
      in_ECX[0x14] = 0.0;
    }
    if (1000.0 < in_ECX[0x14]) {
      in_ECX[0x14] = 1000.0;
      return 0;
    }
    break;
  case 3.22299e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0x16];
    in_ECX[0x16] = fVar1;
    if (in_ECX[0x17] < fVar1) {
      in_ECX[0x17] = fVar1;
    }
    goto LAB_20033f3d;
  case 3.36312e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0x17];
    in_ECX[0x17] = fVar1;
    if (fVar1 < in_ECX[0x16]) {
      in_ECX[0x16] = fVar1;
    }
LAB_20033f3d:
    if (1.0 <= in_ECX[0x16]) {
      if (300.0 < in_ECX[0x16]) {
        in_ECX[0x16] = 300.0;
      }
    }
    else {
      in_ECX[0x16] = 1.0;
    }
    if (in_ECX[0x17] < 1.0) {
      in_ECX[0x17] = 1.0;
    }
    if (300.0 < in_ECX[0x17]) {
      in_ECX[0x17] = 300.0;
      return 0;
    }
    break;
  case 3.50325e-44:
    fVar1 = (float)__ftol();
    in_ECX[0x6e] = fVar1;
    if ((int)fVar1 < 0) {
      in_ECX[0x6e] = 0.0;
    }
    if (3 < (int)in_ECX[0x6e]) {
      in_ECX[0x6e] = 4.2039e-45;
      return 0;
    }
    break;
  case 3.64338e-44:
    in_ECX[0x2a] = param_2 * 5.0 + in_ECX[0x2a];
    if (0.0 <= in_ECX[0x2a]) {
      if (255.0 < in_ECX[0x2a]) {
        in_ECX[0x2a] = 255.0;
      }
    }
    else {
      in_ECX[0x2a] = 0.0;
    }
    if (in_ECX[0x2b] < 0.0) {
      in_ECX[0x2b] = 0.0;
    }
    if (255.0 < in_ECX[0x2b]) {
      in_ECX[0x2b] = 255.0;
      return 0;
    }
    break;
  case 3.78351e-44:
    in_ECX[0x2b] = param_2 * 5.0 + in_ECX[0x2b];
    if (0.0 <= in_ECX[0x2a]) {
      if (255.0 < in_ECX[0x2a]) {
        in_ECX[0x2a] = 255.0;
      }
    }
    else {
      in_ECX[0x2a] = 0.0;
    }
    if (in_ECX[0x2b] < 0.0) {
      in_ECX[0x2b] = 0.0;
    }
    if (255.0 < in_ECX[0x2b]) {
      in_ECX[0x2b] = 255.0;
      return 0;
    }
    break;
  case 3.92364e-44:
    in_ECX[0x2c] = param_2 * 5.0 + in_ECX[0x2c];
    if (0.0 <= in_ECX[0x2c]) {
      if (255.0 < in_ECX[0x2c]) {
        in_ECX[0x2c] = 255.0;
      }
    }
    else {
      in_ECX[0x2c] = 0.0;
    }
    if (in_ECX[0x2d] < 0.0) {
      in_ECX[0x2d] = 0.0;
    }
    if (255.0 < in_ECX[0x2d]) {
      in_ECX[0x2d] = 255.0;
      return 0;
    }
    break;
  case 4.06377e-44:
    in_ECX[0x2d] = param_2 * 5.0 + in_ECX[0x2d];
    if (0.0 <= in_ECX[0x2c]) {
      if (255.0 < in_ECX[0x2c]) {
        in_ECX[0x2c] = 255.0;
      }
    }
    else {
      in_ECX[0x2c] = 0.0;
    }
    if (in_ECX[0x2d] < 0.0) {
      in_ECX[0x2d] = 0.0;
    }
    if (255.0 < in_ECX[0x2d]) {
      in_ECX[0x2d] = 255.0;
      return 0;
    }
    break;
  case 4.2039e-44:
    in_ECX[0x2e] = param_2 * 5.0 + in_ECX[0x2e];
    if (0.0 <= in_ECX[0x2e]) {
      if (255.0 < in_ECX[0x2e]) {
        in_ECX[0x2e] = 255.0;
      }
    }
    else {
      in_ECX[0x2e] = 0.0;
    }
    if (in_ECX[0x2f] < 0.0) {
      in_ECX[0x2f] = 0.0;
    }
    if (255.0 < in_ECX[0x2f]) {
      in_ECX[0x2f] = 255.0;
      return 0;
    }
    break;
  case 4.34403e-44:
    in_ECX[0x2f] = param_2 * 5.0 + in_ECX[0x2f];
    if (0.0 <= in_ECX[0x2e]) {
      if (255.0 < in_ECX[0x2e]) {
        in_ECX[0x2e] = 255.0;
      }
    }
    else {
      in_ECX[0x2e] = 0.0;
    }
    if (in_ECX[0x2f] < 0.0) {
      in_ECX[0x2f] = 0.0;
    }
    if (255.0 < in_ECX[0x2f]) {
      in_ECX[0x2f] = 255.0;
      return 0;
    }
    break;
  case 4.48416e-44:
    fVar1 = (float)__ftol();
    in_ECX[0x6d] = fVar1;
    if ((int)fVar1 < 0) {
      in_ECX[0x6d] = 0.0;
    }
    if (3 < (int)in_ECX[0x6d]) {
      in_ECX[0x6d] = 4.2039e-45;
      return 0;
    }
    break;
  case 4.62428e-44:
    fVar1 = param_2 * 5.0 + in_ECX[0x30];
    in_ECX[0x30] = fVar1;
    if (in_ECX[0x31] < fVar1) {
      in_ECX[0x31] = fVar1;
    }
    if (0.0 <= in_ECX[0x30]) {
      if (255.0 < in_ECX[0x30]) {
        in_ECX[0x30] = 255.0;
      }
    }
    else {
      in_ECX[0x30] = 0.0;
    }
    if (in_ECX[0x31] < 0.0) {
      in_ECX[0x31] = 0.0;
    }
    if (255.0 < in_ECX[0x31]) {
      in_ECX[0x31] = 255.0;
      return 0;
    }
    break;
  case 4.76441e-44:
    fVar1 = param_2 * 5.0 + in_ECX[0x31];
    in_ECX[0x31] = fVar1;
    if (fVar1 < in_ECX[0x30]) {
      in_ECX[0x30] = fVar1;
    }
    if (0.0 <= in_ECX[0x30]) {
      if (255.0 < in_ECX[0x30]) {
        in_ECX[0x30] = 255.0;
      }
    }
    else {
      in_ECX[0x30] = 0.0;
    }
    if (in_ECX[0x31] < 0.0) {
      in_ECX[0x31] = 0.0;
    }
    if (255.0 < in_ECX[0x31]) {
      in_ECX[0x31] = 255.0;
      return 0;
    }
    break;
  case 4.90454e-44:
    fVar1 = param_2 * 0.1 + in_ECX[0x32];
    in_ECX[0x32] = fVar1;
    if (fVar1 < 0.0) {
      in_ECX[0x32] = 0.0;
    }
    if (1.0 < in_ECX[0x32]) {
      in_ECX[0x32] = 1.0;
      return 0;
    }
    break;
  case 5.04467e-44:
    fVar1 = param_2 * 0.1 + in_ECX[0x28];
    in_ECX[0x28] = fVar1;
    if (in_ECX[0x29] < fVar1) {
      in_ECX[0x29] = fVar1;
    }
    if (0.0 <= in_ECX[0x28]) {
      if (100.0 < in_ECX[0x28]) {
        in_ECX[0x28] = 100.0;
      }
    }
    else {
      in_ECX[0x28] = 0.0;
    }
    if (in_ECX[0x29] < 0.0) {
      in_ECX[0x29] = 0.0;
    }
    if (100.0 < in_ECX[0x29]) {
      in_ECX[0x29] = 100.0;
      return 0;
    }
    break;
  case 5.1848e-44:
    fVar1 = param_2 * 0.1 + in_ECX[0x29];
    in_ECX[0x29] = fVar1;
    if (fVar1 < in_ECX[0x28]) {
      in_ECX[0x28] = fVar1;
    }
    if (0.0 <= in_ECX[0x28]) {
      if (100.0 < in_ECX[0x28]) {
        in_ECX[0x28] = 100.0;
      }
    }
    else {
      in_ECX[0x28] = 0.0;
    }
    if (in_ECX[0x29] < 0.0) {
      in_ECX[0x29] = 0.0;
    }
    if (100.0 < in_ECX[0x29]) {
      in_ECX[0x29] = 100.0;
      return 0;
    }
    break;
  case 5.32493e-44:
    fVar1 = param_2 * 0.3 + in_ECX[0x34];
    in_ECX[0x34] = fVar1;
    if (in_ECX[0x35] < fVar1) {
      in_ECX[0x35] = fVar1;
      return 0;
    }
    break;
  case 5.46506e-44:
    fVar1 = param_2 * 0.3 + in_ECX[0x35];
    in_ECX[0x35] = fVar1;
    if (fVar1 < in_ECX[0x34]) {
      in_ECX[0x34] = fVar1;
      return 0;
    }
    break;
  case 5.60519e-44:
    fVar1 = param_2 * 0.5 + in_ECX[0x36];
    in_ECX[0x36] = fVar1;
    if (in_ECX[0x37] < fVar1) {
      in_ECX[0x37] = fVar1;
      return 0;
    }
    break;
  case 5.74532e-44:
    fVar1 = param_2 * 0.5 + in_ECX[0x37];
    in_ECX[0x37] = fVar1;
    if (fVar1 < in_ECX[0x36]) {
      in_ECX[0x36] = fVar1;
      return 0;
    }
    break;
  case 5.88545e-44:
    FUN_200194f0(s_menu_fxgraphic_20132f78);
    return 0;
  case 6.16571e-44:
    fVar1 = param_2 * 0.1 + in_ECX[0x33];
    in_ECX[0x33] = fVar1;
    if (fVar1 < 0.1) {
      in_ECX[0x33] = 0.1;
      return 0;
    }
    break;
  case 6.30584e-44:
    fVar1 = in_ECX[0x50];
    in_ECX[0x50] = param_2 + fVar1;
    if (param_2 + fVar1 < 1.0) {
      in_ECX[0x50] = 1.0;
    }
    if (60.0 < in_ECX[0x50]) {
      in_ECX[0x50] = 60.0;
      return 0;
    }
    break;
  case 6.44597e-44:
    param_2 = param_2 + in_ECX[0x39];
    in_ECX[0x39] = param_2;
    if (in_ECX[0x3c] < param_2) {
      in_ECX[0x3c] = param_2;
      return 0;
    }
    break;
  case 6.5861e-44:
    param_2 = param_2 + in_ECX[0x3c];
    in_ECX[0x3c] = param_2;
    if (param_2 < in_ECX[0x39]) {
      in_ECX[0x39] = param_2;
      return 0;
    }
    break;
  case 6.72623e-44:
    param_2 = param_2 + in_ECX[0x3a];
    in_ECX[0x3a] = param_2;
    if (in_ECX[0x3d] < param_2) {
      in_ECX[0x3d] = param_2;
      return 0;
    }
    break;
  case 6.86636e-44:
    param_2 = param_2 + in_ECX[0x3d];
    in_ECX[0x3d] = param_2;
    if (param_2 < in_ECX[0x3a]) {
      in_ECX[0x3a] = param_2;
      return 0;
    }
    break;
  case 7.00649e-44:
    param_2 = param_2 + in_ECX[0x3b];
    in_ECX[0x3b] = param_2;
    if (in_ECX[0x3e] < param_2) {
      in_ECX[0x3e] = param_2;
      return 0;
    }
    break;
  case 7.14662e-44:
    param_2 = param_2 + in_ECX[0x3e];
    in_ECX[0x3e] = param_2;
    if (param_2 < in_ECX[0x3b]) {
      in_ECX[0x3b] = param_2;
      return 0;
    }
    break;
  case 7.42688e-44:
    fVar1 = param_2 * 0.1 + in_ECX[0x3f];
    in_ECX[0x3f] = fVar1;
    if (fVar1 < 0.0) {
      in_ECX[0x3f] = 0.0;
    }
    if (1.0 < in_ECX[0x3f]) {
      in_ECX[0x3f] = 1.0;
      return 0;
    }
    break;
  case 7.56701e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0x61];
    in_ECX[0x61] = fVar1;
    if (in_ECX[0x62] < fVar1) {
      in_ECX[0x62] = fVar1;
      return 0;
    }
    break;
  case 7.70714e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0x62];
    in_ECX[0x62] = fVar1;
    if (fVar1 < in_ECX[0x61]) {
      in_ECX[0x61] = fVar1;
      return 0;
    }
    break;
  case 7.84727e-44:
    fVar1 = param_2 * 10.0 + in_ECX[99];
    in_ECX[99] = fVar1;
    if (in_ECX[100] < fVar1) {
      in_ECX[100] = fVar1;
      return 0;
    }
    break;
  case 7.9874e-44:
    fVar1 = param_2 * 10.0 + in_ECX[100];
    in_ECX[100] = fVar1;
    if (fVar1 < in_ECX[99]) {
      in_ECX[99] = fVar1;
      return 0;
    }
    break;
  case 8.12753e-44:
    fVar1 = param_2 * 10.0 + in_ECX[0x65];
    in_ECX[0x65] = fVar1;
    if (in_ECX[0x66] < fVar1) {
      in_ECX[0x66] = fVar1;
      return 0;
    }
    break;
  case 8.26766e-44:
    FUN_20036020(param_2 * 10.0,1);
    return 0;
  case 8.40779e-44:
    FUN_20036070(param_2 * 10.0,1);
    return 0;
  case 8.54792e-44:
    FUN_20036020(param_2 * 10.0,1);
    return 0;
  case 8.68805e-44:
    FUN_20036070(param_2 * 10.0,1);
    return 0;
  case 8.82818e-44:
    FUN_20036020(param_2 * 10.0,1);
    return 0;
  case 8.96831e-44:
    FUN_20036070(param_2 * 10.0,1);
    return 0;
  case 9.10844e-44:
    FUN_20036020(param_2 * 10.0,1);
    return 0;
  case 9.24857e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 1);
    return 0;
  case 9.3887e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 2);
    return 0;
  case 9.52883e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 4);
    return 0;
  case 9.66896e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 8);
    return 0;
  case 9.80909e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x10);
    return 0;
  case 9.94922e-44:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x40);
    return 0;
  case 1.00893e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x80);
    return 0;
  case 1.02295e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x100);
    return 0;
  case 1.03696e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x800);
    return 0;
  case 1.05097e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x1000);
    return 0;
  case 1.06499e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x2000);
    return 0;
  case 1.079e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x10000);
    return 0;
  case 1.09301e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x8000);
    return 0;
  case 1.10703e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x4000);
    return 0;
  case 1.12104e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x20000);
    return 0;
  case 1.13505e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x40000);
    return 0;
  case 1.14906e-43:
    in_ECX[0x38] = (float)((uint)in_ECX[0x38] ^ 0x80000);
    return 0;
  }
  return 0;
}

