// rea decompile_all
// name: FUN_200affb0
// address: 0x200affb0
// body: available
// range: 0x200affb0-0x200b09d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200affb0(void)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int *in_ECX;
  int iVar13;
  int iVar14;
  uint uVar15;
  int unaff_EBX;
  uint uVar16;
  undefined2 uVar18;
  int *piVar17;
  int *unaff_retaddr;
  undefined4 uVar19;
  uint uVar20;
  ushort uVar21;
  short *psVar22;
  short *psVar23;
  int iStack_7c;
  uint uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_c;
  int *piStack_8;
  int *piStack_4;
  
  DAT_20403ec8 = DAT_20403ec8 + 1;
  uVar20 = 0x2200;
  (*(code *)DAT_20403c04[0x1e])(0x2300,0x2200,0x46040000);
  piVar7 = piStack_4;
  *in_ECX = *in_ECX + 1;
  iVar9 = *piStack_4 * 4;
  fStack_50 = *(float *)(in_ECX[0x37] + iVar9);
  iVar13 = piStack_4[4] * 4;
  iStack_40 = *(int *)(in_ECX[0x37] + iVar13);
  fStack_34 = *(float *)(in_ECX[0x3b] + iVar9);
  fStack_30 = *(float *)(in_ECX[0x3b] + iVar13);
  uStack_3c = *(undefined4 *)(in_ECX[0x3f] + iVar9);
  fStack_38 = *(float *)(in_ECX[0x3f] + iVar13);
  iVar9 = *(int *)(*(int *)(piStack_4[3] + 0x14) + iVar9);
  fStack_48 = (float)(*(int *)(*(int *)(piStack_4[3] + 0x14) + iVar13) * 3);
  iVar13 = piStack_4[1];
  iStack_44 = piStack_4[5] * 3;
  for (uVar16 = 0;
      ((iVar14 = unaff_retaddr[1], iVar14 != 0 && (uVar16 < (uint)(unaff_retaddr[2] - iVar14 >> 2)))
      && ((int)uVar16 < 8)); uVar16 = uVar16 + 1) {
    (**(code **)(**(int **)(iVar14 + uVar16 * 4) + 0x2c))(uVar16);
    (*(code *)DAT_20403c04[0xb])(uVar16 + 0x4000);
  }
  (*(code *)DAT_20403c04[0xb])(0xb50);
  uStack_14 = 0x3f800000;
  iStack_20 = unaff_retaddr[6];
  iStack_1c = unaff_retaddr[7];
  iStack_18 = unaff_retaddr[8];
  (*(code *)DAT_20403c04[0x28])(0xb53,&iStack_20);
  iStack_6c = 0;
  if (0 < in_ECX[2]) {
    psVar22 = (short *)0x0;
    do {
      uVar20 = uVar20 & 0xffffff;
      fStack_38 = *(float *)((int)psVar22 + in_ECX[0x2c] + 8);
      iStack_70 = 0;
      if (0 < (int)fStack_38) {
        do {
          piVar17 = (int *)(in_ECX[0x30] +
                           (*(int *)((int)psVar22 + in_ECX[0x2c] + 4) + iStack_70) * 6);
          iVar14 = (int)(short)*piVar17;
          if (*(int *)(((int *)unaff_retaddr[0x2e])[2] + iVar14 * 4) != *(int *)unaff_retaddr[0x2e])
          {
            *(undefined1 *)(*(int *)(piStack_4[1] + iVar14 * 4) + 5) = 1;
            cVar8 = FUN_200c28e0(piVar7);
            piVar6 = piStack_8;
            unaff_retaddr = piStack_8;
            if (cVar8 != '\0') {
              if ((char)(uVar20 >> 0x18) == '\0') {
                FUN_2009cf60(*(undefined4 *)((int)psVar22 + in_ECX[0x2c]),piStack_8,piVar7);
                unaff_retaddr = piStack_8;
                if ((float)piVar6[0x10] < 0.01) goto LAB_200b090f;
                if (*(char *)((int)piVar6 + 5) == '\0') {
                  (*(code *)DAT_20403c04[0xb])(0xb44);
                }
                else {
                  (*(code *)DAT_20403c04[10])();
                }
                if (*(char *)((int)piVar6 + 6) == '\0') {
                  (*(code *)DAT_20403c04[10])(0xde1);
                }
                else {
                  FUN_2009cfb0(piVar6,0);
                }
                if ((((char)piVar6[1] != '\0') || ((float)piVar6[0x10] < 0.99)) || (*piVar6 != 0)) {
                  (*(code *)DAT_20403c04[0xb])(0xbe2);
                  (*(code *)DAT_20403c04[8])(0);
                  if (*piVar6 == 1) {
                    (*(code *)DAT_20403c04[3])(1,1);
                  }
                  else {
                    (*(code *)DAT_20403c04[3])(0x302,0x303);
                  }
                  (*(code *)DAT_20403c04[0xb])(0x8037);
                  (*(code *)DAT_20403c04[0x18])(DAT_20157958,DAT_2015795c);
                  (*(code *)DAT_20403c04[0xb])(0xbc0);
                  (*(code *)*DAT_20403c04)(0x204,0);
                }
                iStack_28 = piVar6[0xd];
                iStack_2c = piVar6[0xc];
                iStack_24 = piVar6[0xe];
                iStack_20 = piVar6[0x10];
                (*(code *)DAT_20403c04[0x30])(0x408,0x1602,&iStack_2c);
                fStack_38 = fStack_38 * (float)piVar6[0xf];
                iStack_2c = 0x3f800000;
                fStack_34 = fStack_34 * (float)piVar6[0xf];
                fStack_30 = fStack_30 * (float)piVar6[0xf];
                (*(code *)DAT_20403c04[0x30])(0x408,0x1600,&fStack_38);
                if (*(char *)((int)piVar6 + 7) == '\0') {
                  (*(code *)DAT_20403c04[0x2f])(0x408,0x1601,0);
                  fStack_50 = 0.0;
                  fStack_4c = 0.0;
                  fStack_48 = 0.0;
                  iStack_44 = 0x3f800000;
                }
                else {
                  (*(code *)DAT_20403c04[0x2f])(0x408,0x1601,(float)piVar6[0x1a] * 4.0);
                  fStack_50 = (float)piVar6[0x11] * (float)piVar6[0x1c];
                  iStack_44 = piVar6[0x10];
                  fStack_4c = (float)piVar6[0x12] * (float)piVar6[0x1c];
                  fStack_48 = (float)piVar6[0x13] * (float)piVar6[0x1c];
                }
                (*(code *)DAT_20403c04[0x30])(0x408,0x1202,&fStack_50);
              }
              cVar8 = FUN_20090e40(piVar7);
              unaff_retaddr = piStack_8;
              if (cVar8 != '\0') {
                if (*(char *)((int)piStack_8 + 6) != '\0') {
                  FUN_2009cff0(piStack_8,iVar14);
                }
                (*(code *)DAT_20403c04[0x33])();
                uVar21 = *(ushort *)(piVar17 + 1);
                psVar5 = (short *)(in_ECX[0x31] + *(short *)((int)piVar17 + 2) * 2);
                uVar16 = (uint)uVar21;
                while (uVar21 != 0) {
                  sVar2 = *psVar5;
                  uVar18 = (undefined2)((uint)piVar17 >> 0x10);
                  piVar17 = (int *)CONCAT22(uVar18,sVar2);
                  psVar23 = psVar5 + 1;
                  uVar15 = uVar16 - 1;
                  if (sVar2 < 0) {
                    piVar17 = (int *)-(int)piVar17;
                    uVar19 = 6;
LAB_200b04d2:
                    (*(code *)DAT_20403c04[1])(uVar19);
                    DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)piVar17;
                  }
                  else {
                    if (sVar2 != 0) {
                      uVar19 = 5;
                      goto LAB_200b04d2;
                    }
                    sVar2 = *psVar23;
                    piVar17 = (int *)CONCAT22(uVar18,sVar2);
                    psVar23 = psVar5 + 2;
                    uVar15 = uVar16 - 2;
                    (*(code *)DAT_20403c04[1])(4);
                    DAT_20404c6c = DAT_20404c6c + (int)sVar2 / 3;
                  }
                  uVar20 = uVar20 - (int)piVar17;
                  if (0 < (short)piVar17) {
                    uStack_78 = (uint)piVar17 & 0xffff;
                    do {
                      sVar2 = *psVar22;
                      psVar22 = psVar22 + 1;
                      piVar17 = (int *)(in_ECX[0x43] + sVar2 * 0x4c);
                      if (*in_ECX != *(int *)(in_ECX[0x43] + sVar2 * 0x4c)) {
                        *piVar17 = *in_ECX;
                        if (-1 < piVar17[1]) {
                          iVar10 = piVar17[1] * iStack_68 + iStack_64;
                          iVar12 = iStack_60 + iVar10 * 2;
                          piVar17[2] = (int)(float)(int)*(short *)(iStack_60 + iVar10 * 2);
                          piVar17[3] = (int)(float)(int)*(short *)(iVar12 + 2);
                          piVar17[4] = (int)(float)(int)*(short *)(iVar12 + 4);
                          iVar10 = piVar17[1] * iVar9 * 3 + iVar13 * 3;
                          iVar12 = (int)fStack_50 + iVar10 * 2;
                          fVar3 = (float)(int)*(short *)((int)fStack_50 + iVar10 * 2);
                          fVar4 = (float)(int)*(short *)(iVar12 + 2);
                          fStack_30 = (float)(int)*(short *)(iVar12 + 4);
                          piVar17[2] = (int)((float)piVar17[2] - fVar3);
                          piVar17[3] = (int)((float)piVar17[3] - fVar4);
                          piVar17[4] = (int)((float)piVar17[4] - fStack_30);
                          fVar1 = (float)piVar7[8];
                          piVar17[2] = (int)(fVar1 * (float)piVar17[2]);
                          piVar17[3] = (int)(fVar1 * (float)piVar17[3]);
                          piVar17[4] = (int)(fVar1 * (float)piVar17[4]);
                          piVar17[2] = (int)(fVar3 + (float)piVar17[2]);
                          piVar17[3] = (int)(fVar4 + (float)piVar17[3]);
                          piVar17[4] = (int)(fStack_30 + (float)piVar17[4]);
                          piVar17[2] = (int)((float)in_ECX[0x20] * (float)piVar17[2]);
                          piVar17[3] = (int)((float)in_ECX[0x21] * (float)piVar17[3]);
                          piVar17[4] = (int)((float)in_ECX[0x22] * (float)piVar17[4]);
                          piVar17[2] = (int)((float)in_ECX[0x23] + (float)piVar17[2]);
                          piVar17[3] = (int)((float)in_ECX[0x24] + (float)piVar17[3]);
                          piVar17[4] = (int)((float)in_ECX[0x25] + (float)piVar17[4]);
                        }
                        if (-1 < piVar17[5]) {
                          uVar16 = (uint)*(byte *)(piVar17[5] * iStack_68 + iVar14 + (int)fStack_4c)
                          ;
                          piVar17[6] = (&DAT_20404c90)[uVar16 * 3];
                          piVar17[7] = (&DAT_20404c94)[uVar16 * 3];
                          piVar17[8] = (&DAT_20404c98)[uVar16 * 3];
                          pbVar11 = (byte *)(piVar17[5] * unaff_EBX + iStack_7c + (int)fStack_48);
                          uVar16 = (uint)*pbVar11;
                          piVar17[6] = (int)((float)piVar17[6] - (float)(&DAT_20404c90)[uVar16 * 3])
                          ;
                          piVar17[7] = (int)((float)piVar17[7] - (float)(&DAT_20404c94)[uVar16 * 3])
                          ;
                          piVar17[8] = (int)((float)piVar17[8] - (float)(&DAT_20404c98)[uVar16 * 3])
                          ;
                          fVar1 = (float)piVar7[8];
                          piVar17[6] = (int)(fVar1 * (float)piVar17[6]);
                          piVar17[7] = (int)(fVar1 * (float)piVar17[7]);
                          piVar17[8] = (int)(fVar1 * (float)piVar17[8]);
                          uVar16 = (uint)*pbVar11;
                          piVar17[6] = (int)((float)(&DAT_20404c90)[uVar16 * 3] + (float)piVar17[6])
                          ;
                          piVar17[7] = (int)((float)(&DAT_20404c94)[uVar16 * 3] + (float)piVar17[7])
                          ;
                          piVar17[8] = (int)((float)(&DAT_20404c98)[uVar16 * 3] + (float)piVar17[8])
                          ;
                        }
                        if (-1 < piVar17[9]) {
                          iVar12 = piVar17[9] * iStack_68 * 2 + iVar14 * 2;
                          piVar17[10] = (int)(float)(int)*(short *)(iStack_44 + iVar12 * 2);
                          piVar17[0xb] = (int)(float)(int)*(short *)(iStack_44 + iVar12 * 2 + 2);
                          iVar12 = piVar17[9] * unaff_EBX * 2 + iStack_7c * 2;
                          fVar3 = (float)(int)*(short *)(iStack_40 + iVar12 * 2);
                          fVar4 = (float)(int)*(short *)(iStack_40 + iVar12 * 2 + 2);
                          piVar17[10] = (int)((float)piVar17[10] - fVar3);
                          piVar17[0xb] = (int)((float)piVar17[0xb] - fVar4);
                          piVar17[0xc] = (int)((float)piVar17[0xc] - fStack_30);
                          fVar1 = (float)piVar7[8];
                          piVar17[10] = (int)(fVar1 * (float)piVar17[10]);
                          piVar17[0xb] = (int)(fVar1 * (float)piVar17[0xb]);
                          piVar17[0xc] = (int)(fVar1 * (float)piVar17[0xc]);
                          piVar17[10] = (int)(fVar3 + (float)piVar17[10]);
                          piVar17[0xb] = (int)(fVar4 + (float)piVar17[0xb]);
                          piVar17[0xc] = (int)(fStack_30 + (float)piVar17[0xc]);
                          piVar17[10] = (int)((float)in_ECX[0x26] * (float)piVar17[10]);
                          piVar17[0xb] = (int)((float)in_ECX[0x27] * (float)piVar17[0xb]);
                          piVar17[0xc] = (int)((float)in_ECX[0x28] * (float)piVar17[0xc]);
                        }
                      }
                      if (*(char *)(iStack_c + 6) != '\0') {
                        (*(code *)DAT_20403c04[0x25])(piVar17 + 10);
                      }
                      (*(code *)DAT_20403c04[0x24])(piVar17 + 6);
                      piVar17 = piVar17 + 2;
                      (*(code *)DAT_20403c04[0x26])(piVar17);
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 != 0);
                  }
                  (*(code *)DAT_20403c04[0xc])();
                  psVar5 = psVar23;
                  uVar16 = uVar15;
                  uVar21 = (ushort)uVar15;
                }
                FUN_20090fc0();
                unaff_retaddr = piStack_8;
              }
            }
          }
          iStack_70 = iStack_70 + 1;
        } while (iStack_70 < (int)fStack_38);
        if ((char)(uVar20 >> 0x18) != '\0') {
          if ((((char)unaff_retaddr[1] != '\0') || ((float)unaff_retaddr[0x10] < 0.99)) ||
             (*unaff_retaddr != 0)) {
            (*(code *)DAT_20403c04[10])(0x8037);
            (*(code *)DAT_20403c04[10])(0xbe2);
            (*(code *)DAT_20403c04[8])(1);
            (*(code *)DAT_20403c04[10])(0xbc0);
          }
          if (*(char *)((int)unaff_retaddr + 6) == '\0') {
            (*(code *)DAT_20403c04[0xb])(0xde1);
          }
          else {
            FUN_2009d0f0(unaff_retaddr);
          }
        }
      }
LAB_200b090f:
      iStack_6c = iStack_6c + 1;
      psVar22 = psVar22 + 6;
    } while (iStack_6c < in_ECX[2]);
  }
  (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  (*(code *)DAT_20403c04[10])(0xbe2);
  (*(code *)DAT_20403c04[0xb])(0xde1);
  (*(code *)DAT_20403c04[3])(0x302,0x303);
  (*(code *)DAT_20403c04[0xb])(0xb44);
  for (uVar20 = 0;
      ((*(int *)((int)fStack_30 + 4) != 0 &&
       (uVar20 < (uint)(*(int *)((int)fStack_30 + 8) - *(int *)((int)fStack_30 + 4) >> 2))) &&
      ((int)uVar20 < 8)); uVar20 = uVar20 + 1) {
    (*(code *)DAT_20403c04[10])(uVar20 + 0x4000);
  }
  (*(code *)DAT_20403c04[10])(0xb50);
  return;
}

