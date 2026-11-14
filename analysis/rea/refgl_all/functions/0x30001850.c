// rea decompile_all
// name: FUN_30001850
// address: 0x30001850
// body: available
// range: 0x30001850-0x300019c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30001850(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_ESI;
  float unaff_EDI;
  float fVar7;
  float fVar8;
  undefined3 uVar6;
  
  if (((param_3 & 0xff) != 0x20) && (-8 < param_2)) {
    uVar4 = DAT_300a46e0 & 0xfffffffd;
    fVar1 = (float)((int)(param_3 & 0xff) >> 4) * 0.0625;
    DAT_300a46e0 = uVar4;
    if (((byte)DAT_300a4588 & 2) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    uVar6 = (undefined3)(uVar4 >> 8);
    uVar5 = CONCAT31(uVar6,param_4[3]);
    iVar3 = CONCAT31((int3)((uint)param_4 >> 8),*param_4);
    (*DAT_300a4718)(iVar3,CONCAT31(uVar6,param_4[1]),param_4[2],uVar5);
    FUN_300062a0(0x2100);
    FUN_30006400(DAT_30034dcc);
    FUN_3001b650();
    (*DAT_300a4710)(7);
    fVar8 = fVar1;
    (*DAT_300a42f4)(fVar1,uVar5);
    fVar2 = (float)(int)unaff_EDI;
    fVar7 = fVar2;
    (*DAT_300a4670)(fVar2,(float)unaff_ESI);
    (*DAT_300a42f4)(unaff_EDI + 0.0625,uVar5);
    (*DAT_300a4670)((float)(iVar3 + 8),(float)unaff_ESI);
    (*DAT_300a42f4)(unaff_EDI + 0.0625,fVar7 + 0.0625);
    (*DAT_300a4670)((float)(iVar3 + 8),(float)((int)fVar8 + 8));
    (*DAT_300a42f4)(fVar1,uVar5);
    (*DAT_300a4670)(fVar2,(float)((int)fVar8 + 8));
                    /* WARNING: Could not recover jumptable at 0x300019be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_300a45f4)();
    return;
  }
  return;
}

