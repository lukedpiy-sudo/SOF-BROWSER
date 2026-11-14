// rea decompile_all
// name: FUN_3000f010
// address: 0x3000f010
// body: available
// range: 0x3000f010-0x3000f3c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000f010(void)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_3002079d((double)(((longlong)(int)DAT_3008ffc4 * (longlong)DAT_3008fcec & 0xffffffffU) /
                       (ulonglong)DAT_3008ffc4));
  lVar4 = __ftol();
  FUN_3002093f((double)(((DAT_3008fcec + DAT_3008fcf4) * DAT_3008ffc4) / DAT_3008ffc4));
  lVar5 = __ftol();
  FUN_3002079d((double)(DAT_3008ffc8 - (DAT_3008fcf0 * DAT_3008ffc8) / DAT_3008ffc8));
  lVar6 = __ftol();
  FUN_3002093f((double)(DAT_3008ffc8 - ((DAT_3008fcf8 + DAT_3008fcf0) * DAT_3008ffc8) / DAT_3008ffc8
                       ));
  lVar7 = __ftol();
  fVar2 = (float)((int)lVar6 - (int)lVar7);
  (*DAT_300a4418)((int)lVar4,(int)lVar7,(int)lVar5 - (int)lVar4,fVar2);
  (*DAT_300a421c)(0x1701);
  (*DAT_300a4410)();
  fVar1 = *(float *)(DAT_3008fc80 + 0x18);
  if (_DAT_3008fd00 < 75.0) {
    if (5.0 <= _DAT_3008fd00) {
      fVar1 = ((75.0 - _DAT_3008fd00) * 0.014285714 * 2.9 + 1.0) * fVar1;
    }
    else {
      fVar1 = fVar1 * 3.9;
    }
  }
  fVar3 = (float10)fptan((float10)_DAT_3008fd00 * (float10)0.008726646259971648);
  fVar3 = fVar3 * (float10)fVar1;
  (*DAT_300a4760)((double)((float)-fVar3 * fVar2),(double)((float)fVar3 * fVar2),(double)-fVar3,
                  (double)fVar3,(double)fVar1,(double)*(float *)(DAT_3008ffa8 + 0x18));
  (*DAT_300a4414)(0x404);
  (*DAT_300a421c)(0x1700);
  (*DAT_300a4410)();
  (*DAT_300a43b8)(0xc2b40000,0x3f800000,0,0);
  (*DAT_300a43b8)(0x42b40000,0,0,0x3f800000);
  (*DAT_300a43b8)(-_DAT_3008fd18,0x3f800000,0,0);
  (*DAT_300a43b8)(-_DAT_3008fd10,0,0x3f800000,0);
  (*DAT_300a43b8)(-_DAT_3008fd14,0,0,0x3f800000);
  (*DAT_300a4698)(-DAT_3008fd04,-DAT_3008fd08,-DAT_3008fd0c);
  (*DAT_300a42ec)(0xba6,&DAT_3008fee8);
  (*DAT_300a4350)(&DAT_3008fee8);
  if (*(float *)(DAT_3008fcb8 + 0x18) == 0.0) {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
    if (((byte)DAT_300a4588 & 2) != 0) goto LAB_3000f314;
  }
  else {
    DAT_300a46e0 = DAT_300a46e0 | 2;
    if (((byte)DAT_300a4588 & 2) == 0) goto LAB_3000f314;
  }
  *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
LAB_3000f314:
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  if (*(float *)(DAT_3008ff2c + 0x18) == 0.0) {
    DAT_300a46e0 = DAT_300a46e0 | 8;
    if (((byte)DAT_300a4588 & 8) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
      return;
    }
  }
  else {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
    if (((byte)DAT_300a4588 & 8) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a4258)(0,0,0,0);
    (*DAT_300a45d4)(0x4000);
    (*DAT_300a4258)(0x3f800000,0,0x3f000000,0x3f000000);
  }
  return;
}

