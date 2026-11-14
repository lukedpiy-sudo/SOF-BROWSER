// rea decompile_all
// name: FUN_30015440
// address: 0x30015440
// body: available
// range: 0x30015440-0x300159ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30015440(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float unaff_EBX;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined4 *puVar13;
  bool bVar14;
  float fVar15;
  int *piVar16;
  float fVar17;
  
  if (DAT_3008fc78 == DAT_3008fc6c) {
    DAT_300a1634 = 0;
  }
  if (*(float *)(DAT_3008ffb4 + 0x18) != 0.0) {
    return;
  }
  if ((DAT_3008fd3c & 4) != 0) {
    return;
  }
  iVar6 = 0;
  if (*(int *)(DAT_3008fc6c + 0xe0) == 0) {
    return;
  }
  (*DAT_300a43c8)(0);
  if (*(float *)(DAT_3008fda8 + 0x18) != 0.0) goto LAB_3001559c;
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  if (*(float *)(DAT_3008fdb4 + 0x18) == 0.0) {
    cVar1 = **(char **)(DAT_3008fc68 + 4);
    if (((cVar1 != '0') &&
        (uVar3 = FUN_30020f12((void *)(int)cVar1,(uint)(int)cVar1), uVar3 != 0x49)) &&
       (uVar3 != 0x4c)) {
      DAT_300a4610 = 0x302;
      DAT_300a43fc = 0x303;
      if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
        *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
      }
      goto LAB_3001559c;
    }
    DAT_300a4610 = 0;
    DAT_300a43fc = 0x300;
    if (DAT_300a4388 != 0) goto LAB_3001559c;
    bVar14 = DAT_300a45d8 == 0x300;
  }
  else {
    DAT_300a4610 = 1;
    DAT_300a43fc = 1;
    if (DAT_300a4388 != 1) goto LAB_3001559c;
    bVar14 = DAT_300a45d8 == 1;
  }
  if (bVar14) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
