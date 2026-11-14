// rea decompile_all
// name: FUN_30002a40
// address: 0x30002a40
// body: available
// range: 0x30002a40-0x30002bfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_30002a40(float param_1,float param_2,float param_3,undefined1 *param_4,float param_5)

{
  undefined4 extraout_ECX;
  float fVar1;
  float fVar2;
  undefined4 extraout_EDX;
  float fVar4;
  float fVar5;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  undefined3 uVar3;
  undefined3 uVar6;
  
  fVar10 = 1.04032e-41;
  fVar7 = (float10)param_5 * (float10)0.5 * (float10)param_5 * (float10)0.5;
  fVar8 = (float10)fpatan((float10)(float)param_4 - (float10)param_2,
                          (float10)param_3 - (float10)param_1);
  fcos(fVar8 - (float10)3.9269908169872414);
  fVar8 = (float10)fsin(fVar8 - (float10)3.9269908169872414);
  (*DAT_300a446c)(0x1d00,(float)(fVar8 * SQRT(fVar7 + fVar7)));
  FUN_300062a0(0x2100);
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
  if (((byte)DAT_300a4588 & 2) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a44ec)(0xde1);
  uVar3 = (undefined3)((uint)extraout_ECX >> 8);
  fVar1 = (float)CONCAT31(uVar3,param_4[3]);
  uVar6 = (undefined3)((uint)extraout_EDX >> 8);
  fVar4 = (float)CONCAT31(uVar6,param_4[2]);
  fVar2 = (float)CONCAT31(uVar3,param_4[1]);
  fVar5 = (float)CONCAT31(uVar6,*param_4);
  (*DAT_300a4718)(fVar5,fVar2,fVar4,fVar1);
  FUN_3001b650();
  fVar9 = 9.80909e-45;
  (*DAT_300a4710)(7);
  fVar10 = fVar10 + fVar2;
  (*DAT_300a4670)(fVar10,fVar9 + fVar4);
  fVar4 = fVar4 - fVar1;
  fVar10 = fVar10 + fVar2;
  (*DAT_300a4670)(fVar10,fVar4);
  fVar2 = fVar9 - fVar2;
  (*DAT_300a4670)(fVar2,fVar5 - fVar10);
  (*DAT_300a4670)(fVar10 - fVar2,fVar9 + fVar4);
  (*DAT_300a45f4)();
  (*DAT_300a45fc)(0xde1);
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
  if (((byte)DAT_300a4588 & 1) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  return;
}

