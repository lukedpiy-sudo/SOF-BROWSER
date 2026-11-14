// rea decompile_all
// name: FUN_30001b00
// address: 0x30001b00
// body: available
// range: 0x30001b00-0x30001cce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_30001b00(undefined4 param_1,float param_2,undefined1 *param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_ECX;
  float fVar3;
  float unaff_EDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined3 uVar4;
  
  if (((param_5 & 0xff) != 0x20) && (param_2 < -8.0 == (param_2 == -8.0))) {
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
    fVar1 = (float)((int)(param_5 & 0xff) >> 4) * 0.0625;
    if (((byte)DAT_300a4588 & 2) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 1;
    if (((byte)DAT_300a4588 & 1) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    fVar10 = 1.04046e-41;
    (*DAT_300a446c)(0x1d01);
    FUN_300062a0(0x2100);
    uVar4 = (undefined3)((uint)extraout_ECX >> 8);
    fVar3 = (float)CONCAT31(uVar4,param_3[3]);
    (*DAT_300a4718)(*param_3,CONCAT31(uVar4,param_3[1]),param_3[2],fVar3);
    FUN_30006400(DAT_30034dcc);
    FUN_3001b650();
    fVar8 = 9.80909e-45;
    (*DAT_300a4710)(7);
    fVar9 = fVar3;
    (*DAT_300a42f4)(fVar1,fVar3);
    fVar6 = fVar9;
    fVar7 = fVar10;
    (*DAT_300a4670)(fVar9,fVar10);
    fVar2 = unaff_EDI + 0.0625;
    fVar5 = fVar2;
    (*DAT_300a42f4)(fVar2,fVar3);
    (*DAT_300a4670)(fVar8 + 8.0,fVar10);
    (*DAT_300a42f4)(fVar2,fVar6 + 0.0625);
    (*DAT_300a4670)(fVar8 + 8.0,fVar7 + 8.0);
    (*DAT_300a42f4)(fVar1,fVar5);
    (*DAT_300a4670)(fVar9,fVar7 + 8.0);
    (*DAT_300a45f4)();
    DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
    if (((byte)DAT_300a4588 & 1) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a446c)(0x1d00);
    FUN_300062a0(0x1e01);
  }
  return;
}

