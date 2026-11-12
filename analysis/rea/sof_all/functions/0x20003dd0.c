// rea decompile_all
// name: FUN_20003dd0
// address: 0x20003dd0
// body: available
// range: 0x20003dd0-0x20004456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20003dd0(void)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  float10 fVar16;
  int local_8;
  
  fVar4 = DAT_201e8fd0;
  uVar5 = DAT_201e7e64 - 1U & 0xf;
  piVar13 = (int *)(&DAT_201e7f68 + uVar5 * 0x104);
  if ((*(uint *)(&DAT_201e7f6c + uVar5 * 0x104) != DAT_201e7e64 - 1U) || (*piVar13 == 0)) {
    piVar13 = &DAT_201e7e60;
  }
  piVar14 = piVar13 + 0xd;
  uVar5 = (int)(short)piVar13[0xe] - (int)DAT_201e7e98;
  uVar11 = (int)uVar5 >> 0x1f;
  if (((0x800 < (int)((uVar5 ^ uVar11) - uVar11)) ||
      (uVar5 = (int)*(short *)((int)piVar13 + 0x3a) - (int)DAT_201e7e9a, uVar11 = (int)uVar5 >> 0x1f
      , 0x800 < (int)((uVar5 ^ uVar11) - uVar11))) ||
     (uVar5 = (int)(short)piVar13[0xf] - (int)DAT_201e7e9c, uVar11 = (int)uVar5 >> 0x1f,
     0x800 < (int)((uVar5 ^ uVar11) - uVar11))) {
    piVar14 = &DAT_201e7e94;
  }
  if ((*(float *)(DAT_20225098 + 0x18) == 0.0) || ((char)DAT_201e7ea4 < '\0')) {
    iVar15 = (int)&DAT_201e7e94 - (int)piVar14;
    piVar13 = piVar14 + 1;
    iVar12 = 3;
    pfVar8 = (float *)(piVar14 + 10);
    do {
      psVar1 = (short *)((int)piVar13 + iVar15);
      fVar2 = (float)(int)(short)*piVar13 * 0.125;
      piVar13 = (int *)((int)piVar13 + 2);
      iVar12 = iVar12 + -1;
      *(float *)((int)pfVar8 + ((int)&DAT_201e8fc8 - (int)piVar14)) =
           (((float)(int)*psVar1 * 0.125 + *(float *)((int)pfVar8 + iVar15)) - (*pfVar8 + fVar2)) *
           fVar4 + *pfVar8 + fVar2;
      pfVar8 = pfVar8 + 1;
    } while (iVar12 != 0);
  }
  else {
    fVar2 = 1.0 - DAT_201e8fd0;
    iVar15 = (int)&DAT_201e7e94 - (int)piVar14;
    iVar12 = 3;
    pfVar8 = (float *)(piVar14 + 10);
    do {
      pfVar10 = pfVar8 + 1;
      iVar12 = iVar12 + -1;
      *(float *)(((int)&DAT_201e8fc4 - (int)piVar14) + (int)pfVar10) =
           ((*(float *)(iVar15 + (int)pfVar8) - *pfVar8) * DAT_201e8fd0 +
            *(float *)((0x201e7e10 - (int)piVar14) + (int)pfVar10) + *pfVar8) -
           fVar2 * *(float *)((0x201e7e28 - (int)piVar14) + (int)pfVar10);
      pfVar8 = pfVar10;
    } while (iVar12 != 0);
    if ((uint)(DAT_201c1f0c - DAT_201e7e38) < 100) {
      DAT_201e8ff8 = DAT_201e8ff8 -
                     (float)(100 - (DAT_201c1f0c - DAT_201e7e38)) * _DAT_201e7e34 * 0.01;
    }
  }
  iVar12 = 3;
  if (DAT_201e7e94 < 3) {
    puVar6 = &DAT_201e8ffc;
    do {
      *puVar6 = puVar6[-0x46d];
      puVar6 = puVar6 + 1;
    } while ((int)puVar6 < 0x201e9008);
  }
  else {
    pfVar8 = (float *)(piVar14 + 7);
    do {
      fVar2 = *(float *)((int)pfVar8 + iVar15);
      fVar3 = *pfVar8;
      if (fVar2 - fVar3 <= 180.0) {
        if (fVar2 - fVar3 < -180.0) {
          fVar2 = fVar2 + 360.0;
        }
      }
      else {
        fVar2 = fVar2 - 360.0;
      }
      pfVar8 = pfVar8 + 1;
      iVar12 = iVar12 + -1;
      *(float *)(((int)&DAT_201e8fdc - (int)piVar14) + (int)pfVar8) =
           (fVar2 - fVar3) * fVar4 + fVar3;
    } while (iVar12 != 0);
  }
  pfVar8 = (float *)(piVar14 + 0xd);
  pfVar10 = &DAT_201e8ffc;
  do {
    fVar2 = *pfVar8;
    fVar3 = pfVar10[-0x44d];
    if (fVar3 - fVar2 <= 180.0) {
      if (fVar3 - fVar2 < -180.0) {
        fVar3 = fVar3 + 360.0;
      }
    }
    else {
      fVar3 = fVar3 - 360.0;
    }
    pfVar9 = pfVar10 + 1;
    pfVar8 = pfVar8 + 1;
    *pfVar10 = (fVar3 - fVar2) * fVar4 + *pfVar10 + fVar2;
    pfVar10 = pfVar9;
  } while ((int)pfVar9 < 0x201e9008);
  if (DAT_20225820 == 0) {
    pfVar8 = (float *)(piVar14 + 0x10);
    pfVar10 = &DAT_201e8ffc;
    do {
      fVar2 = *pfVar8;
      fVar3 = pfVar10[-0x44a];
      if (fVar3 - fVar2 <= 180.0) {
        if (fVar3 - fVar2 < -180.0) {
          fVar3 = fVar3 + 360.0;
        }
      }
      else {
        fVar3 = fVar3 - 360.0;
      }
      pfVar9 = pfVar10 + 1;
      pfVar8 = pfVar8 + 1;
      *pfVar10 = (fVar3 - fVar2) * fVar4 + *pfVar10 + fVar2;
      pfVar10 = pfVar9;
    } while ((int)pfVar9 < 0x201e9008);
  }
  else {
    iVar12 = 0;
    do {
      iVar7 = iVar12 + 4;
      *(float *)((int)&DAT_201e8ffc + iVar12) =
           *(float *)((int)&DAT_20225828 + iVar12) + *(float *)((int)&DAT_201e8ffc + iVar12);
      iVar12 = iVar7;
    } while (iVar7 < 0xc);
  }
  if (0.02 < _DAT_201e8fb8) {
    iVar12 = FUN_200f9f57();
    DAT_201e9000 = _DAT_201e8fb8 * 0.04 * (float)(iVar12 % 100 + -0x32) * 0.01 + DAT_201e9000;
    iVar12 = FUN_200f9f57();
    DAT_201e8ffc = _DAT_201e8fb8 * 0.04 * (float)(iVar12 % 100 + -0x32) * 0.01 + DAT_201e8ffc;
    iVar12 = FUN_200f9f57();
    DAT_201e8ff0 = _DAT_201e8fb8 * 0.01 * (float)(iVar12 % 5 + -2) + DAT_201e8ff0;
    iVar12 = FUN_200f9f57();
    DAT_201e8ff4 = _DAT_201e8fb8 * 0.01 * (float)(iVar12 % 5 + -2) + DAT_201e8ff4;
    _DAT_201e8fb8 = _DAT_201e8fb8 - _DAT_201e8fbc * DAT_201c1f10;
  }
  iVar12 = FUN_200f9e9e(&DAT_201e988c);
  if (((iVar12 != 0) && (iVar12 == 1)) && ((DAT_201e7f28 == 95.0 && ((DAT_201e7ea4 & 4) != 0)))) {
    fVar16 = (float10)flrand(0xbf000000,0x3f000000);
    DAT_201e8ff8 = (float)(fVar16 + (float10)DAT_201e8ff8);
  }
  if (DAT_201e7efc != '\0') {
    if (((char)piVar14[0x1a] != DAT_201e7efc) || (piVar14[0x19] != DAT_201e7ef8)) {
      *(char *)(piVar14 + 0x1a) = DAT_201e7efc;
      piVar14[0x13] = DAT_201e7ee0;
      piVar14[0x14] = DAT_201e7ee4;
      piVar14[0x15] = DAT_201e7ee8;
      piVar14[0x16] = DAT_201e7eec;
      piVar14[0x17] = DAT_201e7ef0;
      piVar14[0x18] = DAT_201e7ef4;
    }
    local_8 = 3;
    pfVar8 = (float *)(piVar14 + 0x13);
    do {
      *(float *)(((int)&DAT_201e8fa4 - (int)piVar14) + (int)pfVar8) =
           *pfVar8 * 0.125 + (*(float *)(iVar15 + (int)pfVar8) - *pfVar8) * 0.125 * fVar4;
      fVar2 = *(float *)(((int)&DAT_201e7ea0 - (int)piVar14) + (int)pfVar8);
      fVar3 = pfVar8[3];
      if (fVar2 - fVar3 <= 180.0) {
        if (fVar2 - fVar3 < -180.0) {
          fVar2 = fVar2 + 360.0;
        }
      }
      else {
        fVar2 = fVar2 - 360.0;
      }
      local_8 = local_8 + -1;
      *(float *)((int)pfVar8 + ((int)&DAT_201e8fb0 - (int)piVar14)) =
           (fVar2 - fVar3) * fVar4 + fVar3;
      pfVar8 = pfVar8 + 1;
    } while (local_8 != 0);
  }
  FUN_20054b30(&DAT_201e8ffc,&DAT_201e9058,&DAT_201e9064,&DAT_201e9070);
  if ((DAT_201e7efc == '\x10') || ((DAT_201e7efc == '\0' && ((char)piVar14[0x1a] == '\0')))) {
    if ((DAT_20225820 == 0) || ((DAT_201e7efc == '\x10' || (DAT_20225920 == 0.0)))) {
      DAT_201e8fe8 = (DAT_201e7f28 - (float)piVar14[0x25]) * fVar4 + (float)piVar14[0x25];
      fVar4 = DAT_201e7f28 - (float)piVar14[0x25];
    }
    else {
      fVar4 = DAT_2022591c - _DAT_20225928;
      DAT_201e8fe8 = DAT_20225920;
    }
    FUN_20031880(fVar4);
  }
  else {
    DAT_201e8fe8 = DAT_201e7f28;
  }
  puVar6 = &DAT_201e9008;
  do {
    *puVar6 = puVar6[-0x43c];
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < 0x201e9018);
  if (0.02 < _DAT_201e8fc0) {
    pfVar8 = (float *)&DAT_201e9008;
    do {
      pfVar10 = pfVar8 + 1;
      *pfVar8 = (1.0 - _DAT_201e8fc0) * *pfVar8 + _DAT_201e8fc0;
      pfVar8 = pfVar10;
    } while ((int)pfVar10 < 0x201e9018);
    _DAT_201e8fc0 = _DAT_201e8fc0 - DAT_201c1f10 * 0.2;
  }
  FUN_20003c00(&DAT_201e7e94,piVar14);
  return;
}

