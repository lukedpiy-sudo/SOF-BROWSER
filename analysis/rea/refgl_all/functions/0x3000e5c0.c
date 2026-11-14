// rea decompile_all
// name: FUN_3000e5c0
// address: 0x3000e5c0
// body: available
// range: 0x3000e5c0-0x3000eae0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000e5c0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  float10 fVar5;
  longlong lVar6;
  float fStack00000004;
  int iStack00000008;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_30020910();
  if ((DAT_3008fd3c & 4) == 0) {
    DAT_30090000 = 0.0;
    if (DAT_3002ed10 == -1) {
      DAT_30090000 = 0.0;
      return;
    }
    (*DAT_300a4678)();
    DAT_3002ed10 = 0xffffffff;
    return;
  }
  if (DAT_3002ed10 != -1) {
    uStack_18 = 0x3000e61a;
    iVar2 = (*DAT_3008fe2c)();
    if (((1 < iVar2) && (2.0 <= DAT_30090000)) && (DAT_30090004 == '\0')) {
      FUN_300062f0(DAT_3002ed10);
      goto LAB_3000e859;
    }
  }
  uStack_18 = 0x3000e65b;
  iVar2 = (*DAT_3008fe2c)();
  DAT_30090004 = iVar2 == 0;
  puVar4 = (undefined4 *)&stack0x00000010;
  for (iVar2 = 0xc00; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  pbVar3 = &stack0x00000011;
  iStack00000008 = 0x40;
  do {
    iVar2 = 0x40;
    do {
      if (DAT_30090004 == '\0') {
        uStack_18 = 0x3000e6ba;
        bVar1 = (*DAT_3008fe2c)();
        pbVar3[-1] = 0x28;
        pbVar3[1] = 0x28;
      }
      else {
        uStack_18 = 0x3000e6a0;
        bVar1 = (*DAT_3008fe2c)();
        pbVar3[-1] = 0;
        pbVar3[1] = 0;
      }
      *pbVar3 = bVar1;
      if (DAT_30090000 < 2.0) {
        if (DAT_30090000 <= 1.5) {
          fStack00000004 = DAT_30090000;
        }
        else {
          fStack00000004 = 3.0 - DAT_30090000;
        }
        if ((float)*pbVar3 * fStack00000004 <= 255.0) {
          lVar6 = __ftol();
          bVar1 = (byte)lVar6;
        }
        else {
          uStack_18 = 0x3000e73e;
          bVar1 = (*DAT_3008fe2c)();
        }
        *pbVar3 = bVar1;
        lVar6 = __ftol();
        pbVar3[-1] = (byte)lVar6;
        lVar6 = __ftol();
        pbVar3[1] = (byte)lVar6;
      }
      pbVar3 = pbVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iStack00000008 = iStack00000008 + -1;
  } while (iStack00000008 != 0);
  if (DAT_30090000 < 2.0) {
    DAT_30090000 = _DAT_3008fd34 + DAT_30090000;
  }
  if (DAT_3002ed10 == -1) {
    uStack_18 = 0x3000e7cf;
    FUN_300118b0(1,0x3002ed10);
  }
  FUN_300062f0(DAT_3002ed10);
  uStack_18 = 0xde1;
  uStack_1c = 0x3000e7f6;
  (*DAT_300a4428)();
  uStack_1c = 0x2901;
  uStack_20 = 0x2803;
  (*DAT_300a4428)(0xde1);
  (*DAT_300a4428)(0xde1,0x2800,0x2600);
  (*DAT_300a4428)(0xde1,0x2801,0x2600);
  (*DAT_300a43f4)(0xde1,0,3,0x40,0x40,0,0x1907,0x1401,&uStack_20);
LAB_3000e859:
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
  if (((byte)DAT_300a4588 & 4) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
  if (((byte)DAT_300a4588 & 8) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  FUN_300062a0(0x2100);
  DAT_300a4610 = 0x306;
  DAT_300a43fc = 0x300;
  if ((DAT_300a4388 == 0x306) && (DAT_300a45d8 == 0x300)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a4410)();
  uStack_18 = 0x3f800000;
  uStack_1c = 0xc2b40000;
  uStack_20 = 0x3000e91d;
  (*DAT_300a43b8)();
  uStack_20 = 0x3f800000;
  (*DAT_300a43b8)(0x42b40000,0,0);
  uVar9 = 0xff;
  (*DAT_300a4718)(0xff,0xff,0xff,0xff);
  (*DAT_3008fe28)(0xc1800000,0xc1000000);
  (*DAT_3008fe28)(0xc1800000,0xc1000000);
  fVar5 = (float10)(*DAT_3008fe28)(0x41000000,0x41800000);
  fVar10 = (float)fVar5;
  (*DAT_3008fe28)(0x41000000,0x41800000);
  FUN_3001b650();
  (*DAT_300a4710)(7);
  uVar8 = uVar9;
  (*DAT_300a42f4)(fVar10,uVar9);
  uVar7 = 0x42c80000;
  (*DAT_300a47c4)(0x417e6666,0x42c80000,0x42c80000);
  (*DAT_300a42f4)(uVar8,uVar9);
  (*DAT_300a47c4)(0x417e6666,0xc2c80000,0x42c80000);
  (*DAT_300a42f4)(uVar8,uVar7);
  (*DAT_300a47c4)(0x417e6666,0xc2c80000,0xc2c80000);
  (*DAT_300a42f4)(fVar10,uVar7);
  (*DAT_300a47c4)(0x417e6666,0x42c80000,0xc2c80000);
  (*DAT_300a45f4)();
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 4;
  if (((byte)DAT_300a4588 & 4) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 8;
  if (((byte)DAT_300a4588 & 8) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  return;
}

