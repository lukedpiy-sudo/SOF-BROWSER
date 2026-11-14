// rea decompile_all
// name: FUN_3001ec20
// address: 0x3001ec20
// body: available
// range: 0x3001ec20-0x3001f7ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3001ec20(int param_1,undefined4 param_2,int param_3)

{
  char *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined3 extraout_var;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  char *pcVar12;
  float10 fVar13;
  longlong lVar14;
  int unaff_retaddr;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int *piStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  int *piStack_208;
  int *piStack_204;
  float local_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined1 auStack_1cc [4];
  float afStack_1c8 [23];
  char acStack_16c [4];
  undefined **local_168 [10];
  char acStack_140 [140];
  undefined **local_b4 [40];
  int iStack_14;
  
  FUN_3001f860(local_168);
  local_168[0] = &PTR_LAB_3002c678;
  FUN_3001f860(local_b4);
  local_b4[0] = &PTR_LAB_3002c674;
  local_1fc = 0.0;
  if ((*(float *)(DAT_300aa3a8 + 0x18) <= 0.5) &&
     (piStack_204 = (int *)(**(code **)(*DAT_300aa4a0 + 0x24))(*(undefined2 *)(param_1 + 0x34)),
     piStack_204 != (int *)0x0)) {
    pcVar12 = acStack_16c;
    if (((*(byte *)(param_1 + 0x54) & 4) != 0) || (*(float *)(DAT_300aa498 + 0x18) != 0.0)) {
      pcVar12 = acStack_140 + 0x88;
    }
    fStack_210 = -*(float *)(unaff_retaddr + 4);
    fStack_20c = *(float *)(unaff_retaddr + 8);
    piStack_208 = (int *)-*(float *)(unaff_retaddr + 0xc);
    this = pcVar12 + 0x50;
    FUN_3001ca90(&fStack_210,(float *)&stack0xfffffdd4,&fStack_220,&fStack_1d8);
    FUN_3001c7b0((undefined4 *)this);
    FUN_3001f830(&fStack_220,-1.0);
    FUN_3001c7e0(this,0,(undefined4 *)&stack0xfffffdd4);
    FUN_3001c7e0(this,1,&fStack_220);
    FUN_3001c7e0(this,2,&fStack_1d8);
    FUN_3001c7e0(this,3,(undefined4 *)(unaff_retaddr + 0x28));
    FUN_3001c760((int)this);
    if (((0.5 < *(float *)(DAT_300aa380 + 0x18)) && ((*(byte *)(unaff_retaddr + 0x54) & 4) == 0)) &&
       (*(float *)(DAT_300aa498 + 0x18) == 0.0)) {
      (**(code **)(*piStack_204 + 0xcc))
                (*(undefined4 *)(param_1 + 0x50),this,&fStack_210,&fStack_220,0);
      uVar6 = 0;
      pfVar8 = afStack_1c8;
      do {
        fVar11 = fStack_210;
        if ((uVar6 & 1) == 0) {
          fVar11 = fStack_220;
        }
        pfVar8[-1] = fVar11;
        fVar11 = fStack_20c;
        if ((uVar6 & 2) == 0) {
          fVar11 = fStack_21c;
        }
        *pfVar8 = fVar11;
        piVar7 = piStack_208;
        if ((uVar6 & 4) == 0) {
          piVar7 = piStack_218;
        }
        pfVar8[1] = (float)piVar7;
        uVar6 = uVar6 + 1;
        pfVar8 = pfVar8 + 3;
      } while ((int)uVar6 < 8);
      bVar4 = FUN_30012460((int)auStack_1cc);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        return;
      }
    }
    FUN_3002079d((double)(*(float *)(DAT_300aa384 + 0x18) + 0.5));
    lVar14 = __ftol();
    *(int *)(pcVar12 + 0x48) = (int)lVar14;
    if (((int)lVar14 < 0) || (param_3 != 0)) {
      pcVar12[0x48] = '\0';
      pcVar12[0x49] = '\0';
      pcVar12[0x4a] = '\0';
      pcVar12[0x4b] = '\0';
    }
    if (2 < *(int *)(pcVar12 + 0x48)) {
      pcVar12[0x48] = '\x02';
      pcVar12[0x49] = '\0';
      pcVar12[0x4a] = '\0';
      pcVar12[0x4b] = '\0';
    }
    *(undefined4 *)(pcVar12 + 0x38) = *(undefined4 *)(DAT_300aa490 + 0x18);
    if ((*(int *)(pcVar12 + 0x48) == 0) || (*(float *)(DAT_300aa490 + 0x18) <= 0.0)) {
      pcVar12[0x48] = '\0';
      pcVar12[0x49] = '\0';
      pcVar12[0x4a] = '\0';
      pcVar12[0x4b] = '\0';
    }
    else {
      *(undefined4 *)(pcVar12 + 0x44) = DAT_3008fe24;
      *(undefined4 *)(pcVar12 + 0x40) = *(undefined4 *)(DAT_300aa39c + 0x18);
    }
    uVar6 = *(uint *)(unaff_retaddr + 0x54);
    if ((uVar6 & 2) == 0) {
      pcVar12[0x35] = '\0';
    }
    else {
      if (*(int *)(pcVar12 + 0x48) == 0) {
        return;
      }
      if (*(float *)(DAT_300aa488 + 0x18) < 0.5) {
        return;
      }
      pcVar12[0x35] = '\x01';
    }
    pcVar12[0x3c] = '\0';
    pcVar12[0x3d] = '\0';
    pcVar12[0x3e] = -0x80;
    pcVar12[0x3f] = '?';
    *(undefined4 *)(pcVar12 + 0x94) = DAT_3008fecc;
    *(undefined4 *)(pcVar12 + 0x98) = DAT_3008fed0;
    *(undefined4 *)(pcVar12 + 0x9c) = DAT_3008fed4;
    *(undefined4 *)(pcVar12 + 0xa0) = DAT_3008fd7c;
    *(undefined4 *)(pcVar12 + 0xa4) = DAT_3008fd80;
    *(undefined4 *)(pcVar12 + 0xa8) = DAT_3008fd84;
    pcVar12[0x2d] = '\0';
    pcVar12[0x2e] = '\0';
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    pcVar12[0x31] = '\0';
    *(undefined4 *)(pcVar12 + 4) = uVar1;
    if ((*(float *)(DAT_300aa49c + 0x18) <= 0.5) || (*(float *)(DAT_300aa484 + 0x18) <= 0.5)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar12[0x2f] = cVar5;
    if ((*(float *)(DAT_300aa480 + 0x18) <= 0.5) || (3.0 <= *(float *)(DAT_300aa484 + 0x18))) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
    pcVar12[0x30] = cVar5;
    pcVar12[0x34] = (byte)(uVar6 >> 0xc) & 1;
    pcVar12[0x36] = 0.5 < *(float *)(DAT_300aa388 + 0x18);
    if (*(float *)(DAT_3008fcc8 + 0x18) <= 0.01) {
      pcVar12[0xac] = '\x01';
    }
    else {
      pcVar12[0xac] = '\0';
    }
    if (((uVar6 & 8) == 0) && (param_3 == 0)) {
      if (((uVar6 & 0x10000000) == 0) && (*(int *)(DAT_300aa484 + 0x18) == 0x3f800000)) {
        pfVar8 = (float *)(unaff_retaddr + 0x28);
        FUN_30008ff0(pfVar8,(float *)(pcVar12 + 8),0xff);
        fStack_21c = *(float *)(unaff_retaddr + 0x2c);
        piStack_218 = *(int **)(unaff_retaddr + 0x30);
        fStack_220 = *pfVar8 + 16.0;
        FUN_30008ff0(&fStack_220,&fStack_210,0xff);
        fVar13 = FUN_3001d310(&fStack_210);
        fStack_214 = (float)fVar13;
        fStack_220 = fStack_220 - 32.0;
        FUN_30008ff0(&fStack_220,&fStack_210,0xff);
        fVar13 = FUN_3001d310(&fStack_210);
        fStack_220 = *pfVar8;
        piStack_218 = *(int **)(unaff_retaddr + 0x30);
        fVar11 = (float)(((float10)fStack_214 - fVar13) * (float10)4.0);
        fStack_21c = *(float *)(unaff_retaddr + 0x2c) + 16.0;
        FUN_30008ff0(&fStack_220,&fStack_210,0xff);
        fVar13 = FUN_3001d310(&fStack_210);
        fStack_214 = (float)fVar13;
        fStack_21c = fStack_21c - 32.0;
        FUN_30008ff0(&fStack_220,&fStack_210,0xff);
        fVar13 = FUN_3001d310(&fStack_210);
        fStack_228 = (float)(((float10)fStack_214 - fVar13) * (float10)4.0);
        fStack_224 = (1.0 - fVar11 * fVar11) - fStack_228 * fStack_228;
        if (0.0 <= fStack_224) {
          fStack_224 = SQRT(fStack_224);
        }
        else {
          fStack_224 = 0.0;
          FUN_3001d280((float *)&stack0xfffffdd4);
        }
        fVar11 = fVar11 * 500.0;
        fStack_228 = fStack_228 * 500.0;
        fStack_224 = fStack_224 * 500.0;
        FUN_3001ca90((float *)(unaff_retaddr + 4),&local_1fc,&fStack_1f0,&fStack_1e4);
        *(float *)(pcVar12 + 0x14) =
             local_1fc * fVar11 + fStack_1f8 * fStack_228 + fStack_1f4 * fStack_224;
        *(float *)(pcVar12 + 0x18) =
             fStack_1f0 * fVar11 + fStack_1ec * fStack_228 + fStack_1e8 * fStack_224;
        *(float *)(pcVar12 + 0x1c) =
             fStack_1e4 * fVar11 + fStack_1e0 * fStack_228 + fStack_1dc * fStack_224;
        pcVar12[0x2d] = '\x01';
      }
      else {
        FUN_30008ff0((float *)(unaff_retaddr + 0x28),(float *)(pcVar12 + 8),0xff);
        if (((*(uint *)(unaff_retaddr + 0x54) & 0x10000000) != 0) ||
           (*(float *)(DAT_300aa484 + 0x18) < 2.0)) {
          pcVar12[0x2f] = '\0';
        }
        else {
          pcVar12[0x2e] = '\x01';
          if (*(float *)(DAT_300aa484 + 0x18) <= 2.5) {
            fVar11 = *(float *)(DAT_300aa37c + 0x18);
          }
          else {
            pcVar12[0x31] = '\x01';
            (*DAT_300a4608)(0xb51,0.5 < *(float *)(DAT_300aa394 + 0x18));
            if (*(float *)(DAT_300aa494 + 0x18) <= 0.5) {
              pcVar12[0x32] = '\0';
            }
            else {
              pcVar12[0x32] = '\x01';
            }
            if ((*(float *)(DAT_300aa398 + 0x18) <= 0.5) || (pcVar12[0x32] != '\0')) {
              pcVar12[0x33] = '\0';
              fVar11 = *(float *)(DAT_300aa3ac + 0x18);
            }
            else {
              pcVar12[0x33] = '\x01';
              fVar11 = *(float *)(DAT_300aa3ac + 0x18);
            }
          }
          FUN_3002079d((double)(fVar11 + 0.5));
          lVar14 = __ftol();
          *(int *)(pcVar12 + 0x4c) = (int)lVar14;
          if (*(int *)(pcVar12 + 0x4c) < 1) {
            pcVar12[0x4c] = '\x01';
            pcVar12[0x4d] = '\0';
            pcVar12[0x4e] = '\0';
            pcVar12[0x4f] = '\0';
          }
          if (8 < *(int *)(pcVar12 + 0x4c)) {
            pcVar12[0x4c] = '\b';
            pcVar12[0x4d] = '\0';
            pcVar12[0x4e] = '\0';
            pcVar12[0x4f] = '\0';
          }
        }
      }
    }
    else {
      pcVar12[8] = '\0';
      pcVar12[9] = '\0';
      pcVar12[10] = -0x80;
      pcVar12[0xb] = '?';
      pcVar12[0xc] = '\0';
      pcVar12[0xd] = '\0';
      pcVar12[0xe] = -0x80;
      pcVar12[0xf] = '?';
      pcVar12[0x10] = '\0';
      pcVar12[0x11] = '\0';
      pcVar12[0x12] = -0x80;
      pcVar12[0x13] = '?';
    }
    pfVar8 = (float *)(pcVar12 + 8);
    if (0.25 <= *(float *)(DAT_300aa48c + 0x18)) {
      if (*(float *)(DAT_300aa48c + 0x18) <= 2.0) {
        fVar11 = *(float *)(DAT_300aa48c + 0x18);
        *pfVar8 = fVar11 * *pfVar8;
        *(float *)(pcVar12 + 0xc) = fVar11 * *(float *)(pcVar12 + 0xc);
        fVar11 = fVar11 * *(float *)(pcVar12 + 0x10);
      }
      else {
        *pfVar8 = *pfVar8 + *pfVar8;
        *(float *)(pcVar12 + 0xc) = *(float *)(pcVar12 + 0xc) + *(float *)(pcVar12 + 0xc);
        fVar11 = *(float *)(pcVar12 + 0x10) + *(float *)(pcVar12 + 0x10);
      }
    }
    else {
      *pfVar8 = *pfVar8 * 0.25;
      *(float *)(pcVar12 + 0xc) = *(float *)(pcVar12 + 0xc) * 0.25;
      fVar11 = *(float *)(pcVar12 + 0x10) * 0.25;
    }
    uVar6 = *(uint *)(unaff_retaddr + 0x54);
    uVar1 = *(undefined4 *)(unaff_retaddr + 0x28);
    uVar2 = *(undefined4 *)(unaff_retaddr + 0x2c);
    uVar3 = *(undefined4 *)(unaff_retaddr + 0x30);
    *(float *)(pcVar12 + 0x10) = fVar11;
    *(undefined4 *)(pcVar12 + 0x20) = uVar1;
    *(undefined4 *)(pcVar12 + 0x24) = uVar2;
    *(undefined4 *)(pcVar12 + 0x28) = uVar3;
    if ((uVar6 & 2) != 0) {
      pcVar12[0x1c] = '\0';
      pcVar12[0x1d] = '\0';
      pcVar12[0x1e] = '\0';
      pcVar12[0x1f] = '\0';
      fStack_1d4 = DAT_3008fd98;
      *(float *)(pcVar12 + 0x14) = _DAT_3008fd94 * -25.0;
      *(float *)(pcVar12 + 0x18) = DAT_3008fd98 * -25.0;
    }
    if ((uVar6 & 1) != 0) {
      iVar9 = 0;
      pfVar10 = pfVar8;
      do {
        if (0.1 < *pfVar10) break;
        iVar9 = iVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar9 < 3);
      if (iVar9 == 3) {
        *pfVar8 = 0.1;
        pcVar12[0xc] = -0x33;
        pcVar12[0xd] = -0x34;
        pcVar12[0xe] = -0x34;
        pcVar12[0xf] = '=';
        pcVar12[0x10] = -0x33;
        pcVar12[0x11] = -0x34;
        pcVar12[0x12] = -0x34;
        pcVar12[0x13] = '=';
      }
    }
    if ((uVar6 & 0x200) != 0) {
      iVar9 = 3;
      fVar13 = (float10)fsin((float10)*(float *)(param_1 + 0x44) * (float10)7.0);
      pfVar10 = pfVar8;
      do {
        fVar11 = *pfVar10;
        *pfVar10 = (float)(fVar13 * (float10)0.1 + (float10)*pfVar10);
        if (*pfVar10 < fVar11 * 0.8) {
          *pfVar10 = fVar11 * 0.8;
        }
        pfVar10 = pfVar10 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    pfVar10 = *(float **)(unaff_retaddr + 0x58);
    *(int *)(pcVar12 + 0xb0) = unaff_retaddr;
    if (pfVar10 != (float *)0x0) {
      *pfVar10 = *pfVar8;
      *(undefined4 *)(*(int *)(unaff_retaddr + 0x58) + 4) = *(undefined4 *)(pcVar12 + 0xc);
      *(undefined4 *)(*(int *)(unaff_retaddr + 0x58) + 8) = *(undefined4 *)(pcVar12 + 0x10);
    }
    pcVar12[0x2c] = '\0';
    (*DAT_300a4414)();
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
    if (((byte)DAT_300a4588 & 4) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
    if (((byte)DAT_300a4588 & 1) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    fVar11 = fStack_214;
    if (((*(byte *)(unaff_retaddr + 0x54) & 4) == 0) && (*(int *)(DAT_3008fc6c + 0xcc) != 0)) {
      pfVar8 = (float *)(iStack_14 + 0x28);
      piVar7 = FUN_3000a400(pfVar8,DAT_3008fc6c);
      fVar11 = (float)piVar7[0xb];
      if (fVar11 != 0.0) {
        if (*(float *)(DAT_300aa370 + 0x18) <= 0.5) {
          FUN_300128a0((int)fVar11);
        }
        else {
          FUN_30012990((int)fVar11,pfVar8,0,&fStack_228);
          *(float *)(pcVar12 + 0x38) = (1.0 - fStack_228) * *(float *)(pcVar12 + 0x38);
          *(float *)(pcVar12 + 0x3c) = 1.0 - fStack_228;
        }
      }
    }
    if (0.5 < *(float *)(DAT_300aa3a0 + 0x18)) {
      (*DAT_300a4618)(0x408,0x1b01);
    }
    if ((*(byte *)(iStack_14 + 0x54) & 0x10) != 0) {
      (*DAT_300a4600)((double)_DAT_3008ffec,
                      (double)((_DAT_3008fff0 - _DAT_3008ffec) * 0.3 + _DAT_3008ffec));
    }
    (**(code **)(*piStack_218 + 0xa4))(pcVar12);
    if ((*(byte *)(iStack_14 + 0x54) & 0x10) != 0) {
      (*DAT_300a4600)((double)_DAT_3008ffec,(double)_DAT_3008fff0);
    }
    if (0.5 < *(float *)(DAT_300aa3a0 + 0x18)) {
      (*DAT_300a4618)(0x408,0x1b02);
    }
    (*DAT_300a4414)(0x404);
    (*DAT_300a45fc)(0xde1);
    if ((fVar11 != 0.0) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
    if (((byte)DAT_300a4588 & 1) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    DAT_300a4610 = 0x302;
    DAT_300a43fc = 0x303;
    if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_300062a0(0x1e01);
    FUN_30006290();
    DAT_300a4604 = 0x3d4ccccd;
    DAT_3008ffd8 = 0xffffffff;
    DAT_3008ffdc = 0xffffffff;
    DAT_300a445c = 0x204;
    if ((DAT_300a4780 == 0x204) && (_DAT_300a42e8 == 0.05)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 4;
    if (((byte)DAT_300a4588 & 4) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
  }
  return;
}

