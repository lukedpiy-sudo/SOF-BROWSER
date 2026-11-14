// rea decompile_all
// name: FUN_30013be0
// address: 0x30013be0
// body: available
// range: 0x30013be0-0x3001400b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30013be0(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  longlong lVar10;
  float local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  
  iVar6 = 0;
  iVar7 = 0;
  pfVar9 = DAT_3008fd54;
  if (0 < DAT_3008fd50) {
    do {
      FUN_30008800(pfVar9,1 << ((byte)iVar7 & 0x1f),
                   (int *)(*(int *)(DAT_3008fc78 + 0xa0) + *(int *)(DAT_3008fc78 + 0x9c) * 0x3c));
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 7;
    } while (iVar7 < DAT_3008fd50);
  }
  local_18 = (*(float *)(DAT_3008fc78 + 0x48) + *(float *)(DAT_3008fc78 + 0x54)) * 0.5 +
             *(float *)(DAT_3008fed8 + 0x28);
  local_14 = (*(float *)(DAT_3008fc78 + 0x4c) + *(float *)(DAT_3008fc78 + 0x58)) * 0.5 +
             *(float *)(DAT_3008fed8 + 0x2c);
  local_10 = (*(float *)(DAT_3008fc78 + 0x50) + *(float *)(DAT_3008fc78 + 0x5c)) * 0.5 +
             *(float *)(DAT_3008fed8 + 0x30);
  piVar3 = FUN_3000a400(&local_18,DAT_3008fc6c);
  if (piVar3 == (int *)0x0) {
    local_20[0] = 0.0;
  }
  else {
    local_20[0] = (float)piVar3[0xb];
  }
  fVar2 = local_20[0];
  (*DAT_300a43c8)(1);
  iVar7 = 0;
  fVar8 = (float)(*(int *)(DAT_3008fc78 + 0xb8) + *(int *)(DAT_3008fc78 + 100) * 0x6c);
  if (0 < *(int *)(DAT_3008fc78 + 0x68)) {
    do {
      if ((*(uint *)(*(int *)((int)fVar8 + 0x34) + 0x20) & 0x800) == 0) {
        pfVar9 = *(float **)((int)fVar8 + 4);
        fVar1 = (DAT_30090010 * *pfVar9 + DAT_30090014 * pfVar9[1] + DAT_30090018 * pfVar9[2]) -
                pfVar9[3];
        if (*(char *)((int)fVar8 + 8) == '\0') {
LAB_30013d30:
          if (fVar1 <= 0.01) goto LAB_30013dad;
        }
        else if (-0.01 <= fVar1) {
          if (*(char *)((int)fVar8 + 8) != '\0') goto LAB_30013dad;
          goto LAB_30013d30;
        }
        *(float *)((int)fVar8 + 0x38) = fVar2;
        if ((*(byte *)(*(int *)((int)fVar8 + 0x34) + 0x20) & 8) == 0) {
          (*DAT_300a2728)(fVar8);
        }
        else {
          FUN_30006170('\0');
          FUN_30014120(fVar8);
        }
        if ((((fVar2 != 0.0) && ((*(uint *)(*(int *)((int)fVar8 + 0x34) + 0x20) & 0x10000) == 0)) &&
            (*(int *)(DAT_3008fb98 + 0x18) == 0x3f800000)) &&
           (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
          *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
        }
      }
LAB_30013dad:
      iVar7 = iVar7 + 1;
      fVar8 = (float)((int)fVar8 + 0x6c);
    } while (iVar7 < *(int *)(DAT_3008fc78 + 0x68));
  }
  (*DAT_300a43c8)(0);
  fVar8 = (float)(*(int *)(DAT_3008fc78 + 0xb8) + *(int *)(DAT_3008fc78 + 100) * 0x6c);
  FUN_30006170('\0');
  if (0 < *(int *)(DAT_3008fc78 + 0x68)) {
    do {
      if ((*(uint *)(*(int *)((int)fVar8 + 0x34) + 0x20) & 0x800) != 0) {
        pfVar9 = *(float **)((int)fVar8 + 4);
        fVar2 = (DAT_30090010 * *pfVar9 + DAT_30090014 * pfVar9[1] + DAT_30090018 * pfVar9[2]) -
                pfVar9[3];
        if (*(char *)((int)fVar8 + 8) == '\0') {
LAB_30013e4b:
          if (fVar2 <= 0.01) goto LAB_30013fd1;
        }
        else if (-0.01 <= fVar2) {
          if (*(char *)((int)fVar8 + 8) != '\0') goto LAB_30013fd1;
          goto LAB_30013e4b;
        }
        *(int *)((int)fVar8 + 0x38) = unaff_EBP;
        if ((unaff_EBP == 0) || (uVar4 = FUN_30012710((int)fVar8), (char)uVar4 == '\0')) {
          FUN_30006170('\0');
          DAT_3008fda0 = DAT_3008fda0 + 1;
          iVar7 = *(int *)((int)fVar8 + 0x34);
          if (*(int *)(iVar7 + 0x28) != 0) {
            if (((*(uint *)(iVar7 + 0x20) & 0x1000) == 0) ||
               (*(char *)(*(int *)(iVar7 + 0x2c) + 0x55) == '\0')) {
              iVar5 = *(int *)(DAT_3008fed8 + 0x34);
            }
            else {
              lVar10 = __ftol();
              iVar5 = (int)lVar10;
            }
            for (iVar5 = iVar5 % *(int *)(iVar7 + 0x24); iVar5 != 0; iVar5 = iVar5 + -1) {
              iVar7 = *(int *)(iVar7 + 0x28);
            }
          }
          FUN_30006400(*(int *)(iVar7 + 0x2c));
          uVar4 = *(uint *)(*(int *)((int)fVar8 + 0x34) + 0x20);
          if ((uVar4 & 8) == 0) {
            if ((uVar4 & 0x800) != 0) {
              FUN_300062a0(0x2100);
              FUN_30008ff0(local_20,&local_14,0xff);
              if (*(float *)(DAT_3008fc98 + 0x18) == 0.0) {
                (*DAT_300a4724)(&local_14);
              }
              else {
                (*DAT_300a4718)(*(undefined1 *)((int)fVar8 + 0x28),*(int *)((int)fVar8 + 0x28) >> 8,
                                fVar8,0x60);
              }
              FUN_30014010(fVar8);
            }
          }
          else {
            FUN_300062a0(0x2100);
            (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
            FUN_30018640((int)fVar8);
          }
          if ((((unaff_EBP != 0) && ((*(uint *)(*(int *)((int)fVar8 + 0x34) + 0x20) & 0x10000) == 0)
               ) && (*(int *)(DAT_3008fb98 + 0x18) == 0x3f800000)) &&
             (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
            *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
          }
        }
      }
LAB_30013fd1:
      iVar6 = iVar6 + 1;
      fVar8 = (float)((int)fVar8 + 0x6c);
    } while (iVar6 < *(int *)(DAT_3008fc78 + 0x68));
  }
  (*DAT_300a43c8)(1);
  FUN_30014480();
  FUN_30012d60(0,(float *)(DAT_3008fed8 + 0x28));
  return;
}

