// rea decompile_all
// name: FUN_2005bb80
// address: 0x2005bb80
// body: available
// range: 0x2005bb80-0x2005c082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005bb80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  float10 fVar20;
  int iStack_48;
  float local_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar2 = *(int **)(param_1 + 0x298);
  if (piVar2[0x1d] != 0) {
    puVar1 = (undefined4 *)(param_1 + ((DAT_203a1f30 & 0xf) + 0x45) * 0xf8);
    puVar1[0x3d] = DAT_20396de4;
    if (*(char *)(piVar2[0x1d] + 0x68) == '\0') {
      iVar13 = 4;
      pfVar12 = local_30;
      do {
        iVar8 = iVar13 + 2;
        *pfVar12 = (float)(int)*(short *)(iVar13 + piVar2[0x1d]) * 0.125 +
                   *(float *)((int)pfVar12 + piVar2[0x1d] + (0x28 - (int)local_30));
        iVar13 = iVar8;
        pfVar12 = pfVar12 + 1;
      } while (iVar8 < 10);
    }
    else {
      iVar13 = 0;
      do {
        iVar8 = iVar13 + 1;
        local_30[iVar13] =
             *(float *)(&stack0x0000001c + (piVar2[0x1d] - (int)local_30) + iVar13 * 4) * 0.125;
        iVar13 = iVar8;
      } while (iVar8 < 3);
    }
    uVar9 = FUN_2001a980(local_30);
    uVar10 = FUN_2001a600(uVar9);
    uVar9 = FUN_2001a5c0(uVar9);
    uVar11 = FUN_2001c0f0(puVar1 + 1,uVar10);
    *puVar1 = uVar11;
    piVar14 = *(int **)(piVar2[0x1d] + 0x6c);
    if (piVar14 == (int *)0x0) {
      *(undefined2 *)(piVar2[0x1d] + 0x70) = 0;
    }
    else {
      uVar7 = (**(code **)(*piVar14 + 0xd0))(0xbf800000);
      *(undefined2 *)(piVar2[0x1d] + 0x70) = uVar7;
    }
    puVar15 = (undefined4 *)piVar2[0x1d];
    puVar18 = puVar1 + 9;
    for (iVar13 = 0x32; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    FUN_2005ba40(local_30);
    FUN_2001be20(uVar9);
    puVar1[0x3b] = 0;
    puVar1[0x3c] = DAT_20396ef4;
    iStack_48 = 1;
    if (1 < *(int *)(DAT_20396dd8 + 0x68)) {
      do {
        iVar13 = *(int *)(DAT_20396dd8 + 100) * iStack_48;
        piVar14 = (int *)(iVar13 + *(int *)(DAT_20396dd8 + 0x60));
        if (((*(byte *)(iVar13 + 0x118 + *(int *)(DAT_20396dd8 + 0x60)) & 1) == 0) &&
           (((((piVar14[8] != 0 || (piVar14[0xc] != 0)) || (piVar14[0xf] != 0)) ||
             ((iVar13 = FUN_2001f2d0(piVar14), iVar13 != 0 || (piVar14[0x11] != 0)))) ||
            ((piVar14[0xd] & 0x400000U) != 0)))) {
          bVar3 = true;
          bVar4 = true;
          bVar5 = false;
          if ((piVar14 == piVar2) || ((piVar14[0x46] & 0x100U) != 0)) {
LAB_2005bebe:
            piVar16 = (int *)(DAT_20396ef8 + (DAT_20396ef4 % DAT_20396ef0) * 0x74);
            if (*piVar14 != iStack_48) {
              Com_DPrintf(s_FIXING_ENT_>S_NUMBER____2013960c);
              *piVar14 = iStack_48;
            }
            if (((piVar14[0xd] & 0x400000U) == 0) || (piVar14[0x59] == 0)) {
              if ((piVar14[0xd] & 0x400000U) != 0) {
                Com_DPrintf(s_FIXING_ent_>s_renderfx___RF_GHOU_201395e4);
                piVar14[10] = 0;
              }
            }
            else {
              fStack_c = local_30[0] - (float)piVar14[1];
              fStack_8 = local_30[1] - (float)piVar14[2];
              fStack_4 = local_30[2] - (float)piVar14[3];
              fVar20 = (float10)VectorLength(&fStack_c);
              iVar13 = (**(code **)(*(int *)piVar14[0x59] + 0xd0))((float)fVar20);
              piVar14[10] = iVar13;
            }
            piVar17 = piVar14;
            piVar19 = piVar16;
            for (iVar13 = 0x1d; iVar13 != 0; iVar13 = iVar13 + -1) {
              *piVar19 = *piVar17;
              piVar17 = piVar17 + 1;
              piVar19 = piVar19 + 1;
            }
            if (piVar14[0x58] == *(int *)(param_1 + 0x298)) {
              piVar16[0xe] = 0;
            }
            if (bVar5) {
              piVar16[0xd] = piVar16[0xd] | 0x80;
            }
            DAT_20396ef4 = DAT_20396ef4 + 1;
            puVar1[0x3b] = puVar1[0x3b] + 1;
          }
          else {
            iVar13 = FUN_2001c090(uVar10,piVar14[0x44]);
            if ((iVar13 == 0) &&
               ((piVar14[0x45] == 0 || (iVar13 = FUN_2001c090(uVar10,piVar14[0x45]), iVar13 == 0))))
            {
              bVar3 = false;
              bVar4 = false;
            }
            iVar13 = piVar14[0x22];
            if (iVar13 == -1) {
              if (((0.5 < *(float *)(DAT_203fac58 + 0x18)) ||
                  (iVar13 = FUN_2001c2b0(piVar14[0x43],&DAT_20394dd8), iVar13 == 0)) ||
                 ((0.5 < *(float *)(DAT_203fec90 + 0x18) && ((DAT_203a1f30 & 1) != 0)))) {
LAB_2005be30:
                bVar3 = false;
              }
            }
            else {
              iVar8 = 0;
              if (0 < iVar13) {
                piVar16 = piVar14 + 0x23;
                do {
                  bVar3 = bVar4;
                  if ((*(byte *)((int)&DAT_20394dd8 + ((int)(short)*piVar16 >> 3)) &
                      (byte)(1 << ((byte)(short)*piVar16 & 7))) != 0) break;
                  iVar8 = iVar8 + 1;
                  piVar16 = (int *)((int)piVar16 + 2);
                } while (iVar8 < iVar13);
              }
              if (iVar8 == iVar13) goto LAB_2005be30;
            }
            bVar4 = bVar3;
            if (piVar14[0xf] != 0) {
              bVar4 = true;
            }
            bVar5 = piVar14[0xf] != 0 && !bVar3;
            if ((((piVar14[8] == 0) && (piVar14[0xc] == 0)) &&
                (iVar13 = FUN_2001f2d0(piVar14), iVar13 == 0)) &&
               ((piVar14[0x11] == 0 && ((piVar14[0xd] & 0x400000U) == 0)))) {
              fStack_18 = local_30[0] - (float)piVar14[1];
              fStack_14 = local_30[1] - (float)piVar14[2];
              fStack_10 = local_30[2] - (float)piVar14[3];
              fVar20 = (float10)VectorLength(&fStack_18);
              if (fVar20 <= (float10)1200.0) goto LAB_2005beb6;
            }
            else {
LAB_2005beb6:
              if (bVar4) goto LAB_2005bebe;
            }
            if (piVar14[0x11] != 0) {
              local_30[3] = local_30[0] - (float)piVar14[1];
              fStack_20 = local_30[1] - (float)piVar14[2];
              fStack_1c = local_30[2] - (float)piVar14[3];
              fVar20 = (float10)VectorLength(local_30 + 3);
              if (fVar20 < (float10)1000.0) {
                VectorNormalize(local_30 + 3);
                FUN_2001cb00(param_2,0x18);
                FUN_2001cb00(param_2,piVar14[0x11]);
                FUN_2001cb00(param_2,piVar14[0x14]);
                uVar6 = __ftol();
                FUN_2001cb00(param_2,uVar6);
                FUN_2001d0e0(param_2,local_30 + 3);
              }
            }
          }
        }
        iStack_48 = iStack_48 + 1;
      } while (iStack_48 < *(int *)(DAT_20396dd8 + 0x68));
    }
  }
  return;
}