LAB_3001559c:
  (*DAT_300a44ec)(0xde1);
  if (0 < DAT_30090428) {
    do {
      iVar8 = (&DAT_30090228)[iVar6];
      (*DAT_300a46f8)(0x3f800000,0,0,0x3f800000);
      FUN_3001b650();
      (*DAT_300a4710)(6);
      iVar2 = *(int *)(iVar8 + 0x28);
      iVar9 = 0;
      iVar11 = iVar2 + 8;
      if (0 < *(int *)(iVar2 + 4)) {
        do {
          (*DAT_300a4520)(iVar11);
          iVar9 = iVar9 + 1;
          iVar11 = iVar11 + 0x1c;
        } while (iVar9 < *(int *)(*(int *)(iVar8 + 0x28) + 4));
      }
      (*DAT_300a45f4)();
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_30090428);
  }
  fVar15 = 4.97881e-42;
  (*DAT_300a45fc)(0xde1);
  (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
  iVar6 = 1;
  do {
    if ((&DAT_30090028)[iVar6] != 0.0) {
      if (DAT_3008fc78 == DAT_3008fc6c) {
        DAT_300a1634 = DAT_300a1634 + 1;
      }
      iVar8 = iVar6;
      FUN_300062f0(DAT_3008ffd0 + iVar6);
      for (iVar11 = (int)(&DAT_30090028)[iVar6]; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x30)) {
        iVar2 = *(int *)(iVar11 + 0x28);
        if (iVar2 != 0) {
          FUN_3001b650();
          (*DAT_300a4710)(6);
          iVar4 = 0;
          iVar9 = iVar2 + 8;
          iVar6 = iVar8;
          if (0 < *(int *)(iVar2 + 4)) {
            do {
              (*DAT_300a42f4)(*(undefined4 *)(iVar9 + 0x14),*(undefined4 *)(iVar9 + 0x18));
              (*DAT_300a4520)(iVar9);
              iVar4 = iVar4 + 1;
              iVar9 = iVar9 + 0x1c;
              iVar6 = iVar8;
            } while (iVar4 < *(int *)(iVar2 + 4));
          }
          (*DAT_300a45f4)();
          iVar8 = iVar6;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x80);
  if (*(float *)(DAT_3008fe34 + 0x18) != 0.0) {
    puVar13 = &DAT_3009042c;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    FUN_300062f0(DAT_3008ffd0);
    if (DAT_3008fc78 == DAT_3008fc6c) {
      DAT_300a1634 = DAT_300a1634 + 1;
    }
    fVar12 = DAT_30090028;
    fVar10 = DAT_30090028;
    if (DAT_30090028 != 0.0) {
      do {
        piVar5 = (int *)(((int)*(short *)((int)fVar10 + 0x14) >> 4) + 1);
        fVar7 = (float)(((int)*(short *)((int)fVar10 + 0x16) >> 4) + 1);
        if (*(int *)((int)fVar10 + 100) != 0) {
          piVar5 = (int *)(uint)*(byte *)((int)fVar10 + 0x68);
          fVar7 = (float)(uint)*(byte *)((int)fVar10 + 0x69);
        }
        piVar16 = piVar5;
        unaff_EBX = fVar7;
        fVar17 = fVar10;
        uVar3 = FUN_300162f0(piVar5,(int)fVar7,(int *)((int)fVar10 + 0x20),
                             (int *)((int)fVar10 + 0x24));
        if ((char)uVar3 == '\0') {
          FUN_30016200('\x01');
          if (fVar12 != fVar10) {
            do {
              fVar7 = unaff_EBX;
              iVar6 = *(int *)((int)fVar12 + 0x28);
              if (iVar6 != 0) {
                FUN_3001b650();
                (*DAT_300a4710)(6);
                iVar8 = 0;
                iVar11 = iVar6 + 8;
                piVar5 = piVar16;
                fVar10 = fVar17;
                if (0 < *(int *)(iVar6 + 4)) {
                  do {
                    (*DAT_300a42f4)(*(float *)(iVar11 + 0x14) - fVar15,
                                    *(float *)(iVar11 + 0x18) - fVar17);
                    (*DAT_300a4520)(iVar11);
                    iVar8 = iVar8 + 1;
                    iVar11 = iVar11 + 0x1c;
                    piVar5 = piVar16;
                    fVar10 = fVar17;
                  } while (iVar8 < *(int *)(iVar6 + 4));
                }
                (*DAT_300a45f4)();
                piVar16 = piVar5;
                fVar17 = fVar10;
              }
              fVar12 = *(float *)((int)fVar12 + 0x30);
              unaff_EBX = fVar7;
            } while (fVar12 != fVar10);
          }
          puVar13 = &DAT_3009042c;
          for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
          uVar3 = FUN_300162f0(piVar5,(int)fVar7,(int *)((int)fVar10 + 0x20),
                               (int *)((int)fVar10 + 0x24));
          if ((char)uVar3 == '\0') {
            (*DAT_3008fdc8)(0,s_Consecutive_calls_to_LM_AllocBlo_3002f98c,piVar5,fVar7);
          }
          iVar6 = *(int *)((int)fVar10 + 0x24) * 0x80 + *(int *)((int)fVar10 + 0x20);
        }
        else {
          iVar6 = *(int *)((int)fVar10 + 0x24) * 0x80 + *(int *)((int)fVar10 + 0x20);
        }
        FUN_30009550((int)fVar10,&DAT_3009062c + iVar6 * 4,0x200);
        fVar10 = *(float *)((int)fVar10 + 0x30);
      } while (fVar10 != 0.0);
      if (fVar12 != 0.0) {
        FUN_30016200('\x01');
      }
    }
    for (; fVar12 != 0.0; fVar12 = *(float *)((int)fVar12 + 0x30)) {
      iVar6 = *(int *)((int)fVar12 + 0x28);
      if (iVar6 != 0) {
        fVar15 = (float)(*(int *)((int)fVar12 + 0x1c) - *(int *)((int)fVar12 + 0x24)) * 0.0078125;
        FUN_3001b650();
        (*DAT_300a4710)(6);
        iVar8 = 0;
        iVar11 = iVar6 + 8;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            (*DAT_300a42f4)(*(float *)(iVar11 + 0x14) - fVar15,*(float *)(iVar11 + 0x18) - unaff_EBX
                           );
            (*DAT_300a4520)(iVar11);
            iVar8 = iVar8 + 1;
            iVar11 = iVar11 + 0x1c;
          } while (iVar8 < *(int *)(iVar6 + 4));
        }
        (*DAT_300a45f4)();
      }
    }
  }
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a43c8)(1);
  return;
}

