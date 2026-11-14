// rea decompile_all
// name: FUN_30017830
// address: 0x30017830
// body: available
// range: 0x30017830-0x3001795f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30017830(void *this,void *param_1)

{
  float fVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar6 = (float10)(*DAT_3008fe28)(0x44960000,0x44e10000);
  do {
    iVar5 = 0;
    do {
      fVar7 = (float10)(*DAT_3008fe28)(0xc67ffc00,0x467ffc00);
      *(float *)((int)this + iVar5 * 4) = (float)fVar7;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar5 = FUN_30017ae0(param_1,this,this);
  } while (iVar5 == 0);
  fVar7 = (float10)(*DAT_3008fe28)(0x453b8000,0x459c4000);
  *(float *)((int)this + 8) = (float)fVar7;
  *(undefined4 *)((int)this + 0x3c) = 0xc3c80000;
  fVar7 = (float10)(*DAT_3008fe28)(0xc2200000,0x42200000);
  *(float *)((int)this + 0x40) = (float)fVar7;
  fVar7 = (float10)(*DAT_3008fe28)(0xbf800000,0x3f800000);
  fStack_c = (float)fVar7;
  fVar7 = (float10)(*DAT_3008fe28)(0xbf800000,0x3f800000);
  fStack_8 = (float)fVar7;
  FUN_3001d280(&fStack_c);
  pfVar2 = (float *)((int)this + 0x14);
  piVar3 = &DAT_3002faa8;
  do {
    piVar4 = piVar3 + 2;
    fVar1 = (float)piVar3[-1] * (float)(fVar6 + fVar6);
    pfVar2[-2] = fStack_c * fVar1 + *(float *)this;
    pfVar2[-1] = fStack_8 * fVar1 + *(float *)((int)this + 4);
    *pfVar2 = fStack_4 * fVar1 + *(float *)((int)this + 8);
    fVar1 = (float)*piVar3 * (float)(fVar6 + fVar6);
    pfVar2[-2] = fStack_8 * fVar1 + pfVar2[-2];
    pfVar2[-1] = fVar1 * -fStack_c + pfVar2[-1];
    *pfVar2 = fVar1 * 0.0 + *pfVar2;
    pfVar2 = pfVar2 + 3;
    piVar3 = piVar4;
  } while ((int)piVar4 < 0x3002fac8);
  return;
}

