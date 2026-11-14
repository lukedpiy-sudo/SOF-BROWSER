// rea decompile_all
// name: FUN_30011010
// address: 0x30011010
// body: available
// range: 0x30011010-0x3001164e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30011010(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_EBP;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float unaff_retaddr;
  float fStack00000004;
  float *pfVar13;
  
  FUN_30020910();
  puVar9 = (undefined4 *)&stack0x0000001c;
  FUN_300062a0(0x2100);
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a446c)(0x1d01);
  iVar7 = 0;
  (*DAT_300a43c8)(0);
  iVar10 = 0;
  DAT_3008ff3c = 0;
  puVar8 = puVar9;
  if (0 < DAT_3008fd60) {
    do {
      pfVar13 = *(float **)(DAT_3008fd64 + iVar10 * 4);
      puVar9 = puVar8;
      if (((int)pfVar13[0x10] < 0) ||
         (*(int *)**(undefined4 **)
                    (*(int *)(DAT_3008fc6c + 0x84) + 0x30 + (int)pfVar13[0x10] * 0x3c) ==
          DAT_3008fd90)) {
        DAT_3008ff3c = DAT_3008ff3c + 1;
        if (((uint)pfVar13[0xe] & 0x40) == 0) {
          *puVar8 = 0;
          puVar9 = puVar8 + 3;
          fVar3 = *pfVar13;
          fVar1 = pfVar13[1];
          fVar2 = pfVar13[2];
          puVar8[2] = pfVar13;
          puVar8[1] = (fVar3 - DAT_3008fecc) * (fVar3 - DAT_3008fecc) +
                      (fVar1 - DAT_3008fed0) * (fVar1 - DAT_3008fed0) +
                      (fVar2 - DAT_3008fed4) * (fVar2 - DAT_3008fed4);
        }
        else {
          FUN_3000cae0(pfVar13);
        }
      }
      iVar10 = iVar10 + 1;
      puVar8 = puVar9;
    } while (iVar10 < DAT_3008fd60);
  }
  _DAT_3008fd78 = 0.0;
  if (0 < DAT_3008fd58) {
    do {
      piVar11 = *(int **)(DAT_3008fd5c + iVar7 * 4);
      *puVar9 = 1;
      if ((*piVar11 == 0) || ((*(ushort *)(*piVar11 + 0x38) & 0x800) == 0)) {
        unaff_EBP = (float)piVar11[1] - DAT_3008fecc;
        unaff_EBX = (float)piVar11[2] - DAT_3008fed0;
        unaff_retaddr = (float)piVar11[3] - DAT_3008fed4;
        FUN_30011660((float *)(piVar11 + 4),&DAT_3008fecc,(float *)&stack0x00000008);
        iVar10 = 0;
        do {
          if (ABS(*(float *)(&stack0x00000008 + iVar10)) <
              ABS(*(float *)(&stack0xfffffff8 + iVar10))) {
            *(undefined4 *)(&stack0xfffffff8 + iVar10) = *(undefined4 *)(&stack0x00000008 + iVar10);
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0xc);
        fVar12 = FUN_30003670((float *)&stack0xfffffff8,(float *)&stack0xfffffff8);
      }
      else {
        fVar12 = (float10)*(float *)(DAT_3008fc80 + 0x18) * (float10)*(float *)(DAT_3008fc80 + 0x18)
        ;
      }
      puVar9[1] = (float)fVar12;
      puVar9[2] = piVar11;
      iVar7 = iVar7 + 1;
      fVar3 = (float)piVar11[7];
      puVar9 = puVar9 + 3;
      piVar11[7] = (int)(float)((float10)fVar3 / SQRT(fVar12));
      _DAT_3008fd78 = (float)((float10)fVar3 / SQRT(fVar12) + (float10)_DAT_3008fd78);
    } while (iVar7 < DAT_3008fd58);
  }
  iVar4 = DAT_3008fc6c;
  iVar7 = DAT_3008fc6c;
  iVar10 = DAT_3008fd4c;
  iVar6 = DAT_3008fd68;
  if (*(float *)(DAT_3008fec8 + 0x18) != 0.0) {
    FUN_30010fd0((byte *)s_Fill_used_is__f_3002f7fc);
    iVar4 = DAT_3008fc6c;
    iVar7 = DAT_3008fc6c;
    iVar10 = DAT_3008fd4c;
    iVar6 = DAT_3008fd68;
  }
  for (; DAT_3008fc78 = iVar4, DAT_3008fd4c = iVar10, iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x2c)) {
    *puVar9 = 2;
    iVar10 = 0;
    fStack00000004 = *(float *)(DAT_3008ffa8 + 0x18) * *(float *)(DAT_3008ffa8 + 0x18);
    if (*(short *)(iVar6 + 10) != 0) {
      do {
        iVar4 = *(int *)(*(int *)(iVar7 + 0xc0) + (*(int *)(iVar6 + 0xc) + iVar10) * 4);
        if (iVar4 < 1) {
          pfVar13 = (float *)(*(int *)(iVar7 + 0x8c) +
                             (uint)*(ushort *)(*(int *)(iVar7 + 0x94) + iVar4 * -4 + 2) * 0xc);
        }
        else {
          pfVar13 = (float *)(*(int *)(iVar7 + 0x8c) +
                             (uint)*(ushort *)(*(int *)(iVar7 + 0x94) + iVar4 * 4) * 0xc);
        }
        FUN_30011660(pfVar13,&DAT_3008fecc,(float *)&stack0xfffffff8);
        fVar3 = unaff_EBP * unaff_EBP + unaff_EBX * unaff_EBX + unaff_retaddr * unaff_retaddr;
        if (fVar3 < fStack00000004) {
          fStack00000004 = fVar3;
        }
        iVar10 = iVar10 + 1;
        iVar7 = DAT_3008fc78;
      } while (iVar10 < (int)(uint)*(ushort *)(iVar6 + 10));
    }
    puVar9[2] = iVar6;
    puVar9[1] = fStack00000004;
    puVar9 = puVar9 + 3;
    iVar4 = DAT_3008fc78;
    iVar10 = DAT_3008fd4c;
  }
  iVar7 = 0;
  if (0 < DAT_3008fd48) {
    do {
      *puVar9 = 3;
      piVar11 = *(int **)(iVar10 + iVar7 * 4);
      uVar5 = piVar11[0x15];
      if ((uVar5 & 4) == 0) {
        if (((uVar5 & 0x400000) == 0) && (iVar10 = *piVar11, iVar10 != 0)) {
          FUN_30011690((float *)(iVar10 + 0x48),(float *)(iVar10 + 0x54),(float *)&stack0xfffffff8);
        }
        FUN_30011660((float *)&stack0xfffffff8,&DAT_3008fecc,(float *)&stack0xfffffff8);
        fVar12 = FUN_30003670((float *)&stack0xfffffff8,(float *)&stack0xfffffff8);
        iVar10 = DAT_3008fd4c;
      }
      else {
        fVar12 = (float10)0.0;
      }
      puVar9[1] = (float)fVar12;
      puVar9[2] = *(undefined4 *)(iVar10 + iVar7 * 4);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 3;
    } while (iVar7 < DAT_3008fd48);
  }
  puVar9 = (undefined4 *)(((int)puVar9 - (int)&stack0x00000014) / 0xc);
  FUN_30020b7d((int *)&stack0x00000014,puVar9,0xc,&LAB_30011870);
  if (0 < (int)puVar9) {
    piVar11 = (int *)&stack0x0000001c;
    do {
      switch(piVar11[-2]) {
      case 0:
        (*DAT_300a43c8)();
        FUN_3000cae0((float *)*piVar11);
        break;
      case 1:
        (*DAT_300a43c8)();
        FUN_3000cee0((int *)*piVar11);
        break;
      case 2:
        (*DAT_300a43c8)();
        DAT_3008fc78 = DAT_3008fc6c;
        FUN_300124f0();
        break;
      case 3:
        if (*(float *)(DAT_3008ff54 + 0x18) != 0.0) {
          if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
            (*DAT_300a44ec)();
          }
          (*DAT_300a43c8)();
          DAT_3008fed8 = (int *)*piVar11;
          if (DAT_3008fed8 != (int *)0x0) {
            if ((DAT_3008fed8[0x15] & 0x400000U) == 0) {
              DAT_3008fc78 = *DAT_3008fed8;
              if (DAT_3008fc78 == 0) {
                FUN_300116d0();
              }
              else {
                FUN_300138f0((int)DAT_3008fed8);
              }
            }
            else {
              FUN_3001ec20((int)DAT_3008fed8,&DAT_3008fce8,DAT_3008fc78);
            }
          }
          FUN_300062a0(0x2100);
          DAT_300a4610 = 0x302;
          DAT_300a43fc = 0x303;
          if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
            *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
          }
          DAT_300a46e0 = DAT_300a46e0 | 1;
          if (((byte)DAT_300a4588 & 1) != 0) {
            *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
          }
          (*DAT_300a446c)(0x1d01);
          if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
            (*DAT_300a45fc)();
          }
        }
      }
      piVar11 = piVar11 + 3;
      puVar9 = (undefined4 *)((int)puVar9 + -1);
    } while (puVar9 != (undefined4 *)0x0);
  }
  (*DAT_300a446c)();
  FUN_3000d740(DAT_3008fcd4,0xbe2);
  FUN_300062a0(0x1e01);
  (*DAT_300a43c8)(1);
  DAT_3008fd68 = 0;
  return;
}

